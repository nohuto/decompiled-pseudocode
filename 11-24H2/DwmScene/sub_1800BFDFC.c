/*
 * XREFs of sub_1800BFDFC @ 0x1800BFDFC
 * Callers:
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 */

__int64 *__fastcall sub_1800BFDFC(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    sub_1800115D0(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_18000E954(&v5);
  }
  return a1;
}
