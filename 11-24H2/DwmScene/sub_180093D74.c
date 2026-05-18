/*
 * XREFs of sub_180093D74 @ 0x180093D74
 * Callers:
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 * Callees:
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180093F34 @ 0x180093F34 (sub_180093F34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093D74(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_18000CD2C(a1 + 8, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CD2C(a1 + 136, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CD2C(a1 + 264, 16LL, 8LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  sub_180093F34(a1 + 264, a2 + 1184);
  sub_18001254C((__int64 *)(a1 + 424), (_QWORD *)(a2 + 1312));
  return a1;
}
