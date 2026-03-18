/*
 * XREFs of DrvpGetDeviceInterfaceName @ 0x14011C800
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvpGetDeviceInterfaceName(PDEVICE_OBJECT PhysicalDeviceObject, __int64 a2, __int64 a3, wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // eax
  unsigned int v7; // ebx
  wchar_t *v8; // rcx
  wchar_t *Src; // [rsp+38h] [rbp+10h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, PhysicalDeviceObject, 0, &Src);
  v7 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    WdLogSingleEntry2(3LL, PhysicalDeviceObject, DeviceInterfaces);
    WdLogGlobalForLineNumber = 18815;
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v8, 0);
  }
  return v7;
}
