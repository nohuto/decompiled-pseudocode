/*
 * XREFs of ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384AB0
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F08E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180025384 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800B39F0 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CD890 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1803835C4 (--1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1803856C8 (-StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?TurnedScreenOn@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180386DFC (-TurnedScreenOn@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnCriticalNotification(PTP_TIMER *pv)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  volatile signed __int32 *v6[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_CriticalNotificationActivity");
  v6[0] = (volatile signed __int32 *)&ToastCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  ToastCenterTelemetry::EM_CriticalNotificationActivity::StartActivity((ToastCenterTelemetry::EM_CriticalNotificationActivity *)v6);
  v2 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
  if ( v2 >= 0 )
  {
    ToastCenterTelemetry::EM_CriticalNotificationActivity::TurnedScreenOn((ToastCenterTelemetry::EM_CriticalNotificationActivity *)v6);
    v4 = CToastCenterExperienceManager::Launch(pv);
    v3 = v4;
    if ( v4 >= 0 )
    {
      wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FD,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v3 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2FA,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v2);
  }
  ToastCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity(v6);
  return v3;
}
