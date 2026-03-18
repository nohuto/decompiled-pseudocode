/*
 * XREFs of NVMeHwInterrupt @ 0x1400080A0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCompletionQueues @ 0x140006790 (ProcessCompletionQueues.c)
 *     RequestPendingCompletion @ 0x140009240 (RequestPendingCompletion.c)
 */

char __fastcall NVMeHwInterrupt(__int64 a1)
{
  if ( !(unsigned __int8)RequestPendingCompletion(a1, 0xFFFFLL) || (*(_DWORD *)(a1 + 24) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3792);
    return 0;
  }
  else
  {
    ProcessCompletionQueues(a1, 0xFFFFu, 0);
    return 1;
  }
}
