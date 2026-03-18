/*
 * XREFs of ACPIExtListTestElement @ 0x140017BF0
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x140017990 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1400659E4 (EnableDisableDeviceTreeRegionSpace.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      ACPIInitReferenceDeviceExtension(v3);
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(v4 + 16), *(_BYTE *)(v4 + 24));
    }
    return 1;
  }
}
