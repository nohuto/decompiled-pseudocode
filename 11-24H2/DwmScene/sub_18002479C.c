/*
 * XREFs of sub_18002479C @ 0x18002479C
 * Callers:
 *     sub_1800D6268 @ 0x1800D6268 (sub_1800D6268.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18002479C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
