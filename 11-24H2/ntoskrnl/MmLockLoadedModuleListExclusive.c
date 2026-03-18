/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14042CA30
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14042C87C (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14042C8CC (RtlInsertInvertedFunctionTable.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x14066C0B4 (MiRemoveLoaderEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(v1, 15LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  return CurrentIrql;
}
