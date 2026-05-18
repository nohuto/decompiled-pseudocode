/*
 * XREFs of sub_180068754 @ 0x180068754
 * Callers:
 *     sub_1800237D8 @ 0x1800237D8 (sub_1800237D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_18001CDE0 @ 0x18001CDE0 (sub_18001CDE0.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180068754(_QWORD *a1)
{
  __int64 v2; // rax
  signed int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-38h] BYREF

  sub_18002774C(a1, 7, 3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  sub_18000CBBC(
    (__int64)(a1 + 16),
    16LL,
    4LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(
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
  _InterlockedIncrement(&dword_1801C34CC);
  v3 = sub_18001CDE0((unsigned int *)&dword_1801C34CC);
  v4 = sub_180027470(v8, v3);
  v5 = sub_18001B518((__int64)v7, (__int64)"DepthBuffer", v4);
  sub_180027C24((__int64)a1, v5);
  sub_180011A5C((__int64)v8);
  return a1;
}
