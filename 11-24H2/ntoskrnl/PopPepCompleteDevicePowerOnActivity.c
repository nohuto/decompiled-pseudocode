/*
 * XREFs of PopPepCompleteDevicePowerOnActivity @ 0x14047F690
 * Callers:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepCompleteDevicePowerOnActivity(__int64 a1)
{
  *(_BYTE *)(a1 + 136) = 1;
}
