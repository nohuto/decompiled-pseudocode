/*
 * XREFs of ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001F698
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017F9C (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180063BCC (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A56AC (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??0CPushTransformInstruction@@AEAA@XZ @ 0x18001F74C (--0CPushTransformInstruction@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z @ 0x1800740D0 (-Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CPushTransformInstruction::Create(
        struct CBaseTransformProxy *a1,
        struct CPushTransformInstruction **a2)
{
  CPushTransformInstruction *v4; // rax
  CPushTransformInstruction *v5; // rax
  CBaseObject *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CPushTransformInstruction *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 && (v5 = CPushTransformInstruction::CPushTransformInstruction(v4), (v6 = v5) != 0LL) )
  {
    v7 = CPushTransformInstruction::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2Eu, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  return v8;
}
