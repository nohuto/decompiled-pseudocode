/*
 * XREFs of ?RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044560
 * Callers:
 *     ?RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400444C8 (-RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x140282AF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall DispConfigTypes::RequiresAdapterCoreAccessShared(int a1)
{
  if ( a1 <= 6 )
    return a1 == 6 || a1 == -37 || a1 == -33 || a1 == -27 || a1 == -10 || a1 == 2;
  if ( a1 == 7 || a1 == 9 || a1 == 11 || a1 == 15 )
    return 1;
  return a1 == 100;
}
