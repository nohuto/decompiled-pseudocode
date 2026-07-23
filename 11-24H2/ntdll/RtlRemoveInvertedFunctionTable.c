/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180033134
 * Callers:
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlxRemoveInvertedFunctionTable @ 0x180033170 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
