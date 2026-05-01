/*
 * XREFs of ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180222CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180048B14 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180222EE4 (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A98 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180294BC0 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CE0D4 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 *     ??$_Emplace_one_at_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z @ 0x1804AD270 (--$_Emplace_one_at_back@_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z.c)
 *     ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x1805BBDC8 (-SnapAssistCompleted@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnap.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805BC9B4 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlSnapAssistViewHost::v_DismissView(XamlSnapAssistViewHost *this, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v5; // r15
  __int64 v6; // rsi
  char *v7; // rdi
  const void *v8; // rdx
  signed __int64 v9; // rbx
  unsigned int *v10; // rdi
  unsigned int *v11; // rbx
  void *v12; // rbx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  char v17; // [rsp+20h] [rbp-50h] BYREF
  void *v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v22 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 89);
  if ( (__int64)(v5[1] - *v5) >> 3 )
    v22 = 2 - (v5[6] != v5[7]);
  v20 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  if ( (__int64)(v5[4] - v5[3]) >> 2 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(v18);
    v7 = (char *)v18[0];
    v8 = (const void *)v5[3];
    v9 = v5[4] - (_QWORD)v8;
    memmove_0(v18[0], v8, v9);
    v18[1] = &v7[4 * (v9 >> 2)];
    v24 = 0LL;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v24);
  }
  v10 = (unsigned int *)v18[1];
  v11 = (unsigned int *)v18[0];
  if ( v18[0] != v18[1] )
  {
    do
    {
      v24 = *v11;
      std::vector<unsigned __int64>::_Emplace_one_at_back<unsigned __int64>(&v20, &v24);
      ++v11;
    }
    while ( v11 != v10 );
    v6 = v21;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v18);
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
    &v23,
    *((_QWORD *)this + 33));
  v12 = (void *)v20;
  v18[0] = (void *)v20;
  LODWORD(v18[1]) = (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
    &v23,
    &v22,
    v18);
  *((_QWORD *)this + 89) = 0LL;
  v13 = (std::_Ref_count_base *)*((_QWORD *)this + 90);
  *((_QWORD *)this + 90) = 0LL;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  if ( v12 )
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v6 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
  v14 = *((_QWORD *)this + 80);
  if ( v14 && (unsigned __int8)tip2::details::shared_data<0,0,0>::is_running(v14 + 8) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((char *)this + 640);
  v15 = *((_QWORD *)this + 29);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)this + 29) = 0LL;
  }
  v16 = (_QWORD *)((char *)this + 288);
  if ( (char *)this + 288 != &v17 )
  {
    if ( *v16 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 36);
    *v16 = 0LL;
  }
  *((_BYTE *)this + 296) = 0;
}
