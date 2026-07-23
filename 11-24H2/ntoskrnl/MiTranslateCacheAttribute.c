/*
 * XREFs of MiTranslateCacheAttribute @ 0x14025330C
 * Callers:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateCacheAttribute(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  if ( v1 == 1 )
    return 2LL;
  return 0xFFFFFFFFLL;
}
