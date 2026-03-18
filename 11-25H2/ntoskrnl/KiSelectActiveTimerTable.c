/*
 * XREFs of KiSelectActiveTimerTable @ 0x140440290
 * Callers:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405B6284 (KiAdjustTimersAfterDripsExit.c)
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
