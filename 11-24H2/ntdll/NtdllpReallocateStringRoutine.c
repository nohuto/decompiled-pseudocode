/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x18011CE08
 * Callers:
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpBuildSystem32FileName @ 0x1800AD5E0 (LdrpBuildSystem32FileName.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800C72D0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
