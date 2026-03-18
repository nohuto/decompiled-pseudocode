/*
 * XREFs of ??Y?$checked_array_iterator@PEA_N@stdext@@QEAAAEAV01@_J@Z @ 0x1801D7990
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<bool *>::operator+=(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  if ( a2 )
  {
    if ( !*a1 )
      goto LABEL_3;
    if ( a2 < 0 )
    {
      v2 = a1 + 2;
      if ( a1[2] >= (unsigned __int64)-a2 )
        goto LABEL_6;
LABEL_3:
      _invalid_parameter_noinfo_noreturn();
    }
  }
  v2 = a1 + 2;
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_3;
LABEL_6:
  *v2 += a2;
  return a1;
}
