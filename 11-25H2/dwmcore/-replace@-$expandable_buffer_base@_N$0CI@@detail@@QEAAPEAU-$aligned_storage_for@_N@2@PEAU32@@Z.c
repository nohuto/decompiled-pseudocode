/*
 * XREFs of ?replace@?$expandable_buffer_base@_N$0CI@@detail@@QEAAPEAU?$aligned_storage_for@_N@2@PEAU32@@Z @ 0x1801F2F00
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall detail::expandable_buffer_base<bool,40>::replace(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  result = 0LL;
  *a1 = a2;
  if ( v2 != a1 + 3 )
    return v2;
  return result;
}
