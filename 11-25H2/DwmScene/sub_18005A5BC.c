/*
 * XREFs of sub_18005A5BC @ 0x18005A5BC
 * Callers:
 *     sub_18005A4AC @ 0x18005A4AC (sub_18005A4AC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005A5BC(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax

  *(_DWORD *)a2 = **a4;
  v4 = (_QWORD *)(a2 + 8);
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *v4 = v5;
  v4[2] = 0LL;
  v4[3] = 0LL;
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  v4[2] = result;
  return result;
}
