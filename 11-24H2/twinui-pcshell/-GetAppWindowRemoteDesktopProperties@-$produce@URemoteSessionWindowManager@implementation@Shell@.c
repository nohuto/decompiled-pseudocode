/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_KPEAUstruct_Windows_Internal_Shell_AppWindowRemoteDesktopProperties@23@@Z @ 0x18028F120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppWindowRemoteDesktopProperties@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x18028F184 (-GetAppWindowRemoteDesktopProperties@RemoteSessionWindowManager@implementation@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 AppWindowRemoteDesktopProperties; // rax
  __int64 v5; // xmm0_8
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[24]; // [rsp+28h] [rbp-30h] BYREF

  try
  {
    AppWindowRemoteDesktopProperties = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetAppWindowRemoteDesktopProperties(
                                         (a1 - 16) & -(__int64)(a1 != 0),
                                         v8,
                                         a2);
    v5 = *(_QWORD *)(AppWindowRemoteDesktopProperties + 16);
    *(_OWORD *)a3 = *(_OWORD *)AppWindowRemoteDesktopProperties;
    *(_QWORD *)(a3 + 16) = v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
