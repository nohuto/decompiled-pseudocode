/*
 * XREFs of UsbhFreeID @ 0x1C00503BC
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0050144 (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C00507E0 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00509A4 (UsbhGetSerialNumber.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0057614 (UsbhRemoveAndDeletePdo.c)
 *     UsbhQueryParentHubConfig @ 0x1C005A8D8 (UsbhQueryParentHubConfig.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
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
