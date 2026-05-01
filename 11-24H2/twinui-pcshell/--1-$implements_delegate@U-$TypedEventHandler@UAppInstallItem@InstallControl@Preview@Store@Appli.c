/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@impl@winrt@@QEAA@XZ @ 0x1805CB020
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@impl@winrt@@UEAAIXZ @ 0x1805D58E0 (-Release@-$implements_delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>(
        __int64 a1)
{
  __int64 v2; // rdx

  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::~_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_(
    (_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *)(a1 + 16),
    v2);
}
