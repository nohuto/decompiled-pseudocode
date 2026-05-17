/*
 * XREFs of RtlReleaseSwapReference @ 0x1800D6A4C
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D6520 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     RtlBackoff @ 0x1800D6AD0 (RtlBackoff.c)
 */

signed __int64 __fastcall RtlReleaseSwapReference(volatile signed __int64 *a1, unsigned int a2)
{
  volatile signed __int64 *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  signed __int64 result; // rax
  volatile signed __int64 v7; // rtt
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    _m_prefetchw((const void *)v2);
    v4 = *v2;
    v5 = *v2 & 1;
    if ( v5 != v3 )
      break;
    if ( !(v4 >> 1) )
      __fastfail(0xEu);
    v7 = *v2;
    result = _InterlockedCompareExchange64(v2, v5 | (2 * (v4 >> 1) - 2), v4);
    if ( v7 == result )
      return result;
    RtlBackoff(&v8);
  }
  result = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return RtlWakeAddressAll((unsigned __int64)(v2 + 1));
  return result;
}
