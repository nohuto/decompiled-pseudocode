/*
 * XREFs of ??Y?$checked_array_iterator@PEAM@stdext@@QEAAAEAV01@_J@Z @ 0x180199700
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18019AF04 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<float *>::operator+=(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  if ( !a2 )
    goto LABEL_7;
  if ( !*a1 )
    goto LABEL_5;
  if ( a2 < 0 )
  {
    v2 = a1 + 2;
    if ( a1[2] < (unsigned __int64)-a2 )
      goto LABEL_5;
  }
  else
  {
LABEL_7:
    v2 = a1 + 2;
    if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
LABEL_5:
      _invalid_parameter_noinfo_noreturn();
  }
  *v2 += a2;
  return a1;
}
