/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14040F854
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x14040F6A0 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040F6F0 (RtlInsertInvertedFunctionTable.c)
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x140660574 (MiRemoveLoaderEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 MmLockLoadedModuleListExclusive()
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  return CurrentIrql;
}
