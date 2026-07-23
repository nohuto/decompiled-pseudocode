/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800F67F0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18006E938 (LdrpInsertModuleToIndexLockHeld.c)
 */

void __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
