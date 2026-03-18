/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1404D04F4
 * Callers:
 *     PopSqmBatteryUpdate @ 0x140AA8B90 (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
