/*
 * XREFs of ??R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ @ 0x180067508
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_f0f613184e0e47442428064dff914436_@@@details@wil@@UEAAJXZ @ 0x1800696E0 (-Run@-$functor_wrapper_void@AEAV_lambda_f0f613184e0e47442428064dff914436_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180066F10 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 *     ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x180067100 (--0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z.c)
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x180067FE8 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180068728 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x180068C60 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180068F74 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069218 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180069914 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
HRESULT __fastcall _lambda_f0f613184e0e47442428064dff914436_::operator()(__int64 a1)
{
  int v2; // eax
  ToastNotification::ActivityToastNotificationCallback *v3; // rcx
  bool ActivityAndStore; // al
  MobilityExperience::ActivityWrapper *v5; // rax
  __int64 v6; // rcx
  ToastNotification::ActivityToastNotificationCallback *v7; // rcx
  MobilityExperience::ActivityWrapper *v8; // rax
  int v9; // eax
  bool v10; // sf
  HRESULT result; // eax
  const char *lpData; // [rsp+20h] [rbp-108h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-E8h] BYREF
  HSTRING string; // [rsp+48h] [rbp-E0h] BYREF
  HSTRING v15; // [rsp+50h] [rbp-D8h] BYREF
  struct ICDPActivityStore *v16; // [rsp+58h] [rbp-D0h] BYREF
  struct ICDPActivity *v17; // [rsp+60h] [rbp-C8h] BYREF
  HSTRING v18; // [rsp+68h] [rbp-C0h] BYREF
  DWORD dwLowDateTime; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v21[16]; // [rsp+80h] [rbp-A8h] BYREF
  GUID rguid; // [rsp+90h] [rbp-98h] BYREF
  void *v23[4]; // [rsp+A0h] [rbp-88h] BYREF
  OLECHAR sz[40]; // [rsp+C0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v18 = 0LL;
  rguid = 0LL;
  SystemTimeAsFileTime.dwLowDateTime = 0;
  v23[3] = (void *)15;
  v23[2] = 0LL;
  LOBYTE(v23[0]) = 0;
  WindowsDeleteString(0LL);
  try
  {
    v18 = 0LL;
    ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters(
      &SystemTimeAsFileTime,
      **(_QWORD **)(a1 + 8),
      &v18,
      &rguid);
    v2 = CDPInitialize();
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v2,
        (int)&SystemTimeAsFileTime);
    StringFromGUID2(&rguid, sz, 39);
    v16 = 0LL;
    v17 = 0LL;
    ActivityAndStore = ToastNotification::ActivityToastNotificationCallback::FindActivityAndStore(
                         v3,
                         &rguid,
                         &v17,
                         &v16);
    wil::details::in1diag3::Throw_HrIfMsg(
      retaddr,
      (void *)0x81,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)0x80070490LL,
      !ActivityAndStore,
      (bool)"Unable to find activity [GUID = %ls]",
      (const char *)sz);
    dwLowDateTime = SystemTimeAsFileTime.dwLowDateTime;
    wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
      &v20,
      (__int64)v17);
    string = 0LL;
    v15 = 0LL;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    v5 = MobilityExperience::ActivityWrapper::ActivityWrapper(
           (MobilityExperience::ActivityWrapper *)v21,
           (const struct MobilityExperience::ActivityWrapper *)&dwLowDateTime);
    ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(v6, v5, &string, &v15);
    ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(v7, string, v15);
    v8 = MobilityExperience::ActivityWrapper::ActivityWrapper(
           (MobilityExperience::ActivityWrapper *)v21,
           (const struct MobilityExperience::ActivityWrapper *)&dwLowDateTime);
    ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(*(_QWORD *)a1, v8, v16);
    SystemTimeAsFileTime = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                            + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
    v9 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
           L"LastResumeOnPCInteractionTime",
           0xBu,
           &SystemTimeAsFileTime,
           8u);
    v10 = v9 < 0;
    if ( v9 > 0 )
    {
      v9 = (unsigned __int16)v9 | 0x80070000;
      v10 = v9 < 0;
    }
    if ( v10 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
        (const char *)(unsigned int)v9);
    WindowsDeleteString(v15);
    v15 = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v16);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v17);
    std::string::_Tidy(v23, 1, 0LL);
    result = WindowsDeleteString(v18);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtExceptionMsg(
             retaddr,
             (void *)0x8F,
             (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
             "Failed to handle an Activity Toast Notification",
             lpData);
  }
  return result;
}
