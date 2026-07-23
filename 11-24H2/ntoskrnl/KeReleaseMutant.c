/*
 * XREFs of KeReleaseMutant @ 0x1402DEA20
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     WmipBuildTraceDeviceList @ 0x14048564C (WmipBuildTraceDeviceList.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 *     DifKeReleaseMutantWrapper @ 0x14062DD80 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x14062DF10 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
