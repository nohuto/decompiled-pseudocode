/*
 * XREFs of KeAreAllApcsDisabled @ 0x1403C3440
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     EtwpTraceImageUnloadApc @ 0x1403C4A00 (EtwpTraceImageUnloadApc.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     PsCallImageNotifyRoutines @ 0x1408FFB60 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     CcGetDeviceGuid @ 0x140A9796C (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140B94C28 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
