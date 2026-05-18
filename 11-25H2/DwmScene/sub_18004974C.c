/*
 * XREFs of sub_18004974C @ 0x18004974C
 * Callers:
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004974C(char a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = 1 << a1;
  if ( a2 )
    result = v2 | (unsigned int)dword_1801C2BC8;
  else
    result = dword_1801C2BC8 & (unsigned int)~v2;
  dword_1801C2BC8 = result;
  return result;
}
