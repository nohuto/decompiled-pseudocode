/*
 * XREFs of DpiPdoEnableDisableConnectSound @ 0x140254F40
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1403B44D0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoEnableDisableConnectSound(struct _DEVICE_OBJECT *a1, char a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // eax
  char Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  if ( !*((_BYTE *)a1->DeviceExtension + 944) )
  {
    v2 = -1073741661;
    WdLogSingleEntry1(2LL, -1073741661LL);
    WdLogGlobalForLineNumber = 2606;
    return v2;
  }
  Data = -1;
  v4 = IoSetDevicePropertyData(a1, &DEVPKEY_Device_NoConnectSound, 0, 0, 0x11u, 1u, &Data);
  v2 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 2623;
    return v2;
  }
  return 0LL;
}
