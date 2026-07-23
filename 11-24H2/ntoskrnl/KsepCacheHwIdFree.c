/*
 * XREFs of KsepCacheHwIdFree @ 0x1405C8020
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
