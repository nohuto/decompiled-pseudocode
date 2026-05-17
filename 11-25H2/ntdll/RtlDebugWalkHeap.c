/*
 * XREFs of RtlDebugWalkHeap @ 0x1801208B0
 * Callers:
 *     RtlpWalkHeap @ 0x18009C880 (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap((__int64)a1, 0);
  return v2;
}
