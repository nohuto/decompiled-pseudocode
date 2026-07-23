/*
 * XREFs of RtlpTpRevertCapture @ 0x18003B900
 * Callers:
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800C3CB0 (RtlSetIoCompletionCallback.c)
 *     RtlUpdateTimer @ 0x1800FBA30 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180109710 (RtlCreateTimerQueue.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801636A0 (NtOpenThreadToken.c)
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
