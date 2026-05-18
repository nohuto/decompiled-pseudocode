/*
 * XREFs of sub_180093704 @ 0x180093704
 * Callers:
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 * Callees:
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_1800938E0 @ 0x1800938E0 (sub_1800938E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093704(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000CD2C(a1 + 8, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CD2C(a1 + 248, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CD2C(a1 + 488, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  *(_BYTE *)(a1 + 1088) = 1;
  sub_1800938E0(a1 + 488, a2 + 760);
  *(_OWORD *)(a1 + 848) = *(_OWORD *)(a2 + 1000);
  *(_OWORD *)(a1 + 864) = *(_OWORD *)(a2 + 1016);
  *(_OWORD *)(a1 + 880) = *(_OWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a2 + 1048);
  *(_DWORD *)(a1 + 904) = *(_DWORD *)(a2 + 1056);
  *(_OWORD *)(a1 + 1028) = *(_OWORD *)(a2 + 1060);
  *(_OWORD *)(a1 + 1044) = *(_OWORD *)(a2 + 1076);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a2 + 1092);
  *(_QWORD *)(a1 + 1076) = *(_QWORD *)(a2 + 1108);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1116);
  return a1;
}
