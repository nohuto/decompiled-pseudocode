/*
 * XREFs of ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x180103048 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 *     ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x18010C05C (-GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z @ 0x1801893EC (-DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x1801EBAD8 (-GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z.c)
 */

__int64 __fastcall CWindowNode::RenderSpriteBitmap(
        CWindowNode *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3,
        struct CWindowOcclusionInfo *a4)
{
  unsigned int SpriteBitmapZ; // r12d
  unsigned __int64 *v8; // rdi
  const struct CVisualTree *v9; // r8
  CWindowOcclusionInfo *v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  unsigned int MaxTextureSize; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*((_BYTE *)this + 888) & 8) != 0 && !*((_BYTE *)this + 745) )
  {
    SpriteBitmapZ = 0;
    v8 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)this + 103, 0LL);
    if ( v10 )
      SpriteBitmapZ = CWindowOcclusionInfo::GetSpriteBitmapZ(v10, v9);
    v11 = CWindowNode::EnsureEffectiveSpriteClip(this);
    if ( v11 < 0 )
    {
      v12 = 821LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    CWindowNode::DxBltConsumedTelemetry(this, a2, (struct CGdiSpriteBitmap *)v8);
    MaxTextureSize = CDrawingContext::GetMaxTextureSize(a2, 1);
    if ( CGdiSpriteBitmap::NeedsTiling((CGdiSpriteBitmap *)v8, MaxTextureSize) )
    {
      v17 = v8[57];
      v18 = 0LL;
      if ( (__int64)(v8[58] - v17) >> 3 )
      {
        while ( 1 )
        {
          v11 = CWindowNode::RenderImage(
                  this,
                  a2,
                  a4,
                  (struct IBitmapResource *)((*(_QWORD *)(v17 + 8 * v18) + 72LL) & -(__int64)(*(_QWORD *)(v17 + 8 * v18) != 0LL)),
                  *((const struct CShape **)this + 110),
                  1,
                  SpriteBitmapZ);
          if ( v11 < 0 )
            break;
          v17 = v8[57];
          if ( ++v18 >= (unsigned __int64)((__int64)(v8[58] - v17) >> 3) )
            return 0LL;
        }
        v12 = 846LL;
        goto LABEL_7;
      }
    }
    else
    {
      v15 = CWindowNode::RenderImage(
              this,
              a2,
              a4,
              (struct IBitmapResource *)((unsigned __int64)(v8 + 13) & -(__int64)(v8 != 0LL)),
              *((const struct CShape **)this + 110),
              1,
              SpriteBitmapZ);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x342,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
    }
  }
  return 0LL;
}
