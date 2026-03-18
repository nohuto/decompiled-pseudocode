/*
 * XREFs of UsbhPdoPower_WaitWake @ 0x14001C2A0
 * Callers:
 *     UsbhPdoPowerWorkerInternal @ 0x140033EE4 (UsbhPdoPowerWorkerInternal.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x14001BFB0 (UsbhIncPdoIoCount.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14001C918 (UsbhEtwLogDeviceIrpEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhPdoPower_WaitWake(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v4; // rdi
  signed __int32 v5; // ebp
  unsigned int v6; // esi

  v4 = PdoExt(BugCheckParameter3);
  FdoExt(*((_QWORD *)v4 + 148));
  UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_DISPATCH, 0LL);
  v5 = _InterlockedIncrement(v4 + 588);
  v6 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 2004308036, 0);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
LABEL_3:
    _InterlockedDecrement(v4 + 588);
    return v6;
  }
  if ( (v4[355] & 0x100) == 0 )
  {
    v6 = -1073741637;
LABEL_8:
    UsbhEtwLogDeviceIrpEvent(v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    goto LABEL_3;
  }
  if ( v5 )
  {
    v6 = -2147483631;
    goto LABEL_8;
  }
  BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Log(*((_QWORD *)v4 + 148), 16, 2004306249, 0, (__int64)BugCheckParameter4);
  IoCsqInsertIrp((PIO_CSQ)(v4 + 570), BugCheckParameter4, 0LL);
  return 259LL;
}
