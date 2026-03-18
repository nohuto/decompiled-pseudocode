/*
 * XREFs of PopPepCompleteDevicePowerOnActivity @ 0x1404840F0
 * Callers:
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepCompleteDevicePowerOnActivity(__int64 a1)
{
  *(_BYTE *)(a1 + 136) = 1;
}
