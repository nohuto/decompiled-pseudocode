/*
 * XREFs of ACPIExtListExitEnumEarly @ 0x140056580
 * Callers:
 *     ACPIDetectDuplicateHID @ 0x14003B994 (ACPIDetectDuplicateHID.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIExtListExitEnumEarly(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) == 2 )
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
}
