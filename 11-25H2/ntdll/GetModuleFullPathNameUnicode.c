/*
 * XREFs of GetModuleFullPathNameUnicode @ 0x180069490
 * Callers:
 *     GetModuleFullPathName @ 0x180069508 (GetModuleFullPathName.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180047DE0 (LdrGetDllFullName.c)
 */

__int64 __fastcall GetModuleFullPathNameUnicode(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v5 = 0LL;
  if ( (a1 & 3) != 0 )
    return 0LL;
  if ( a3 <= 0x7FFF )
  {
    if ( a3 )
      goto LABEL_4;
    return 0LL;
  }
  v3 = 0x7FFF;
LABEL_4:
  *((_QWORD *)&v5 + 1) = a2;
  WORD1(v5) = 2 * v3 - 2;
  if ( (unsigned int)LdrGetDllFullName(a1, (unsigned __int16 *)&v5) != -1073741789 )
    v3 = (unsigned __int16)v5 >> 1;
  result = v3;
  *(_WORD *)(*((_QWORD *)&v5 + 1) + 2LL * ((unsigned __int16)v5 >> 1)) = 0;
  return result;
}
