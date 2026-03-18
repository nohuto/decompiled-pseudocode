/*
 * XREFs of ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x180196A10
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180196748 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

char __fastcall HasAntialiasEdgeFlags(int a1)
{
  int v1; // r8d
  char v3; // al
  bool v4; // cl

  v1 = a1 & 0x300;
  v3 = 1;
  v4 = (a1 & 3) == 3 || (a1 & 0x3000000) == 50331648;
  if ( v1 != 768 )
    v3 = v4;
  return ((a1 & 0x30000) == 196608) | v3;
}
