/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x1403F86A0
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x1403F83E0 (EtwpFailLogging.c)
 *     EtwTraceRaw @ 0x14064325C (EtwTraceRaw.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpReleaseTraceBuffer(signed __int64 *a1)
{
  signed __int64 v1; // r10
  signed __int64 *v2; // rdx
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  while ( (v1 ^ (unsigned __int64)result) < 0xF )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(v2, result + 1, result);
    if ( v4 == result )
      return result;
  }
  result = *a1;
  _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  return result;
}
