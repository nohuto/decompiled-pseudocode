/*
 * XREFs of KiInitializeDpcList @ 0x1405C7118
 * Callers:
 *     KiInitPrcb @ 0x140B56204 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B565CC (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}
