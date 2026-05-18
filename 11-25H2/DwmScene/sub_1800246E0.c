/*
 * XREFs of sub_1800246E0 @ 0x1800246E0
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_180024A20 @ 0x180024A20 (sub_180024A20.c)
 * Callees:
 *     sub_180024448 @ 0x180024448 (sub_180024448.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 */

void **__fastcall sub_1800246E0(__int64 a1)
{
  void **result; // rax

  sub_180024448((void **)(a1 + 24));
  sub_1800D25C4(a1 + 8);
  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
