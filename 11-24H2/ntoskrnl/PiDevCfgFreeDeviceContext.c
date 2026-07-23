/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x1409C9EF4
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x140727E10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14072A490 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1409C94B4 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B64 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgClearDeviceDrivers @ 0x140726C00 (PiDevCfgClearDeviceDrivers.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rbx
  __int64 v4; // rdi

  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgClearDeviceDrivers(a1);
  if ( *(int *)a1 < 0 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (UNICODE_STRING *)(a1 + 40);
  v4 = 3LL;
  do
  {
    RtlFreeAnsiString(v3++);
    --v4;
  }
  while ( v4 );
}
