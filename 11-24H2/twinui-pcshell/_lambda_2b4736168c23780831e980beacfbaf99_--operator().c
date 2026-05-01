/*
 * XREFs of _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EDDCC
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE268 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E54F4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18058631C (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEA78 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall lambda_2b4736168c23780831e980beacfbaf99_::operator()(
        __int64 a1,
        __int64 **a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v7; // eax
  __int64 v9[4]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v10[6]; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int16 *v11[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v12; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v10[4] = (__int64)a2;
  v10[5] = (__int64)a3;
  v12 = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (__int64)v11,
         &_ImageBase,
         a4);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBA,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v7,
      0);
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, L"action");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a3,
    a2,
    v9);
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, L"id");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v10,
    v9);
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, L"arguments");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v9,
    v10);
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, v11[0]);
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, L"content");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v9,
    v10);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
