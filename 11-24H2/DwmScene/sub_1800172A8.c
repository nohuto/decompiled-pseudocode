/*
 * XREFs of sub_1800172A8 @ 0x1800172A8
 * Callers:
 *     sub_18001D354 @ 0x18001D354 (sub_18001D354.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800D1A00 @ 0x1800D1A00 (sub_1800D1A00.c)
 *     sub_1800D3408 @ 0x1800D3408 (sub_1800D3408.c)
 *     sub_1800DAAC2 @ 0x1800DAAC2 (sub_1800DAAC2.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800172A8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180017054(a1 + 16, a2 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  return a1;
}
