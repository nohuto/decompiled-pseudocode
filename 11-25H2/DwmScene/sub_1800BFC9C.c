/*
 * XREFs of sub_1800BFC9C @ 0x1800BFC9C
 * Callers:
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 */

__int64 *__fastcall sub_1800BFC9C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    sub_1800114D0(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_18000E854(&v5);
  }
  return a1;
}
