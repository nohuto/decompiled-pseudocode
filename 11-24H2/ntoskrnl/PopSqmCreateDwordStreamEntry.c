/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1404C9654
 * Callers:
 *     PopSqmBatteryUpdate @ 0x140AA3C3C (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
