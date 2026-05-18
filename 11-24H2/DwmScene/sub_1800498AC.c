/*
 * XREFs of sub_1800498AC @ 0x1800498AC
 * Callers:
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800498AC(char a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = 1 << a1;
  if ( a2 )
    result = v2 | (unsigned int)dword_1801C3BF8;
  else
    result = dword_1801C3BF8 & (unsigned int)~v2;
  dword_1801C3BF8 = result;
  return result;
}
