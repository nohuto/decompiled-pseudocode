/*
 * XREFs of RtlpSanitizeContext @ 0x1800457D0
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContext(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // edx
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  int v6; // ecx

  result = RtlpValidateContextFlags((unsigned int)a1[12], 0LL);
  if ( (int)result >= 0 )
  {
    if ( (a1[12] & 0x100000) != 0 )
      goto LABEL_3;
LABEL_12:
    a1[12] = a1[12] & 0xF800001F | 0x100000;
    goto LABEL_4;
  }
  if ( (_DWORD)result == -1073741811 )
    goto LABEL_12;
LABEL_3:
  if ( (int)result < 0 )
  {
    a1[12] = 1048587;
    return result;
  }
LABEL_4:
  result = a1[12] & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = (unsigned int)a1[308];
    v3 = a1[312];
    if ( (int)result > v3
      || (v4 = a1[309], v5 = a1[313], v6 = v4 + result, result = v5 + v3, v4 < 0x530)
      || v6 < (int)result
      || a1[311] != 1232
      || v5 < 0x40
      || (_DWORD *)((char *)a1 + a1[310] + 1232) != a1 )
    {
      a1[12] &= ~0x40u;
    }
  }
  return result;
}
