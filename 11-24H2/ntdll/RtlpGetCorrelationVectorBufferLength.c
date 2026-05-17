/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800F6674
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F6390 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800F63E0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F64D0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F65BC (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F6600 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800F6698 (RtlpGetCorrelationVectorLastDotPosition.c)
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
