/*
 * XREFs of ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x1801B3630
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CCpuClipAntialiasSink::CalcBoundingRect(__int64 a1, unsigned int a2, __int64 a3, float *a4)
{
  unsigned __int64 result; // rax
  float v7; // xmm2_4
  float v8; // xmm0_4
  unsigned int v10; // ebp
  __int64 v11; // r14
  int v12; // edi
  float v13; // xmm0_4
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  float v18; // xmm0_4
  float v19; // xmm5_4
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  unsigned int v30; // ecx
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r8d
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  float Y; // [rsp+70h] [rbp+18h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 3.4028235e38;
  a4[1] = 3.4028235e38;
  a4[2] = -3.4028235e38;
  a4[3] = -3.4028235e38;
  v7 = *(float *)(a3 + 4);
  v8 = *(float *)(a3 + 8);
  if ( v7 < v8 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    v12 = (int)v7;
    Y = 0.0;
    v13 = modff(v8, &Y);
    v14 = (int)Y;
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.000081380211 )
      LOWORD(v14) = v14 - 1;
    v15 = (unsigned __int16)v14 - (unsigned __int16)v12 + 1;
    v16 = 2 * v15 + 2;
    v17 = *(_QWORD *)(v11 + 40) + 8LL * (unsigned __int16)(2 * v12);
    if ( !v17 && 2 * v15 != -2 || !*(_QWORD *)(v11 + 48) && 6 * v15 )
      goto LABEL_9;
    v18 = *(float *)(a3 + 4);
    Y = 0.0;
    v19 = modff(v18, &Y);
    if ( v19 <= 0.000081380211 )
    {
      while ( 1 )
      {
        v20 = v10;
        if ( v10 >= v16 )
          break;
        ++v10;
        v21 = a4[1];
        v22 = a4[2];
        v23 = a4[3];
        v24 = fminf(*a4, *(float *)(v17 + 8 * v20));
        *a4 = v24;
        v25 = fminf(v21, *(float *)(v17 + 8 * v20 + 4));
        a4[1] = v25;
        v26 = fmaxf(v22, *(float *)(v17 + 8 * v20));
        a4[2] = v26;
        v27 = fmaxf(v23, *(float *)(v17 + 8 * v20 + 4));
        a4[3] = v27;
        if ( v10 >= 2 )
          goto LABEL_11;
      }
LABEL_9:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    do
    {
      v47 = v10;
      if ( v10 >= v16 )
        goto LABEL_9;
      v48 = v10 + 2;
      if ( v48 >= v16 )
        goto LABEL_9;
      ++v10;
      v49 = (float)(v19 * *(float *)(v17 + 8 * v48)) + (float)((float)(1.0 - v19) * *(float *)(v17 + 8 * v47));
      v50 = (float)((float)(1.0 - v19) * *(float *)(v17 + 8 * v47 + 4)) + (float)(v19 * *(float *)(v17 + 8 * v48 + 4));
      v24 = fminf(*a4, v49);
      v26 = fmaxf(a4[2], v49);
      v51 = a4[3];
      v25 = fminf(a4[1], v50);
      *a4 = v24;
      v27 = fmaxf(v51, v50);
      a4[2] = v26;
      a4[1] = v25;
      a4[3] = v27;
    }
    while ( v10 < 2 );
LABEL_11:
    if ( a2 != 1 )
    {
      v35 = 2;
      if ( v16 - 2 > 2 )
      {
        v36 = 2LL;
        while ( v36 < v16 )
        {
          v24 = fminf(v24, *(float *)(v17 + 8 * v36));
          ++v35;
          *a4 = v24;
          v25 = fminf(v25, *(float *)(v17 + 8 * v36 + 4));
          a4[1] = v25;
          v26 = fmaxf(v26, *(float *)(v17 + 8 * v36));
          a4[2] = v26;
          v27 = fmaxf(v27, *(float *)(v17 + 8 * v36 + 4));
          v36 = v35;
          a4[3] = v27;
          if ( v35 >= v16 - 2 )
            goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
LABEL_12:
    v28 = *(float *)(a3 + 8);
    Y = 0.0;
    v29 = modff(v28, &Y);
    if ( v29 > 0.000081380211 )
    {
      v37 = (unsigned int)(v16 - 4);
      v38 = v37 + 2;
      result = (unsigned int)(v37 + 2);
      if ( result < v16 )
      {
        while ( (unsigned int)v37 < v16 && result < v16 )
        {
          ++v38;
          v39 = (float)(1.0 - v29) * *(float *)(v17 + 8 * v37 + 4);
          v40 = (float)(1.0 - v29) * *(float *)(v17 + 8 * v37);
          v37 = (unsigned int)(v37 + 1);
          v41 = v40 + (float)(v29 * *(float *)(v17 + 8 * result));
          v42 = v29 * *(float *)(v17 + 8 * result + 4);
          result = v38;
          v43 = v39 + v42;
          v44 = fminf(a4[1], v43);
          *a4 = fminf(*a4, v41);
          v45 = fmaxf(a4[2], v41);
          a4[1] = v44;
          v46 = fmaxf(a4[3], v43);
          a4[2] = v45;
          a4[3] = v46;
          if ( v38 >= v16 )
            return result;
        }
        goto LABEL_9;
      }
    }
    else
    {
      v30 = v16 - 2;
      result = (unsigned int)(v16 - 2);
      if ( result < v16 )
      {
        do
        {
          ++v30;
          v31 = a4[1];
          *a4 = fminf(*a4, *(float *)(v17 + 8 * result));
          v32 = a4[2];
          a4[1] = fminf(v31, *(float *)(v17 + 8 * result + 4));
          v33 = a4[3];
          a4[2] = fmaxf(v32, *(float *)(v17 + 8 * result));
          v34 = fmaxf(v33, *(float *)(v17 + 8 * result + 4));
          result = v30;
          a4[3] = v34;
        }
        while ( v30 < v16 );
      }
    }
  }
  return result;
}
