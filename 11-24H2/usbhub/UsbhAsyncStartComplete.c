/*
 * XREFs of UsbhAsyncStartComplete @ 0x14004F0A4
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051480 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 */

__int64 __fastcall UsbhAsyncStartComplete(_QWORD *Tag)
{
  _DWORD *v2; // rdi
  int v3; // ebx

  v2 = FdoExt(Tag[1]);
  Log(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v3 = UsbhFinishStart(Tag[1], (__int64)Tag);
  UsbhDispatch_BusEvent((struct _DEVICE_OBJECT *)Tag[1], (__int64)Tag, ((v3 >> 31) & 4) + 5);
  *((_QWORD *)v2 + 639) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v2 + 644), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 306), Tag, 0x20u);
  return (unsigned int)v3;
}
