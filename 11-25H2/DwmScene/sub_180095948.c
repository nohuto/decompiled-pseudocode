/*
 * XREFs of sub_180095948 @ 0x180095948
 * Callers:
 *     sub_1800DBAAA @ 0x1800DBAAA (sub_1800DBAAA.c)
 *     sub_1800DBB25 @ 0x1800DBB25 (sub_1800DBB25.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180095948(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
