/*
 * XREFs of IopProcessInvalidateBusRelationsRequest @ 0x1409EDC68
 * Callers:
 *     IopInvalidateBusRelationsWorker @ 0x1404BE320 (IopInvalidateBusRelationsWorker.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     IopQueryDeviceHardwareIdForPdcTask @ 0x1409ED7C0 (IopQueryDeviceHardwareIdForPdcTask.c)
 *     PiPdcActivate @ 0x1409EDEC0 (PiPdcActivate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _DEVOBJ_EXTENSION *__fastcall IopProcessInvalidateBusRelationsRequest(__int64 a1)
{
  struct _DEVOBJ_EXTENSION *result; // rax
  struct _DEVICE_OBJECT *v2; // rdx
  PVOID DeviceNode; // rsi
  int v5; // ecx
  const wchar_t *v6; // rbp
  int v7; // r14d
  wchar_t *DeviceHardwareIdForPdcTask; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (struct _DEVOBJ_EXTENSION *)&retaddr;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  if ( v2 )
  {
    result = v2->DeviceObjectExtension;
    DeviceNode = result->DeviceNode;
    if ( DeviceNode )
    {
      v5 = *(_DWORD *)(a1 + 24);
      v6 = L"BusScan";
      v7 = -(v5 != 0);
      if ( v5 )
        v6 = L"SingleBusScan";
      if ( DeviceNode == IopRootDeviceNode )
        DeviceHardwareIdForPdcTask = L"PNPROOT";
      else
        DeviceHardwareIdForPdcTask = (wchar_t *)IopQueryDeviceHardwareIdForPdcTask(v2);
      v9[1] = 0LL;
      v9[0] = PiPdcActivate(v6, DeviceHardwareIdForPdcTask);
      if ( DeviceNode != IopRootDeviceNode )
      {
        if ( DeviceHardwareIdForPdcTask )
          ExFreePoolWithTag(DeviceHardwareIdForPdcTask, 0x6F697050u);
      }
      return (struct _DEVOBJ_EXTENSION *)PnpRequestDeviceAction(*(PVOID *)(a1 + 16), v7 + 9, 0, v9, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
