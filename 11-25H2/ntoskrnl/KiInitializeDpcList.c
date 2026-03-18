/*
 * XREFs of KiInitializeDpcList @ 0x1405C2D78
 * Callers:
 *     KiInitPrcb @ 0x140B46260 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B46628 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
