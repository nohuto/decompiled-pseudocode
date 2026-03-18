/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801647E4
 * Callers:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18016400C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801640B4 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x180164408 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180164598 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801667A0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        FLOAT *a4)
{
  unsigned int v8; // ebx
  const struct CCompositionLight *v9; // rax
  __int64 v10; // rdx
  const struct CCompositionLight *v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 (__fastcall *v16)(const struct CVisualTree *); // rax
  float v17; // xmm8_4
  float *v18; // rax
  FLOAT v19; // xmm8_4
  FLOAT v20; // xmm7_4
  __m128 v21; // xmm0
  FLOAT y; // xmm1_4
  FLOAT z; // xmm2_4
  int v25; // eax
  __int64 v26; // rax
  FLOAT v27; // xmm1_4
  struct D2D_VECTOR_4F v28; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v29; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v30[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+98h] [rbp-70h]
  _OWORD v33[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v34; // [rsp+E8h] [rbp-20h]
  _OWORD *v35; // [rsp+160h] [rbp+58h] BYREF
  const struct CCompositionLight *v36; // [rsp+168h] [rbp+60h] BYREF

  v8 = 0;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2);
  v34 = 0;
  v11 = v9;
  if ( a3 == v9 )
  {
    v33[0] = _xmm;
    v33[1] = _xmm;
    BYTE1(v34) = BYTE1(v34) & 0xC0 | 0x29;
    v33[2] = _xmm;
    v33[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    LOBYTE(v34) = -86;
  }
  else
  {
    *(_QWORD *)&v29.x = 1LL;
    v35 = v33;
    *(_QWORD *)&v28.x = 1LL;
    *(_QWORD *)&v29.z = &v35;
    v36 = v9;
    *(_QWORD *)&v28.z = &v36;
    v25 = CVisual::CalcSrcToDestVisualTransform(this, v10, (unsigned __int64 *)&v28, a3, (__int64)&v29);
    v8 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x5Cu, 0LL);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2) == 2 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2);
    v28.w = 1.0;
    v27 = *(float *)(v26 + 4);
    v28.x = *(FLOAT *)v26;
    v28.z = *(FLOAT *)(v26 + 8);
    v28.y = v27;
    CMILMatrix::Transform4DVector((CMILMatrix *)v33, &v29, &v28);
    y = v29.y;
    z = v29.z;
    *a4 = v29.x;
  }
  else
  {
    v32 = 0;
    if ( a3 == v11 )
    {
      v30[0] = _xmm;
      v30[1] = _xmm;
      BYTE1(v32) = BYTE1(v32) & 0xC0 | 0x29;
      v30[2] = _xmm;
      v31 = *(__int128 *)&_xmm.r;
      LOBYTE(v32) = -86;
    }
    else
    {
      v36 = a3;
      *(_QWORD *)&v29.x = 1LL;
      v35 = v30;
      *(_QWORD *)&v28.x = 1LL;
      *(_QWORD *)&v29.z = &v35;
      *(_QWORD *)&v28.z = &v36;
      v13 = CVisual::CalcSrcToDestVisualTransform(this, v12, (unsigned __int64 *)&v28, v11, (__int64)&v29);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x75u, 0LL);
        return v8;
      }
    }
    v14 = *(float *)&v31;
    v15 = *((float *)&v31 + 1);
    v16 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL);
    v17 = *((float *)&v31 + 2);
    v28.w = *((FLOAT *)&v31 + 3);
    v18 = (float *)v16(a2);
    v19 = v17 - (float)(v18[2] * 100.0);
    v20 = v15 - (float)(v18[1] * 100.0);
    v28.x = v14 - (float)(*v18 * 100.0);
    v28.z = v19;
    v28.y = v20;
    v21 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v33, &v29, &v28));
    *a4 = v21.m128_f32[0];
    LODWORD(y) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    LODWORD(z) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
  }
  a4[1] = y;
  a4[2] = z;
  return v8;
}
