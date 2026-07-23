/*
 * XREFs of RtlReleaseSwapReference @ 0x18009F094
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     RtlBackoff @ 0x18009EE30 (RtlBackoff.c)
 */

void __fastcall RtlReleaseSwapReference(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rtt
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    _m_prefetchw(v2);
    v4 = *v2;
    v5 = *v2 & 1;
    if ( v5 != v3 )
      break;
    if ( !(v4 >> 1) )
      __fastfail(0xEu);
    v6 = *v2;
    if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v5 | (2 * (v4 >> 1) - 2), v4) )
      return;
    RtlBackoff(&v7);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v2 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    RtlWakeAddressAll(v2 + 1);
}
