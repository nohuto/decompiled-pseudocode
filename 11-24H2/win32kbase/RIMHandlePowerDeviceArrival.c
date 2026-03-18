/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x14005432C
 * Callers:
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     RIMGetCurrentPowerInputMode @ 0x1400543B0 (RIMGetCurrentPowerInputMode.c)
 *     ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1400544E8 (-RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 *     RIMSetDeviceIdleTimeout @ 0x14017C3B0 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F2BAC (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1)
{
  if ( isChildPartition((__int64)a1) )
  {
    *((_DWORD *)a1 + 325) = -1;
    *((_DWORD *)a1 + 326) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 325) = -1;
  *((_DWORD *)a1 + 326) = RIMGetCurrentPowerInputMode();
  RIMUpdateDeviceForInputMode(a1);
  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !*(_BYTE *)W32GetUserGdiSessionState() )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
