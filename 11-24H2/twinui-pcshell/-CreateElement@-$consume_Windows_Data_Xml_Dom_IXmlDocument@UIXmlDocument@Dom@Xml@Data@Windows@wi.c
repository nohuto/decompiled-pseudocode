/*
 * XREFs of ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEA78
 * Callers:
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EDDCC (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE268 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *result; // rax
  int v9; // [rsp+24h] [rbp-34h] BYREF
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  _QWORD *v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = a2;
  v3 = *a1;
  v12 = 0LL;
  v10 = 0;
  v5 = *v3;
  v6 = *a3;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v5 + 72))(v3, v6, &v12);
  winrt::check_hresult(&v9, v7, (__int64)&v10);
  result = a2;
  *a2 = v12;
  return result;
}
