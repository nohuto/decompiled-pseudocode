/*
 * XREFs of ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022F200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 */

char __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  if ( (_DWORD)a2 == 4
    || (_DWORD)a2 == 5
    || (_DWORD)a2 == 7
    || (_DWORD)a2 == 8
    || (_DWORD)a2 == 10
    || (_DWORD)a2 == 11
    || (unsigned int)(a2 - 13) < 2 )
  {
    return a3 == 18;
  }
  else
  {
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  }
}
