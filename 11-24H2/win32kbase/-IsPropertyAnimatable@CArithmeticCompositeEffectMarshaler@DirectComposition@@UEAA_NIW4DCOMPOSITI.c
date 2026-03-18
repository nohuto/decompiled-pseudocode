/*
 * XREFs of ?IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022E070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::IsPropertyAnimatable(
        __int64 a1,
        __int64 a2,
        int a3)
{
  if ( (_DWORD)a2 == 6 || (_DWORD)a2 == 7 || (unsigned int)(a2 - 8) < 2 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
}
