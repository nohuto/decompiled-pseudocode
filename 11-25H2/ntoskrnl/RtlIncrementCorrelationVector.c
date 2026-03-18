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

__int64 __fastcall RtlIncrementCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int CorrelationVectorBufferLength; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v10; // esi
  _BYTE *v11; // rdi
  int v12; // eax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v14 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a3);
  v8 = RtlValidateCorrelationVector(a1, v5, v6);
  if ( v8 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition((__int64)a1, v7);
    v10 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v11 = &a1[CorrelationVectorLastDotPosition + 1], sscanf_s(v11 + 1, "%d", &v14) == 1)
      && (++v14, v12 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v14), v12 < CorrelationVectorBufferLength - v10 - 2) )
    {
      strcpy_s(v11 + 1, v12 + 1, DstBuf);
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v8;
}
