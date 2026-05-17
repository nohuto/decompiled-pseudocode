/*
 * XREFs of TppFreeDirectParams @ 0x18003BEA0
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     TppDirectUnposted @ 0x18015DAF0 (TppDirectUnposted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppFreeDirectParams(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 48);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *(_QWORD *)v1);
  }
  return result;
}
