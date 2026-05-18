/*
 * XREFs of sub_1800688B4 @ 0x1800688B4
 * Callers:
 *     sub_180023938 @ 0x180023938 (sub_180023938.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001CF40 @ 0x18001CF40 (sub_18001CF40.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800688B4(_QWORD *a1)
{
  __int64 v2; // rax
  signed int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-38h] BYREF

  sub_1800278AC(a1, 7, 3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  sub_18000CD2C(
    (__int64)(a1 + 16),
    16LL,
    4LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CD2C(
    (__int64)(a1 + 24),
    16LL,
    4LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  a1[32] = 0LL;
  a1[33] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[32] = v2;
  _InterlockedIncrement(&dword_1801C44DC);
  v3 = sub_18001CF40((unsigned int *)&dword_1801C44DC);
  v4 = sub_1800275D0(v8, v3);
  v5 = sub_18001B678((__int64)v7, (__int64)"DepthBuffer", v4);
  sub_180027D84((__int64)a1, v5);
  sub_180011B5C((__int64)v8);
  return a1;
}
