/*
 * XREFs of ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A3330
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802728B4 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028FEBC (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 */

char __fastcall COcclusionContext::IsOccluded(__int64 a1, float *a2, unsigned int a3, char a4)
{
  __int64 v7; // r9
  float *v8; // r10
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float *v15; // r9
  const struct D2D_RECT_F *v16; // r10
  char v17; // r11
  float v18; // xmm2_4
  float v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  unsigned __int64 v23[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v24; // [rsp+40h] [rbp-29h] BYREF
  struct D2D_POINT_2F v25; // [rsp+50h] [rbp-19h] BYREF

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  if ( a3 )
  {
    if ( a4 || !*(_BYTE *)(a1 + 1564) )
    {
      v24 = *(_OWORD *)a2;
      return CArrayBasedCoverageSet::IsCovered(a1 + 616, &v24, a3);
    }
    v24 = 0LL;
    if ( CMILMatrix::IsTranslateIgnoreZ<1>(a1 + 1572) )
    {
      v9 = *(float *)(v7 + 48) + *v8;
      v10 = *(float *)(v7 + 48) + v8[2];
      v11 = *(float *)(v7 + 52) + v8[1];
      v12 = *(float *)(v7 + 52) + v8[3];
LABEL_13:
      *(_QWORD *)&v24 = __PAIR64__(LODWORD(v11), LODWORD(v9));
      *((_QWORD *)&v24 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v10));
      return CArrayBasedCoverageSet::IsCovered(a1 + 616, &v24, a3);
    }
    v13 = 0.0;
    v14 = 0.0;
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v7) )
    {
      v18 = *v15;
      v17 = 1;
      v19 = v15[5];
      v9 = (float)(*v15 * v16->left) + v15[12];
      v10 = (float)(*v15 * v16->right) + v15[12];
      v20 = v19 * v16->bottom;
      v11 = (float)(v19 * v16->top) + v15[13];
      *(float *)&v24 = v9;
      v13 = v9;
      v12 = v20 + v15[13];
      v14 = v10;
      *(_QWORD *)((char *)&v24 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v11));
      *((float *)&v24 + 3) = v12;
      if ( v18 > 0.0 && v19 > 0.0 )
        goto LABEL_13;
    }
    else
    {
      v12 = *((float *)&v24 + 3);
      v10 = *((float *)&v24 + 2);
      v11 = *((float *)&v24 + 1);
      LODWORD(v9) = v24;
    }
    if ( v17 )
    {
      if ( v13 > v14 )
      {
        v21 = v9;
        v9 = v10;
        v10 = v21;
      }
      if ( v11 > v12 )
      {
        v22 = v11;
        v11 = v12;
        v12 = v22;
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v15, v16, &v25);
      v23[0] = 4LL;
      v23[1] = (unsigned __int64)&v25;
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        (float *)&v24,
        v23);
      v12 = *((float *)&v24 + 3);
      v10 = *((float *)&v24 + 2);
      v11 = *((float *)&v24 + 1);
      LODWORD(v9) = v24;
    }
    goto LABEL_13;
  }
  return 0;
}
