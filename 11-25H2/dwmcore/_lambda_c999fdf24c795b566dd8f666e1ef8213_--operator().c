/*
 * XREFs of _lambda_c999fdf24c795b566dd8f666e1ef8213_::operator() @ 0x180167900
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180166790 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c999fdf24c795b566dd8f666e1ef8213_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        float a5,
        int a6,
        unsigned int *a7,
        __int64 a8,
        __int64 *a9)
{
  int v9; // r14d
  int v10; // r12d
  unsigned int v11; // esi
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdi
  float v18; // xmm1_4
  float *v19; // rdx
  float *v20; // rax
  __int64 v21; // rbx
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float *v26; // rcx
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  int v33; // eax
  _QWORD v35[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v36; // [rsp+48h] [rbp-C0h]
  int v37; // [rsp+4Ch] [rbp-BCh]
  int v38; // [rsp+50h] [rbp-B8h]
  int v39; // [rsp+54h] [rbp-B4h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  int v42; // [rsp+68h] [rbp-A0h]
  int v43; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v44[4]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v45[8]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v46[24]; // [rsp+A8h] [rbp-60h] BYREF

  v9 = a3 - a4;
  v10 = -a4;
  v11 = a4;
  do
  {
    if ( (unsigned __int64)v11 >= *(_QWORD *)a2 || (v13 = *(_QWORD *)(a2 + 8), v14 = v9 + v11, v14 >= *(_QWORD *)a2) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v15 = *(_DWORD *)(a2 + 24);
    v16 = v10 + v11;
    v17 = v16 << 6;
    v18 = (float)((float)(1.0 - a5) * *(float *)(v13 + 8 * v14 + 4)) + (float)(a5 * *(float *)(v13 + 8LL * v11 + 4));
    *(float *)&v44[2 * v16] = (float)(a5 * *(float *)(v13 + 8LL * v11))
                            + (float)((float)(1.0 - a5) * *(float *)(v13 + 8 * v14));
    *(float *)&v44[2 * v16 + 1] = v18;
    v19 = (float *)(*(_QWORD *)(a2 + 16) + (int)(v11 * v15));
    v20 = (float *)(*(_QWORD *)(a2 + 16) + (int)v14 * v15);
    v21 = *(_QWORD *)(a2 + 32) + *(_DWORD *)(a2 + 40) * (int)v14;
    v22 = (float)(1.0 - a5) * *v20;
    v23 = (float)(1.0 - a5) * v20[1];
    LODWORD(v20) = *(_DWORD *)(a2 + 40) * v11;
    v24 = v22 + (float)(a5 * *v19);
    v25 = a5 * v19[1];
    *(_DWORD *)((char *)&v45[2] + v17) = 1065353216;
    *(float *)((char *)v45 + v17) = v24;
    v26 = (float *)(*(_QWORD *)(a2 + 32) + (int)v20);
    *(float *)((char *)&v45[1] + v17) = v23 + v25;
    v27 = (float)(1.0 - a5) * *(float *)(v21 + 4);
    v28 = *(float *)&v45[16 * (unsigned __int64)(v10 + v11)];
    v29 = (float)((float)(1.0 - a5) * *(float *)v21) + (float)(a5 * *v26);
    v30 = a5 * v26[1];
    *(float *)((char *)v46 + v17) = v29;
    v31 = v27 + v30;
    v32 = *(float *)&v45[16 * (unsigned __int64)(v10 + v11) + 1];
    *(float *)((char *)&v46[1] + v17) = v31;
    ++v11;
    *(float *)((char *)&v46[2] + v17) = sqrtf_0(
                                          (float)((float)(v32 - v31) * (float)(v32 - v31))
                                        + (float)((float)(v28 - v29) * (float)(v28 - v29)));
    *(_DWORD *)((char *)&v46[3] + v17) = *(_DWORD *)(v21 + 12);
  }
  while ( v10 + v11 < 2 );
  v38 = 0;
  v35[2] = 0x200000040LL;
  v35[0] = v44;
  v36 = 64;
  v35[1] = v45;
  v35[3] = v46;
  v41 = *a9;
  v42 = *((_DWORD *)a9 + 2);
  v33 = *((_DWORD *)a9 + 3);
  v37 = 2;
  v39 = 1065353216;
  LOBYTE(v40) = 1;
  v43 = v33;
  return TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>((__int64)v35, 2LL, a7);
}
