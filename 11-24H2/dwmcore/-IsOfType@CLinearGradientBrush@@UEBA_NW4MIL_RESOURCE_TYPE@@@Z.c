/*
 * XREFs of ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180134630
 * Callers:
 *     ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x180134464 (-IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLinearGradientBrush::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  result = 1;
  if ( a2 != 99 )
  {
    v2 = (unsigned int)(a2 - 17);
    if ( (unsigned int)v2 > 0x38 )
      return 0;
    v3 = 0x100000040000001LL;
    if ( !_bittest64(&v3, v2) )
      return 0;
  }
  return result;
}
