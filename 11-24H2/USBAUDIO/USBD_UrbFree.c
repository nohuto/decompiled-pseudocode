/*
 * XREFs of USBD_UrbFree @ 0x140019B50
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

void __stdcall USBD_UrbFree(USBD_HANDLE USBDHandle, PURB Urb)
{
  void (__fastcall *v4)(PURB); // rdx
  void (__fastcall *v5)(_QWORD); // rax

  if ( Urb )
  {
    if ( USBDHandle )
    {
      v4 = (void (__fastcall *)(PURB))*((_QWORD *)USBDHandle + 19);
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
