/*
 * XREFs of ?RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800E6568
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036E254 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003E80C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?StartActivity@EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_N@Z @ 0x1800E64D4 (-StartActivity@EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@Notifica.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E6820 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E68C0 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E7768 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1802C7178 (-NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@Noti.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802CABE0 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??1EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1802CCCF8 (--1EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaiseHideExperienceRequestedEvent(
        CActionCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v8; // rbx
  __int64 v9; // rax
  struct Windows::Foundation::Collections::IPropertySet *v10; // r9
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h]
  void **v16; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[272]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v18[8]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v19[48]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v16,
    (__int64)"EM_RaiseHideExperienceRequestedEventActivity");
  v16 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity *)&v16,
    1);
  if ( *((_QWORD *)this + 19) )
  {
    v12 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v15,
           &v12);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::~EM_RaiseHideExperienceRequestedEventActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity *)&v16);
      return v3;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v13,
      v12);
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18075CFC0);
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v13, *(_QWORD *)(v4 + 24), v5, 1);
    v3 = v6;
    if ( v6 < 0 )
    {
      v7 = 785LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      goto LABEL_9;
    }
    v8 = v12;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18075CFB0);
    v6 = CSingleViewShellExperience::Reactivate(
           (CActionCenterExperienceManager *)((char *)this + 128),
           *(HSTRING *)(v9 + 24),
           v8,
           v10);
    v3 = v6;
    if ( v6 < 0 )
    {
      v7 = 786LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *)&v16);
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v16, 0LL);
  v16 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v19);
  wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v18);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v17);
  return 0LL;
}
