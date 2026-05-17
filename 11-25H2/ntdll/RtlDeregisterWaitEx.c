/*
 * XREFs of RtlDeregisterWaitEx @ 0x18003C7B0
 * Callers:
 *     RtlDeregisterWait @ 0x180110910 (RtlDeregisterWait.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18003CC0C (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x18003CC94 (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801636A0 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2, __int64 a3)
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
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
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
    if ( a2 == -1 )
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
