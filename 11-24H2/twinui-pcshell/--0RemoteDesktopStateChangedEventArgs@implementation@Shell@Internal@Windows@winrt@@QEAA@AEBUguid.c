/*
 * XREFs of ??0RemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid@5@W4CloudPCState@2345@@Z @ 0x18066FC78
 * Callers:
 *     ??$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6@AEAW4CloudPCState@3456@@winrt@@YA?A_P$$QEAUguid@0@AEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180656F48 (--$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::RemoteDesktopStateChangedEventArgs(
        __int64 a1,
        __int128 *a2,
        int a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::`vftable';
  result = a1;
  v4 = *a2;
  *(_DWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 24) = v4;
  return result;
}
