/*
 * XREFs of UsbhFdoPower_PowerFailureEntry @ 0x14002E74C
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x14002E360 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x140049940 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x14004A940 (UsbhFdoSxIoComplete_Action.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140014368 (UsbhDisarmHubForWakeDetect.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x140028C70 (UsbhBusIoInvalidateDeviceRelations.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002CEA0 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     UsbhReleasePowerContext @ 0x140039070 (UsbhReleasePowerContext.c)
 */

void __fastcall UsbhFdoPower_PowerFailureEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v9; // r8
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v5 = a3;
  v7 = FdoExt(a1);
  UsbhException(a1, 0LL, 85LL, &v10, 4u, v5, 0, usbfile_fdopwr_c, 1027, 0);
  v7[315] = v5;
  v8 = Usb_Disconnected(v5);
  v9 = 213LL;
  if ( !v8 )
    v9 = 212LL;
  UsbhSetFdoPowerState(a1, (unsigned int)v5, v9);
  Log(a1, 16, 1934645025, v5, 0LL);
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhReleaseFdoPwrLock(a1, *(_QWORD *)(a4 + 72));
  UsbhBusIoInvalidateDeviceRelations(a1, *(_QWORD *)(a4 + 72));
  UsbhReleasePowerContext(a1, a4);
  UsbhDisarmHubForWakeDetect(a1);
}
