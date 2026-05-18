/*
 * XREFs of sub_18005A360 @ 0x18005A360
 * Callers:
 *     sub_18005A360 @ 0x18005A360 (sub_18005A360.c)
 *     sub_18005ABDC @ 0x18005ABDC (sub_18005ABDC.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18005A360 @ 0x18005A360 (sub_18005A360.c)
 *     sub_18005AE60 @ 0x18005AE60 (sub_18005AE60.c)
 */

__int64 __fastcall sub_18005A360(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010134(v6, 0x48uLL) )
  {
    sub_18005A360(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18005AE60(v6 + 40);
  }
  return result;
}
