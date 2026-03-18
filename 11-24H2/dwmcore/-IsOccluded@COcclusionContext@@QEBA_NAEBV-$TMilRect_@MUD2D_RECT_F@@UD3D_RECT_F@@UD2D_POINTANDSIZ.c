/*
 * XREFs of ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18019CD00
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5570 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802669B8 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028491C (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 */

char __fastcall COcclusionContext::IsOccluded(__int64 a1, float *a2, int a3, char a4)
{
  __int64 v6; // r9
  float *v7; // r10
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float *v14; // r9
  const struct D2D_RECT_F *v15; // r10
  char v16; // r11
  float v17; // xmm2_4
  float v18; // xmm9_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  unsigned __int64 v22[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v23; // [rsp+40h] [rbp-29h] BYREF
  struct D2D_POINT_2F v24; // [rsp+50h] [rbp-19h] BYREF

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  if ( a3 )
  {
    if ( a4 || !*(_BYTE *)(a1 + 1564) )
    {
      v23 = *(_OWORD *)a2;
      return CArrayBasedCoverageSet::IsCovered(a1 + 616, &v23);
    }
    v23 = 0LL;
    if ( CMILMatrix::IsTranslateIgnoreZ<1>(a1 + 1572) )
    {
      v8 = *(float *)(v6 + 48) + *v7;
      v9 = *(float *)(v6 + 48) + v7[2];
      v10 = *(float *)(v6 + 52) + v7[1];
      v11 = *(float *)(v6 + 52) + v7[3];
LABEL_13:
      *(_QWORD *)&v23 = __PAIR64__(LODWORD(v10), LODWORD(v8));
      *((_QWORD *)&v23 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v9));
      return CArrayBasedCoverageSet::IsCovered(a1 + 616, &v23);
    }
    v12 = 0.0;
    v13 = 0.0;
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v6) )
    {
      v17 = *v14;
      v16 = 1;
      v18 = v14[5];
      v8 = (float)(*v14 * v15->left) + v14[12];
      v9 = (float)(*v14 * v15->right) + v14[12];
      v19 = v18 * v15->bottom;
      v10 = (float)(v18 * v15->top) + v14[13];
      *(float *)&v23 = v8;
      v12 = v8;
      v11 = v19 + v14[13];
      v13 = v9;
      *(_QWORD *)((char *)&v23 + 4) = __PAIR64__(LODWORD(v9), LODWORD(v10));
      *((float *)&v23 + 3) = v11;
      if ( v17 > 0.0 && v18 > 0.0 )
        goto LABEL_13;
    }
    else
    {
      v11 = *((float *)&v23 + 3);
      v9 = *((float *)&v23 + 2);
      v10 = *((float *)&v23 + 1);
      LODWORD(v8) = v23;
    }
    if ( v16 )
    {
      if ( v12 > v13 )
      {
        v20 = v8;
        v8 = v9;
        v9 = v20;
      }
      if ( v10 > v11 )
      {
        v21 = v10;
        v10 = v11;
        v11 = v21;
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v14, v15, &v24);
      v22[0] = 4LL;
      v22[1] = (unsigned __int64)&v24;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        (float *)&v23,
        v22);
      v11 = *((float *)&v23 + 3);
      v9 = *((float *)&v23 + 2);
      v10 = *((float *)&v23 + 1);
      LODWORD(v8) = v23;
    }
    goto LABEL_13;
  }
  return 0;
}
