/*
 * XREFs of ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401B7220
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401B7614 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DispConfigTypes::GetSetterTypeSize(int a1)
{
  int v2; // edx

  if ( a1 <= -16 )
  {
    if ( a1 == -16 )
      return 68LL;
    if ( a1 != -43 )
    {
      if ( (unsigned int)(a1 + 41) > 1 )
      {
        if ( a1 == -38 )
          return 28LL;
        if ( ((a1 + 35) & 0xFFFFFFF7) != 0 )
        {
          if ( a1 == -23 )
            return 48LL;
          if ( a1 != -19 )
          {
            if ( a1 == -18 )
              return 28LL;
            return 0LL;
          }
        }
      }
      return 24LL;
    }
    if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
      return 0LL;
    return 24LL;
  }
  if ( a1 == -6 )
    return 28LL;
  if ( (unsigned int)(a1 + 4) <= 0xE )
  {
    v2 = 20993;
    if ( _bittest(&v2, a1 + 4) )
      return 24LL;
  }
  if ( a1 != 13 )
  {
    if ( (unsigned int)(a1 - 16) > 1 )
      return 0LL;
    return 24LL;
  }
  return 312LL;
}
