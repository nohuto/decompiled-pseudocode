/*
 * XREFs of ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022E400
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a2 - 7) > 0x13 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  else
    return a3 == 18;
}
