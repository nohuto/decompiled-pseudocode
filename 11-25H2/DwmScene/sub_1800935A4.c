/*
 * XREFs of sub_1800935A4 @ 0x1800935A4
 * Callers:
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_180093780 @ 0x180093780 (sub_180093780.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800935A4(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000CBBC(a1 + 8, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(a1 + 248, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(a1 + 488, 16LL, 15LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  *(_BYTE *)(a1 + 1088) = 1;
  sub_180093780(a1 + 488, a2 + 760);
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
