/*
 * XREFs of ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402308C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::IsPropertyAnimatable(
        __int64 a1,
        __int64 a2,
        int a3)
{
  if ( (unsigned int)(a2 - 7) > 6 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  else
    return a3 == 18;
}
