/*
 * XREFs of UsbDevice_EvtUsbDeviceCleanupCallback @ 0x14001D530
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RemoveDeviceFromControllerDeviceList @ 0x14001D620 (Controller_RemoveDeviceFromControllerDeviceList.c)
 *     Etw_DeviceDelete @ 0x14001D70C (Etw_DeviceDelete.c)
 *     WPP_RECORDER_SF_dqqq @ 0x14001D89C (WPP_RECORDER_SF_dqqq.c)
 *     XilUsbDevice_FreeResources @ 0x14001DD7C (XilUsbDevice_FreeResources.c)
 *     XilUsbDevice_DestroySecureObject @ 0x14004D58C (XilUsbDevice_DestroySecureObject.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B128);
  v5 = result;
  if ( *(_QWORD *)result == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(_QWORD *)((*(_BYTE *)(result + 665) != 0 ? 8 : 0) + result + 648);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 16);
      else
        LODWORD(v7) = 0;
      WPP_RECORDER_SF_dqqq(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v7, v3, v4);
    }
    if ( *(_BYTE *)(v5 + 665) )
      XilUsbDevice_DestroySecureObject(v5 + 616);
    XilUsbDevice_FreeResources(v5 + 616);
    if ( *(_QWORD *)(v5 + 80) || *(_QWORD *)(v5 + 88) )
      Controller_RemoveDeviceFromControllerDeviceList(*(_QWORD *)(v5 + 8), *(_QWORD *)v5);
    return Etw_DeviceDelete(v8, v5);
  }
  return result;
}
