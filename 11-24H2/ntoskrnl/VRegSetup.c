/*
 * XREFs of VRegSetup @ 0x140829940
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspStorageAllocSlot @ 0x14077C298 (PspStorageAllocSlot.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x14082A468 (VrpInitializeLoadedDifferencingHives.c)
 *     ObSetSecurityObjectByPointer @ 0x140854A90 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall VRegSetup(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-49h] BYREF
  __int16 Src; // [rsp+60h] [rbp-39h] BYREF
  char v11; // [rsp+62h] [rbp-37h]
  int v12; // [rsp+68h] [rbp-31h]
  int v13; // [rsp+6Ch] [rbp-2Dh]
  int v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+74h] [rbp-25h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  int v18; // [rsp+84h] [rbp-15h]
  int v19; // [rsp+88h] [rbp-11h]
  __int64 (__fastcall *v20)(); // [rsp+A8h] [rbp+Fh]

  DestinationString = 0LL;
  SourceString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E0A620, 0LL, 0LL);
  RtlpQueryRegistryValues(
    -2147483646,
    (int)L"Session Manager\\Configuration Manager",
    (int)&VrpRegistryValuesTable,
    0,
    DeviceCharacteristics,
    1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &VrpDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  VrpActiveSilosLock = 0LL;
  VrpDriverObject = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer(VrpDeviceObject, 12LL, &VrpHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  VrpDeviceObject->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)VrpRegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)&VrpIoctlDeviceDispatch;
  RtlInitUnicodeString(&SourceString, L"VRegConfigurationContext");
  memset_0(&Src, 0, 0x78uLL);
  v11 |= 4u;
  Src = 120;
  v13 = 0x20000;
  v14 = 0x20000;
  v15 = 0x20000;
  v12 = 256;
  v16 = 983040;
  v17 = 983040;
  v20 = VrpJobContextDelete;
  v18 = 1;
  v19 = 96;
  v4 = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&VrpJobContextType);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot((ULONG *)&VrpSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
