/*
 * XREFs of ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180090704
 * Callers:
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180091E04 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

const WCHAR *__fastcall wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = a1;
  v7[0] = L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x756,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
