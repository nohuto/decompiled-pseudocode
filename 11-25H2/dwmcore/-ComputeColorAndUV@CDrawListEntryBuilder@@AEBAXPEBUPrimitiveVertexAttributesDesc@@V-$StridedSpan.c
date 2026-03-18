/*
 * XREFs of ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18016B8E0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180047E80 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ComputeColorAndUV(unsigned int *a1, __m128 *a2, __int64 a3, __int64 a4)
{
  CCommonRenderingEffect *v6; // rcx
  int v9; // edi
  __int64 (*v10)(void); // rax
  int UsedSamplersBitmask; // eax
  bool *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  bool v15; // r8
  char v16; // cl
  __m128 v17; // xmm5
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // r11d
  float v21; // xmm0_4
  float v22; // eax
  float v23; // xmm0_4
  unsigned int v24; // r11d
  __int32 v25; // eax
  __int64 result; // rax
  unsigned int v27; // r11d
  unsigned int v28; // edi
  unsigned int i; // r10d
  __int64 v30; // r9
  float *v31; // r8
  gsl::details *v32; // rcx
  __int64 v33; // rdx
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // r11d
  float v46; // xmm0_4
  float v47; // eax
  float v48; // xmm0_4
  __int32 v49; // [rsp+20h] [rbp-88h]
  _BYTE v50[4]; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int128 v51; // [rsp+30h] [rbp-78h]

  v6 = (CCommonRenderingEffect *)*((_QWORD *)a1 + 10);
  v9 = 1;
  v10 = *(__int64 (**)(void))(*(_QWORD *)v6 + 24LL);
  if ( (char *)v10 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = (1 << *(_DWORD *)(*((_QWORD *)v6 + 2) + 260LL)) - 1;
  }
  else if ( (char *)v10 == (char *)CCommonRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v6);
  }
  else
  {
    UsedSamplersBitmask = v10();
  }
  if ( *a1 )
  {
    v12 = v50;
    v13 = 0LL;
    v14 = *a1;
    do
    {
      v15 = a2 && v13 < a2[2].m128_u64[0] && (v9 & UsedSamplersBitmask) != 0;
      *v12 = v15;
      ++v13;
      ++v12;
      v9 = __ROL4__(v9, 1);
      --v14;
    }
    while ( v14 );
  }
  if ( a2 && *((_BYTE *)a1 + 29) )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( !a2 )
    {
      v51 = _xmm;
      v17 = (__m128)_xmm;
      goto LABEL_14;
    }
  }
  v51 = (__int128)*a2;
  v17 = (__m128)v51;
  if ( !v16 )
  {
LABEL_14:
    v18 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
    v19 = (float)(v18 * 255.0) + 6291456.25;
    *(float *)&v51 = v19;
    v20 = v19;
    v21 = (float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] * 255.0) + 6291456.25;
    v22 = v21;
    v23 = (float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] * 255.0) + 6291456.25;
    v24 = ((int)(LODWORD(v23) << 10) >> 3) | (LODWORD(v22) << 15) & 0xFFFF00FF | (LODWORD(v20) << 23) & 0xFF0000FF;
    *(float *)&v49 = (float)(v17.m128_f32[0] * 255.0) + 6291456.25;
    v25 = v49;
    goto LABEL_15;
  }
  v18 = _mm_shuffle_ps((__m128)v51, (__m128)v51, 255).m128_f32[0];
  v44 = (float)(v18 * 255.0) + 6291456.25;
  v45 = v44;
  v46 = (float)(_mm_shuffle_ps((__m128)v51, (__m128)v51, 170).m128_f32[0] * 255.0) + 6291456.25;
  v47 = v46;
  v48 = (float)(_mm_shuffle_ps((__m128)v51, (__m128)v51, 85).m128_f32[0] * 255.0) + 6291456.25;
  v24 = ((int)(LODWORD(v48) << 10) >> 3) | (LODWORD(v47) << 15) & 0xFFFF00FF | (LODWORD(v45) << 23) & 0xFF0000FF;
  *(float *)&v51 = (float)(*(float *)&v51 * 255.0) + 6291456.25;
  v25 = v51;
LABEL_15:
  result = (unsigned int)(v25 << 10 >> 11);
  v27 = result | v24 & 0xFFFFFF00;
  v28 = v27 & 0xFFFFFF;
  if ( !v16 )
    v28 = 0;
  if ( (a1[6] & 0x800) != 0 )
  {
    if ( v18 == 0.0 )
    {
      v27 = 0;
      v28 = -16777216;
    }
    else
    {
      v28 = v27;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a3 + 12); ++i )
  {
    v30 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * i);
    v31 = (float *)(*(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * i));
    if ( v31[3] == 0.0 )
      result = v28;
    else
      result = v27;
    v32 = 0LL;
    for ( *(_DWORD *)(v30 + 12) = result; (unsigned int)v32 < *a1; v32 = (gsl::details *)(unsigned int)((_DWORD)v32 + 1) )
    {
      result = (unsigned int)v32;
      if ( v50[(unsigned int)v32] )
      {
        if ( (unsigned int)v32 >= a2[2].m128_u64[0] )
        {
          `gsl::details::get_terminate_handler'::`2'::handler(v32);
          __debugbreak();
        }
        v33 = a2[2].m128_u64[1] + 56LL * (unsigned int)v32;
        v34 = (float)((float)(*(float *)(v30 + 4) * *(float *)(v33 + 12)) + (float)(*(float *)v30 * *(float *)v33))
            + *(float *)(v33 + 24);
        v35 = (float)((float)(*(float *)v30 * *(float *)(v33 + 4)) + (float)(*(float *)(v30 + 4) * *(float *)(v33 + 16)))
            + *(float *)(v33 + 28);
        v36 = (float)((float)(*(float *)v30 * *(float *)(v33 + 8)) + (float)(*(float *)(v30 + 4) * *(float *)(v33 + 20)))
            + *(float *)(v33 + 32);
        if ( COERCE_FLOAT(LODWORD(v36) & _xmm) >= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - 1.0) & _xmm) >= 0.000081380211 )
        {
          v34 = v34 / v36;
          v35 = v35 / v36;
        }
        *(float *)(v30 + 8LL * (unsigned int)v32 + 16) = v34;
        *(float *)(v30 + 8LL * (unsigned int)v32 + 20) = v35;
        if ( *(_BYTE *)(v33 + 52) )
        {
          v37 = *(float *)(v33 + 44);
          if ( v34 <= v37 )
            v37 = fmaxf(v34, *(float *)(v33 + 36));
          *(float *)(v30 + 8LL * (unsigned int)v32 + 16) = v37;
          v38 = *(float *)(v33 + 48);
          if ( v35 <= v38 )
            v38 = fmaxf(v35, *(float *)(v33 + 40));
          *(float *)(v30 + 8LL * (unsigned int)v32 + 20) = v38;
        }
        v39 = (float)((float)(*v31 * *(float *)v33) + (float)(v31[1] * *(float *)(v33 + 12))) + *(float *)(v33 + 24);
        v40 = (float)((float)(*v31 * *(float *)(v33 + 8)) + (float)(v31[1] * *(float *)(v33 + 20)))
            + *(float *)(v33 + 32);
        v41 = (float)((float)(v31[1] * *(float *)(v33 + 16)) + (float)(*v31 * *(float *)(v33 + 4)))
            + *(float *)(v33 + 28);
        if ( COERCE_FLOAT(LODWORD(v40) & _xmm) >= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v40 - 1.0) & _xmm) >= 0.000081380211 )
        {
          v39 = v39 / v40;
          v41 = v41 / v40;
        }
        v31[2 * (unsigned int)v32 + 4] = v39;
        v31[2 * (unsigned int)v32 + 5] = v41;
        if ( *(_BYTE *)(v33 + 52) )
        {
          v42 = *(float *)(v33 + 44);
          if ( v39 <= v42 )
            v42 = fmaxf(v39, *(float *)(v33 + 36));
          v31[2 * (unsigned int)v32 + 4] = v42;
          v43 = *(float *)(v33 + 48);
          if ( v41 <= v43 )
            v43 = fmaxf(v41, *(float *)(v33 + 40));
          v31[2 * (unsigned int)v32 + 5] = v43;
        }
      }
      else
      {
        *(_QWORD *)(v30 + 8LL * (unsigned int)v32 + 16) = 0LL;
        *(_QWORD *)&v51 = 0LL;
        *(_QWORD *)&v31[2 * (unsigned int)v32 + 4] = 0LL;
      }
    }
  }
  return result;
}
