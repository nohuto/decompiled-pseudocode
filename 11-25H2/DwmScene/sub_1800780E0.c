/*
 * XREFs of sub_1800780E0 @ 0x1800780E0
 * Callers:
 *     sub_1800402C4 @ 0x1800402C4 (sub_1800402C4.c)
 *     sub_180046E98 @ 0x180046E98 (sub_180046E98.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_18004D954 @ 0x18004D954 (sub_18004D954.c)
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 *     sub_1800850A4 @ 0x1800850A4 (sub_1800850A4.c)
 *     sub_18008B9A4 @ 0x18008B9A4 (sub_18008B9A4.c)
 * Callees:
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800780E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  sub_180016F54(a1 + 24, a2);
  sub_180015174((_QWORD *)(a1 + 56), a3);
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
