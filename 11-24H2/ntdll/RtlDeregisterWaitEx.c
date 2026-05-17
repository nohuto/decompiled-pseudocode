/*
 * XREFs of RtlDeregisterWaitEx @ 0x18006E2B0
 * Callers:
 *     RtlDeregisterWait @ 0x18010DE40 (RtlDeregisterWait.c)
 * Callees:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18006E70C (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x18006E794 (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x18006EB30 (TpWaitForWait.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v5; // edi
  BOOL v6; // eax
  HANDLE Handle; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  void *UniqueThread; // [rsp+38h] [rbp-20h]
  BOOL v11; // [rsp+70h] [rbp+18h]
  int v12; // [rsp+78h] [rbp+20h]

  Handle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v9 = 0LL;
    Handle = 0LL;
    if ( NtCurrentTeb()->IsImpersonating )
    {
      LOBYTE(a3) = 1;
      v5 = NtOpenThreadToken(-2LL, 4LL, a3, &Handle);
      if ( v5 < 0 )
        goto LABEL_23;
      v9 = 0LL;
      v5 = NtSetInformationThread(-2LL, 5LL, &v9);
      if ( v5 < 0 )
      {
        NtClose(Handle);
        Handle = 0LL;
        goto LABEL_23;
      }
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16), a2, a3);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_PEB_LDR_DATA **)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    v6 = 0;
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( *(_DWORD *)(a1 + 88) == (_DWORD)UniqueThread )
        v6 = 1;
    }
    v11 = v6;
    if ( a2 == (volatile signed __int32 **)-1LL )
    {
      if ( !v6 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v12 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
    }
    else if ( v12 )
    {
      v5 = 259;
      if ( v11 )
        v5 = 0;
      goto LABEL_23;
    }
    v5 = 0;
LABEL_23:
    RtlpTpResumeImpersonation(Handle);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
