/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x14076A560
 * Callers:
 *     ViRlrsUnload @ 0x1406095C0 (ViRlrsUnload.c)
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x14062CC80 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140B86488 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140B86814 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
