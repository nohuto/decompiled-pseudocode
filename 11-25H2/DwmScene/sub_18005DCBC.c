/*
 * XREFs of sub_18005DCBC @ 0x18005DCBC
 * Callers:
 *     sub_18005D65C @ 0x18005D65C (sub_18005D65C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010C50 @ 0x180010C50 (sub_180010C50.c)
 *     sub_18002E2AC @ 0x18002E2AC (sub_18002E2AC.c)
 */

__int64 __fastcall sub_18005DCBC(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180010C50(*a2);
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  sub_18002E2AC(*a1, a1[1], v6);
  return sub_180036124((__int64)a1, (__int64)v6, v4, *a2);
}
