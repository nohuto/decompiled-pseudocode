/*
 * XREFs of sub_18009567C @ 0x18009567C
 * Callers:
 *     sub_18009567C @ 0x18009567C (sub_18009567C.c)
 *     sub_180095900 @ 0x180095900 (sub_180095900.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18009567C @ 0x18009567C (sub_18009567C.c)
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 */

__int64 __fastcall sub_18009567C(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010234(v6, 0x1D0uLL) )
  {
    sub_18009567C(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180095990(v6 + 32);
  }
  return result;
}
