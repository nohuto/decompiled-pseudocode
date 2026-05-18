/*
 * XREFs of sub_18006CE40 @ 0x18006CE40
 * Callers:
 *     sub_180095664 @ 0x180095664 (sub_180095664.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18006CE7C @ 0x18006CE7C (sub_18006CE7C.c)
 */

__int64 __fastcall sub_18006CE40(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v6 = a1;
  result = sub_18006CE7C(v3, &v6);
  *a1 = v5;
  *v5 = a1;
  return result;
}
