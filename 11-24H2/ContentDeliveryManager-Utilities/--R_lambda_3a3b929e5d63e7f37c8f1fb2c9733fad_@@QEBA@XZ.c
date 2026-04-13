/*
 * XREFs of ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA50
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@@details@wil@@UEAAJXZ @ 0x18003A610 (-Run@-$functor_wrapper_void@AEAV_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180028554 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z @ 0x18003288C (-GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180034120 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x180034240 (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 *     ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x180034584 (-IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 *     ?SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEBG0@Z @ 0x18003B338 (-SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEBG0@Z.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18003BDAC (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003DEE4 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 *     ?get@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarContentDeliveryPinningTelemetry@@P6AXXZ@Z @ 0x18003E6EC (-get@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarContent.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18003F300 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall _lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_::operator()(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int MobilityValue; // eax
  Mobility::Pinning *v6; // rcx
  int v7; // r15d
  Mobility::Pinning *v8; // rcx
  HRESULT v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64, __int64); // rsi
  __int64 v15; // rdi
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  DWORD v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  CreativeFramework::MobilityExperienceSettings *v24; // rcx
  const unsigned __int16 *v25; // r9
  wil::TraceLoggingProvider *v26; // rax
  unsigned __int8 v27; // dl
  unsigned __int64 v28; // r8
  TaskbarContentDeliveryPinningTelemetry *v29; // rcx
  int v30; // eax
  int ppv; // [rsp+28h] [rbp-29h]
  int ppva; // [rsp+28h] [rbp-29h]
  unsigned __int16 v34[2]; // [rsp+38h] [rbp-19h] BYREF
  DWORD pdwValue; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v36; // [rsp+40h] [rbp-11h] BYREF
  LPVOID v37; // [rsp+48h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-1h] BYREF
  __int64 v39; // [rsp+68h] [rbp+17h]
  HSTRING_HEADER v40; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  LOBYTE(v34[0]) = 0;
  MobilityValue = CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                    L"YourPhoneAppTaskbarIconCreated",
                    v34,
                    a4);
  if ( MobilityValue < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)MobilityValue,
      ppv);
  if ( !LOBYTE(v34[0]) )
  {
    LOBYTE(MobilityValue) = Mobility::Policy::isTaskbarIconCreationBlockedByPolicy(retaddr);
    if ( !(_BYTE)MobilityValue )
    {
      pdwValue = 0;
      LOBYTE(MobilityValue) = SLGetWindowsInformationDWORD(
                                L"ContentDeliveryManager-License-ContentDeliveryAllowed",
                                &pdwValue);
      v7 = 2;
      if ( pdwValue >= 2 )
      {
        LOBYTE(MobilityValue) = Mobility::Pinning::IsSystemProductValidForTaskbarIcon(v6);
        if ( (_BYTE)MobilityValue )
        {
          LOBYTE(MobilityValue) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl);
          if ( (_BYTE)MobilityValue == 3
            || (LOBYTE(MobilityValue) = Mobility::Pinning::IsInRestrictedRegion(v8), !(_BYTE)MobilityValue) )
          {
            if ( *a1 != 2 && a1[1] != 2 && (*a1 == 1 || a1[1] == 1 || a1[2] == 1) )
            {
              v37 = 0LL;
              v9 = CoCreateInstance(
                     &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
                     0LL,
                     0x404u,
                     &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
                     &v37);
              if ( v9 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x9B,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
                  (const char *)(unsigned int)v9,
                  ppva);
              v36 = 0LL;
              v10 = *(_QWORD *)v37;
              v36 = 0LL;
              v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v10 + 96))(
                      v37,
                      &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
                      &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
                      &v36);
              if ( v11 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x9E,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
                  (const char *)(unsigned int)v11,
                  ppva);
              LOBYTE(v34[0]) = 0;
              v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v36 + 96LL))(v36, v34);
              if ( v12 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xA1,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
                  (const char *)(unsigned int)v12,
                  ppva);
              if ( LOBYTE(v34[0]) )
              {
                v13 = v36;
                v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)v36 + 48LL);
                v39 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, word_1800E78BC, 1u, 0);
                v15 = v39;
                v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        &v40,
                        (const WCHAR **)&off_1800CA2A8,
                        v16);
                LOBYTE(ppva) = 1;
                LOBYTE(v18) = 1;
                v19 = v14(v13, v17[1].Reserved.Reserved1, v18, v15);
                if ( v19 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0xA8,
                    (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
                    (const char *)(unsigned int)v19,
                    ppva);
                v20 = 0;
                if ( *a1 == 1 )
                {
                  v20 = 1;
                  v7 = 3;
                }
                if ( a1[1] == 1 )
                  v20 = v7;
                pdwValue = v20;
                if ( a1[2] == 1 )
                  pdwValue = v20 | 4;
                MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>((__int64)&pdwValue);
                LOBYTE(v21) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
                  v21,
                  0LL);
                LOBYTE(v22) = 1;
                LOBYTE(v23) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
                  v23,
                  v22);
              }
              else
              {
                v26 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::get(
                                                     retaddr,
                                                     _lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
                if ( wil::TraceLoggingProvider::IsEnabled_(v26, v27, v28) )
                {
                  wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::get(
                    v24,
                    _lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
                  TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin_(
                    v29,
                    L"Microsoft.YourPhone_8wekyb3d8bbwe!App");
                }
              }
              LOBYTE(v24) = 1;
              v30 = CreativeFramework::MobilityExperienceSettings::SetMobilityValue(
                      v24,
                      (unsigned __int8)L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                      L"YourPhoneAppTaskbarIconCreated",
                      v25);
              if ( v30 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xB8,
                  (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
                  (const char *)(unsigned int)v30,
                  ppva);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v36);
              LOBYTE(MobilityValue) = wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v37);
            }
          }
        }
      }
    }
  }
  return MobilityValue;
}
