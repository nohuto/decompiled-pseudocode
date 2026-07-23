/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800F0BD4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F08F0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800F0940 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F0A30 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F0B1C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F0B60 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800F0BF8 (RtlpGetCorrelationVectorLastDotPosition.c)
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
