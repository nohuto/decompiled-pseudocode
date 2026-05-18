/*
 * XREFs of sub_1800171A8 @ 0x1800171A8
 * Callers:
 *     sub_18001D1F4 @ 0x18001D1F4 (sub_18001D1F4.c)
 *     sub_180023E64 @ 0x180023E64 (sub_180023E64.c)
 *     sub_1800D18A0 @ 0x1800D18A0 (sub_1800D18A0.c)
 *     sub_1800D32A8 @ 0x1800D32A8 (sub_1800D32A8.c)
 *     sub_1800DA962 @ 0x1800DA962 (sub_1800DA962.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800171A8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_180016F54(a1 + 16, a2 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  return a1;
}
