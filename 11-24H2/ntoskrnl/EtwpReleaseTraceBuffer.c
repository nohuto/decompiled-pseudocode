/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x1403FAE70
 * Callers:
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
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
