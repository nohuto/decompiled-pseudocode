/*
 * XREFs of sub_180095AA8 @ 0x180095AA8
 * Callers:
 *     sub_1800DBC0A @ 0x1800DBC0A (sub_1800DBC0A.c)
 *     sub_1800DBC85 @ 0x1800DBC85 (sub_1800DBC85.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180095AA8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
