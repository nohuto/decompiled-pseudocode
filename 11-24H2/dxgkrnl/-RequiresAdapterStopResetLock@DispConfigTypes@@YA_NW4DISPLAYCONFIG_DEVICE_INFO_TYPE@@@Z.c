/*
 * XREFs of ?RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400441A8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044200 (-RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x140044240 (-RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DBEC (-RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 */

bool __fastcall DispConfigTypes::RequiresAdapterStopResetLock(int a1)
{
  unsigned int v2; // r8d
  char v3; // bl

  if ( a1 == 12 || a1 == -26 || a1 == -12 || a1 == 4 )
    return 1;
  v3 = 0;
  if ( (unsigned __int8)DispConfigTypes::RequiresAdapterReference() )
  {
    if ( !(unsigned __int8)DispConfigTypes::RequiresAdapterCoreAccessShared(v2) )
      return (unsigned __int8)DispConfigTypes::RequiresAdapterCoreAccessExclusive() == 0;
  }
  return v3;
}
