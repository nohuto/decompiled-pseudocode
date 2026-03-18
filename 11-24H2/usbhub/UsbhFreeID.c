/*
 * XREFs of UsbhFreeID @ 0x14002796C
 * Callers:
 *     UsbhRemoveAndDeletePdo @ 0x14001579C (UsbhRemoveAndDeletePdo.c)
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040180 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x140059908 (UsbhBuildUnknownIds.c)
 *     UsbhQueryParentHubConfig @ 0x14005F348 (UsbhQueryParentHubConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
