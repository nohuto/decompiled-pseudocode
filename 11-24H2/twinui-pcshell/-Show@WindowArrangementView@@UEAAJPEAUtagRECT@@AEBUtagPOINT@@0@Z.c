/*
 * XREFs of ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180120250 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802C97F4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802C97F4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea__&_ @ 0x180529918 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea__-_.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x180529F54 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052BF50 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052D26C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x18052D5C8 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::Show(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  char *v5; // rbx
  int v6; // eax
  volatile int *v7; // rdx
  unsigned int v8; // edi
  volatile int *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // r8
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // esi
  struct IApplicationView *v17; // rdi
  struct IAppLayout *v18; // rbx
  int v19[2]; // [rsp+20h] [rbp-E0h] BYREF
  char *v20; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v22[42]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v5 = (char *)this - 24;
  v6 = WindowArrangementView::ShowView((WindowArrangementView *)((char *)this - 24), a2, a3, a4);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v6);
    return v8;
  }
  if ( *((_DWORD *)this + 66) == 2 )
  {
    v20 = v5;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v20, v7);
    *(_QWORD *)v19 = v5;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)v19, v10);
    v14 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea____(
            v12,
            v11,
            v13,
            v19);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v19);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v20);
      return v15;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v20);
  }
  if ( *((_DWORD *)this + 67) == 3 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
  v16 = *((_DWORD *)this + 67);
  v17 = (struct IApplicationView *)*((_QWORD *)this + 8);
  v18 = (struct IAppLayout *)*((_QWORD *)this + 12);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TMAppArrange");
  v21[0] = (volatile signed __int32 *)&TabletModeTelemetry::TMAppArrange::`vftable';
  TabletModeTelemetry::TMAppArrange::StartActivity((TabletModeTelemetry::TMAppArrange *)v21, v18, v17, v16);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)this + 304);
  v22[0] = (volatile signed __int32 *)&TabletModeTelemetry::TMAppArrange::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 304,
    (__int64)v21);
  TabletModeTelemetry::TMAppArrange::~TMAppArrange(v22);
  TabletModeTelemetry::TMAppArrange::~TMAppArrange(v21);
  return 0LL;
}
