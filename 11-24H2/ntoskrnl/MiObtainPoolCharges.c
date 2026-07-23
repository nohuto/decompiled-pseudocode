/*
 * XREFs of MiObtainPoolCharges @ 0x14044DFCC
 * Callers:
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x14034B858 (MiGetLargePoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v6; // ett
  volatile signed __int64 *v7; // rax

  if ( !qword_140E3D9D8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a1 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v6 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a1,
                                  CachedResidentAvailable);
      if ( v6 == CachedResidentAvailable )
        goto LABEL_7;
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)&MiSystemPartition, a1, 0LL) )
    {
      MiReturnCommit((__int64)&MiSystemPartition, a1, 1);
      return 0LL;
    }
LABEL_7:
    v7 = &qword_140E37708;
    if ( a2 )
      v7 = &qword_140E37710;
    _InterlockedAdd64(v7, a1);
    return 1LL;
  }
  return 0LL;
}
