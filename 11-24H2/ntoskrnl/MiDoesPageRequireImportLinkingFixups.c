/*
 * XREFs of MiDoesPageRequireImportLinkingFixups @ 0x1402C8BA4
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1404D29AC (MiWalkEntireImagePageNeedsProcessing.c)
 * Callees:
 *     MiDoesPageRequireRetpolineFixups @ 0x1409FE35C (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiDoesPageRequireImportLinkingFixups(__int64 a1)
{
  int DoesPageRequireRetpolineFixups; // eax
  unsigned int v2; // edx
  __int64 v3; // r9
  unsigned int v4; // r8d
  _WORD *v5; // rax

  DoesPageRequireRetpolineFixups = MiDoesPageRequireRetpolineFixups(*(_QWORD *)(a1 + 32) + 72LL);
  v4 = 0;
  if ( !DoesPageRequireRetpolineFixups )
    return 0LL;
  v5 = *(_WORD **)(*(_QWORD *)(v3 + 88) + 8LL * v2 + 64);
  if ( *v5 )
    return 1LL;
  LOBYTE(v4) = v5[3] == 3;
  return v4;
}
