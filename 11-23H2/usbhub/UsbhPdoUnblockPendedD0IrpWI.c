/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x1C001A910
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C00212F4 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0008330 (UsbhEtwLogDevicePowerEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001AA00 (UsbhPdoSetD0_Finish.c)
 *     UsbhReleasePowerContext @ 0x1C001BA68 (UsbhReleasePowerContext.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // rdx

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(_QWORD *)(v5 + 48);
  v7 = PdoExt(v6);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6, *(_QWORD *)(a3 + 64));
  *((_QWORD *)v7 + 320) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v8, *(_QWORD **)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  UsbhEtwLogDevicePowerEvent((__int64)v7, *(_QWORD *)(a3 + 64), &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount(v6, *(_QWORD *)(a3 + 64));
  return UsbhReleasePowerContext(a1, a3);
}
