/*
 * XREFs of MiCacheAttributeHasValue @ 0x1402F5FFC
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
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
