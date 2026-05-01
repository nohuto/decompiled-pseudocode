/*
 * XREFs of ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180324B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180323D84 (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180325800 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180325A48 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::HandleRecoveryForView(
        struct IImmersiveMonitor **this,
        struct IApplicationView *a2)
{
  HWND ForegroundWindow; // rbp
  struct IImmersiveMonitor *v5; // rdi
  void (__fastcall *v6)(struct IImmersiveMonitor *, HWND, struct IUnknown **); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  FullScreenPositioner::SetPositionerMonitor(a2, this[12]);
  v10 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v10) >= 0 && v10 )
  {
    v11 = 0LL;
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow )
    {
      v5 = this[10];
      v6 = *(void (__fastcall **)(struct IImmersiveMonitor *, HWND, struct IUnknown **))(*(_QWORD *)v5 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
      v6(v5, ForegroundWindow, &v11);
    }
    v7 = FullScreenPositioner::AddView((FullScreenPositioner *)(this - 15), a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x282,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
    if ( SHIsSameObject((struct IUnknown *)a2, v11) )
      FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(this - 15), a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
