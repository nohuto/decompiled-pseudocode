/*
 * XREFs of MiCacheAttributeHasValue @ 0x140229CA8
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
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
