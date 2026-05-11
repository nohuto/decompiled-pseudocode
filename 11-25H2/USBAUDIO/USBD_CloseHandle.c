/*
 * XREFs of USBD_CloseHandle @ 0x140019D7C
 * Callers:
 *     USBHwGetOffloadCapability @ 0x140035960 (USBHwGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035E44 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

void __stdcall USBD_CloseHandle(USBD_HANDLE USBDHandle)
{
  void (__fastcall *v2)(_QWORD); // rax

  *((_BYTE *)USBDHandle + 225) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)USBDHandle + 225) )
    {
      v2 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
      if ( v2 )
        v2(*((_QWORD *)USBDHandle + 6));
      ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
    }
  }
}
