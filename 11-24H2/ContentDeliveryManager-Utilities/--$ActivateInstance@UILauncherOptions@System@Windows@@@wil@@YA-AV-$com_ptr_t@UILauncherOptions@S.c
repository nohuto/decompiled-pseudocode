/*
 * XREFs of ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800652B0
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180068F74 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UILauncherOptions@System@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180066A54 (--$query@UILauncherOptions@System@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006ACF0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::System::ILauncherOptions>(__int64 a1)
{
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v7; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v8; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = L"Windows.System.LauncherOptions";
  v6 = 0LL;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(&v6);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, &v7, v2);
  v4 = RoActivateInstance(v3[1].Reserved.Reserved1, &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::System::ILauncherOptions>(&v6, a1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v6);
  return a1;
}
