/*
 * XREFs of ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1805EE0B8
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE268 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  int v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF

  v14 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v15 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v15);
    v7 = v15;
    v11 = v15;
  }
  else
  {
    v6 = 0;
    v11 = 0LL;
    v7 = 0LL;
  }
  v12 = 0;
  v13 = 0LL;
  winrt::check_hresult(&v10, v6, (__int64)&v12);
  v12 = 0;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 176LL))(v7, *a3, &v14);
  winrt::check_hresult(&v10, v8, (__int64)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  *a2 = v14;
  return a2;
}
