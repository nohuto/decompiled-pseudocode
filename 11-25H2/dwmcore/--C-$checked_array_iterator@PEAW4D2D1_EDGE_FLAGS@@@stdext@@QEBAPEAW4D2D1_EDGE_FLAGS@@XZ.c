/*
 * XREFs of ??C?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEBAPEAW4D2D1_EDGE_FLAGS@@XZ @ 0x180290680
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invalid_parameter_noinfo_noreturn();
  return *a1 + 4 * v1;
}
