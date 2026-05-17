/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x180055450
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800962A0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
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
    v3 = (__int64)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    RtlpLogHeapFailure(v5, v4, v3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
