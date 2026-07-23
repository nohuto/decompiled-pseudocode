/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x1404F39C4
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x14047917C (RtlpFreeNTHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1405EAED0 (RtlpSizeHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rdx
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (ULONG_PTR)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    RtlpLogHeapFailure(v5, v4, v3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
