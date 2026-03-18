/*
 * XREFs of MiObtainFaultCharges @ 0x1402F6A70
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140239E84 (MiPickClusterForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiPrefetchPagesViable @ 0x1404543E0 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(ULONG *a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v8; // ett
  unsigned __int64 v9; // rdi
  __int64 v11; // r8

  do
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v8 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - a2,
                                    CachedResidentAvailable);
        if ( v8 == CachedResidentAvailable )
          goto LABEL_6;
      }
    }
    v11 = 1LL;
    if ( a2 != 1 )
      v11 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v11) )
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
    MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
  }
  if ( (a3 & 1) == 0 )
    return a2;
  v9 = a2;
  while ( !(unsigned int)MiChargeCommit((__int64)a1, v9, 1) )
  {
    v9 >>= 1;
    if ( !v9 )
    {
      if ( (a3 & 2) != 0 )
      {
        v9 = 1LL;
        MiChargeCommit((__int64)a1, 1uLL, 4);
      }
      break;
    }
  }
  if ( v9 != a2 )
    MiReturnFaultCharges(a1, a2 - v9, 0LL);
  return v9;
}
