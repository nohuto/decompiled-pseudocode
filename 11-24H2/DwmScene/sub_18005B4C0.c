/*
 * XREFs of sub_18005B4C0 @ 0x18005B4C0
 * Callers:
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 * Callees:
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 */

__int64 __fastcall sub_18005B4C0(int a1, __int64 a2, char a3)
{
  sub_18005B4F8(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
