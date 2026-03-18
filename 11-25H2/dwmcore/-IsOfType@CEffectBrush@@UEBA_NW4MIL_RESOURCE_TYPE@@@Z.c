/*
 * XREFs of ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180108E60
 * Callers:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180108DF8 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x38 )
  {
    v2 = 0x100400000020000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
