/*
 * XREFs of ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578
 * Callers:
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18002D8C8 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18002DA20 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z @ 0x18027460C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::GetLocalClipRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  float *v5; // r10
  float *v6; // r9
  const struct D2D_RECT_F *v7; // r10
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  struct D2D_POINT_2F v14; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3, a2, a3, a3) )
  {
    *(float *)a2 = *v5 + *(float *)(v4 + 48);
    *(float *)(a2 + 4) = v5[1] + *(float *)(v4 + 52);
    *(float *)(a2 + 8) = v5[2] + *(float *)(v4 + 48);
    *(float *)(a2 + 12) = v5[3] + *(float *)(v4 + 52);
  }
  else if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v4) )
  {
    v8 = (float)(v7->left * *v6) + v6[12];
    *(float *)a2 = v8;
    v9 = (float)(v7->top * v6[5]) + v6[13];
    *(float *)(a2 + 4) = v9;
    v10 = (float)(v7->right * *v6) + v6[12];
    *(float *)(a2 + 8) = v10;
    v11 = (float)(v7->bottom * v6[5]) + v6[13];
    *(float *)(a2 + 12) = v11;
    if ( *v6 <= 0.0 || v6[5] <= 0.0 )
    {
      if ( v8 > v10 )
      {
        *(float *)a2 = v10;
        *(float *)(a2 + 8) = v8;
      }
      if ( v9 > v11 )
      {
        *(float *)(a2 + 4) = v11;
        *(float *)(a2 + 12) = v9;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v6, v7, &v14);
    v13[0] = 4LL;
    v13[1] = &v14;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
      a2,
      v13);
  }
  return a2;
}
