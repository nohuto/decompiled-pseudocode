/*
 * XREFs of RtlDeregisterWaitEx @ 0x18008AB90
 * Callers:
 *     RtlDeregisterWait @ 0x180108D20 (RtlDeregisterWait.c)
 * Callees:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18008AD58 (RtlpTpResumeImpersonation.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18008AFEC (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x18008B074 (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801604D0 (NtOpenThreadToken.c)
 */

NTSTATUS __cdecl RtlDeregisterWaitEx(HANDLE WaitHandle, HANDLE CompletionEvent)
{
  int v4; // edi
  BOOL v5; // eax
  HANDLE TokenHandle; // [rsp+28h] [rbp-30h] BYREF
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF
  void *UniqueThread; // [rsp+38h] [rbp-20h]
  BOOL v10; // [rsp+70h] [rbp+18h]
  int v11; // [rsp+78h] [rbp+20h]

  TokenHandle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( WaitHandle )
  {
    ThreadInformation = 0LL;
    TokenHandle = 0LL;
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v4 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 4u, 1u, &TokenHandle);
      if ( v4 < 0 )
        goto LABEL_23;
      ThreadInformation = 0LL;
      v4 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v4 < 0 )
      {
        NtClose(TokenHandle);
        TokenHandle = 0LL;
        goto LABEL_23;
      }
    }
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    *((_DWORD *)WaitHandle + 2) |= 8u;
    TpSetWaitEx(*((PTP_WAIT *)WaitHandle + 6), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    _InterlockedOr((volatile signed __int32 *)WaitHandle + 6, 1u);
    v5 = 0;
    if ( (*((_BYTE *)WaitHandle + 8) & 4) != 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( *((_DWORD *)WaitHandle + 22) == (_DWORD)UniqueThread )
        v5 = 1;
    }
    v10 = v5;
    if ( CompletionEvent == (HANDLE)-1LL )
    {
      if ( !v5 )
        TpWaitForWait(*((PTP_WAIT *)WaitHandle + 6), 0);
    }
    else if ( CompletionEvent )
    {
      *((_QWORD *)WaitHandle + 10) = CompletionEvent;
    }
    v11 = TpWaitOutstandingCallbackCount(*((_QWORD *)WaitHandle + 6));
    TpReleaseWait(*((PTP_WAIT *)WaitHandle + 6));
    _m_prefetchw((char *)WaitHandle + 24);
    if ( (_InterlockedAnd((volatile signed __int32 *)WaitHandle + 6, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(WaitHandle);
    }
    else if ( v11 )
    {
      v4 = 259;
      if ( v10 )
        v4 = 0;
      goto LABEL_23;
    }
    v4 = 0;
LABEL_23:
    RtlpTpResumeImpersonation(TokenHandle);
    return v4;
  }
  return -1073741585;
}
