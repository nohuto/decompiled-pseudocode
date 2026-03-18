/*
 * XREFs of MiObtainPoolCharges @ 0x1403790F8
 * Callers:
 *     MiGetLargePoolPages @ 0x140378D28 (MiGetLargePoolPages.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v6; // ett
  volatile signed __int64 *v7; // rax

  if ( !qword_140E3D658 )
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
    v7 = &qword_140E37388;
    if ( a2 )
      v7 = &qword_140E37390;
    _InterlockedAdd64(v7, a1);
    return 1LL;
  }
  return 0LL;
}
