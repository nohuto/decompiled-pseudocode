/*
 * XREFs of sub_1406BF800 @ 0x1406BF800
 * Callers:
 *     sub_1406BF7C0 @ 0x1406BF7C0 (sub_1406BF7C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BF800(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_1406BF7C0(v2);
  return result;
}
