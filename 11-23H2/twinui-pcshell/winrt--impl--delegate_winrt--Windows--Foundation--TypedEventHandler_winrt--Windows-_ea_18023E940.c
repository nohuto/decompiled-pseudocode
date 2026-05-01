/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___::Invoke @ 0x18023E940
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _lambda_8f44ff5c8977fc530aba29e054e0c967_::operator()_winrt::Windows::Foundation::IInspectable_ @ 0x18022EDEC (_lambda_8f44ff5c8977fc530aba29e054e0c967_--operator()_winrt--Windows--Foundation--IInspectable_.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967___::Invoke(
        __int64 a1,
        __int64 a2)
{
  _DWORD **v2; // rbx
  __int64 v3; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (_DWORD **)(a1 + 8);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)&v5,
    &v6);
  lambda_8f44ff5c8977fc530aba29e054e0c967_::operator()_winrt::Windows::Foundation::IInspectable_(
    v2,
    (winrt::Windows::Foundation::IUnknown *)&v5,
    v3);
  return 0LL;
}
