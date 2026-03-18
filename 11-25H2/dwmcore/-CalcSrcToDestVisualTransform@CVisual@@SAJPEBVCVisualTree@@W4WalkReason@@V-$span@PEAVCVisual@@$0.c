/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x1801E9DEC
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801E9A84 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x1801E9DA4 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801D4478 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        const struct CVisualTree *a1,
        __int64 a2,
        unsigned __int64 *a3,
        CVisual *a4,
        unsigned __int64 *a5)
{
  _BYTE *v7; // r8
  unsigned int v9; // ebx
  char v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  CVisual *v13; // rsi
  int WorldTransform; // eax
  bool v15; // al
  __int64 *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+28h] [rbp-E0h]
  void *v25[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+58h] [rbp-B0h]
  __int128 v28; // [rsp+68h] [rbp-A0h]
  int v29; // [rsp+78h] [rbp-90h]
  __m128 v30[4]; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+C8h] [rbp-40h]
  _OWORD v32[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v33; // [rsp+118h] [rbp+10h]
  unsigned __int64 v34; // [rsp+168h] [rbp+60h]

  v7 = 0LL;
  v9 = 0;
  v31 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = *a3;
  v34 = *a3;
  while ( 1 )
  {
    if ( v11 >= v12 )
      return v9;
    v13 = *(CVisual **)(a3[1] + 8 * v11);
    if ( v13 == a4 )
    {
      v22 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a5, v11);
      v7 = 0LL;
      v23 = *(_QWORD *)v22;
      *(_QWORD *)v23 = 1065353216LL;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_DWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 20) = 1065353216LL;
      *(_QWORD *)(v23 + 28) = 0LL;
      *(_DWORD *)(v23 + 36) = 0;
      *(_QWORD *)(v23 + 40) = 1065353216LL;
      *(_QWORD *)(v23 + 48) = 0LL;
      *(_DWORD *)(v23 + 56) = 0;
      *(_DWORD *)(v23 + 60) = 1065353216;
      LOBYTE(v22) = *(_BYTE *)(v23 + 65) & 0xE9;
      *(_BYTE *)(v23 + 64) = -86;
      *(_BYTE *)(v23 + 65) = v22 | 0x29;
      goto LABEL_10;
    }
    if ( !v10 )
      break;
LABEL_8:
    v33 = (int)v7;
    WorldTransform = CVisual::GetWorldTransform(v13, a1, 3, (__int64)v32, v7, (__int64)v7);
    v9 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v24 = 1070;
      goto LABEL_12;
    }
    *(_OWORD *)v25 = v32[0];
    v29 = v33;
    v26 = v32[1];
    v27 = v32[2];
    v28 = v32[3];
    CMILMatrix::Multiply((CMILMatrix *)v25, (const struct CMILMatrix *)v30);
    v16 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a5, v11);
    v7 = 0LL;
    v17 = v26;
    v18 = *v16;
    LODWORD(v16) = v29;
    *(_OWORD *)v18 = *(_OWORD *)v25;
    v19 = v27;
    *(_OWORD *)(v18 + 16) = v17;
    v20 = v28;
    *(_OWORD *)(v18 + 32) = v19;
    *(_OWORD *)(v18 + 48) = v20;
    *(_DWORD *)(v18 + 64) = (_DWORD)v16;
LABEL_10:
    v12 = v34;
    ++v11;
  }
  WorldTransform = CVisual::GetWorldTransform(a4, a1, 3, (__int64)v30, 0LL, 0LL);
  v9 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    v24 = 1057;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, v24, 0LL);
    return v9;
  }
  v15 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v30, v30, 0LL);
  LOWORD(v31) = v31 & 0xC003;
  if ( v15 )
  {
    v10 = 1;
    goto LABEL_8;
  }
  v9 = -2003304441;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, (unsigned int)v7, -2003304441, 0x424u, v7);
  return v9;
}
