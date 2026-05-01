/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@QEAA@XZ @ 0x1805CB048
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@UEAAIXZ @ 0x1805D5930 (-Release@-$implements_delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@_ea_1805D5930.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>(
        __int64 a1)
{
  __int64 v2; // rdx

  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  _lambda_c63df5938b5e32cbd3483994e088b3e3_::~_lambda_c63df5938b5e32cbd3483994e088b3e3_(
    (_lambda_c63df5938b5e32cbd3483994e088b3e3_ *)(a1 + 16),
    v2);
}
