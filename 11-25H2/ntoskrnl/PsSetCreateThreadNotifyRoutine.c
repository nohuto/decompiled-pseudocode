/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x14076A5D0
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x14062CDF0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A668 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
