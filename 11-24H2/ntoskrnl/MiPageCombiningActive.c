/*
 * XREFs of MiPageCombiningActive @ 0x140459878
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiSignalLargePageRebuild @ 0x1402D34E0 (MiSignalLargePageRebuild.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140E2FE04 != 0;
  if ( *(_DWORD *)(a1 + 17048) )
    return 1;
  return result;
}
