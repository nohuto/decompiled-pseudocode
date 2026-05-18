/*
 * XREFs of sub_180095ABC @ 0x180095ABC
 * Callers:
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 *     sub_18009855C @ 0x18009855C (sub_18009855C.c)
 *     sub_1800DBD12 @ 0x1800DBD12 (sub_1800DBD12.c)
 * Callees:
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_1800D2724 @ 0x1800D2724 (sub_1800D2724.c)
 */

void **__fastcall sub_180095ABC(_QWORD *a1)
{
  void **result; // rax

  sub_180096820(a1 + 27);
  sub_180096820(a1 + 4);
  sub_1800D2724(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
