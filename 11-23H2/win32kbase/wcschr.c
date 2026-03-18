/*
 * XREFs of wcschr @ 0x1C00CE068
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00246E4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ParseWindowStation @ 0x1C00A0E80 (ParseWindowStation.c)
 *     ParseModeCap @ 0x1C0163CD0 (ParseModeCap.c)
 *     InitCreateUserSubsystem @ 0x1C02DE10C (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t v2; // ax
  wchar_t v3; // r8

  v2 = *Str;
  if ( *Str )
  {
    v3 = *Str;
    do
    {
      v2 = v3;
      if ( v3 == Ch )
        break;
      v2 = *++Str;
      v3 = *Str;
    }
    while ( *Str );
  }
  if ( v2 != Ch )
    return 0LL;
  return (wchar_t *)Str;
}
