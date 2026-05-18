/*
 * XREFs of sub_18005E7E0 @ 0x18005E7E0
 * Callers:
 *     sub_18005DA10 @ 0x18005DA10 (sub_18005DA10.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18005E7E0(_QWORD *a1)
{
  __int64 v2; // rax

  *a1 = &Spectre::Engine::ViewerEngine::ViewerSceneData::`vftable';
  sub_18000CBBC(
    (__int64)(a1 + 1),
    16LL,
    3LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  sub_18000CBBC(
    (__int64)(a1 + 7),
    16LL,
    3LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  a1[13] = 0LL;
  a1[14] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[13] = v2;
  a1[15] = 0LL;
  a1[16] = 0LL;
  sub_18000CBBC(
    (__int64)(a1 + 17),
    16LL,
    3LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  a1[26] = 0LL;
  a1[27] = 0LL;
  a1[28] = 0LL;
  a1[29] = 0LL;
  a1[30] = 0LL;
  a1[31] = 0LL;
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  a1[39] = 0LL;
  a1[40] = 0LL;
  return a1;
}
