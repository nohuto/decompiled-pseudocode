/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A01CC
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A0080 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAA_NXZ @ 0x18005B8C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAA.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800905AC (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800905AC.c)
 *     StringCopyWorkerW_0 @ 0x18009D148 (StringCopyWorkerW_0.c)
 *     ?SoftLandingV1Unexpected@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXXZ @ 0x1800A018C (-SoftLandingV1Unexpected@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXX.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  __int64 v2; // rcx
  size_t v3; // rdx
  size_t *v4; // r8
  const wchar_t *v5; // r9
  HRESULT v6; // eax
  size_t v7; // rdx
  size_t *v8; // r8
  const wchar_t *v9; // r9
  HRESULT v10; // eax
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, __int64, wchar_t *); // rdi
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  size_t v18; // [rsp+20h] [rbp-E0h]
  size_t v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-C8h] BYREF
  const WCHAR *v23; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER v24; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t v26[256]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftLandingV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SoftLandingV2>::GetImpl'::`2'::impl) )
  {
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SoftLandingV1Unexpected(v2);
  }
  else
  {
    v23 = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
    memset_0(pszDest, 0, 0x400uLL);
    v5 = (const wchar_t *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v5 = *(const wchar_t **)v5;
    v6 = StringCopyWorkerW_0(pszDest, v3, v4, v5, v18);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
        (const char *)(unsigned int)v6,
        v19);
    v9 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v10 = StringCopyWorkerW_0(v26, v7, v8, v9, v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
        (const char *)(unsigned int)v10,
        v20);
    wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v22);
    v21 = 0LL;
    v11 = *v22;
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 104))(v22, &v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
        (const char *)(unsigned int)v12,
        v20);
    v14 = v21;
    v15 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, wchar_t *))(*(_QWORD *)v21 + 48LL);
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v13);
    v17 = v15(v14, v16[1].Reserved.Reserved1, 1024LL, pszDest);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
        (const char *)(unsigned int)v17,
        v20);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  }
}
