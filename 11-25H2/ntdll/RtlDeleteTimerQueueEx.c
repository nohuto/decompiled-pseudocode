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

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rsi
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  HANDLE v11; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0;
  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v4 = RtlpTpRevertCapture(&v11, 0);
    if ( v4 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v10 )
      {
        v10 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v9 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64), v5, v6);
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v4 = v9 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v4 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v11);
    return (unsigned int)v4;
  }
  return 3221225711LL;
}
