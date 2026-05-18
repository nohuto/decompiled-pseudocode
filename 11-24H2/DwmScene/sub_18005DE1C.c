/*
 * XREFs of sub_18005DE1C @ 0x18005DE1C
 * Callers:
 *     sub_18005D7BC @ 0x18005D7BC (sub_18005D7BC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     sub_18002E40C @ 0x18002E40C (sub_18002E40C.c)
 */

__int64 __fastcall sub_18005DE1C(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180010D50(*a2);
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  sub_18002E40C(*a1, a1[1], v6);
  return sub_180036284((__int64)a1, (__int64)v6, v4, *a2);
}
