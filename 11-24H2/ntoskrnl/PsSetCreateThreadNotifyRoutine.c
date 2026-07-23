/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x14077A380
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x140637370 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A418 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
