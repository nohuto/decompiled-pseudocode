/*
 * XREFs of sub_18001E090 @ 0x18001E090
 * Callers:
 *     sub_1800975D8 @ 0x1800975D8 (sub_1800975D8.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001E0C0 @ 0x18001E0C0 (sub_18001E0C0.c)
 */

__int64 __fastcall sub_18001E090(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800137F8(a2);
  sub_18001E0C0(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}
