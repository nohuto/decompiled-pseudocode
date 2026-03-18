/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x14004B1E0
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002CEA0 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x140016DA8 (UsbhEtwLogDevicePowerEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleasePowerContext @ 0x140039070 (UsbhReleasePowerContext.c)
 *     UsbhPdoSetD0_Finish @ 0x14004AFF4 (UsbhPdoSetD0_Finish.c)
 */

void __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  struct _DEVICE_OBJECT *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-18h]

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 48);
  v7 = PdoExt((__int64)v6);
  v8 = *(_QWORD *)(a3 + 64);
  v9 = (__int64)v7;
  v10 = *(_QWORD *)(v8 + 184);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6, v8);
  *(_QWORD *)(v9 + 2560) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v11, *(_QWORD **)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  LODWORD(v12) = 0;
  UsbhEtwLogDevicePowerEvent(
    v9,
    *(_QWORD *)(a3 + 64),
    &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
    *(_DWORD *)(v10 + 24),
    v12);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount((ULONG_PTR)v6, *(_QWORD *)(a3 + 64));
  UsbhReleasePowerContext(a1, a3);
}
