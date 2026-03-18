/*
 * XREFs of USBD_UrbAllocate @ 0x14002347C
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1400027F0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14002D9BC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140030320 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x14009DAE8 (-AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FC20 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall USBD_UrbAllocate(USBD_HANDLE__ *USBDHandle, _URB **Urb)
{
  __int64 (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // ebx
  _URB *PoolWithTag; // rax
  void (__fastcall *v8)(_QWORD); // rax

  if ( USBDHandle )
  {
    if ( Urb )
    {
      if ( *((_BYTE *)USBDHandle + 225) )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
      }
      else
      {
        if ( *((int *)USBDHandle + 55) >= 1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)USBDHandle + 55);
          v4 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 15);
          if ( v4 )
          {
            v5 = v4(*((_QWORD *)USBDHandle + 6));
          }
          else
          {
            PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0x98uLL, *((_DWORD *)USBDHandle + 16));
            *Urb = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, sizeof(_URB));
              v5 = 0;
            }
            else
            {
              if ( g_EnableDbgPrints )
                DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate URB\n");
              v5 = -1073741670;
            }
          }
          if ( (v5 & 0x80000000) == 0 )
            return v5;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
          {
            if ( *((_BYTE *)USBDHandle + 225) )
            {
              v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
              if ( v8 )
                v8(*((_QWORD *)USBDHandle + 6));
              ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
            }
            else if ( g_EnableDbgPrints )
            {
              DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
            }
          }
LABEL_34:
          *Urb = 0LL;
          return v5;
        }
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
      }
      v5 = -1073741436;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
      goto LABEL_34;
    }
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    v5 = -1073741811;
    if ( Urb )
      goto LABEL_34;
  }
  return v5;
}
