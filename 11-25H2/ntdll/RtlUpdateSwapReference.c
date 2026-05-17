/*
 * XREFs of RtlUpdateSwapReference @ 0x18009FC14
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18009FB2C (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 */

unsigned __int64 __fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1);
    v5 = v2 + _InterlockedExchangeAdd64(a1 + 1, v2);
    if ( v5 )
    {
      do
      {
        RtlpWaitOnAddress((unsigned __int64)v3, &v5, 8LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
        result = *v3;
        v5 = result;
      }
      while ( result );
    }
  }
  return result;
}
