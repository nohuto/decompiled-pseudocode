/*
 * XREFs of sub_18005B360 @ 0x18005B360
 * Callers:
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 * Callees:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 */

__int64 __fastcall sub_18005B360(int a1, __int64 a2, char a3)
{
  sub_18005B398(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
