/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18028CCC0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180299D40 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A7F50 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x1800D70F0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800D7C20 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800F5D00 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18016AB10 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801CD2D0 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        __m128 *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  __int64 v6; // r8
  struct CVisual *CurrentVisual; // rsi
  __int64 **TreeData; // rax
  unsigned __int64 v9; // rdx
  CVisual *v10; // rax
  __m128 v12; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-19h] BYREF
  CRectanglesShape *v14[6]; // [rsp+48h] [rbp-9h] BYREF
  int v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+C0h] [rbp+6Fh] BYREF

  if ( !a2[1].m128_u64[1] || a2[5].m128_i32[0] != (*((_DWORD *)a3 + 61) != 0) )
    return 1;
  if ( (a2[4].m128_i32[2] & 0x238) != 0 )
  {
    if ( (a2[4].m128_i32[2] & 0x200) != 0 )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
      TreeData = CVisual::FindTreeData(CurrentVisual, *(const struct CVisualTree **)(v6 + 7944));
      v9 = a2[1].m128_u64[1];
      if ( v9 < (unsigned __int64)TreeData[28]
        || (*((_BYTE *)CurrentVisual + 107) & 2) != 0 && v9 < *((_QWORD *)g_pComposition + 88) )
      {
        return 1;
      }
    }
    v15 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 288), (struct CMILMatrix *)v13);
    if ( (a2[4].m128_i8[8] & 8) != 0 && !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v13) )
      return 1;
    if ( (a2[4].m128_i8[8] & 0x10) != 0 )
    {
      if ( !CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)v13) )
        return 1;
      v16 = 0LL;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v13, (float *)&v16, (float *)&v16 + 1);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v16 - a2[4].m128_f32[0]) & _xmm) > 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v16 + 1) - a2[4].m128_f32[1]) & _xmm) > 0.000081380211 )
      {
        return 1;
      }
    }
    if ( (a2[4].m128_i8[8] & 0x20) != 0 && !CMILMatrix::ProducesUniformZ<1>((__int64)v13) )
      return 1;
  }
  if ( (a2[4].m128_i8[12] & 4) != 0 )
  {
    v10 = CDrawingContext::GetCurrentVisual(a3);
    if ( a2[2].m128_u64[0] < (unsigned __int64)CVisual::GetCpuClippingData(
                                                 v10,
                                                 *((const struct CVisualTree **)a3 + 993))[3] )
    {
      if ( a2[5].m128_i8[4] )
        return 1;
      CCpuClip::CCpuClip((CCpuClip *)v13);
      CDrawingContext::GetCpuClip(a3, (struct CCpuClip *)v13);
      if ( CCpuClip::HasClip((CCpuClip *)v13) )
      {
        v12 = a2[3];
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
