/*
 * XREFs of GET_FDO_POWER_STATE @ 0x14002120C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x14001FF70 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x14002E010 (UsbhFdoWakePoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[1043];
}
