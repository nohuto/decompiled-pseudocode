/*
 * XREFs of sub_18001D3E8 @ 0x18001D3E8
 * Callers:
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E1E8 @ 0x18001E1E8 (sub_18001E1E8.c)
 */

__int64 __fastcall sub_18001D3E8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800130AC(a2);
  sub_18001E1E8(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}
