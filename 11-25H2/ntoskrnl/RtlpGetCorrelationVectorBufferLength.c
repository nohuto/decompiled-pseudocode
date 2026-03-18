/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140A9C8B8
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405E200C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405E2054 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1406EFCE0 (RtlValidateCorrelationVector.c)
 *     RtlExtendCorrelationVector @ 0x140775070 (RtlExtendCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x14077521C (RtlpGetLastContiguosBase64Position.c)
 *     RtlIncrementCorrelationVector @ 0x140A9C7D0 (RtlIncrementCorrelationVector.c)
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
