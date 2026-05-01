/*
 * XREFs of ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180530240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180120250 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802C97F4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802C97F4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x18052F188 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?InitAppLayout@AppResizeView@@AEAAJXZ @ 0x18052F718 (-InitAppLayout@AppResizeView@@AEAAJXZ.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F7CC (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F8D0 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x1805303F4 (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180535380 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::Show(AppResizeView *this, const struct tagPOINT *a2)
{
  AppResizeView *v3; // rsi
  int inited; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  const struct _GUID *v9; // rcx
  struct IAppLayout *v10; // rbx
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v12[42]; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v13[42]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  *(struct tagPOINT *)v11 = *a2;
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)v11;
  v3 = (AppResizeView *)((char *)this - 24);
  *(struct tagPOINT *)v11 = *a2;
  inited = AppResizeView::InitAppLayout((AppResizeView *)((char *)this - 24));
  v5 = inited;
  if ( inited < 0 )
  {
    v6 = 323LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)inited);
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  inited = AppResizeView::InitDropFeedback(v3, (const struct Geometry::CPoint *)v11);
  v5 = inited;
  if ( inited < 0 )
  {
    v6 = 324LL;
    goto LABEL_3;
  }
  v7 = AppResizeView::InitAppResizeData(v3, (const struct Geometry::CPoint *)v11);
  v5 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v7);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( !*((_QWORD *)this + 7) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    if ( AppResizeAcc_CreateInstance(v9, (void **)this + 7) >= 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7));
  }
  v10 = (struct IAppLayout *)*((_QWORD *)this + 6);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"TMAppResize");
  v12[0] = (volatile signed __int32 *)&TabletModeTelemetry::TMAppResize::`vftable';
  TabletModeTelemetry::TMAppResize::StartActivity((TabletModeTelemetry::TMAppResize *)v12, v10);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)this + 128);
  v13[0] = (volatile signed __int32 *)&TabletModeTelemetry::TMAppResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 128,
    (__int64)v12);
  TabletModeTelemetry::TMAppResize::~TMAppResize(v13);
  TabletModeTelemetry::TMAppResize::~TMAppResize(v12);
  return 0LL;
}
