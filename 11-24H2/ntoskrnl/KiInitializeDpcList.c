/*
 * XREFs of KiInitializeDpcList @ 0x1405C4848
 * Callers:
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
