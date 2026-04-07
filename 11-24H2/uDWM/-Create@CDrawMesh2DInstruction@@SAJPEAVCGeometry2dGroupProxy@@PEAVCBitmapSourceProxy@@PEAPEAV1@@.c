/*
 * XREFs of ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x1800119D8
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800117E8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??0CDrawMesh2DInstruction@@AEAA@XZ @ 0x180011ADC (--0CDrawMesh2DInstruction@@AEAA@XZ.c)
 *     ?Initialize@CDrawMesh2DInstruction@@AEAAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@@Z @ 0x180011B00 (-Initialize@CDrawMesh2DInstruction@@AEAAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawMesh2DInstruction::Create(
        struct CGeometry2dGroupProxy *a1,
        struct CBitmapSourceProxy *a2,
        struct CDrawMesh2DInstruction **a3)
{
  CDrawMesh2DInstruction *v6; // rax
  CDrawMesh2DInstruction *v7; // rax
  CBaseObject *v8; // rdi
  unsigned int v9; // ebx
  int v11; // eax

  v6 = (CDrawMesh2DInstruction *)DefaultHeap::AllocClear(0x20uLL);
  if ( v6 && (v7 = CDrawMesh2DInstruction::CDrawMesh2DInstruction(v6), (v8 = v7) != 0LL) )
  {
    v11 = CDrawMesh2DInstruction::Initialize(v7, a1, a2);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32u, 0LL);
      CBaseObject::Release(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x30u, 0LL);
  }
  return v9;
}
