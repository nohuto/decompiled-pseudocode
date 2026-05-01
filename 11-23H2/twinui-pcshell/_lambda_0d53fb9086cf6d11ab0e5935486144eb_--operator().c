/*
 * XREFs of _lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator() @ 0x1806F0C20
 * Callers:
 *     wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1806F0CA0 (wistd--__function--__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x1802599C0 (-BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 */

char __fastcall lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  char result; // al
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *a1;
  try
  {
    result = (unsigned __int8)winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync(
                                v2,
                                &v7,
                                1);
  }
  catch ( ... )
  {
    v3 = winrt::to_hresult(&v7);
    return CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[57],winrt::hresult,unsigned short const (&)[1]>(
             v4,
             v3,
             v5);
  }
  return result;
}
