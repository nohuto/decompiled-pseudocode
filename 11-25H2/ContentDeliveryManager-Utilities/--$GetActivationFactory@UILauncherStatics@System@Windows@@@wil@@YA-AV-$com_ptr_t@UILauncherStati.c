/*
 * XREFs of ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800652EC
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180068AD4 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

const WCHAR *__fastcall wil::GetActivationFactory<Windows::System::ILauncherStatics>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  const WCHAR *v7[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v8; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7[1] = a1;
  v7[0] = L"Windows.System.Launcher";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x756,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
