/*
 * XREFs of USBD_UrbFree @ 0x140066D7C
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x14001F5F8 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x14004D250 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x140062DA8 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?Dispose@FxUsbDeviceControlContext@@UEAAXXZ @ 0x140066C50 (-Dispose@FxUsbDeviceControlContext@@UEAAXXZ.c)
 *     ?Dispose@FxUsbDeviceStringContext@@UEAAXXZ @ 0x140066CA0 (-Dispose@FxUsbDeviceStringContext@@UEAAXXZ.c)
 *     ?Dispose@FxUsbUrb@@MEAAEXZ @ 0x140066CF0 (-Dispose@FxUsbUrb@@MEAAEXZ.c)
 *     ?Dispose@FxUsbPipeTransferContext@@UEAAXXZ @ 0x140066D30 (-Dispose@FxUsbPipeTransferContext@@UEAAXXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?Dispose@FxUsbPipeRequestContext@@UEAAXXZ @ 0x14007F960 (-Dispose@FxUsbPipeRequestContext@@UEAAXXZ.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x14009E840 (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall USBD_UrbFree(USBD_HANDLE__ *USBDHandle, _URB *Urb)
{
  void (__fastcall *v4)(_URB *); // rdx
  void (__fastcall *v5)(_QWORD); // rax

  if ( Urb )
  {
    if ( USBDHandle )
    {
      v4 = (void (__fastcall *)(_URB *))*((_QWORD *)USBDHandle + 19);
      if ( v4 )
        v4(Urb);
      else
        ExFreePoolWithTag(Urb, *((_DWORD *)USBDHandle + 16));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
      {
        if ( *((_BYTE *)USBDHandle + 225) )
        {
          v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
          if ( v5 )
            v5(*((_QWORD *)USBDHandle + 6));
          ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
        }
        else if ( g_EnableDbgPrints )
        {
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
        }
      }
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    }
  }
  else if ( g_EnableDbgPrints )
  {
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  }
}
