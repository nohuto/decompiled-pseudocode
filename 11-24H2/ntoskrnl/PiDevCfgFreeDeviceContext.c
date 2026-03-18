/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x140997788
 * Callers:
 *     PiDevCfgInitDeviceCallback @ 0x14072A1C0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14072C480 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072C8FC (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140996D60 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x140997624 (PiDevCfgInitDeviceContext.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
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
