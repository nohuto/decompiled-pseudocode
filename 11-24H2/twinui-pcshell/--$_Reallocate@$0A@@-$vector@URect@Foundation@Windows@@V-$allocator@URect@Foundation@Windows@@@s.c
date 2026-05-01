/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180469D40
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800508BC (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801E0330 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805ACBF4 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void __fastcall std::vector<Windows::Foundation::Rect>::_Reallocate<0>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rsi

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  std::vector<Geometry::CRect>::_Change_array(a1, (__int64)v6, v4, *a2);
}
