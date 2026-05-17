/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1801204A8
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpBuildSystem32FileName @ 0x1800D0E20 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
