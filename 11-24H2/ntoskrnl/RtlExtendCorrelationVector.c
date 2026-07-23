/*
 * XREFs of RtlExtendCorrelationVector @ 0x140784250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405EB92C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140A9D5A8 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  int CorrelationVectorBufferLength; // eax
  __int64 v4; // r8
  DWORD v5; // r11d

  if ( (int)RtlpGetCorrelationVectorEndPosition((__int64)CorrelationVector, v1) < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  if ( (int)v4 >= CorrelationVectorBufferLength - 3 )
    return -2147483643;
  *(_WORD *)&CorrelationVector->Vector[v4] = 12334;
  CorrelationVector->Vector[v4 + 2] = v5;
  return v5;
}
