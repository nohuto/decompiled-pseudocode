/*
 * XREFs of sub_1800CCE48 @ 0x1800CCE48
 * Callers:
 *     sub_1800CCE18 @ 0x1800CCE18 (sub_1800CCE18.c)
 *     sub_1800CCE48 @ 0x1800CCE48 (sub_1800CCE48.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800CCE48 @ 0x1800CCE48 (sub_1800CCE48.c)
 */

__int64 __fastcall sub_1800CCE48(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_180010134(v6, 0x30uLL) )
  {
    sub_1800CCE48(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    sub_18000E854(v6 + 5);
  }
  return result;
}
