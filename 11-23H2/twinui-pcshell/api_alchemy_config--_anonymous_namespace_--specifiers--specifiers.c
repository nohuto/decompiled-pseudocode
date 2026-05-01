/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::specifiers::specifiers @ 0x1806E144C
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1806E28C0 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall api_alchemy_config::_anonymous_namespace_::specifiers::specifiers(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  a1[4] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 7LL;
  *(_WORD *)(a2 + 32) = 0;
  a1[8] = 0LL;
  a1[9] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  a1[8] = v4;
  a1[8] = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = v4;
  v5 = a1[9];
  a1[9] = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v5;
  return a1;
}
