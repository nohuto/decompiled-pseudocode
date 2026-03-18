/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x140065E78
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x14006ACB0 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x14006AD00 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x14002B338 (DpiRequestDevicePowerIrp.c)
 *     DpiRequestDeviceDirectedPowerIrp @ 0x14007C78C (DpiRequestDeviceDirectedPowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1401B9248 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, unsigned __int8 a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rcx

  WdLogSingleEntry1(9LL, a2);
  WdLogGlobalForLineNumber = 1364;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::SetDFxEngaged(Global, a2 == 0);
  v5 = *((_QWORD *)this + 27);
  if ( a2 )
    DpiRequestDevicePowerIrp(*(_QWORD *)(v5 + 64), (POWER_STATE)1);
  else
    DpiRequestDeviceDirectedPowerIrp(v5, 4LL);
}
