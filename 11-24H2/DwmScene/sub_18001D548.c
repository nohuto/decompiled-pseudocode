/*
 * XREFs of sub_18001D548 @ 0x18001D548
 * Callers:
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E348 @ 0x18001E348 (sub_18001E348.c)
 */

__int64 __fastcall sub_18001D548(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800131AC(a2);
  sub_18001E348(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}
