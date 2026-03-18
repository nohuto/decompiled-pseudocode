/*
 * XREFs of ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z @ 0x1801662C0
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

void __fastcall CCpuClipAntialiasDrawListEntry::FillVertexUVs(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v4; // rax
  unsigned int v5; // r12d
  __int64 *v6; // r14
  unsigned __int64 v10; // r13
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  int v15; // r15d
  int v16; // r13d
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // ebx
  float v22; // xmm8_4
  __int64 v23; // r14
  __int64 v24; // rdx
  int v25; // r14d
  unsigned int v26; // ebx
  __int64 v27; // r15
  int v28; // esi
  float v29; // xmm0_4
  float v30; // xmm0_4
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // r9
  unsigned int v36; // r11d
  __int64 v37; // r10
  __int64 v38; // rax
  float v39; // xmm4_4
  float v40; // xmm1_4
  unsigned __int64 v41; // r9
  size_t v42; // rbx
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  unsigned int v47; // ecx
  int v48; // edx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r11d
  __int64 v52; // r10
  __int64 v53; // rax
  float v54; // xmm4_4
  float v55; // xmm1_4
  unsigned __int64 v56; // [rsp+20h] [rbp-78h]
  float Y; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp+20h]

  v58 = a4;
  v4 = *(unsigned __int64 **)(a1 + 80);
  v5 = 0;
  v6 = (__int64 *)(a1 + 80);
  v10 = 0LL;
  if ( !v4 )
    goto LABEL_19;
  v11 = *(float *)(a1 + 100);
  v10 = *v4;
  v12 = *(float *)(a2 + 4);
  v56 = *v4;
  v13 = 0.0;
  if ( v12 != v11 )
  {
    v14 = *(float *)(a1 + 104);
    v15 = (int)v11;
    v16 = (unsigned __int16)(int)v11;
    if ( v12 == v14 )
    {
      v12 = ceilf_0(*(float *)(a1 + 104));
    }
    else
    {
      if ( (float)(v16 + 1) > v12 )
      {
        v17 = (float)(v12 - v11) / (float)(fminf((float)v16 + 1.0, v14) - v11);
        goto LABEL_6;
      }
      Y = 0.0;
      v43 = modff(v14, &Y);
      v44 = (float)(unsigned __int16)(int)Y;
      if ( v12 >= v44 )
      {
        v17 = (float)((float)(v12 - v44) / v43) + (float)(unsigned __int16)((int)Y - v15);
        goto LABEL_6;
      }
    }
    v17 = v12 - (float)v16;
LABEL_6:
    v10 = v56;
    goto LABEL_7;
  }
  v17 = 0.0;
LABEL_7:
  v18 = *(float *)(a2 + 8);
  v19 = *(float *)(a1 + 100);
  if ( v18 != v19 )
  {
    v20 = *(float *)(a1 + 104);
    v21 = (unsigned __int16)(int)v19;
    if ( v18 == v20 )
    {
      v22 = ceilf_0(v20);
    }
    else
    {
      if ( (float)(v21 + 1) > v18 )
      {
        v13 = (float)(v18 - v19) / (float)(fminf((float)v21 + 1.0, v20) - v19);
        goto LABEL_11;
      }
      Y = 0.0;
      v45 = modff(v20, &Y);
      v22 = v18;
      v46 = (float)(unsigned __int16)(int)Y;
      if ( v18 >= v46 )
      {
        v13 = (float)((float)(v18 - v46) / v45) + (float)(unsigned __int16)((int)Y - (int)v19);
        goto LABEL_11;
      }
    }
    v13 = v22 - (float)v21;
  }
LABEL_11:
  v23 = *v6;
  if ( v23 )
  {
    v24 = *(_QWORD *)(v23 + 16);
    v25 = 8 * *(_DWORD *)v23;
  }
  else
  {
    v24 = 0LL;
    v25 = 0;
  }
  v26 = 0;
  v27 = v24 + 2 * v25 * (unsigned __int16)(int)v17;
  if ( *(_DWORD *)(a3 + 12) )
  {
    v28 = 0;
    do
    {
      memcpy_0((void *)(*(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v26++)), (const void *)(v27 + v28), 8 * v10);
      v28 += v25;
    }
    while ( v26 < *(_DWORD *)(a3 + 12) );
  }
  Y = 0.0;
  v29 = modff(v17, &Y);
  if ( v29 > 0.000081380211 )
  {
    v47 = 0;
    v48 = 0;
    do
    {
      v49 = v27 + v48;
      v50 = v27 + 2 * v25 + v48;
      v51 = 0;
      v52 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v47);
      if ( v10 )
      {
        v53 = 0LL;
        v54 = 1.0 - v29;
        do
        {
          ++v51;
          v55 = (float)(v54 * *(float *)(v49 + 8 * v53 + 4)) + (float)(v29 * *(float *)(v50 + 8 * v53 + 4));
          *(float *)(v52 + 8 * v53) = (float)(v54 * *(float *)(v49 + 8 * v53))
                                    + (float)(v29 * *(float *)(v50 + 8 * v53));
          *(float *)(v52 + 8 * v53 + 4) = v55;
          v53 = v51;
        }
        while ( v51 < v10 );
      }
      ++v47;
      v48 += v25;
    }
    while ( v47 < 2 );
  }
  Y = 0.0;
  v30 = modff(v13, &Y);
  if ( v30 > 0.000081380211 )
  {
    v31 = *(_DWORD *)(a3 + 12);
    v32 = v31 - 4 + 2;
    if ( v32 < v31 )
    {
      v33 = (v31 - 4) * v25;
      do
      {
        v34 = v27 + v33;
        v35 = v27 + v33 + 2 * v25;
        v36 = 0;
        v37 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v32);
        if ( v10 )
        {
          v38 = 0LL;
          v39 = 1.0 - v30;
          do
          {
            ++v36;
            v40 = (float)(v39 * *(float *)(v34 + 8 * v38 + 4)) + (float)(v30 * *(float *)(v35 + 8 * v38 + 4));
            *(float *)(v37 + 8 * v38) = (float)(v30 * *(float *)(v35 + 8 * v38))
                                      + (float)(v39 * *(float *)(v34 + 8 * v38));
            *(float *)(v37 + 8 * v38 + 4) = v40;
            v38 = v36;
          }
          while ( v36 < v10 );
        }
        v33 += v25;
        ++v32;
      }
      while ( v32 < *(_DWORD *)(a3 + 12) );
    }
  }
  a4 = v58;
LABEL_19:
  if ( v10 < a4 )
  {
    v41 = a4 - v10;
    if ( *(_DWORD *)(a3 + 12) )
    {
      v42 = 8 * v41;
      do
        memset_0((void *)(8 * v10 + *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v5++)), 0, v42);
      while ( v5 < *(_DWORD *)(a3 + 12) );
    }
  }
}
