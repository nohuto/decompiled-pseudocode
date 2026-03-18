/*
 * XREFs of MiObtainPoolCharges @ 0x140458B1C
 * Callers:
 *     MiGetPoolPages @ 0x1402E9F58 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x1402EA218 (MiGetLargePoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v6; // ett
  volatile signed __int64 *v7; // rax

  if ( !qword_140E3D898 )
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
    v7 = &qword_140E375C8;
    if ( a2 )
      v7 = &qword_140E375D0;
    _InterlockedAdd64(v7, a1);
    return 1LL;
  }
  return 0LL;
}
