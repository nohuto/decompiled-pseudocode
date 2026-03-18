/*
 * XREFs of MiTranslateCacheAttribute @ 0x140225F5C
 * Callers:
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
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
