/*
 * XREFs of ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E9CE4
 * Callers:
 *     ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800E9B10 (-v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1800E94DC (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E9FC0 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800EA18C (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EA458 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800EA4FC (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800EA554 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800EA6A4 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800EAAEC (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::EnsureChildServices(
        HANDLE *this,
        struct ILockScreenDirector **a2)
{
  int LockScreenDirector; // eax
  unsigned int v5; // ebx
  struct ILockScreenDirector *v6; // rcx
  struct ILockScreenDirector *v7; // rcx
  struct ILockScreenDirector *v8; // rcx
  int started; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  int v14; // eax
  struct ILockScreenDirector *v15; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwindex; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE pHandles; // [rsp+40h] [rbp-C0h] BYREF
  void **v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  char v20; // [rsp+5Ch] [rbp-A4h]
  int v21; // [rsp+80h] [rbp-80h] BYREF
  const char *v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  char v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  _BYTE v26[152]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+140h] [rbp+40h]
  int v28; // [rsp+150h] [rbp+50h]
  __int64 v29; // [rsp+158h] [rbp+58h]
  int *v30; // [rsp+160h] [rbp+60h]
  __int64 v31; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v32[3]; // [rsp+170h] [rbp+70h] BYREF
  int v33; // [rsp+188h] [rbp+88h]
  int *v34; // [rsp+190h] [rbp+90h]
  char v35; // [rsp+198h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v19 = 0;
  v20 = 0;
  v24 = 0;
  v21 = 0;
  v22 = "LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity";
  v23 = 0LL;
  v25 = 0;
  v27 = 0LL;
  memset_0(v26, 0, sizeof(v26));
  v28 = 1;
  v29 = 0LL;
  v30 = &v19;
  v31 = 0LL;
  v32[0] = 0LL;
  v32[1] = &v18;
  v32[2] = 0LL;
  v33 = 0;
  v34 = &v21;
  v35 = 0;
  v18 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)&v18);
  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                         (LockScreenDirectorServiceProviderImpl *)this,
                         &v15);
  v5 = LockScreenDirector;
  if ( LockScreenDirector < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)LockScreenDirector);
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_9;
  }
  v6 = v15;
  if ( !dword_1808CB298 )
  {
    if ( v15 )
      goto LABEL_4;
    dword_1808CB298 = 1;
    if ( *((_BYTE *)this + 160)
      || (started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)this),
          v5 = started,
          started >= 0) )
    {
      dwindex = 0;
      pHandles = this[17];
      v13 = CoWaitForMultipleHandles(0x18u, 0x1388u, 1u, &pHandles, &dwindex);
      v5 = v13;
      if ( v13 >= 0 )
      {
        if ( dwindex )
        {
          v12 = 152LL;
LABEL_23:
          v5 = -2147418113;
          v11 = 2147549183LL;
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        v14 = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                (LockScreenDirectorServiceProviderImpl *)this,
                &v15);
        v5 = v14;
        if ( v14 >= 0 )
        {
          v6 = v15;
          goto LABEL_3;
        }
        v11 = (unsigned int)v14;
        v12 = 153LL;
      }
      else
      {
        v11 = (unsigned int)v13;
        v12 = 151LL;
      }
    }
    else
    {
      v11 = (unsigned int)started;
      v12 = 144LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::~LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)&v18);
    return v5;
  }
LABEL_3:
  if ( !v6 )
  {
    v12 = 157LL;
    goto LABEL_23;
  }
LABEL_4:
  (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v6 + 8LL))(v6);
  *a2 = v15;
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v18);
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v5 = 0;
LABEL_9:
  v18 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v18);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v32);
  wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v31);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>(&v19);
  return v5;
}
