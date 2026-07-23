/*
 * XREFs of RtlDebugWalkHeap @ 0x18011D210
 * Callers:
 *     RtlpWalkHeap @ 0x18005E780 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_QWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap(a1, 0);
  return v2;
}
