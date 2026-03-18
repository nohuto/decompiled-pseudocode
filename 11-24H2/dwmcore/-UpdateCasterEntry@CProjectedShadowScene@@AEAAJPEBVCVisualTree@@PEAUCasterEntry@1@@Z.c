/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18016823C
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x180164408 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180164598 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801667A0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180167ED8 (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180167F28 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180167F50 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180167FB4 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801685A4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180168C64 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  __int64 *v3; // r14
  unsigned int v7; // edi
  float *v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // r13
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
  float v24[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v25; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_4F v26; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v28[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v29; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-60h]
  __int128 v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C8h] [rbp-40h]
  _OWORD v34[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v35; // [rsp+118h] [rbp+10h]
  const struct CVisualTree *v36; // [rsp+178h] [rbp+70h] BYREF
  float *v37; // [rsp+188h] [rbp+80h] BYREF

  v3 = *(__int64 **)a3;
  v7 = 0;
  v8 = *(float **)(*(_QWORD *)a3 + 72LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13));
  *((_BYTE *)a3 + 152) = 1;
  v10 = (_QWORD *)v9;
  if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)v3)
    && CProjectedShadowScene::IsValidVisual(a2, (struct CVisual *)v8)
    && (v36 = a2,
        *((_BYTE *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(v3 + 11, &v36) + 17))
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(CProjectedShadowCaster::GetEffectiveAlpha((CProjectedShadowCaster *)v3, a2, v11)) & _xmm) >= 0.0000011920929
    && (CasterBounds = (float *)CProjectedShadowCaster::GetCasterBounds((__int64)v3, (unsigned __int64)a2),
        (float)(CasterBounds[2] - *CasterBounds) >= 0.5)
    && (float)(CasterBounds[3] - CasterBounds[1]) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 14)
      || *((_QWORD *)a3 + 1) < (unsigned __int64)CVisual::FindTreeData((CVisual *)v8, v14)[28] )
    {
      v15 = v8[36];
      v16 = v8[37];
      v25.z = 0.0;
      v35 = 0;
      v36 = (const struct CVisualTree *)v34;
      v27[1] = &v36;
      v28[1] = (unsigned __int64)&v37;
      v27[0] = 1LL;
      v28[0] = 1LL;
      v25.x = v15 * 0.5;
      v25.y = v16 * 0.5;
      v25.w = 1.0;
      v37 = v8;
      v17 = CVisual::CalcSrcToDestVisualTransform(a2, (__int64)v14, v28, v10, (__int64)v27);
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2CDu, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v34, &v26, &v25);
        v18 = (const struct CVisualTree *)*((_QWORD *)this + 13);
        v24[0] = v26.x / v26.w;
        v24[2] = v26.z / v26.w;
        v24[1] = v26.y / v26.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v18,
                                (const struct CCompositionLight *)v24,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightToCameraMatrix, 0x2D7u, 0LL);
        }
        else
        {
          v29 = v34[0];
          v33 = v35;
          v30 = v34[1];
          v31 = v34[2];
          v32 = v34[3];
          CMILMatrix::Multiply((CMILMatrix *)&v29, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v20 = v33;
          v21 = v30;
          *((_OWORD *)a3 + 1) = v29;
          v22 = v31;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v32;
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
    CProjectedShadowScene::DiscardCachesForCaster(this, (struct CProjectedShadowCaster *)v3);
    return 0LL;
  }
}
