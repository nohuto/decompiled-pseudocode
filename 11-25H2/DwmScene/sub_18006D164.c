/*
 * XREFs of sub_18006D164 @ 0x18006D164
 * Callers:
 *     sub_1800D9FC8 @ 0x1800D9FC8 (sub_1800D9FC8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18006D164(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
