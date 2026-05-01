/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_2da415b89f76c27a0f54e8c02bb30f50___::Invoke @ 0x180258730
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator() @ 0x1802584D8 (_lambda_2da415b89f76c27a0f54e8c02bb30f50_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_2da415b89f76c27a0f54e8c02bb30f50___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // rax
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v7 = a2;
  v3 = (__int64 *)(a1 + 8);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)&v6,
    &v8);
  v4 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)&v9,
         &v7);
  try
  {
    lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator()(v3, v4, (winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
