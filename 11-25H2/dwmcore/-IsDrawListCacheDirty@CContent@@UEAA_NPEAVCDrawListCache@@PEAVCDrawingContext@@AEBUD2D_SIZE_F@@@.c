/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180298130
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802A3B00 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x180082478 (--0CCpuClip@@QEAA@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA80 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18010C210 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180115540 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x180195AA0 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801DAA00 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  __int64 v6; // r8
  struct CVisual *CurrentVisual; // rsi
  __int64 **TreeData; // rax
  unsigned __int64 v9; // rdx
  CVisual *v10; // rax
  struct D2D_RECT_F v12; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-19h] BYREF
  CRectanglesShape *v14[6]; // [rsp+48h] [rbp-9h] BYREF
  int v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+C0h] [rbp+6Fh] BYREF

  if ( !*((_QWORD *)a2 + 3) || *((_DWORD *)a2 + 20) != (*((_DWORD *)a3 + 61) != 0) )
    return 1;
  if ( (*((_DWORD *)a2 + 18) & 0x238) != 0 )
  {
    if ( (*((_DWORD *)a2 + 18) & 0x200) != 0 )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
      TreeData = CVisual::FindTreeData(CurrentVisual, *(const struct CVisualTree **)(v6 + 7944));
      v9 = *((_QWORD *)a2 + 3);
      if ( v9 < (unsigned __int64)TreeData[28]
        || (*((_BYTE *)CurrentVisual + 107) & 2) != 0 && v9 < *((_QWORD *)g_pComposition + 88) )
      {
        return 1;
      }
    }
    v15 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 288), (struct CMILMatrix *)v13);
    if ( (*((_BYTE *)a2 + 72) & 8) != 0 && !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v13) )
      return 1;
    if ( (*((_BYTE *)a2 + 72) & 0x10) != 0 )
    {
      if ( !CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)v13) )
        return 1;
      v16 = 0LL;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v13, (float *)&v16, (float *)&v16 + 1);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v16 - *((float *)a2 + 16)) & _xmm) > 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v16 + 1) - *((float *)a2 + 17)) & _xmm) > 0.000081380211 )
      {
        return 1;
      }
    }
    if ( (*((_BYTE *)a2 + 72) & 0x20) != 0 && !CMILMatrix::ProducesUniformZ<1>((__int64)v13) )
      return 1;
  }
  if ( (*((_BYTE *)a2 + 76) & 4) != 0 )
  {
    v10 = CDrawingContext::GetCurrentVisual(a3);
    if ( *((_QWORD *)a2 + 4) < (unsigned __int64)CVisual::GetCpuClippingData(
                                                   v10,
                                                   *((const struct CVisualTree **)a3 + 993))[3] )
    {
      if ( *((_BYTE *)a2 + 84) )
        return 1;
      CCpuClip::CCpuClip((CCpuClip *)v13);
      CDrawingContext::GetCpuClip(a3, (struct CCpuClip *)v13);
      if ( CCpuClip::HasClip((CCpuClip *)v13) )
      {
        v12 = (struct D2D_RECT_F)*((_OWORD *)a2 + 3);
        if ( !CCpuClip::FullyContains(v13, &v12, 0LL) )
        {
          CShapePtr::~CShapePtr(v14);
          return 1;
        }
      }
      CShapePtr::~CShapePtr(v14);
    }
  }
  return 0;
}
