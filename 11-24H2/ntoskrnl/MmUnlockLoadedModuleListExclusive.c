/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x14042CA74
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x14042C688 (MiUpdateDriverLoadInProgress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14042C87C (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14042C8CC (RtlInsertInvertedFunctionTable.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x14066C0B4 (MiRemoveLoaderEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
