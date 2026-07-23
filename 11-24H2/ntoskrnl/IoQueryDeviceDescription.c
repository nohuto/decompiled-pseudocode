/*
 * XREFs of IoQueryDeviceDescription @ 0x1409CDEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  int BusDescription; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-69h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v13[8]; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING v14; // [rsp+C0h] [rbp+27h] BYREF
  int v15; // [rsp+E0h] [rbp+47h] BYREF

  v15 = -1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  if ( !BusType )
    return -1073741822;
  v13[4] = PeripheralType;
  v13[5] = PeripheralNumber;
  v13[6] = CalloutRoutine;
  v13[0] = BusType;
  v13[1] = BusNumber;
  v13[2] = ControllerType;
  v13[7] = Context;
  v13[3] = ControllerNumber;
  *(_DWORD *)&Destination.Length = 0x8000000;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, 0x800uLL, 0x4E526F49u);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineHardwareDescriptionSystemName);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &Destination;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  BusDescription = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( BusDescription >= 0 )
  {
    v14 = Destination;
    BusDescription = pIoQueryBusDescription(
                       (unsigned int)v13,
                       (unsigned int)&v14,
                       (_DWORD)KeyHandle,
                       (unsigned int)&v15,
                       1);
    ZwClose(KeyHandle);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( BusDescription == -2147483622 )
    return -1073741772;
  return BusDescription;
}
