/*
 * XREFs of ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E06E8
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800CB30C (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180285874 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1802858F4 (-CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::PageInPixelsRectToDeviceRect(__int64 a1, _OWORD *a2, __int64 a3)
{
  bool v3; // zf
  char v5; // di
  float *v6; // r9
  __int64 v7; // r10
  const struct D2D_RECT_F *v8; // r9
  float *v9; // r10
  char v10; // r11
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  unsigned __int64 v21[2]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v22; // [rsp+38h] [rbp-19h] BYREF
  struct D2D_POINT_2F v23; // [rsp+48h] [rbp-9h] BYREF

  v3 = *(_BYTE *)(a1 + 1564) == 0;
  v22 = 0LL;
  v5 = 1;
  if ( v3 )
  {
    *(_OWORD *)a3 = *a2;
    goto LABEL_9;
  }
  if ( CMILMatrix::IsTranslateIgnoreZ<1>(a1 + 1572) )
  {
    v13 = *(float *)(v7 + 48) + *v6;
    v14 = *(float *)(v7 + 48) + v6[2];
    v16 = *(float *)(v7 + 52) + v6[1];
    v18 = *(float *)(v7 + 52) + v6[3];
    *(float *)&v22 = v13;
    *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v16));
    *((float *)&v22 + 3) = v18;
    goto LABEL_6;
  }
  if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v7) )
  {
    v11 = *v9;
    v12 = v9[5];
    v13 = (float)(*v9 * v8->left) + v9[12];
    v14 = (float)(*v9 * v8->right) + v9[12];
    v15 = v12 * v8->bottom;
    v16 = (float)(v12 * v8->top) + v9[13];
    *(float *)&v22 = v13;
    v17 = v13;
    v18 = v15 + v9[13];
    v19 = v14;
    *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(LODWORD(v14), LODWORD(v16));
    *((float *)&v22 + 3) = v18;
    if ( v11 <= 0.0 || v12 <= 0.0 )
    {
LABEL_7:
      if ( !v10 )
      {
        if ( v17 > v19 )
        {
          *(float *)&v22 = v14;
          *((float *)&v22 + 2) = v13;
        }
        if ( v16 > v18 )
        {
          *((float *)&v22 + 1) = v18;
          *((float *)&v22 + 3) = v16;
        }
      }
      goto LABEL_8;
    }
LABEL_6:
    v19 = v14;
    v17 = v13;
    v10 = 1;
    goto LABEL_7;
  }
  CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v9, v8, &v23);
  v21[0] = 4LL;
  v21[1] = (unsigned __int64)&v23;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
    (float *)&v22,
    v21);
LABEL_8:
  *(_OWORD *)a3 = v22;
LABEL_9:
  if ( *(float *)(a3 + 8) <= *(float *)a3 || *(float *)(a3 + 12) <= *(float *)(a3 + 4) )
    return 0;
  return v5;
}
