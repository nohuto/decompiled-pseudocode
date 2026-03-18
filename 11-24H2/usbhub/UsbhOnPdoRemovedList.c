/*
 * XREFs of UsbhOnPdoRemovedList @ 0x140046FBC
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFindListPdo @ 0x140045FD8 (UsbhFindListPdo.c)
 */

char __fastcall UsbhOnPdoRemovedList(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  v4 = FdoExt(a1);
  return UsbhFindListPdo(a1, a2, (_QWORD *)v4 + 603);
}
