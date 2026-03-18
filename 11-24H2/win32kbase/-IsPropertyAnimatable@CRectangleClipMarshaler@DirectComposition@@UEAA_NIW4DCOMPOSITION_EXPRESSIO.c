/*
 * XREFs of ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140231C50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a2 - 5) > 0xB )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  else
    return a3 == 18;
}
