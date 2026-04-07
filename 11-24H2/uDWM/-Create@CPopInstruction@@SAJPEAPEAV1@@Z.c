/*
 * XREFs of ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001F858
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017F9C (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180063BCC (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A56AC (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CPopInstruction::Create(struct CPopInstruction **a1)
{
  unsigned int v2; // ebx
  CRenderDataInstruction *v3; // rcx
  struct CPopInstruction *v4; // rcx

  v2 = 0;
  v3 = (CRenderDataInstruction *)DefaultHeap::AllocClear(0x10uLL);
  if ( v3 && (CRenderDataInstruction::CRenderDataInstruction(v3), *(_QWORD *)v4 = &CPopInstruction::`vftable', v4) )
  {
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v2;
}
