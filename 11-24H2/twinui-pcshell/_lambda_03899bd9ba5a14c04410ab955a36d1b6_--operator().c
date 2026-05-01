/*
 * XREFs of _lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator() @ 0x180611924
 * Callers:
 *     wistd::__function::__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180611980 (wistd--__function--__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x180612C88 (-BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 */

char __fastcall lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator()(__int64 a1, int a2)
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
    return CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
             v3,
             v2,
             v4);
  }
  return result;
}
