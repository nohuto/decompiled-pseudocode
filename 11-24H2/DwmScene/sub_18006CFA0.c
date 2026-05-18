/*
 * XREFs of sub_18006CFA0 @ 0x18006CFA0
 * Callers:
 *     sub_1800957C4 @ 0x1800957C4 (sub_1800957C4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18006CFDC @ 0x18006CFDC (sub_18006CFDC.c)
 */

__int64 __fastcall sub_18006CFA0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v6 = a1;
  result = sub_18006CFDC(v3, &v6);
  *a1 = v5;
  *v5 = a1;
  return result;
}
