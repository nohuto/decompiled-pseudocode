/*
 * XREFs of sub_18002F9DC @ 0x18002F9DC
 * Callers:
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002F334 @ 0x18002F334 (sub_18002F334.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002F9DC(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001B1F8(96LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  sub_18002F334(a1 + 2);
  return a1;
}
