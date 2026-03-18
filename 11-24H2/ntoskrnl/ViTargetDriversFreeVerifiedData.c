/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x140611344
 * Callers:
 *     VfTargetDriversAdd @ 0x1403F01F8 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     VfTargetDriversDisableVerifier @ 0x140B8B2DC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B8B364 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
