/*
 * XREFs of MiWalkEntireImagePageNeedsProcessing @ 0x1404D29AC
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 * Callees:
 *     MiDoesPageRequireImportLinkingFixups @ 0x1402C8BA4 (MiDoesPageRequireImportLinkingFixups.c)
 *     MiPageHasRelocations @ 0x140957920 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImagePageNeedsProcessing(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx

  if ( (a3 & 1) != 0 )
    return 1LL;
  v5 = 0;
  if ( (a3 & 6) != 0 )
  {
    if ( (unsigned int)MiPageHasRelocations(*(_QWORD *)(a1 + 32), a2, 1LL) )
      return 1LL;
  }
  if ( (a3 & 8) == 0 )
    return 0LL;
  LOBYTE(v5) = (unsigned int)MiDoesPageRequireImportLinkingFixups(a1) != 0;
  return v5;
}
