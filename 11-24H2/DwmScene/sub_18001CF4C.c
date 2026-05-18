/*
 * XREFs of sub_18001CF4C @ 0x18001CF4C
 * Callers:
 *     sub_1800C22D0 @ 0x1800C22D0 (sub_1800C22D0.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 __fastcall sub_18001CF4C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_1800138F8(a2);
  return sub_18001D038(v4, v2, *(_QWORD *)(v3 + 16));
}
