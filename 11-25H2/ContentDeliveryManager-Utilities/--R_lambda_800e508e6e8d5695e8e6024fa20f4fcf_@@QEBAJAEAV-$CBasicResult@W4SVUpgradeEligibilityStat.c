/*
 * XREFs of ??R_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002BDDC
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@23@@Z @ 0x18003A430 (-Run@-$COperationLambdaVar@$0A@V_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@V-$CBasicResult@W4SVU.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A410 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEA_W@Z$1-SysFreeString@@YAX0@ZU-$integral_const.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800399A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext@@@detail.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall _lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  HRESULT v3; // eax
  int v4; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int ActivationFactory; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int i; // r14d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rbx
  int (__fastcall *v24)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v25; // rax
  int v26; // esi
  unsigned int v27; // r8d
  char v28; // al
  const char *v29; // r9
  __int64 v31; // rbx
  int (__fastcall *v32)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v33; // rax
  char v34; // al
  int ppv; // [rsp+20h] [rbp-C8h]
  char v36[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v37; // [rsp+34h] [rbp-B4h]
  __int64 v38; // [rsp+38h] [rbp-B0h] BYREF
  OLECHAR *v39; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v42; // [rsp+58h] [rbp-90h] BYREF
  __int64 *v43; // [rsp+60h] [rbp-88h] BYREF
  double v44; // [rsp+68h] [rbp-80h] BYREF
  __int64 v45; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v46; // [rsp+78h] [rbp-70h] BYREF
  LPVOID v47; // [rsp+80h] [rbp-68h] BYREF
  const WCHAR *v48; // [rsp+88h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-58h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v2 = a2;
    v48 = L"UsePromotionalUxSurfaces";
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetImpl'::`2'::impl,
      a2);
    v37 = 8;
    v47 = 0LL;
    v3 = CoCreateInstance(
           &GUID_b91d5831_b1bd_4608_8198_d72e155020f7,
           0LL,
           4u,
           &GUID_07f3afac_7c8a_4ce7_a5e0_3d24ee8a77e0,
           &v47);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v3,
        ppv);
    if ( !v47 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x256,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80004005LL,
        ppv);
    v46 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 **))v47)(
           v47,
           &GUID_c57692f8_8f5f_47cb_9381_34329b40285a,
           &v46);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v4,
        ppv);
    v5 = 20;
    v43 = 0LL;
    v6 = *v46;
    v43 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64 **))(v6 + 40))(
           v46,
           L"ContentDeliveryManager",
           &v43);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x259,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v7,
        ppv);
    v45 = 0LL;
    v50 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    ActivationFactory = RoGetActivationFactory(v50, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v45);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory,
        ppv);
    v42 = 0LL;
    v9 = *v43;
    v42 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 56))(v43, &v42);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25E,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v10,
        ppv);
    v41 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v42 + 32))(v42, &v41);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x260,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v11,
        ppv);
    v36[0] = 0;
    for ( i = 0; i < v41; ++i )
    {
      v40 = 0LL;
      v13 = *v42;
      v40 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v13 + 24))(v42, i, &v40);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x265,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v14,
          ppv);
      v39 = 0LL;
      v15 = *v40;
      v39 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64 *, OLECHAR **))(v15 + 264))(v40, &v39);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x268,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v16,
          ppv);
      v38 = 0LL;
      v18 = v45;
      v19 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v45 + 48LL);
      v38 = 0LL;
      v44 = *(double *)&v39;
      v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v44, v17);
      v21 = v19(v18, v20[1].Reserved.Reserved1, &v38);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x26A,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v21,
          ppv);
      v23 = v38;
      v24 = *(int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v38 + 96LL);
      v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v48, v22);
      v26 = v5 | 1;
      v37 = v26;
      if ( v24(v23, v25[1].Reserved.Reserved1, v36) < 0 || (v28 = 1, !v36[0]) )
        v28 = 0;
      if ( (v26 & 1) != 0 )
        v26 &= ~1u;
      if ( v28 )
        goto LABEL_20;
      v44 = 0.0;
      v31 = v38;
      v32 = *(int (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v38 + 88LL);
      v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v48, v27);
      v5 = v26 | 2;
      v37 = v5;
      if ( v32(v31, v33[1].Reserved.Reserved1, &v44) < 0 || (v34 = 1, v44 <= 0.0) )
        v34 = 0;
      if ( (v5 & 2) != 0 )
        v5 &= ~2u;
      if ( v34 )
      {
        v36[0] = 1;
LABEL_20:
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v38);
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v39);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v40);
        break;
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v38);
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v39);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v40);
    }
    *(_DWORD *)(v2 + 16) = 2 - (v36[0] != 0);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v42);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v45);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v43);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v46);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v47);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x27E,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      v29);
  }
  return 0LL;
}
