/*
 * XREFs of KeAreAllApcsDisabled @ 0x140256FE0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x140371CB0 (IopUnloadSafeCompletion.c)
 *     EtwpTraceImageUnloadApc @ 0x140447E00 (EtwpTraceImageUnloadApc.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 *     CcGetDeviceGuid @ 0x140A936FC (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140B84C48 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
