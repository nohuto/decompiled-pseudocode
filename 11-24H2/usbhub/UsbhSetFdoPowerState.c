/*
 * XREFs of UsbhSetFdoPowerState @ 0x14002F344
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x14002E010 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002E360 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoD0PoComplete_Action @ 0x140049940 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x140049BC8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x140049F50 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x14004A6B0 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x14004A7E8 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004A940 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

_DWORD *__fastcall UsbhSetFdoPowerState(__int64 a1, int a2, int a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // r10
  int v9; // ecx

  result = FdoExt(a1);
  v8 = ((unsigned __int8)result[207] + 1) & 7;
  result[207] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)result + v8 + 284) = a4;
  v9 = result[1043];
  *(_DWORD *)((char *)result + v8 + 292) = a3;
  *(_DWORD *)((char *)result + v8 + 288) = v9;
  *(_DWORD *)((char *)result + v8 + 296) = a2;
  result[1043] = a3;
  return result;
}
