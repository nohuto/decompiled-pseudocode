/*
 * XREFs of ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140230D40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CMatrixTransform3DMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a2 - 1) > 0xF )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  else
    return a3 == 18;
}
