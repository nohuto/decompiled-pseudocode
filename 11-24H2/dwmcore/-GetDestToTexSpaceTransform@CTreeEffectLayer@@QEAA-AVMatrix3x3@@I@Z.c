/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180126B54
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180126E00 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801E2510 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, _DWORD *a2, unsigned int a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float v13; // xmm4_4
  int v14; // xmm0_4
  _DWORD *result; // rax
  int v16; // xmm1_4
  int v17; // xmm3_4
  int v18; // xmm4_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // [rsp+28h] [rbp-79h] BYREF
  int v22; // [rsp+2Ch] [rbp-75h]
  _DWORD v23[6]; // [rsp+30h] [rbp-71h] BYREF
  __int128 v24; // [rsp+48h] [rbp-59h] BYREF
  __int64 v25; // [rsp+58h] [rbp-49h]
  float v26[3]; // [rsp+60h] [rbp-41h] BYREF
  float v27; // [rsp+6Ch] [rbp-35h]
  float v28; // [rsp+70h] [rbp-31h]
  float v29; // [rsp+74h] [rbp-2Dh]
  __int128 v30; // [rsp+78h] [rbp-29h] BYREF
  float v31; // [rsp+88h] [rbp-19h]
  float v32; // [rsp+8Ch] [rbp-15h]
  _BYTE v33[24]; // [rsp+90h] [rbp-11h] BYREF

  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 32LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    &v21);
  v6 = *(float *)(a1 + 280);
  v7 = (float)*(int *)(a1 + 16);
  v8 = (float)*(int *)(a1 + 20);
  v9 = (float)(*(float *)(a1 + 196) - v7) * v6;
  v10 = (float)(*(float *)(a1 + 200) - v8) * v6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 256) + 704LL) )
  {
    v9 = *(float *)(a1 + 228) - v7;
    v10 = *(float *)(a1 + 232) - v8;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 128LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 128LL),
          a3);
  v24 = *(_OWORD *)v11;
  v25 = *(_QWORD *)(v11 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v24) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v24);
    v9 = v9 + *(float *)&v25;
    v10 = v10 + *((float *)&v25 + 1);
    v25 = 0LL;
  }
  v26[1] = 0.0;
  v26[2] = 0.0;
  v12 = (float)v22;
  v26[0] = 1.0 / (float)v21;
  v27 = 1.0 / (float)v22;
  v28 = 0.0 - (float)(v26[0] * 0.0);
  v29 = 0.0 - (float)(v27 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v33,
    (const struct D2D1::Matrix3x2F *)v26,
    (const struct D2D1::Matrix3x2F *)&v24);
  v31 = v9 / v13;
  v32 = v10 / v12;
  v30 = _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v23,
    (const struct D2D1::Matrix3x2F *)v33,
    (const struct D2D1::Matrix3x2F *)&v30);
  v14 = v23[2];
  result = a2;
  v16 = v23[3];
  v17 = v23[0];
  v18 = v23[1];
  a2[2] = 0;
  a2[5] = 0;
  a2[3] = v14;
  v19 = v23[4];
  a2[4] = v16;
  v20 = v23[5];
  a2[6] = v19;
  a2[7] = v20;
  *a2 = v17;
  a2[1] = v18;
  a2[8] = 1065353216;
  return result;
}
