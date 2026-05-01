/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_923aa8ecc56be0e8a63daaa295f97817___::Invoke @ 0x180605A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_923aa8ecc56be0e8a63daaa295f97817_::operator() @ 0x180604CD0 (_lambda_923aa8ecc56be0e8a63daaa295f97817_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_923aa8ecc56be0e8a63daaa295f97817___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (__int64 *)(a1 + 16);
  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  lambda_923aa8ecc56be0e8a63daaa295f97817_::operator()(
    v4,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7,
    &v6);
  return 0LL;
}
