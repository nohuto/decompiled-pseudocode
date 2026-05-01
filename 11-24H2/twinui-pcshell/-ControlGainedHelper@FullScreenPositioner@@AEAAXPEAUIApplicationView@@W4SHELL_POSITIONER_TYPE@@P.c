/*
 * XREFs of ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180324270
 * Callers:
 *     ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180323F30 (-ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180323FD0 (-ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180324D00 (-InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180323D84 (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x180323DD4 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180324FB0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180325800 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180325A48 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ControlGainedHelper(
        FullScreenPositioner *a1,
        struct IApplicationView *a2,
        int a3,
        struct IPresentationRequestedArgs *a4,
        __int64 a5)
{
  int v9; // eax
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, struct IImmersiveMonitor **); // rbx
  int v12; // eax
  FullScreenPositioner *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v17; // [rsp+68h] [rbp+48h] BYREF
  int v18; // [rsp+70h] [rbp+50h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+78h] [rbp+58h] BYREF

  v18 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v18);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x430,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
  v19 = 0LL;
  v10 = a5;
  if ( !a5 || v18 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v19, (_QWORD *)a1 + 27);
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)a5 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v12 = v11(v10, &v19);
    v13 = retaddr;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x435,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v12);
  }
  if ( a4 )
    FullScreenPositioner::ApplyPresentationChanges(v13, a2, a4);
  FullScreenPositioner::SetPositionerMonitor(a2, v19);
  if ( a3 != 4 )
  {
    v14 = FullScreenPositioner::AddView(a1, a2);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44B,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v14);
  }
  FullScreenPositioner::PositionView(a1, a2, 0LL);
  v17 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v17) >= 0 && v17 )
    FullScreenPositioner::SetVisibleView(a1, a2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
}
