/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C001F210
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001F020 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C001F100 (DrvQueryDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01666C0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsWddmDriverPresent(__int64 a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
