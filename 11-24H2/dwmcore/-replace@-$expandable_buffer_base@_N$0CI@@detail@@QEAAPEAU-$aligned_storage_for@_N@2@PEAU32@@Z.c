/*
 * XREFs of ?replace@?$expandable_buffer_base@_N$0CI@@detail@@QEAAPEAU?$aligned_storage_for@_N@2@PEAU32@@Z @ 0x1801E6630
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
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
