/*
 * XREFs of sub_18001CDEC @ 0x18001CDEC
 * Callers:
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 __fastcall sub_18001CDEC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_1800137F8(a2);
  return sub_18001CED8(v4, v2, *(_QWORD *)(v3 + 16));
}
