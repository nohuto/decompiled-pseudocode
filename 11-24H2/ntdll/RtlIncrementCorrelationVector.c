/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800F63E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateCorrelationVector @ 0x1800F64D0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F6674 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800F6698 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     _snprintf_s @ 0x18012CD50 (_snprintf_s.c)
 *     sscanf_s @ 0x18012D8E0 (sscanf_s.c)
 *     strcpy_s @ 0x18012D9D0 (strcpy_s.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1)
{
  int CorrelationVectorBufferLength; // ebp
  int v3; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v5; // esi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  v3 = RtlValidateCorrelationVector();
  if ( v3 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(a1);
    v5 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v7 = CorrelationVectorLastDotPosition + 1 + a1, sscanf_s((const char *const)(v7 + 1), "%d", &v9) == 1)
      && (++v9, v8 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v9), v8 < CorrelationVectorBufferLength - v5 - 2) )
    {
      strcpy_s((char *)(v7 + 1), v8 + 1, Buffer);
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v3;
}
