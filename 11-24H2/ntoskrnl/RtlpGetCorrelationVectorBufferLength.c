/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140AA2218
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405EE34C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405EE394 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1406FBB50 (RtlValidateCorrelationVector.c)
 *     RtlExtendCorrelationVector @ 0x140784320 (RtlExtendCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1407844CC (RtlpGetLastContiguosBase64Position.c)
 *     RtlIncrementCorrelationVector @ 0x140AA2130 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
