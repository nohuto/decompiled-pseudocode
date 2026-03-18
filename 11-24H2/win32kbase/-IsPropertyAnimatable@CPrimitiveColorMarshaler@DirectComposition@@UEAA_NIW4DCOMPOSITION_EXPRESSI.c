/*
 * XREFs of ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140232750
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CPrimitiveColorMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( (_DWORD)a2 == 1 || (_DWORD)a2 == 2 || (unsigned int)(a2 - 3) < 2 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
}
