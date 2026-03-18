/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1401CE634
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140053624 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401CEAC4 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkEnableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableStablePowerState(Global);
}
