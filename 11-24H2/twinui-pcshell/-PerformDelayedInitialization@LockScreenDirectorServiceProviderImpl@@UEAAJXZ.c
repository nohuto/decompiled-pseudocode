/*
 * XREFs of ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x180248EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18004EB7C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800EA6A4 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800EAAEC (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EC8DC (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1802C9858 (-StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockS.c)
 *     ??1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1802CC828 (--1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenService.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost@@@details@wil@@QEAA_NXZ @ 0x1803EE020 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::PerformDelayedInitialization(IUnknown *this)
{
  __int64 v2; // r9
  int started; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  DWORD v6; // edx
  int v7; // eax
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v12[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity");
  v12[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *)v12);
  v9 = 0;
  v10[0] = 0;
  started = wil::wnf_query_nothrow<bool>((__int64)&WNF_SHEL_LOCK_ON_LOGON, &v9, v10, v2);
  v4 = retaddr;
  if ( started < 0 )
  {
    v5 = 42LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)started);
    goto LABEL_8;
  }
  if ( v9 )
  {
    if ( v10[0] )
    {
      started = LockScreenDirectorServiceProviderImpl::StartDirectorThread(this - 6);
      v4 = retaddr;
      if ( started < 0 )
      {
        v5 = 48LL;
        goto LABEL_7;
      }
    }
  }
LABEL_8:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::GetImpl'::`2'::impl) )
  {
    v11[0] = 1;
    v7 = RtlPublishWnfStateData(WNF_SHEL_LOCKSCREENDIRECTOR_SERVICEPROVIDER_ACTIVE, 0LL, v11, 4LL) | 0x10000000;
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
        (const char *)(unsigned int)v7);
  }
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, v6);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::~LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *)v12);
  return 0LL;
}
