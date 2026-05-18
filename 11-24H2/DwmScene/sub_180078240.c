/*
 * XREFs of sub_180078240 @ 0x180078240
 * Callers:
 *     sub_180040424 @ 0x180040424 (sub_180040424.c)
 *     sub_180046FF8 @ 0x180046FF8 (sub_180046FF8.c)
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 *     sub_18004DAB4 @ 0x18004DAB4 (sub_18004DAB4.c)
 *     sub_180054CDC @ 0x180054CDC (sub_180054CDC.c)
 *     sub_180085204 @ 0x180085204 (sub_180085204.c)
 *     sub_18008BB04 @ 0x18008BB04 (sub_18008BB04.c)
 * Callees:
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180078240(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  sub_180017054(a1 + 24, a2);
  sub_180015274((_QWORD *)(a1 + 56), a3);
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
