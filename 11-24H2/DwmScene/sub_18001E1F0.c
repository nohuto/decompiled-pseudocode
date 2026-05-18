/*
 * XREFs of sub_18001E1F0 @ 0x18001E1F0
 * Callers:
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001E220 @ 0x18001E220 (sub_18001E220.c)
 */

__int64 __fastcall sub_18001E1F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800138F8(a2);
  sub_18001E220(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}
