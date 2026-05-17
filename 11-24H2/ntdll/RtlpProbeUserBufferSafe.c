/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x18002C980
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlSetUserFlagsHeap @ 0x18010E270 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
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
