/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x1800B7A78
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B7830 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800CE84C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800E8820 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z @ 0x180195710 (-VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  char v1; // al

  *((_DWORD *)this + 34) = 16843008;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CTreeData::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 72;
  *((_QWORD *)this + 18) = (char *)this + 168;
  *((_QWORD *)this + 19) = (char *)this + 168;
  *((_QWORD *)this + 20) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_QWORD *)this + 23) = (char *)this + 200;
  *((_QWORD *)this + 24) = (char *)this + 208;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 257;
  *((_BYTE *)this + 14) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 77) = 0;
  *((_QWORD *)this + 39) = 1065353216LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  v1 = *((_BYTE *)this + 337) & 0xE9;
  *((_BYTE *)this + 336) = -86;
  *((_BYTE *)this + 337) = v1 | 0x29;
  return this;
}
