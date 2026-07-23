/*
 * XREFs of MiPageCombiningActive @ 0x14044E5A8
 * Callers:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiSignalLargePageRebuild @ 0x140354758 (MiSignalLargePageRebuild.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140E2FF44 != 0;
  if ( *(_DWORD *)(a1 + 17048) )
    return 1;
  return result;
}
