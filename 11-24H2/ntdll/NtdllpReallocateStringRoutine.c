/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x18011EBD8
 * Callers:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800035B0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
