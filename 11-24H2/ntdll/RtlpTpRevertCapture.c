/*
 * XREFs of RtlpTpRevertCapture @ 0x18006CFA0
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18006A310 (RtlUpdateTimer.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800BEDD0 (RtlSetIoCompletionCallback.c)
 *     RtlCreateTimerQueue @ 0x180106E00 (RtlCreateTimerQueue.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  v4 = 6LL;
  if ( !(_DWORD)v2 )
    v4 = 4LL;
  LOBYTE(v2) = 1;
  result = NtOpenThreadToken(-2LL, v4, v2, a1);
  if ( (int)result >= 0 )
  {
    v7 = 0LL;
    v6 = NtSetInformationThread(-2LL, 5LL, &v7);
    if ( v6 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v6;
    }
    return 0LL;
  }
  return result;
}
