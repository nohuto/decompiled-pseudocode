/*
 * XREFs of sub_18009595C @ 0x18009595C
 * Callers:
 *     sub_180095830 @ 0x180095830 (sub_180095830.c)
 *     sub_1800975D8 @ 0x1800975D8 (sub_1800975D8.c)
 *     sub_1800983FC @ 0x1800983FC (sub_1800983FC.c)
 *     sub_1800DBBB2 @ 0x1800DBBB2 (sub_1800DBBB2.c)
 * Callees:
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 */

void **__fastcall sub_18009595C(_QWORD *a1)
{
  void **result; // rax

  sub_1800966C0(a1 + 27);
  sub_1800966C0(a1 + 4);
  sub_1800D25C4(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
