/*
 * XREFs of PcisuppInitializePciRouting @ 0x1400A9148
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1400A9094 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400AFEF4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall PcisuppInitializePciRouting(PDEVICE_OBJECT DeviceObject)
{
  int v2; // ebx
  void *Pool2; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  _QWORD v7[9]; // [rsp+20h] [rbp-58h] BYREF

  if ( InterruptRouting )
  {
    return 0;
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    Pool2 = (void *)ExAllocatePool2(64LL, 56LL, 1097884481LL);
    if ( Pool2 )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      v7[4] = 0LL;
      v5 = AttachedDeviceReference;
      LOWORD(v7[0]) = 2075;
      LODWORD(v7[2]) = 131128;
      v7[1] = &GUID_INT_ROUTE_INTERFACE_STANDARD;
      v7[3] = Pool2;
      v2 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      if ( v2 < 0 )
        ExFreePoolWithTag(Pool2, 0);
      else
        InterruptRouting = Pool2;
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}
