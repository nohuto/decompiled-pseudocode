/*
 * XREFs of sub_18006D2C4 @ 0x18006D2C4
 * Callers:
 *     sub_1800DA128 @ 0x1800DA128 (sub_1800DA128.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18006D2C4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
