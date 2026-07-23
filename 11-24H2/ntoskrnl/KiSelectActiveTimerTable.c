/*
 * XREFs of KiSelectActiveTimerTable @ 0x1404362A0
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B76D8 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  if ( !KiSerializeTimerExpiration )
    return a1 + 16640;
  if ( a2 && !*(_BYTE *)(a1 + 33) )
    return 0LL;
  return KiProcessorBlock[0] + 16640;
}
