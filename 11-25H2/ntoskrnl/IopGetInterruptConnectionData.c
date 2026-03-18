/*
 * XREFs of IopGetInterruptConnectionData @ 0x1409A2354
 * Callers:
 *     IopConnectLineBasedInterrupt @ 0x1409A1CD0 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x1409A2060 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1409A30BC (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1409A2450 (IoGetDevicePropertyData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetInterruptConnectionData(PDEVICE_OBJECT Pdo, _QWORD *a2)
{
  NTSTATUS result; // eax
  _DWORD *Data; // rbx
  NTSTATUS DevicePropertyData; // edi
  ULONG RequiredSize; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  RequiredSize = 0;
  Type = 0;
  result = IoGetDevicePropertyData(Pdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0, 0LL, &RequiredSize, &Type);
  if ( result == -1073741789 && RequiredSize >= 0x60 )
  {
    Data = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( !Data )
      return -1073741670;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &INTERRUPT_CONNECTION_DATA_PKEY,
                           0,
                           0,
                           RequiredSize,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( RequiredSize >= 88 * *Data + 8 )
      {
        *a2 = Data;
        return DevicePropertyData;
      }
      DevicePropertyData = -1073741762;
    }
    ExFreePoolWithTag(Data, 0);
    return DevicePropertyData;
  }
  return result;
}
