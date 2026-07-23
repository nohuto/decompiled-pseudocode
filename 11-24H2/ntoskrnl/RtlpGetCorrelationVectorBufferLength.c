/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140A9D5A8
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405EB92C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405EB974 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1406F9790 (RtlValidateCorrelationVector.c)
 *     RtlExtendCorrelationVector @ 0x140784250 (RtlExtendCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1407843FC (RtlpGetLastContiguosBase64Position.c)
 *     RtlIncrementCorrelationVector @ 0x140A9D4C0 (RtlIncrementCorrelationVector.c)
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
