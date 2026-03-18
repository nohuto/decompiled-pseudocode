/*
 * XREFs of PopPepCompleteDevicePowerOnActivity @ 0x1404838A0
 * Callers:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepCompleteDevicePowerOnActivity(__int64 a1)
{
  *(_BYTE *)(a1 + 136) = 1;
}
