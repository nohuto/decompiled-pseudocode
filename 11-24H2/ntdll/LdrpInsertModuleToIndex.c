/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800EF830
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180090998 (LdrpInsertModuleToIndexLockHeld.c)
 */

void __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
