/*
 * XREFs of ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@impl@winrt@@QEAA@$$QEAV_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805C9E08
 * Callers:
 *     ??$?0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805C24B0 (--$-0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1805C9EE8 (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax

  *(_DWORD *)(a1 + 8) = 1;
  v3 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a1 + 40,
    a2 + 3);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)a1 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>::`vftable';
  return a1;
}
