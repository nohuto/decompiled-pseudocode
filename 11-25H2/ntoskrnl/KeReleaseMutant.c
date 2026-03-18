/*
 * XREFs of KeReleaseMutant @ 0x1402F0930
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1402F2670 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     EtwpEnableMetaProviderGuid @ 0x140434684 (EtwpEnableMetaProviderGuid.c)
 *     WmipBuildTraceDeviceList @ 0x140488394 (WmipBuildTraceDeviceList.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404900C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 *     DifKeReleaseMutantWrapper @ 0x140623800 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x140623990 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
