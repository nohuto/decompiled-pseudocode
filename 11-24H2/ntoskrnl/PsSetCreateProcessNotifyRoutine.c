/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x14077A310
 * Callers:
 *     ViRlrsUnload @ 0x140613B40 (ViRlrsUnload.c)
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x140637200 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140B98468 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140B987F4 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
