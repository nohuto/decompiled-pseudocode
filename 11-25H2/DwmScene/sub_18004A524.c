/*
 * XREFs of sub_18004A524 @ 0x18004A524
 * Callers:
 *     sub_18004A524 @ 0x18004A524 (sub_18004A524.c)
 *     sub_18004B52C @ 0x18004B52C (sub_18004B52C.c)
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18004A524 @ 0x18004A524 (sub_18004A524.c)
 *     sub_18004B6DC @ 0x18004B6DC (sub_18004B6DC.c)
 */

__int64 __fastcall sub_18004A524(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010134(v6, 0x68uLL) )
  {
    sub_18004A524(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004B6DC(v6 + 32);
  }
  return result;
}
