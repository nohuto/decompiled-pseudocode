/*
 * XREFs of MiPageCombiningActive @ 0x140458C94
 * Callers:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiSignalLargePageRebuild @ 0x1403B3544 (MiSignalLargePageRebuild.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140E2FBC4 != 0;
  if ( *(_DWORD *)(a1 + 17048) )
    return 1;
  return result;
}
