/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14025D41C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     RtlPcToFileName @ 0x14036CC30 (RtlPcToFileName.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     MiDriverPdeOkToDelete @ 0x14065D8B4 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x1406711C0 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B52FFC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(v1);
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  return CurrentIrql;
}
