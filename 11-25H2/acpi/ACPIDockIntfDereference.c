/*
 * XREFs of ACPIDockIntfDereference @ 0x1400576B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

LONG_PTR __fastcall ACPIDockIntfDereference(PVOID Object)
{
  ULONG_PTR DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  if ( *(char *)(DeviceExtension + 8) >= 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 196), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 192) = 4;
  }
  ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  return ObfDereferenceObject(Object);
}
