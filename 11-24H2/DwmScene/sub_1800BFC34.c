/*
 * XREFs of sub_1800BFC34 @ 0x1800BFC34
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 */

__int64 __fastcall sub_1800BFC34(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v5 = sub_180010D50(*a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_1800C2658(a1, v6, v4, *a2);
}
