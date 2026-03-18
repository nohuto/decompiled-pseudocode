/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14027C0CC
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14027DCB0 (RtlpxLookupFunctionTable.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     RtlPcToFileName @ 0x1403FFB00 (RtlPcToFileName.c)
 *     MiDriverPdeOkToDelete @ 0x1406693D8 (MiDriverPdeOkToDelete.c)
 *     MmGetImageRetpolineCodePage @ 0x14067C980 (MmGetImageRetpolineCodePage.c)
 *     MmMarkImageForHiberPhase @ 0x140B6312C (MmMarkImageForHiberPhase.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
