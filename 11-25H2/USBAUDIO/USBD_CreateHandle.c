/*
 * XREFs of USBD_CreateHandle @ 0x140019DFC
 * Callers:
 *     USBHwGetOffloadCapability @ 0x140035960 (USBHwGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035E44 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1400195B8 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140019A0C (USBDInternal_QueryUsbVerifierSettings.c)
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     memset @ 0x14001CA40 (memset.c)
 */

NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  char v5; // bl
  char v6; // r12
  NTSTATUS v10; // edi
  POOL_TYPE v11; // ecx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v13; // rsi
  int InterfaceSynchronously; // eax
  int v15; // eax
  int v17; // eax
  bool v18; // zf
  void (__fastcall *v19)(_QWORD); // rax
  _QWORD v21[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !KeGetCurrentIrql() )
  {
    if ( byte_14002769C
      || (PoolType = NonPagedPool,
          memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL),
          VersionInformation.dwOSVersionInfoSize = 284,
          RtlGetVersion(&VersionInformation) < 0)
      || VersionInformation.dwMajorVersion <= 6
      && (VersionInformation.dwMajorVersion != 6 || VersionInformation.dwMinorVersion < 2) )
    {
      v11 = PoolType;
    }
    else
    {
      v11 = 512;
      PoolType = 512;
    }
    byte_14002769C = 1;
    if ( !DeviceObject )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_18:
      v10 = -1073741811;
      goto LABEL_19;
    }
    if ( !TargetDeviceObject )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
      goto LABEL_18;
    }
    if ( !USBDHandle )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
      return -1073741811;
    }
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(v11, 0xE8uLL, PoolTag);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v10 = -1073741670;
      goto LABEL_55;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)(v13 + 2), PoolTag);
    *(_DWORD *)v13 = 1145197397;
    *((_WORD *)v13 + 5) = 1539;
    *((_WORD *)v13 + 4) = 200;
    *((_DWORD *)v13 + 54) = 1539;
    *((_DWORD *)v13 + 10) = 1538;
    *((_QWORD *)v13 + 7) = DeviceObject;
    *((_DWORD *)v13 + 16) = PoolTag;
    *((_QWORD *)v13 + 9) = v13;
    *((_QWORD *)v13 + 26) = TargetDeviceObject;
    *((_DWORD *)v13 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (ULONG_PTR)&GUID_USBD_INTERFACE,
                               (USHORT *)v13 + 4);
    v10 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_DWORD *)v13 + 2) = 100794520;
      *((_DWORD *)v13 + 54) = 1538;
      v17 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (ULONG_PTR)&GUID_USBD_INTERFACE,
              (USHORT *)v13 + 4);
      v10 = v17;
      if ( v17 < 0 )
      {
        v18 = g_EnableDbgPrints == 0;
        *((_DWORD *)v13 + 54) = 1536;
        if ( !v18 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v17);
        v10 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      *((_DWORD *)v13 + 54) = *((unsigned __int16 *)v13 + 5);
    }
    v6 = 1;
LABEL_32:
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v13);
    if ( *((_DWORD *)v13 + 54) == 1536 )
    {
      memset(v21, 0, 0x48uLL);
      LODWORD(v21[0]) = 65608;
      v15 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID,
              (USHORT *)v21);
      v10 = v15;
      if ( v15 >= 0 )
      {
        if ( v21[8] )
          v5 = ((__int64 (__fastcall *)(_QWORD))v21[8])(v21[1]);
        *((_BYTE *)v13 + 224) = v5;
        ((void (__fastcall *)(_QWORD))v21[3])(v21[1]);
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(
            0x4Du,
            0,
            "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
            TargetDeviceObject,
            v15);
        *((_DWORD *)v13 + 54) = -1;
        v10 = 0;
      }
    }
    else if ( v10 < 0 )
    {
      if ( v6 )
      {
        v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)v13 + 14);
        if ( v19 )
          v19(*((_QWORD *)v13 + 6));
      }
      ExFreePoolWithTag(v13, PoolTag);
      goto LABEL_55;
    }
    *USBDHandle = v13;
    return v10;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Irql Too High\n");
  v10 = -1073741496;
LABEL_19:
  if ( USBDHandle )
LABEL_55:
    *USBDHandle = 0LL;
  return v10;
}
