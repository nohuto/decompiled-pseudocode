/*
 * XREFs of PopDiagQueryDevicePropertyString @ 0x140A86280
 * Callers:
 *     PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x140763B64 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140A55D28 (PopDiagTraceFxComponentAccounting.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopDiagQueryDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rdi
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0;
  ResultLength[0] = 0;
  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, &BufferLength);
  if ( v6 == -1073741789 )
  {
    if ( BufferLength > 0xFFFF )
    {
      return (unsigned int)-2147483643;
    }
    else
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, BufferLength, 0x67696450u);
      if ( Pool2 )
      {
        v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, Pool2, ResultLength);
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
        else
        {
          *(_WORD *)a3 = ResultLength[0];
          *(_WORD *)(a3 + 2) = BufferLength;
          *(_QWORD *)(a3 + 8) = Pool2;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v6;
}
