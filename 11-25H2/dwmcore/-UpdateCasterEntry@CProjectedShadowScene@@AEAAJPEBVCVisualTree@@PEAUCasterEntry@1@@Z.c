/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18011BB88 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18011BF90 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18011C284 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18011C2D0 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18011C2F8 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18011C35C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18011E140 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801E993C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801E9DEC (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  struct CProjectedShadowCaster *v3; // r14
  unsigned int v7; // edi
  float *v8; // r12
  int v9; // eax
  int v10; // r13d
  bool *v11; // r8
  float *CasterBounds; // rax
  const struct CVisualTree *v14; // rdx
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  const struct CVisualTree *v18; // rdx
  int LightToCameraMatrix; // eax
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct CMILMatrix *v24; // [rsp+28h] [rbp-E0h]
  float v25[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v26; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_4F v27; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h]
  __int128 v32; // [rsp+A8h] [rbp-60h]
  __int128 v33; // [rsp+B8h] [rbp-50h]
  int v34; // [rsp+C8h] [rbp-40h]
  _OWORD v35[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v36; // [rsp+118h] [rbp+10h]
  const struct CVisualTree *v37; // [rsp+178h] [rbp+70h] BYREF
  float *v38; // [rsp+188h] [rbp+80h] BYREF

  v3 = *(struct CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(float **)(*(_QWORD *)a3 + 72LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13));
  *((_BYTE *)a3 + 152) = 1;
  v10 = v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual((struct CVisual **)a2, (struct CVisual *)v8)
    && (v37 = a2,
        *(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)v3 + 88, &v37)
                 + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v11)) & _xmm) >= 0.0000011920929
    && (CasterBounds = (float *)CProjectedShadowCaster::GetCasterBounds(v3, a2),
        (float)(CasterBounds[2] - *CasterBounds) >= 0.5)
    && (float)(CasterBounds[3] - CasterBounds[1]) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 14)
      || *((_QWORD *)a3 + 1) < (unsigned __int64)CVisual::FindTreeData((CVisual *)v8, v14)[28] )
    {
      v15 = v8[36];
      v16 = v8[37];
      v26.z = 0.0;
      v36 = 0;
      v37 = (const struct CVisualTree *)v35;
      v28[1] = &v37;
      v29[1] = &v38;
      v28[0] = 1LL;
      v29[0] = 1LL;
      v26.x = v15 * 0.5;
      v26.y = v16 * 0.5;
      v26.w = 1.0;
      v38 = v8;
      v17 = CVisual::CalcSrcToDestVisualTransform((_DWORD)a2, (_DWORD)v14, (unsigned int)v29, v10, (__int64)v28);
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2CDu, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v35, &v27, &v26);
        v18 = (const struct CVisualTree *)*((_QWORD *)this + 13);
        v25[0] = v27.x / v27.w;
        v25[2] = v27.z / v27.w;
        v25[1] = v27.y / v27.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v18,
                                (const struct CCompositionLight *)v25,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84),
                                v24);
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightToCameraMatrix, 0x2D7u, 0LL);
        }
        else
        {
          v30 = v35[0];
          v34 = v36;
          v31 = v35[1];
          v32 = v35[2];
          v33 = v35[3];
          CMILMatrix::Multiply((CMILMatrix *)&v30, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v20 = v34;
          v21 = v31;
          *((_OWORD *)a3 + 1) = v30;
          v22 = v32;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v33;
          *((_OWORD *)a3 + 3) = v22;
          *((_OWORD *)a3 + 4) = v23;
          *((_DWORD *)a3 + 20) = v20;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 3) + 888LL);
        }
      }
    }
    return v7;
  }
  else
  {
    *((_BYTE *)a3 + 152) = 0;
    CProjectedShadowScene::DiscardCachesForCaster(this, v3);
    return 0LL;
  }
}
