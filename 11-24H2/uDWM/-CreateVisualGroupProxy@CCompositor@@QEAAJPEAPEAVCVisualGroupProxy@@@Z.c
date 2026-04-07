/*
 * XREFs of ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6234
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18006B21C (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualGroupProxy(__int64 this, struct CVisualGroupProxy **a2)
{
  return CCompositor::CreateProxy<CVisualGroupProxy>(this, a2);
}
