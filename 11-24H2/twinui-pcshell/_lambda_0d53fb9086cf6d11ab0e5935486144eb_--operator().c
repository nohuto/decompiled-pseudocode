/*
 * XREFs of _lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator() @ 0x18061194C
 * Callers:
 *     wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1806119F0 (wistd--__function--__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(en_ea_1806119F0.c)
 * Callees:
 *     ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x180612C88 (-BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 */

char __fastcall lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  char result; // al
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync();
  }
  catch ( ... )
  {
    v2 = winrt::to_hresult(&v6);
    return CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[57],winrt::hresult,unsigned short const (&)[1]>(
             v3,
             v2,
             v4);
  }
  return result;
}
