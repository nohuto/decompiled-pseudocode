/*
 * XREFs of ?IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140231720
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CColorGradientStopMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( !(_DWORD)a2 )
    return a3 == 18;
  if ( (_DWORD)a2 != 1 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  return a3 == 69;
}
