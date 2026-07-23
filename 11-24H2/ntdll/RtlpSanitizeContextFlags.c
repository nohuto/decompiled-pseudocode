/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1800455C0
 * Callers:
 *     RtlCaptureContext2 @ 0x18011EF70 (RtlCaptureContext2.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (*a1 & 0x100000) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = *a1 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return result;
}
