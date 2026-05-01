/*
 * XREFs of ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800508BC (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801E0330 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ??$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x1802CB270 (--$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt.c)
 *     ??$emplace_back@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA?A_TAEBURect@Foundation@Windows@@@Z @ 0x18047B3D8 (--$emplace_back@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     ?Append@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x18047BE50 (-Append@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wind.c)
 *     ?InsertAt@?$vector_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@@winrt@@QEAAXIAEBURect@Foundation@Windows@2@@Z @ 0x18047D214 (-InsertAt@-$vector_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundatio.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180516594 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 *     ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB120 (-GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV-$vecto.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x1805ACBCC (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     _lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator() @ 0x180608F58 (_lambda_9c01280dcdfa2a6c98312ec0389307e5_--operator().c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x1801DD044 (-_Change_array@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRec.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180218680 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rax
  __int64 v12; // rsi
  char *v13; // rbx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v19 = v11;
  try
  {
    v13 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_OWORD *)v13 = *a3;
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 16;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<Geometry::CRect>::_Change_array((__int64)a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
