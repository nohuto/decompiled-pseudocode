/*
 * XREFs of RtlDeleteTimer @ 0x18006AB60
 * Callers:
 *     RtlCancelTimer @ 0x18015CA10 (RtlCancelTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpTimerOutstandingCallbackCount @ 0x18006AD40 (TpTimerOutstandingCallbackCount.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18006B880 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v5; // edi
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 **v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  Handle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v11[0] = 0LL;
  Handle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    goto LABEL_9;
  LOBYTE(a3) = 1;
  v5 = NtOpenThreadToken(-2LL, 4LL, a3, &Handle);
  if ( v5 >= 0 )
  {
    v11[0] = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, v11);
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
    RtlAcquireSRWLockExclusive(
      (volatile signed __int32 *)(*(_QWORD *)(a2 + 56) + 8LL),
      (volatile signed __int32 **)a2,
      a3);
    v6 = *(volatile signed __int32 **)a2;
    v7 = *(volatile signed __int32 ***)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != (volatile signed __int32 *)a2 )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a2 + 56) + 8LL));
    _InterlockedOr((volatile signed __int32 *)(a2 + 48), 1u);
    TpSetTimerEx(*(_QWORD *)(a2 + 64), 0LL, 0LL, 0LL);
    if ( v3 == -1LL )
    {
      TpWaitForTimer(*(_QWORD *)(a2 + 64), 1LL);
    }
    else if ( v3 )
    {
      *(_QWORD *)(a2 + 72) = v3;
    }
    v9 = TpTimerOutstandingCallbackCount(*(_QWORD *)(a2 + 64));
    TpReleaseTimer(*(_QWORD *)(a2 + 64));
    _m_prefetchw((const void *)(a2 + 48));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v9 = 0;
    }
    v5 = v9 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v5;
}
