/*
 * XREFs of ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x1805A7CD0
 * Callers:
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x18020D9A4 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 * Callees:
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18008C420 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___ @ 0x1801FEE78 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x1802AFC38 (-_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSnapAssistControllerBase::_ShouldShowViewInSnapAssist(
        CSnapAssistControllerBase *this,
        _QWORD *a2,
        SnapLayoutHelpers *a3,
        _QWORD **a4,
        __int64 a5)
{
  char v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  struct IImmersiveMonitor *v11; // r8
  struct IApplicationView *v12; // rdx
  _QWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___(
    &v14,
    *a4,
    a4[1],
    (__int64)a3);
  if ( v14 != a4[1] )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  if ( a5 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, SnapLayoutHelpers *))(*(_QWORD *)a5 + 184LL))(a5, a3) )
      return 0;
  }
  v10 = (__int64 *)*((_QWORD *)this + 13);
  LOBYTE(v11) = CSnapAssistControllerBase::_IsTabletMode(this);
  return SnapLayoutHelpers::IsSnappableWindow(a3, v12, v11, v10);
}
