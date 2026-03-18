/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005BD10
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005B9B0 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D2190 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C5050 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801CB760 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802B574C (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  CInterpolatePathsOperation *v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  __m128 v20; // xmm5
  __m128 v21; // xmm4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  const struct CPathData *v26; // r8
  const struct CPathData *v27; // rdx
  int v28; // eax
  CPathData *v29; // rdi
  CPathData *v30; // rcx
  void (*v31)(void); // rax
  __int64 (__fastcall *v32)(CPathData *); // rax
  float v33; // xmm1_4
  __m128 v34; // xmm6
  float v35; // xmm3_4
  __m128 v36; // xmm6
  float v37; // xmm0_4
  __m128 v38; // xmm6
  __m128 v39; // xmm6
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm6_4
  float v44; // xmm1_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm7_4
  struct CPathData *v48; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( a1 != *(_DWORD *)(a3 + 72) || a1 != a4[18] )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( a1 == 18 )
  {
    v7 = *(float *)a3;
    v8 = *(float *)a4;
    *(_DWORD *)(a5 + 72) = 18;
    *(float *)a5 = (float)((float)(v8 - v7) * a2) + v7;
  }
  else if ( a1 == 35 )
  {
    v9 = *(float *)a3;
    v10 = *(float *)(a3 + 4);
    v11 = *(float *)a4;
    v12 = *((float *)a4 + 1);
    *(_DWORD *)(a5 + 72) = 35;
    *(float *)a5 = v9 + (float)((float)(v11 - v9) * a2);
    *(float *)(a5 + 4) = v10 + (float)((float)(v12 - v10) * a2);
  }
  else
  {
    v13 = (CInterpolatePathsOperation *)(unsigned int)(a1 - 11);
    switch ( (int)v13 )
    {
      case 0:
        v26 = (const struct CPathData *)*((_QWORD *)a4 + 8);
        v27 = *(const struct CPathData **)(a3 + 64);
        v48 = 0LL;
        v28 = CInterpolatePathsOperation::Interpolate(v13, v27, v26, a2, &v48);
        if ( v28 < 0 )
          ModuleFailFastForHRESULT(v28, retaddr);
        v29 = v48;
        *(_DWORD *)(a5 + 72) = v48 != 0LL ? 0xB : 0;
        if ( *(CPathData **)(a5 + 64) != v29 )
        {
          if ( v29 )
            (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v29 + 8LL))(v29);
          v30 = *(CPathData **)(a5 + 64);
          *(_QWORD *)(a5 + 64) = v29;
          if ( v30 )
          {
            v31 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
            if ( (char *)v31 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v30);
            else
              v31();
          }
        }
        if ( v29 )
        {
          v32 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v29 + 16LL);
          if ( v32 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v29);
          else
            v32(v29);
        }
        break;
      case 31:
        v33 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
        *(_DWORD *)(a5 + 72) = 42;
        *(float *)a5 = v33;
        break;
      case 41:
        v14 = *(float *)a3;
        v15 = *(float *)(a3 + 4);
        v16 = *(float *)(a3 + 8);
        v17 = *(float *)a4;
        v18 = *((float *)a4 + 1);
        v19 = *((float *)a4 + 2);
        *(_DWORD *)(a5 + 72) = 52;
        *(float *)a5 = (float)((float)(v17 - v14) * a2) + v14;
        *(float *)(a5 + 4) = (float)((float)(v18 - v15) * a2) + v15;
        *(float *)(a5 + 8) = (float)((float)(v19 - v16) * a2) + v16;
        break;
      case 58:
        v34 = (__m128)*a4;
        v34.m128_f32[0] = (float)((float)(v34.m128_f32[0] - *(float *)a3) * a2) + *(float *)a3;
        v35 = (float)((float)(*((float *)a4 + 2) - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
        v36 = _mm_shuffle_ps(v34, v34, 225);
        v37 = (float)((float)(*((float *)a4 + 3) - *(float *)(a3 + 12)) * a2) + *(float *)(a3 + 12);
        v36.m128_f32[0] = (float)((float)(*((float *)a4 + 1) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
        *(_DWORD *)(a5 + 72) = 69;
        v38 = _mm_shuffle_ps(v36, v36, 198);
        v38.m128_f32[0] = v35;
        v39 = _mm_shuffle_ps(v38, v38, 39);
        v39.m128_f32[0] = v37;
        *(__m128 *)a5 = _mm_shuffle_ps(v39, v39, 57);
        break;
      case 59:
        v20 = *(__m128 *)a3;
        v21 = *(__m128 *)a4;
        *(_DWORD *)(a5 + 72) = 70;
        v22 = fmaxf(0.0, fminf(a2, 1.0));
        *(float *)a5 = (float)((float)(v21.m128_f32[0] - v20.m128_f32[0]) * v22) + v20.m128_f32[0];
        v23 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
        v24 = (float)((float)(_mm_shuffle_ps(v21, v21, 85).m128_f32[0] - v23) * v22) + v23;
        v25 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
        v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
        *(float *)(a5 + 4) = v24;
        *(float *)(a5 + 8) = (float)((float)(_mm_shuffle_ps(v21, v21, 170).m128_f32[0] - v25) * v22) + v25;
        *(float *)(a5 + 12) = (float)((float)(_mm_shuffle_ps(v21, v21, 255).m128_f32[0] - v20.m128_f32[0]) * v22)
                            + v20.m128_f32[0];
        break;
      case 60:
        v40 = *(float *)a3;
        v41 = *(float *)(a3 + 4);
        v42 = *(float *)(a3 + 8);
        v43 = *(float *)(a3 + 12);
        v44 = *(float *)a4;
        v45 = *((float *)a4 + 2);
        v46 = *((float *)a4 + 1) - v41;
        v47 = *((float *)a4 + 3);
        *(_DWORD *)(a5 + 72) = 71;
        *(float *)a5 = (float)((float)(v44 - v40) * a2) + v40;
        *(float *)(a5 + 4) = (float)(v46 * a2) + v41;
        *(float *)(a5 + 8) = (float)((float)(v45 - v42) * a2) + v42;
        *(float *)(a5 + 12) = (float)((float)(v47 - v43) * a2) + v43;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
}
