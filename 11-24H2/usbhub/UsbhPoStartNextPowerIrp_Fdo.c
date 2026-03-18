/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x14002E360 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x140049940 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoDevicePowerState @ 0x140049BC8 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x140049F50 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x14004A160 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoPower_SetPower @ 0x14004A250 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x14004A310 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQuerySystemPowerState @ 0x14004A3B4 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004A4F0 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 *     UsbhFdoSetPowerD0_Action @ 0x14004A5E0 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004A940 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11

  v6 = FdoExt(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  v9 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v9 <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v8[2 * v9 + 210], (__int64)a2);
    Log(a1, 16, 1347374642, *(_QWORD *)(v11 + 8 * v10 + 856), CurrentStackLocation);
    *(_QWORD *)(v13 + 8 * v12 + 840) = 0LL;
    *(_QWORD *)(v13 + 8 * v12 + 856) = 0LL;
    *(_DWORD *)(v13 + 4 * v12 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
