/*
 * XREFs of ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400CAB04
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AF84 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall DispConfigTypes::AllowInAnySession(int a1)
{
  if ( a1 <= -11 )
    return a1 == -11
        || a1 == -39
        || a1 == -30
        || a1 == -25
        || a1 == -24
        || a1 == -22
        || a1 == -21
        || a1 == -20
        || a1 == -15
        || a1 == -13;
  if ( a1 == -10 || a1 == -8 || a1 == -7 || a1 == -2 || a1 == 2 || a1 == 3 || a1 == 4 || a1 == 6 )
    return 1;
  return a1 == 100;
}
