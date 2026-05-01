/*
 * XREFs of ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180184F2C
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028CA50 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180185150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x1801D23D0 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x180290084 (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 *     ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1802A3A68 (-UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ.c)
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1802C1640 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x1802C6A78 (--$make_shared@VPinRequestContext@@$$V@std@@YA-AV-$shared_ptr@VPinRequestContext@@@0@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?TryGetProcessPackageAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1805EB4CC (-TryGetProcessPackageAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEA.c)
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1805EB65C (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
PinRequestContext **__fastcall PinRequestContext::FromProcessThread(PinRequestContext **a1, void *a2, int a3)
{
  __int64 ProcessImagePath; // rax
  __int64 ProcessPackageAppId; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 ProcessWeakAppId; // rax
  PinRequestContext *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PinRequestContext **v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  PinRequestContext **v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h]
  PinRequestContext **v24; // [rsp+50h] [rbp-30h] BYREF
  PinRequestContext **v25; // [rsp+58h] [rbp-28h] BYREF
  PinRequestContext **v26; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+68h] [rbp-18h] BYREF

  v20 = a1;
  v27 = a3;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinRequestContext,>();
  v23 = 1;
  ProcessImagePath = TryGetProcessImagePath(&pv, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (char *)*a1 + 32,
    ProcessImagePath);
  if ( pv )
    CoTaskMemFree(pv);
  ProcessPackageAppId = TryGetProcessPackageAppId(&pv, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    *a1,
    ProcessPackageAppId);
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*(_QWORD *)*a1 )
  {
    v7 = Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&pv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      v8 + 8,
      v7);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    ProcessWeakAppId = TryGetProcessWeakAppId(&pv, a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)*a1 + 16,
      ProcessWeakAppId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  }
  PinRequestContext::UpdateRequestorBestAvailableAppId(*a1);
  v10 = *a1;
  v11 = *((_QWORD *)*a1 + 1);
  v12 = -1LL;
  if ( v11 )
  {
    v20 = (PinRequestContext **)*((_QWORD *)*a1 + 1);
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v11 + 2 * v13) );
    v21 = v13;
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v24 = v20;
  v14 = *((_QWORD *)v10 + 2);
  if ( v14 )
  {
    v20 = (PinRequestContext **)*((_QWORD *)v10 + 2);
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    v21 = v15;
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v25 = v20;
  v16 = *(PinRequestContext ***)v10;
  if ( *(_QWORD *)v10 )
  {
    v20 = *(PinRequestContext ***)v10;
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)v16 + v17) );
    v21 = v17;
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v26 = v20;
  v18 = *((_QWORD *)v10 + 4);
  if ( v18 )
  {
    v20 = (PinRequestContext **)*((_QWORD *)v10 + 4);
    do
      ++v12;
    while ( *(_WORD *)(v18 + 2 * v12) );
    v21 = v12;
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  LODWORD(pv) = GetProcessId(a2);
  PinManagerTelemetry::RequestContextCreatedFromProcessThread<unsigned long,unsigned long &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *>(
    (unsigned int)&pv,
    (unsigned int)&v27,
    (unsigned int)&v20,
    (unsigned int)&v26,
    (__int64)&v25,
    (__int64)&v24);
  return a1;
}
