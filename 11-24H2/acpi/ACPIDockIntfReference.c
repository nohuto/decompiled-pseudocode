/*
 * XREFs of ACPIDockIntfReference @ 0x140098F60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

char __fastcall ACPIDockIntfReference(PVOID Object)
{
  __int64 DeviceExtension; // rdi
  char result; // al

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  ObfReferenceObject(Object);
  result = ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(char *)(DeviceExtension + 8) >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 196));
  return result;
}
