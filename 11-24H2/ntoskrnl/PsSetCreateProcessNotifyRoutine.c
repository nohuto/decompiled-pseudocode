/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x14077A210
 * Callers:
 *     ViRlrsUnload @ 0x140615580 (ViRlrsUnload.c)
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x140638C40 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140B96468 (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140B967F4 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
