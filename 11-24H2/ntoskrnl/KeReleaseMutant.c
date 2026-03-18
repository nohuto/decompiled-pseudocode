/*
 * XREFs of KeReleaseMutant @ 0x140337970
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x140430E80 (EtwpEnableMetaProviderGuid.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     WmipBuildTraceDeviceList @ 0x14048A824 (WmipBuildTraceDeviceList.c)
 *     DifKeReleaseMutantWrapper @ 0x14062F7C0 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x14062F950 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
