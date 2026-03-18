/*
 * XREFs of Interrupter_SetSecondaryInterrupterCount @ 0x140049340
 * Callers:
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x14007BF00 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007C320 (Interrupter_FilterRemoveResourceRequirements.c)
 *     Interrupter_PrepareHardware @ 0x14007C634 (Interrupter_PrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Interrupter_SetSecondaryInterrupterCount(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 20) = a2;
}
