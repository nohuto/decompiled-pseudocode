/*
 * XREFs of ?RequiresFlushVidSch@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DE44
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x140282AF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispConfigTypes::RequiresFlushVidSch(int a1)
{
  return a1 == -23 || a1 == 13;
}
