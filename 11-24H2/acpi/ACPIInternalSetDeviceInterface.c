/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1400507B8
 * Callers:
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDeviceWorker @ 0x140065D40 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIButtonStartDevice @ 0x140098110 (ACPIButtonStartDevice.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIInternalStoreInterfaceName @ 0x1400565AC (ACPIInternalStoreInterfaceName.c)
 *     RtlUnicodeStringInitWorker @ 0x140061CE8 (RtlUnicodeStringInitWorker.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  bool v2; // zf
  _QWORD *DeviceExtension; // rbx
  NTSTATUS v6; // edi
  const char *v7; // rax
  char v8; // r10
  const char *v9; // r8
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  wchar_t *Pool2; // rax
  const wchar_t *v13; // rdi
  size_t v14; // r8
  ULONG v15; // r9d
  __int64 v16; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-10h] BYREF

  v2 = *(_QWORD *)&InterfaceClassGuid->Data1 == *(_QWORD *)&GUID_ACPI_ROOT_DEVICE_UUID.Data1;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  if ( v2 && *(_QWORD *)InterfaceClassGuid->Data4 == *(_QWORD *)GUID_ACPI_ROOT_DEVICE_UUID.Data4 )
    DeviceExtension = (_QWORD *)RootDeviceExtension;
  else
    DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  if ( v6 >= 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, SymbolicLinkName.MaximumLength, 1399874369LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, SymbolicLinkName.Buffer, SymbolicLinkName.MaximumLength);
      if ( RtlUnicodeStringInitWorker(&DestinationString, v13, v14, v15) < 0 )
      {
        *(_DWORD *)&DestinationString.Length = 0;
        DestinationString.Buffer = 0LL;
      }
      v6 = IoSetDeviceInterfaceState(&DestinationString, 1u);
      if ( v6 >= 0 )
      {
        ACPIInternalStoreInterfaceName(InterfaceClassGuid, &DestinationString, DeviceExtension);
      }
      else
      {
        v7 = byte_1400753E8;
        v8 = 0;
        v9 = byte_1400753E8;
        if ( DeviceExtension )
        {
          v16 = DeviceExtension[1];
          v8 = (char)DeviceExtension;
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v7 = (const char *)DeviceExtension[76];
            if ( (v16 & 0x400000000000LL) != 0 )
              v9 = (const char *)DeviceExtension[77];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 14;
          goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    v7 = byte_1400753E8;
    v8 = 0;
    v9 = byte_1400753E8;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v7 = (const char *)DeviceExtension[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
LABEL_12:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        v11,
        (__int64)&WPP_9e686de552473f0b161fad9208bd891d_Traceguids,
        v6,
        v8,
        v7,
        v9);
    }
  }
  if ( SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v6 < 0 && DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
