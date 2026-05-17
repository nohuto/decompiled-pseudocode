/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180006734
 * Callers:
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlxRemoveInvertedFunctionTable @ 0x180006770 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
