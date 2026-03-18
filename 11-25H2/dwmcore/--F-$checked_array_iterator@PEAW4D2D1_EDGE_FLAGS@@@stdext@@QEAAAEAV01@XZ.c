/*
 * XREFs of ??F?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEAAAEAV01@XZ @ 0x180257B00
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>::operator--(_QWORD *a1)
{
  __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2]) == 0 )
    _invalid_parameter_noinfo_noreturn();
  a1[2] = v1 - 1;
  return a1;
}
