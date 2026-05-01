/*
 * XREFs of _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1802534F4
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1806ABB84 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18015434C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644C38 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806AC78C (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2b4736168c23780831e980beacfbaf99_::operator()(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  const unsigned __int16 *v7; // rsi
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-61h]
  unsigned __int16 v11[2]; // [rsp+30h] [rbp-51h] BYREF
  int v12; // [rsp+34h] [rbp-4Dh]
  unsigned __int16 *v13; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v16; // [rsp+80h] [rbp-1h]
  winrt::Windows::Foundation::IUnknown *v17; // [rsp+88h] [rbp+7h]
  __int128 v18; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v16 = a2;
  v17 = a3;
  v12 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v18 = 0uLL;
  v8 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(
         &_ImageBase,
         a4,
         (__int64)a3,
         (const unsigned __int16 **)&v13,
         v11) )
  {
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v18,
           v13,
           v11[0]);
    v7 = (const unsigned __int16 *)v18;
  }
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBA,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8,
      v10);
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"action");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a3,
    a2,
    v14);
  v12 = 1;
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"id");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v15,
    v14);
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"arguments");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v14,
    v15);
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, v7);
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"content");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v14,
    v15);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a3);
  return a2;
}
