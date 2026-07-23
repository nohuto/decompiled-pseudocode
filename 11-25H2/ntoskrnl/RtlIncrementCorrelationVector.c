/*
 * XREFs of RtlIncrementCorrelationVector @ 0x140A9C7D0
 * Callers:
 *     <none>
 * Callees:
 *     _snprintf_s @ 0x140500EE0 (_snprintf_s.c)
 *     sscanf_s @ 0x140501A70 (sscanf_s.c)
 *     strcpy_s @ 0x140501B60 (strcpy_s.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405E2054 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlValidateCorrelationVector @ 0x1406EFCE0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x140A9C8B8 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // ebp
  __int64 v3; // rdx
  int v4; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  v4 = RtlValidateCorrelationVector(CorrelationVector);
  if ( v4 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition((__int64)CorrelationVector, v3);
    v6 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v7 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition], sscanf_s(v7 + 1, "%d", &v10) == 1)
      && (++v10, v8 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v10), v8 < CorrelationVectorBufferLength - v6 - 2) )
    {
      strcpy_s(v7 + 1, v8 + 1, DstBuf);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
