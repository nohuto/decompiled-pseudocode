/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DDC0
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18002BD38 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007DF14 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x18007DFA0 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x180171504 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801C5A1C (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802875C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?GetTabTearOutSupportedForWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1806BFF64 (-GetTabTearOutSupportedForWindow@-$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rdx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  HWND WindowForView; // rax
  __int64 v8; // rdx
  struct IApplicationView *v10; // rdx
  HWND v11; // rax
  HANDLE PropW; // rax
  struct IApplicationView *v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v13 = a2;
  if ( HolographicViewHelpers::IsApplicationViewHolographic(a2, a2) )
    return 0;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v4);
  if ( (*((_BYTE *)this + 184) & 8) == 0 )
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v15, &v13);
    if ( v15 )
    {
      v14 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 40LL))(v15, &v14) >= 0 && v14 == 1 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        return 0;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  }
  v6 = *((_DWORD *)this + 46);
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 1) == 0 || !IsTabWindowOwner(a2) )
      return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
    return 0;
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                          v5);
  if ( GetPropW(WindowForView, (LPCWSTR)0xA921) )
    return 0;
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
    v8);
  if ( *((_QWORD *)this + 30) )
  {
    v11 = (HWND)ApplicationViewHelpers::GetWindowForView(
                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                  v10);
    if ( v11 )
    {
      PropW = GetPropW(v11, (LPCWSTR)0xA920);
      if ( PropW )
      {
        if ( !(unsigned __int8)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabExtension<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetTabTearOutSupportedForWindow(
                                 (char *)this + 240,
                                 (unsigned int)PropW) )
          return 0;
      }
    }
  }
  return AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
}
