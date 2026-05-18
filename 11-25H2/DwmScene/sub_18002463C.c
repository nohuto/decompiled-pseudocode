/*
 * XREFs of sub_18002463C @ 0x18002463C
 * Callers:
 *     sub_1800D6108 @ 0x1800D6108 (sub_1800D6108.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18002463C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
