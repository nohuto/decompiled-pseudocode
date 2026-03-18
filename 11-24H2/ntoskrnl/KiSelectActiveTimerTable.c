/*
 * XREFs of KiSelectActiveTimerTable @ 0x14043FFE0
 * Callers:
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405BA0A8 (KiAdjustTimersAfterDripsExit.c)
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
