/*
 * XREFs of ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DDEC
 * Callers:
 *     ?RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400444C8 (-RequiresAdapterStopResetLock@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x140282AF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline @ 0x14006E190 (Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall DispConfigTypes::RequiresAdapterCoreAccessExclusive(int a1)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( a1 > -16 )
  {
    v4 = a1 - 8;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 3;
        if ( v6 )
        {
          if ( (unsigned int)(v6 - 3) > 1 )
            return 0;
        }
      }
    }
  }
  else if ( a1 != -16 )
  {
    if ( a1 == -41 )
    {
      if ( !(unsigned int)Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline() )
        return 0;
    }
    else
    {
      v1 = a1 + 40;
      if ( v1 > 0x16 )
        return 0;
      v2 = 4325381;
      if ( !_bittest(&v2, v1) )
        return 0;
    }
  }
  return 1;
}
