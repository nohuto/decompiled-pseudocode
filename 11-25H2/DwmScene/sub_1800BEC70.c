/*
 * XREFs of sub_1800BEC70 @ 0x1800BEC70
 * Callers:
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800C02D8 @ 0x1800C02D8 (sub_1800C02D8.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800C1260 @ 0x1800C1260 (sub_1800C1260.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 *     sub_1800C60C0 @ 0x1800C60C0 (sub_1800C60C0.c)
 *     sub_1800CA800 @ 0x1800CA800 (sub_1800CA800.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 *__fastcall sub_1800BEC70(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  sub_18000E854(v7);
  return a1;
}
