/*
 * XREFs of RtlDeleteTimer @ 0x180087440
 * Callers:
 *     RtlCancelTimer @ 0x18015ADD0 (RtlCancelTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087620 (TpTimerOutstandingCallbackCount.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     RtlpTpTimerRundown @ 0x18008941C (RtlpTpTimerRundown.c)
 *     RtlpTpResumeImpersonation @ 0x18008AD58 (RtlpTpResumeImpersonation.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801604D0 (NtOpenThreadToken.c)
 */

NTSTATUS __cdecl RtlDeleteTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel, HANDLE Event)
{
  int v5; // edi
  _QWORD *v6; // rcx
  HANDLE *v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+28h] [rbp-20h] BYREF
  _QWORD ThreadInformation[3]; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerToCancel )
    return -1073741584;
  ThreadInformation[0] = 0LL;
  Handle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_9;
  v5 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 4u, 1u, &Handle);
  if ( v5 >= 0 )
  {
    ThreadInformation[0] = 0LL;
    v5 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
    if ( v5 < 0 )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v5 >= 0 )
  {
LABEL_9:
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    v6 = *(_QWORD **)TimerToCancel;
    v7 = (HANDLE *)*((_QWORD *)TimerToCancel + 1);
    if ( *(HANDLE *)(*(_QWORD *)TimerToCancel + 8LL) != TimerToCancel || *v7 != TimerToCancel )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    _InterlockedOr((volatile signed __int32 *)TimerToCancel + 12, 1u);
    TpSetTimerEx(*((PTP_TIMER *)TimerToCancel + 8), 0LL, 0, 0);
    if ( Event == (HANDLE)-1LL )
    {
      TpWaitForTimer(*((PTP_TIMER *)TimerToCancel + 8), 1u);
    }
    else if ( Event )
    {
      *((_QWORD *)TimerToCancel + 9) = Event;
    }
    v9 = TpTimerOutstandingCallbackCount(*((_QWORD *)TimerToCancel + 8));
    TpReleaseTimer(*((PTP_TIMER *)TimerToCancel + 8));
    _m_prefetchw((char *)TimerToCancel + 48);
    if ( (_InterlockedAnd((volatile signed __int32 *)TimerToCancel + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(TimerToCancel);
      v9 = 0;
    }
    v5 = v9 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(Handle);
  return v5;
}
