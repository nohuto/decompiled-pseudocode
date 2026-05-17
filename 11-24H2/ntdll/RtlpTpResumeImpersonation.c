/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18006E478
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18006A310 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     RtlSetIoCompletionCallback @ 0x1800BEDD0 (RtlSetIoCompletionCallback.c)
 *     RtlCreateTimerQueue @ 0x180106E00 (RtlCreateTimerQueue.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Handle = a1;
    NtSetInformationThread(-2LL, 5LL, &Handle);
    return NtClose(Handle);
  }
  return result;
}
