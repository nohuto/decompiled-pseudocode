/*
 * XREFs of MiObtainFaultCharges @ 0x14033EB80
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140215358 (MiPickClusterForMappedFileFault.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiPrefetchPagesViable @ 0x140449280 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(ULONG *a1, unsigned __int64 a2, char a3, struct _KPRCB *a4)
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
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v12, a4) )
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
    MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL, a4);
  }
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)MiChargeCommit((__int64)a1, v10, 1) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        MiChargeCommit((__int64)a1, 1uLL, 4);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
