/*
 * XREFs of sub_180093C14 @ 0x180093C14
 * Callers:
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180093DD4 @ 0x180093DD4 (sub_180093DD4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093C14(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_18000CBBC(a1 + 8, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(a1 + 136, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(a1 + 264, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  sub_180093DD4(a1 + 264, a2 + 1184);
  sub_18001244C((__int64 *)(a1 + 424), (_QWORD *)(a2 + 1312));
  return a1;
}
