/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_int_ @ 0x1802B8D08
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006E9E0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180406FAC (--$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithApplicationViewData_unsigned_int_(__int64 *a1, void *a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID v9; // [rsp+30h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp+10h] BYREF

  pv = a2;
  v4 = *a1;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v4 + 136))(a1, &pv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = pv;
    HolographicPositionerTelemetry::UnexpectedBackgroundActivation<unsigned short const *,unsigned int>(&v9, a3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v5);
    if ( pv )
      CoTaskMemFree(pv);
    return v6;
  }
}
