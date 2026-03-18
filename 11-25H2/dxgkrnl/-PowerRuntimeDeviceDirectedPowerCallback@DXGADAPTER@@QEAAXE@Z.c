/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1400662F8
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x14006B090 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x14006B0E0 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x14002AB98 (DpiRequestDevicePowerIrp.c)
 *     DpiRequestDeviceDirectedPowerIrp @ 0x14007C2EC (DpiRequestDeviceDirectedPowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1401B6C98 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, unsigned __int8 a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rcx

  WdLogSingleEntry1(9LL, a2);
  WdLogGlobalForLineNumber = 1307;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::SetDFxEngaged(Global, a2 == 0);
  v5 = *((_QWORD *)this + 27);
  if ( a2 )
    DpiRequestDevicePowerIrp(*(_QWORD *)(v5 + 64), (POWER_STATE)1);
  else
    DpiRequestDeviceDirectedPowerIrp(v5, 4LL);
}
