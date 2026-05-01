/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800B39F0
 * Callers:
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801F0998 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384AB0 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180025384 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268FC (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026BE4 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800B3CC4 (-StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800B3D50 (-LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800B3D8C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B4020 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180226B3C (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802CB65C (-NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CD890 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _lambda_764d243e59cb48cdcde9b7b71f1d4aed_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x1803836CC (_lambda_764d243e59cb48cdcde9b7b71f1d4aed_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180384418 (-NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180384490 (-NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1803844CC (-NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180386E38 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(PTP_TIMER *pv)
{
  HWND WindowW; // rax
  void (__stdcall *v3)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  PTP_TIMER ThreadpoolTimer; // r14
  struct _TP_TIMER *v5; // rsi
  DWORD LastError; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  NTSTATUS v10; // eax
  int v11; // [rsp+28h] [rbp-E0h]
  _BYTE pvParam[56]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h]
  void **v14; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v15[68]; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v16; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v17[48]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v14,
    (__int64)"EM_LaunchActivity");
  v14 = &ToastCenterTelemetry::EM_LaunchActivity::`vftable';
  ToastCenterTelemetry::EM_LaunchActivity::StartActivity((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( *((_BYTE *)pv + 401) )
  {
    if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
    }
    else if ( *((_BYTE *)pv + 402) )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
    }
    else if ( *((_BYTE *)pv + 404) )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
    }
    else
    {
      v3 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_764d243e59cb48cdcde9b7b71f1d4aed_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
      ThreadpoolTimer = CreateThreadpoolTimer(v3, pv, 0LL);
      v5 = pv[80];
      if ( v5 )
      {
        LastError = GetLastError();
        wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
        SetLastError(LastError);
      }
      pv[80] = ThreadpoolTimer;
      memset(&pvParam[8], 0, 48);
      v13 = 0LL;
      *(_DWORD *)&pvParam[8] = 56;
      if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam[8], 0) )
      {
        if ( (pvParam[12] & 1) != 0 )
        {
          ToastCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
          v10 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
          if ( v10 < 0 )
          {
            v8 = wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)0x391,
                   (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                   (const char *)(unsigned int)v10,
                   v11);
            ToastCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
            return v8;
          }
        }
      }
      ToastCenterTelemetry::EM_LaunchActivity::LaunchedApplication((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
      v7 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)(pv + 13));
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x396,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_12;
      }
      if ( *((_DWORD *)pv + 36) != 2 )
      {
        *(_QWORD *)pvParam = -600000000LL;
        SetThreadpoolTimer(pv[80], (PFILETIME)pvParam, 0, 0);
      }
    }
  }
  else
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((ToastCenterTelemetry::EM_LaunchActivity *)&v14);
  }
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v14, 0);
  v8 = 0;
LABEL_12:
  v14 = &ToastCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v14);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v16);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v15);
  return v8;
}
