/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x1800FCFD0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x18015DF80 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x18003B860 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18003F060 (TpReleaseTimer.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FD158 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  char *i; // rsi
  int v9; // [rsp+20h] [rbp-58h]
  char *v10; // [rsp+30h] [rbp-48h]
  HANDLE v11; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0;
  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( TimerQueueHandle )
  {
    v4 = RtlpTpRevertCapture(&v11, 0);
    if ( v4 >= 0 )
    {
      if ( Event )
      {
        if ( Event == (HANDLE)-1LL )
          *((_QWORD *)TimerQueueHandle + 5) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *((_QWORD *)TimerQueueHandle + 2) = Event;
      }
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      for ( i = (char *)*((_QWORD *)TimerQueueHandle + 3); i != (char *)TimerQueueHandle + 24; i = v10 )
      {
        v10 = *(char **)i;
        _InterlockedOr((volatile signed __int32 *)i + 12, 1u);
        v9 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8), v5, v6);
        TpReleaseTimer(*((PTP_TIMER *)i + 8));
        _m_prefetchw(i + 48);
        if ( (_InterlockedAnd((volatile signed __int32 *)i + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown((__int64)i);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      if ( _InterlockedDecrement((volatile signed __int32 *)TimerQueueHandle) )
      {
        if ( Event != (HANDLE)-1LL )
        {
          v4 = v9 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(TimerQueueHandle, 0LL);
      }
      else
      {
        *((_QWORD *)TimerQueueHandle + 5) = 0LL;
        RtlpTpTimerQueueRundown(TimerQueueHandle);
      }
      v4 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v11);
    return v4;
  }
  return -1073741585;
}
