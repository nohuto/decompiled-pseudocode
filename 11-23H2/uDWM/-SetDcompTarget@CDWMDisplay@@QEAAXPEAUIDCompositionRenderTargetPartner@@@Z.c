/*
 * XREFs of ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002ABC4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B50B4 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B5234 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplay::SetDcompTarget(CDWMDisplay *this, struct IDCompositionRenderTargetPartner *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)a2 + 8LL))(a2);
}
