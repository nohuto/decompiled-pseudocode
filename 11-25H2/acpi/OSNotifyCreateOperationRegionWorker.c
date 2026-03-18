/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x140063C20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004E778 (EnableDisableRegionSpacesForDevice.c)
 */

void __fastcall OSNotifyCreateOperationRegionWorker(_QWORD *P)
{
  ULONG_PTR v1; // rbx

  v1 = P[4];
  if ( *(_DWORD *)(v1 + 368) == 3 )
    EnableDisableRegionSpacesForDevice(P[4], 1);
  ACPIInitDereferenceDeviceExtensionUnlocked(v1);
  ExFreePoolWithTag(P, 0x4D706341u);
}
