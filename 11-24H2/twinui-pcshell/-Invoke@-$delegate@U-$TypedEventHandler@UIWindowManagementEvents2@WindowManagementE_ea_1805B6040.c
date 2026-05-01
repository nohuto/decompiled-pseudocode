/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_55329faaa6ff853885e50bfaaa45876f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B6040
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_55329faaa6ff853885e50bfaaa45876f_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x1805B5DB8 (--$-RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindo.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs>,_lambda_55329faaa6ff853885e50bfaaa45876f_>::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6.lpVtbl = a2;
  v3 = (__int64 *)(a1 + 16);
  try
  {
    _lambda_55329faaa6ff853885e50bfaaa45876f_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
      v3,
      &v6,
      (__int64)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
