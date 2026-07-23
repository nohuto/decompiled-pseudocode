/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x1402EE574
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1402EE3CC (RtlInsertInvertedFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1402EF4F4 (RtlRemoveInvertedFunctionTable.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402EFC50 (MiUpdateDriverLoadInProgress.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x14066D284 (MiRemoveLoaderEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = v1;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  __writecr8(v1);
}
