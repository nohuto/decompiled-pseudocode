/*
 * XREFs of KeAreAllApcsDisabled @ 0x1403B2000
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     EtwpTraceImageUnloadApc @ 0x1403B35C0 (EtwpTraceImageUnloadApc.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 *     CcGetDeviceGuid @ 0x140A941BC (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140B96C28 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
