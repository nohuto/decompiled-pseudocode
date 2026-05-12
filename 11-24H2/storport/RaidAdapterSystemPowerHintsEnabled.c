/*
 * XREFs of RaidAdapterSystemPowerHintsEnabled @ 0x140036528
 * Callers:
 *     RaidCoalescingCallback @ 0x1400363E0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSystemPowerHintsEnabled(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[621] && a1[623] || a1[755] )
    return 1;
  return result;
}
