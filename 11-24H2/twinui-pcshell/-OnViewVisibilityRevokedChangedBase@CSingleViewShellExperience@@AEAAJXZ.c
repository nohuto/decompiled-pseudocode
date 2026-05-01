/*
 * XREFs of ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18020B378
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180087DC8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180023CF0 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180024058 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800240B0 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180024F64 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003F7E4 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18020B4B0 (-StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18022BB78 (--1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  DWORD v5; // edx
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v9[272]; // [rsp+28h] [rbp-160h] BYREF
  volatile signed __int32 *v10; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"OnViewVisibilityRevokedChangedBase");
  *(_QWORD *)v8 = &SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase *)v8,
    v3,
    StringRawBuffer);
  v4 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 64LL))(this[11], this);
  v6 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, v5);
    SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::~OnViewVisibilityRevokedChangedBase((SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase *)v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x238,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4);
    *(_QWORD *)v8 = &SingleViewExperienceTelemetry::OnViewVisibilityRevokedChangedBase::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)v8);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v10);
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
    return v6;
  }
}
