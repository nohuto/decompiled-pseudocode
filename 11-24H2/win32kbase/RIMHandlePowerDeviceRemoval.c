/*
 * XREFs of RIMHandlePowerDeviceRemoval @ 0x140054580
 * Callers:
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1401F2FB4 (RIMHandleTTMDeviceRemoval.c)
 */

__int64 __fastcall RIMHandlePowerDeviceRemoval(__int64 a1)
{
  if ( !isChildPartition(a1) && *(_BYTE *)W32GetUserGdiSessionState() )
    return RIMHandleTTMDeviceRemoval(a1);
  else
    return 0LL;
}
