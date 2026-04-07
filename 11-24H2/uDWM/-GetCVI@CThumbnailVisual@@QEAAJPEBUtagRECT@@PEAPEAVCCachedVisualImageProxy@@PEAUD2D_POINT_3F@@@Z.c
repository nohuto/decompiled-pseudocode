/*
 * XREFs of ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x1800DA728
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x18008919C (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z @ 0x1800DA934 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x1800DA968 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall CThumbnailVisual::GetCVI(
        CThumbnailVisual *this,
        const struct tagRECT *a2,
        struct CCachedVisualImageProxy **a3,
        struct D2D_POINT_3F *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm2_4
  int v12; // eax
  float v13; // xmm3_4
  const struct tagRECT *v14; // rdx
  float v15; // xmm4_4
  float v16; // xmm5_4
  struct CCachedVisualImageProxy *v17; // rcx

  v8 = -2147467259;
  if ( *((_QWORD *)this + 43)
    && *((_QWORD *)this + 49)
    && *((_QWORD *)this + 42)
    && !CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v9 = *((_QWORD *)this + 41);
    if ( v9 && (*(_BYTE *)(v9 + 36) & 2) != 0 )
      IsRectEmpty((const RECT *)(v9 + 56));
    v10 = 0;
    if ( a2->right - a2->left >= 0 )
      v10 = a2->right - a2->left;
    v11 = (float)v10;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v10, *((float *)this + 109)) )
    {
      v12 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v12 = a2->bottom - a2->top;
      v13 = (float)v12;
      if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v12, *((float *)this + 110))
        && CThumbnailVisual::s_IsCloseEnoughToReuse(a2, v14) )
      {
        v17 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 49);
        *a3 = v17;
        *(float *)a4 = v11 / v15;
        *((float *)a4 + 1) = v13 / v16;
        if ( v17 )
          CMILRefCountBase::AddRef(v17);
        return 0;
      }
    }
  }
  return v8;
}
