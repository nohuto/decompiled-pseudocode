/*
 * XREFs of KsepCacheHwIdFree @ 0x1405C62E0
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
