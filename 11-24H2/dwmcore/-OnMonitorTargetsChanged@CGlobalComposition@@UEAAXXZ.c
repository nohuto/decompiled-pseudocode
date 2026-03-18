/*
 * XREFs of ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ @ 0x180102A40
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180102E70 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CGlobalComposition::OnMonitorTargetsChanged(CGlobalComposition *this)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = (__int64 *)*((_QWORD *)this + 817);
  for ( i = (__int64 *)*((_QWORD *)this + 816); i != v1; ++i )
    CVisual::PropagateFlags(*i, 0x15u);
}
