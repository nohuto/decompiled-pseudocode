/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1401CE5CC
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140053624 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401CE4E0 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkDisableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::DisableStablePowerState(Global);
}
