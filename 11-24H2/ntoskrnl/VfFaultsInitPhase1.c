/*
 * XREFs of VfFaultsInitPhase1 @ 0x140B96468
 * Callers:
 *     VfRlrsEntry @ 0x140615080 (VfRlrsEntry.c)
 *     VerifierInitSystem @ 0x140C3B1B8 (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A210 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
