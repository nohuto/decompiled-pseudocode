/*
 * XREFs of RtlpTpRevertCapture @ 0x180089880
 * Callers:
 *     RtlUpdateTimer @ 0x180086A00 (RtlUpdateTimer.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800B6B90 (RtlSetIoCompletionCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180101D30 (RtlCreateTimerQueue.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801604D0 (NtOpenThreadToken.c)
 */

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  ACCESS_MASK v4; // edx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  v4 = 6;
  if ( !a2 )
    v4 = 4;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, v4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v6 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v6 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v6;
    }
    return 0;
  }
  return result;
}
