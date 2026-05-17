/*
 * XREFs of LdrpInsertModuleToIndex @ 0x1800F4C10
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800740B8 (LdrpInsertModuleToIndexLockHeld.c)
 */

__int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, a2, a3);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
