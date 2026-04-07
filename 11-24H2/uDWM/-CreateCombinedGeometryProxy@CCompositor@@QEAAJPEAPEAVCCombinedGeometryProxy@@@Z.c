/*
 * XREFs of ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x180063748
 * Callers:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800635E8 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateCombinedGeometryProxy(CCompositor *this, struct CCombinedGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CCombinedGeometryProxy>(this, a2);
}
