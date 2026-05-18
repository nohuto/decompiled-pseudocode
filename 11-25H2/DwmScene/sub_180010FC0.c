/*
 * XREFs of sub_180010FC0 @ 0x180010FC0
 * Callers:
 *     sub_180011598 @ 0x180011598 (sub_180011598.c)
 *     sub_18001A340 @ 0x18001A340 (sub_18001A340.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 */

__int64 *__fastcall sub_180010FC0(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    sub_1800114D0(&v5);
    v5 = *a1;
    *a1 = a2;
    sub_18000E854(&v5);
  }
  return a1;
}
