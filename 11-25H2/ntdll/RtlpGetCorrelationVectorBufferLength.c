/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800F81F4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F7F10 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800F7F60 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F8050 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F813C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F8180 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800F8218 (RtlpGetCorrelationVectorLastDotPosition.c)
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
