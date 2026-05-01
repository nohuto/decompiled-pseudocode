/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180086980
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180086B88 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180086D64 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180086E14 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800873AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800874EC (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800874EC.c)
 *     ?SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x180087520 (-SetDesiredSystemVisual@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEAV2@W4FRAME_SYST.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180087664 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto_ea_180087664.c)
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x180087708 (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     WPP_SF_Ld @ 0x1800B2480 (WPP_SF_Ld.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802C4FF4 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  bool v7; // di
  char v8; // r15
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  bool v11; // [rsp+3Ch] [rbp-C4h]
  char v12; // [rsp+3Dh] [rbp-C3h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  void **v14; // [rsp+48h] [rbp-B8h] BYREF
  void **v15; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v16[272]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v17[8]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v18[48]; // [rsp+2C0h] [rbp+1C0h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      15LL,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      a2,
      *(_DWORD *)(a1 + 48));
  }
  v4 = *(_QWORD *)(a1 + 616);
  v5 = *(_QWORD **)(a1 + 112);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v15);
  v15 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFramePresentationTelemetry::SetSystemVisual::StartActivity(&v15, *(unsigned int *)(a1 + 48), *v5, a2, v4);
  v6 = **(_QWORD **)(a1 + 104);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 208LL))(v6, *(_QWORD *)(a1 + 128), 3LL);
  if ( *(_DWORD *)(a1 + 220) != 1 || a2 == 1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 52) != 0;
    if ( *(_DWORD *)(a1 + 568) == 1 )
    {
      v8 = 1;
      goto LABEL_7;
    }
  }
  v8 = 0;
LABEL_7:
  CFrameApplicationPresentation::FrameSystemVisual::SetDesiredSystemVisual(a1 + 216, a1, a2);
  if ( *(_BYTE *)(a1 + 52) && a2 == 1 && *(_DWORD *)(a1 + 220) != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 0LL);
  v10 = a2;
  v11 = v7;
  v12 = v8;
  v13 = a1;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    &v14,
    &v15);
  v14 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___(a1, &v10);
  v15 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v15);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v18);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v17);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v16);
  return 0LL;
}
