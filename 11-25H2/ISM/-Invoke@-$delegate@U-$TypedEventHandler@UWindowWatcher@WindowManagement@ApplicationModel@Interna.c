/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180076010
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUAppViewChangedEventArgs@12345@@_lambda_e811ed625de1c9f36d6dae6db721db2b_@@QEBA?A_PAEBUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUAppViewChangedEventArgs@23456@@Z @ 0x180076044 (--$-RAEBUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUAppViewCha.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]
  __int64 v6; // [rsp+40h] [rbp+18h]

  v6 = a3;
  v5 = a2;
  try
  {
    _lambda_e811ed625de1c9f36d6dae6db721db2b_::operator()<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher const &,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs const &>();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
