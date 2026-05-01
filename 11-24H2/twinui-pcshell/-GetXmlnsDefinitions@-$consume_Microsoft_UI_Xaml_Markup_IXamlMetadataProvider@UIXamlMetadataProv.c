/*
 * XREFs of ?GetXmlnsDefinitions@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18044F2A8
 * Callers:
 *     ?GetXmlnsDefinitions@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x18044F340 (-GetXmlnsDefinitions@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?GetXmlnsDefinitions@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Microsoft_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x180456BF0 (-GetXmlnsDefinitions@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shel.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+24h] [rbp-44h] BYREF
  int v8; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF

  v11 = a2;
  v2 = *a1;
  v10 = 0;
  v11 = 0LL;
  v8 = 0;
  v4 = *v2;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *))(v4 + 64))(v2, &v10, &v11);
  winrt::check_hresult(&v7, v5, (__int64)&v8);
  result = a2;
  *(_QWORD *)a2 = v11;
  *(_DWORD *)(a2 + 8) = v10;
  return result;
}
