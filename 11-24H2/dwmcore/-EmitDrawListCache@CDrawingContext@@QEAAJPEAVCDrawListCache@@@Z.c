/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180051250
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180243AE8 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 * Callees:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18006E6D0 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18022C25C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1802502E0 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v6; // esi
  int v7; // xmm6_4
  int v8; // eax
  bool v9; // bp
  _OWORD *v10; // rax
  ClipPlaneIterator *v11; // r14
  int v12; // eax
  int v14; // eax
  int updated; // eax
  _OWORD v16[4]; // [rsp+30h] [rbp-78h] BYREF
  int v17; // [rsp+70h] [rbp-38h]

  v2 = *((_DWORD *)this + 792);
  v3 = 0;
  v6 = 0;
  if ( v2 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v2 - 1));
  else
    v7 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( COERCE_FLOAT(v7 & _xmm) >= 0.0000011920929 )
  {
    v8 = *((_DWORD *)this + 74);
    v9 = 0;
    if ( v8 )
      v10 = (_OWORD *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v8 - 1));
    else
      v10 = &CMILMatrix::Identity;
    v16[0] = *v10;
    v16[1] = v10[1];
    v16[2] = v10[2];
    v16[3] = v10[3];
    v17 = *((_DWORD *)v10 + 16);
    if ( *((_QWORD *)this + 413) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3ACu, 0LL);
        goto LABEL_11;
      }
      v11 = (CDrawingContext *)((char *)this + 3312);
      v9 = *((_BYTE *)this + 3312) == 0;
    }
    else
    {
      v11 = (CDrawingContext *)((char *)this + 3312);
    }
    if ( v9 )
      goto LABEL_17;
    while ( 1 )
    {
      v12 = CDrawListCache::Render(a2, this, v16);
      v6 = v12;
      if ( v12 < 0 )
        break;
      if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v11) )
        goto LABEL_11;
LABEL_17:
      v14 = ClipPlaneIterator::UpdateClippingPlanes(v11);
      v6 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3B8u, 0LL);
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x3BEu, 0LL);
  }
LABEL_11:
  if ( v6 != -2003304441 )
    return v6;
  return v3;
}
