/*
 * XREFs of DpiRequestDeviceDirectedPowerIrp @ 0x14007C78C
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x140065E78 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     DpiRequestDevicePowerIrp @ 0x14002B338 (DpiRequestDevicePowerIrp.c)
 */

NTSTATUS __fastcall DpiRequestDeviceDirectedPowerIrp(__int64 a1, POWER_STATE a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( a2.SystemState == PowerSystemSleeping3 )
    *(_BYTE *)(v2 + 4296) = 1;
  return DpiRequestDevicePowerIrp(v2, a2);
}
