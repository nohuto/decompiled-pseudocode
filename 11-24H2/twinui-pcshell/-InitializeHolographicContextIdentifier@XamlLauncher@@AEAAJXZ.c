/*
 * XREFs of ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x18022C5BC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18024C110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180070348 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall XamlLauncher::InitializeHolographicContextIdentifier(XamlLauncher *this)
{
  __int64 *v1; // rdi
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rdx
  HSTRING_HEADER v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  v1 = (__int64 *)((char *)this + 192);
  v2 = WindowsCreateStringReference(L"Windows.Internal.Shell.Holographic.ContextIdentifier", 0x34u, &v8, (HSTRING *)&v9);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    __debugbreak();
  }
  v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
         v9,
         v1);
  if ( v5 < 0 )
  {
    v6 = 872LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !*v1 )
  {
    v5 = -2147024882;
    v6 = 873LL;
    goto LABEL_5;
  }
  return 0LL;
}
