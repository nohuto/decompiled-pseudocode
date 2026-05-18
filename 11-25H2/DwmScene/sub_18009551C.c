/*
 * XREFs of sub_18009551C @ 0x18009551C
 * Callers:
 *     sub_18009551C @ 0x18009551C (sub_18009551C.c)
 *     sub_1800957A0 @ 0x1800957A0 (sub_1800957A0.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18009551C @ 0x18009551C (sub_18009551C.c)
 *     sub_180095830 @ 0x180095830 (sub_180095830.c)
 */

__int64 __fastcall sub_18009551C(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010134(v6, 0x1D0uLL) )
  {
    sub_18009551C(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180095830(v6 + 32);
  }
  return result;
}
