/*
 * XREFs of TppFreeDirectParamsCache @ 0x1800F6834
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppFreeDirectParamsCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 344);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v4, a4);
  }
  return result;
}
