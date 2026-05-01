/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F7200
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180025384 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268FC (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026BE4 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802BDB5C (-StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802C6D78 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CCB40 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180383F70 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  LSTATUS ValueW; // eax
  unsigned int v7; // r9d
  bool v8; // zf
  unsigned int v9; // eax
  unsigned int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v14; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v15[68]; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v16; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v17[48]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v14,
    (__int64)"EM_ViewDestroyedActivity");
  v14 = &ToastCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  ToastCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((ToastCenterTelemetry::EM_ViewDestroyedActivity *)&v14);
  if ( *((_QWORD *)this + 81) )
  {
    v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)((char *)this - 88));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1328LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      ToastCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((ToastCenterTelemetry::EM_ViewDestroyedActivity *)&v14);
      return v4;
    }
  }
  pdwType[0] = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
             L"AllowAutoAppRestartOnCrash",
             0x10000012u,
             pdwType,
             &pvData,
             &pcbData);
  if ( !ValueW )
  {
    if ( pdwType[0] == 4 )
    {
      if ( pvData <= 1 )
      {
        v8 = pvData == 1;
        goto LABEL_11;
      }
    }
    else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      ValueW = 0;
      v8 = (_WORD)pvData == 49;
LABEL_11:
      LOBYTE(ValueW) = v8;
      if ( !ValueW )
        goto LABEL_16;
    }
  }
  v9 = *((_DWORD *)this + 121);
  if ( v9 < 5 )
  {
    *((_DWORD *)this + 121) = v9 + 1;
    SHRegGetBOOLWithREGSAM(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
      L"AllowAutoAppRestartOnCrash",
      v7,
      (int *)&pcbData);
    v3 = CToastCenterExperienceManager::LookupToastQueue((CToastCenterExperienceManager *)((char *)this - 88));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1341LL;
      goto LABEL_15;
    }
  }
LABEL_16:
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v14, 0);
  v14 = &ToastCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v14);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v16);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v15);
  return 0LL;
}
