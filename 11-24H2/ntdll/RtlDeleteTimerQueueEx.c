/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180068CA0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x18015CA20 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpTimerQueueRundown @ 0x180068E28 (RtlpTpTimerQueueRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x18006AD40 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x18006B880 (TpReleaseTimer.c)
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2)
{
  volatile signed __int32 **v4; // rdx
  int v5; // ebx
  unsigned __int64 v6; // r8
  volatile signed __int32 *i; // rsi
  int v9; // [rsp+20h] [rbp-58h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0;
  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = RtlpTpRevertCapture(&v11, 0LL);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), v4, v6);
      for ( i = *(volatile signed __int32 **)(a1 + 24); i != (volatile signed __int32 *)(a1 + 24); i = v10 )
      {
        v10 = *(volatile signed __int32 **)i;
        _InterlockedOr(i + 12, 1u);
        v9 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8));
        TpReleaseTimer(*((_QWORD *)i + 8));
        _m_prefetchw((const void *)(i + 12));
        if ( (_InterlockedAnd(i + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v9 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v5 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v11);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
