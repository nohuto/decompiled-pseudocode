/*
 * XREFs of KsepCacheHwIdFree @ 0x1405CA900
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14095B694 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
