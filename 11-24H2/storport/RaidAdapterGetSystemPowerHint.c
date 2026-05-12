/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x140036554
 * Callers:
 *     RaidCoalescingCallback @ 0x1400363E0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
