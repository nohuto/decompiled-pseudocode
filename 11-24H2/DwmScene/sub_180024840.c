/*
 * XREFs of sub_180024840 @ 0x180024840
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_180024B80 @ 0x180024B80 (sub_180024B80.c)
 * Callees:
 *     sub_1800245A8 @ 0x1800245A8 (sub_1800245A8.c)
 *     sub_1800D2724 @ 0x1800D2724 (sub_1800D2724.c)
 */

void **__fastcall sub_180024840(__int64 a1)
{
  void **result; // rax

  sub_1800245A8((void **)(a1 + 24));
  sub_1800D2724(a1 + 8);
  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
