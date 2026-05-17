/*
 * XREFs of RtlpSanitizeContext @ 0x180076770
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSanitizeContext(_DWORD *a1)
{
  unsigned int v1; // r10d
  bool v2; // dl
  __int64 result; // rax
  int v4; // r8d
  unsigned int v5; // r11d
  unsigned int v6; // r9d
  int v7; // edx

  v1 = a1[12];
  if ( (v1 & 0x27FFFF80) != 0x10000
    && (v1 & 0x7FFFF20) != 0x100000
    && (v1 & 0x7FFFFF0) != 0x200000
    && (v1 & 0x7FFFFC0) != 0x400000 )
  {
    goto LABEL_19;
  }
  v2 = 0;
  result = ((v1 & 0x10040) != 65600) & (unsigned __int8)((v1 & 0x100040) != 1048640);
  if ( (v1 & 0x400020) != 0x400020 )
    v2 = (v1 & 0x10040) != 65600 && (v1 & 0x100040) != 1048640;
  if ( !v2 && !MEMORY[0x7FFE03D8] || (result = v1 & 0x100080, (_DWORD)result == 1048704) )
  {
    a1[12] = 1048587;
    return result;
  }
  if ( (v1 & 0x100000) == 0 )
  {
LABEL_19:
    v1 = v1 & 0xF800001F | 0x100000;
    a1[12] = v1;
  }
  result = v1 & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = (unsigned int)a1[308];
    v4 = a1[312];
    if ( (int)result > v4
      || (v5 = a1[309], v6 = a1[313], v7 = v5 + result, result = v6 + v4, v5 < 0x530)
      || v7 < (int)result
      || a1[311] != 1232
      || v6 < 0x40
      || (_DWORD *)((char *)a1 + a1[310] + 1232) != a1 )
    {
      a1[12] = v1 & 0xFFFFFFBF;
    }
  }
  return result;
}
