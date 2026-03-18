/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x140891014
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x14071E240 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140720500 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072097C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1408905EC (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeAnsiString(v2++);
    --v3;
  }
  while ( v3 );
}
