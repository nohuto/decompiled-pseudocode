/*
 * XREFs of MiCacheAttributeHasValue @ 0x14033DD8C
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCacheAttributeHasValue(int a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( a1 != 1 )
    return a1 == 2;
  return result;
}
