/*
 * XREFs of ?GetItemFromParsingName@wil@@YA?AV?$ComPtr@UIShellItem2@@@WRL@Microsoft@@PEBGPEAUIBindCtx@@@Z @ 0x1805E6290
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::GetItemFromParsingName(void **ppv, PCWSTR pszPath)
{
  HRESULT v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *ppv = 0LL;
  *ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
  v4 = SHCreateItemFromParsingName(pszPath, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, ppv);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12,
      (int)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\wil\\shellitemhelpers.h",
      (const char *)(unsigned int)v4,
      1);
  return ppv;
}
