/*
 * XREFs of ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180064008
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180063BCC (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A56AC (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawBitmapInstruction@@AEAA@XZ @ 0x180064100 (--0CDrawBitmapInstruction@@AEAA@XZ.c)
 *     ?Initialize@CDrawBitmapInstruction@@AEAAJPEAVCBaseImageProxy@@@Z @ 0x180064180 (-Initialize@CDrawBitmapInstruction@@AEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawBitmapInstruction::Create(struct CBaseImageProxy *a1, struct CDrawBitmapInstruction **a2)
{
  CDrawBitmapInstruction *v4; // rax
  CDrawBitmapInstruction *v5; // rax
  CBaseObject *v6; // rdi
  unsigned int v7; // ebx
  int v9; // eax

  v4 = (CDrawBitmapInstruction *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 && (v5 = CDrawBitmapInstruction::CDrawBitmapInstruction(v4), (v6 = v5) != 0LL) )
  {
    v9 = CDrawBitmapInstruction::Initialize(v5, a1);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2Eu, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Cu, 0LL);
  }
  return v7;
}
