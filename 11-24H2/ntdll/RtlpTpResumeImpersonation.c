/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18008AD58
 * Callers:
 *     RtlUpdateTimer @ 0x180086A00 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     RtlSetIoCompletionCallback @ 0x1800B6B90 (RtlSetIoCompletionCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180101D30 (RtlCreateTimerQueue.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    return NtClose(ThreadInformation);
  }
  return result;
}
