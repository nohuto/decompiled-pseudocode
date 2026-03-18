/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x14040F898
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x14040F6A0 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040F6F0 (RtlInsertInvertedFunctionTable.c)
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MiRemoveLoaderEntry @ 0x140660574 (MiRemoveLoaderEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
