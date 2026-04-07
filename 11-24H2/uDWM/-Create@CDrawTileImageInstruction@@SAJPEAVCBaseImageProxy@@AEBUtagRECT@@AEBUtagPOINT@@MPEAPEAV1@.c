/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180017E80
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017F9C (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008ABF0 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x1800177F8 (-Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z.c)
 *     ??0CDrawTileImageInstruction@@AEAA@XZ @ 0x180017CFC (--0CDrawTileImageInstruction@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CBaseImageProxy *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  CDrawTileImageInstruction *v8; // rax
  CDrawTileImageInstruction *v9; // rax
  CBaseObject *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v8 = (CDrawTileImageInstruction *)DefaultHeap::AllocClear(0x38uLL);
  if ( v8 && (v9 = CDrawTileImageInstruction::CDrawTileImageInstruction(v8), (v10 = v9) != 0LL) )
  {
    v11 = CDrawTileImageInstruction::Initialize(v9, a1, a2, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32u, 0LL);
      CBaseObject::Release(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x30u, 0LL);
  }
  return v12;
}
