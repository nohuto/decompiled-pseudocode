/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x14077A280
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x140638DB0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A318 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
