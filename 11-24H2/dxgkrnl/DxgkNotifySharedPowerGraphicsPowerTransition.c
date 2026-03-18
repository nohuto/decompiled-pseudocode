/*
 * XREFs of DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1402CB2B4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1402CB2F8 (-NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsPowerTransition(void *a1, enum _DEVICE_POWER_STATE a2, unsigned __int8 a3)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(Global, a1, a2, a3);
}
