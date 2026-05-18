/*
 * XREFs of sub_1800BC134 @ 0x1800BC134
 * Callers:
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 *__fastcall sub_1800BC134(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  sub_18000E854(&v6);
  return a1;
}
