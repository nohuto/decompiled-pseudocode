/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1400680F0 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     _ACPIInternalErrorEx @ 0x14001C1A0 (_ACPIInternalErrorEx.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 732), 0xFFFFFFFF) != 1 )
    return 0;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x39u) )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      ACPIInternalErrorEx(0x9039FuLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
  return 1;
}
