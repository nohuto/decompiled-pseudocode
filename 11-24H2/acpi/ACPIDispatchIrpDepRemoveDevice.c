/*
 * XREFs of ACPIDispatchIrpDepRemoveDevice @ 0x14005B3F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchIrpDepRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v4; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->IoStatus.Status = 0;
  v4 = DeviceExtension;
  IofCompleteRequest(a2, 0);
  ACPIInitResetDeviceExtension(v4);
  return 0LL;
}
