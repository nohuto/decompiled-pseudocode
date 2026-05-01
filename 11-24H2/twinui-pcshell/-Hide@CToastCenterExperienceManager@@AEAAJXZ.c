/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800B41BC
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025450 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     _lambda_c4a594d693bc8f986314a47dadfe11ef_::operator() @ 0x1803837B4 (_lambda_c4a594d693bc8f986314a47dadfe11ef_--operator().c)
 *     ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x180384A30 (-OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384C68 (-OnToastShowPendingTimerTick@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800250C8 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268FC (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026BE4 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026ED4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800B4380 (-StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802261AC (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802CB698 (-NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180383F70 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180384074 (-HidingInHolographic@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+2Ch] [rbp-D4h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  const char *v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[152]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+120h] [rbp+20h]
  __int64 v18; // [rsp+128h] [rbp+28h]
  int *v19; // [rsp+130h] [rbp+30h]
  volatile signed __int32 *v20; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v21[3]; // [rsp+140h] [rbp+40h] BYREF
  int v22; // [rsp+158h] [rbp+58h]
  int *v23; // [rsp+160h] [rbp+60h]
  char v24; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "EM_HideActivity";
  v12 = 0LL;
  v14 = 0;
  v16 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v17 = 1;
  v18 = 0LL;
  v19 = &v8;
  v20 = 0LL;
  v21[0] = 0LL;
  v21[1] = v7;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v10;
  v24 = 0;
  *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideActivity::`vftable';
  ToastCenterTelemetry::EM_HideActivity::StartActivity((ToastCenterTelemetry::EM_HideActivity *)v7);
  *((_OWORD *)this + 36) = 0LL;
  if ( *((_DWORD *)this + 36) != 2 )
  {
    ToastCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden((ToastCenterTelemetry::EM_HideActivity *)v7);
    goto LABEL_3;
  }
  if ( !*((_QWORD *)this + 92)
    || (ToastCenterTelemetry::EM_HideActivity::HidingInHolographic((ToastCenterTelemetry::EM_HideActivity *)v7),
        v5 = CToastCenterExperienceManager::HideInHolographic(this),
        v6 = v5,
        v5 >= 0) )
  {
    v4 = CSingleViewShellExperience::Hide((__int64)this + 104, 0LL);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_4;
    }
LABEL_3:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, 0);
    v2 = 0;
LABEL_4:
    *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)v7);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v20);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(&v8);
    return v2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D0,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  ToastCenterTelemetry::EM_HideActivity::~EM_HideActivity((ToastCenterTelemetry::EM_HideActivity *)v7);
  return v6;
}
