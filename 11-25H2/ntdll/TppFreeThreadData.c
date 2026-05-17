/*
 * XREFs of TppFreeThreadData @ 0x1800F5B58
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, a1, a4);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
