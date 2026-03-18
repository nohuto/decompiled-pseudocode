/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x14002F2EC
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x14000C4F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x14001FF70 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x14002E010 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002E360 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPdoSystemPowerState @ 0x14002E904 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoD0PoComplete_Action @ 0x140049940 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x140049BC8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x140049F50 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x14004A6B0 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x14004A7E8 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004A940 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x14004AFF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 32) = 1734964085;
  *((_QWORD *)v3 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 632, *((_BYTE *)v3 + 5064));
}
