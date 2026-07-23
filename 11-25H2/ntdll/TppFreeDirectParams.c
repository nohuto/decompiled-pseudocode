/*
 * XREFs of TppFreeDirectParams @ 0x18003BEA0
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     TppDirectUnposted @ 0x18015DAF0 (TppDirectUnposted.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall TppFreeDirectParams(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 48);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v1);
  }
  return result;
}
