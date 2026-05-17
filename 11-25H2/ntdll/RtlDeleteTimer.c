/*
 * XREFs of RtlDeleteTimer @ 0x18003B680
 * Callers:
 *     RtlCancelTimer @ 0x18015DF70 (RtlCancelTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x18003B860 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18003F060 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801636A0 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rax
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
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(*(_QWORD *)(a2 + 56) + 8LL));
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a2 + 56) + 8LL));
    _InterlockedOr((volatile signed __int32 *)(a2 + 48), 1u);
    TpSetTimerEx(*(_QWORD *)(a2 + 64), 0LL, 0LL, 0LL);
    if ( v3 == -1 )
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
