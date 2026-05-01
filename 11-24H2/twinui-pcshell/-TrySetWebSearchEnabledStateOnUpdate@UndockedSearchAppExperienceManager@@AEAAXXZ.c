/*
 * XREFs of ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0FF8
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803AF434 (Windows--Internal--ComTaskPool--QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B49BC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1803B49BC.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B4A78 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1803B4A78.c)
 *     ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803B5CC8 (--1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManage.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803C01D8 (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1803C0440 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate(
        UndockedSearchAppExperienceManager *this)
{
  unsigned int v1; // r9d
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  int *v5; // [rsp+20h] [rbp-2E8h]
  int v6[4]; // [rsp+30h] [rbp-2D8h] BYREF
  _QWORD v7[42]; // [rsp+40h] [rbp-2C8h] BYREF
  _QWORD v8[42]; // [rsp+190h] [rbp-178h] BYREF
  __int16 v9; // [rsp+2E0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+0h]

  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v7);
  v7[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::StartActivity((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v7);
  v6[0] = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
              L"HasSetWebSearchEnabledStateOnUpdate",
              v1,
              v6) >= 0
    && v6[0] )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
      (SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v7,
      1,
      1,
      0,
      0);
  }
  else
  {
    wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v8,
      (__int64)v7);
    v8[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
    v9 = 1;
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___(v2, (__int64)v8);
    if ( v3 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFE2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3,
          (int)v5);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xFED,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          v4);
        goto LABEL_6;
      }
    }
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v8);
  }
LABEL_6:
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v7);
}
