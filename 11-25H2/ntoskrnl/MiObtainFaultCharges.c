/*
 * XREFs of MiObtainFaultCharges @ 0x14022B950
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140229A24 (MiPickClusterForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiPrefetchPagesViable @ 0x140452B14 (MiPrefetchPagesViable.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(ULONG *a1, unsigned __int64 a2, char a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v9; // ett
  unsigned __int64 v10; // rdi
  __int64 v12; // r8

  do
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v9 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - a2,
                                    CachedResidentAvailable);
        if ( v9 == CachedResidentAvailable )
          goto LABEL_6;
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v12) )
      break;
    a2 >>= 1;
  }
  while ( a2 );
LABEL_6:
  if ( !a2 )
  {
    if ( (a3 & 2) == 0 )
      return 0LL;
    a2 = 1LL;
    MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
  }
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)MiChargeCommit(a1, v10, 1LL, a4) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        MiChargeCommit(a1, 1LL, 4LL, a4);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
