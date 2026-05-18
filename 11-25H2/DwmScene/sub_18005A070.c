/*
 * XREFs of sub_18005A070 @ 0x18005A070
 * Callers:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_18005ABAC @ 0x18005ABAC (sub_18005ABAC.c)
 */

_QWORD *__fastcall sub_18005A070(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v10 = a1;
  v11 = 0LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  sub_1800122C8(v7, v6 + 2, a3);
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v8;
  v11 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v8 = v6;
  sub_18005ABAC(&v10);
  return v6;
}
