/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14023165C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x1403F9FF0 (RtlPcToFileName.c)
 *     MiDriverPdeOkToDelete @ 0x14066A5B0 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x14067DB60 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B651FC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 MmLockLoadedModuleListShared()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1, 15LL);
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  return CurrentIrql;
}
