/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802E7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802E4110 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v9; // r8d
  unsigned __int16 v10; // r8
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __m128i v14; // xmm1
  _WORD *v15; // r9
  __int64 v16; // r10
  unsigned __int16 *v17; // r11
  unsigned int v18; // r8d
  unsigned int v19; // edx
  int v20; // r8d
  __int16 v21; // r8
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  unsigned int v26; // edx
  int v27; // r8d
  unsigned __int16 v28; // r8
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  __m128i v32; // xmm1
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned __int16 *v35; // r11
  unsigned int v36; // r8d
  unsigned int v37; // edx
  int v38; // r8d
  __int16 v39; // r8
  int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // r8d
  unsigned __int16 v46; // r8
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  __m128i v50; // xmm1
  __int64 v51; // r9
  __int64 v52; // r11
  unsigned int v53; // r8d
  unsigned int v54; // edx
  int v55; // r8d
  __int16 v56; // r8
  int v57; // ecx
  unsigned int v58; // edx
  unsigned int v59; // ecx
  unsigned __int16 v60; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = *(float *)CFloat16::operator float(v3).m128i_i32;
      if ( v4 != *(float *)CFloat16::operator float((unsigned __int16 *)&word_180405904).m128i_i32 )
      {
        v5 = *(float *)CFloat16::operator float(v3).m128i_i32;
        if ( v5 != *(float *)CFloat16::operator float(word_180406AFC).m128i_i32 )
        {
          v7 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*v6));
          v8 = v7 & 0x7FFFFFFF;
          v9 = HIWORD(v7) & 0x8000;
          if ( v8 <= 0x47FFEFFF )
          {
            if ( v8 >= 0x38800000 )
            {
              v13 = v8 + ((v8 >> 13) & 1) - 939520001;
            }
            else
            {
              v11 = 113 - (v8 >> 23);
              if ( v11 >= 24 )
                v12 = 0;
              else
                v12 = (v8 & 0x7FFFFF | 0x800000) >> v11;
              v13 = ((v12 >> 13) & 1) + v12 + 4095;
            }
            v10 = (v13 >> 13) | v9;
          }
          else
          {
            v10 = v9 | 0x7FFF;
          }
          v60 = v10;
          v14 = CFloat16::operator float(v3);
          *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 * *(float *)CFloat16::operator float(&v60).m128i_i32;
          v18 = _mm_cvtsi128_si32(v14);
          v19 = v18 & 0x7FFFFFFF;
          v20 = HIWORD(v18) & 0x8000;
          if ( v19 <= 0x47FFEFFF )
          {
            if ( v19 >= 0x38800000 )
            {
              v24 = v19 + ((v19 >> 13) & 1) - 939520001;
            }
            else
            {
              v22 = 113 - (v19 >> 23);
              if ( v22 >= 24 )
                v23 = 0;
              else
                v23 = (v19 & 0x7FFFFF | 0x800000) >> v22;
              v24 = ((v23 >> 13) & 1) + v23 + 4095;
            }
            v21 = (v24 >> 13) | v20;
          }
          else
          {
            v21 = v20 | 0x7FFF;
          }
          *v15 = v21;
          v25 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v16 + 2)));
          v26 = v25 & 0x7FFFFFFF;
          v27 = HIWORD(v25) & 0x8000;
          if ( v26 <= 0x47FFEFFF )
          {
            if ( v26 >= 0x38800000 )
            {
              v31 = v26 + ((v26 >> 13) & 1) - 939520001;
            }
            else
            {
              v29 = 113 - (v26 >> 23);
              if ( v29 >= 24 )
                v30 = 0;
              else
                v30 = (v26 & 0x7FFFFF | 0x800000) >> v29;
              v31 = ((v30 >> 13) & 1) + v30 + 4095;
            }
            v28 = (v31 >> 13) | v27;
          }
          else
          {
            v28 = v27 | 0x7FFF;
          }
          v60 = v28;
          v32 = CFloat16::operator float(v17);
          *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 * *(float *)CFloat16::operator float(&v60).m128i_i32;
          v36 = _mm_cvtsi128_si32(v32);
          v37 = v36 & 0x7FFFFFFF;
          v38 = HIWORD(v36) & 0x8000;
          if ( v37 <= 0x47FFEFFF )
          {
            if ( v37 >= 0x38800000 )
            {
              v42 = v37 + ((v37 >> 13) & 1) - 939520001;
            }
            else
            {
              v40 = 113 - (v37 >> 23);
              if ( v40 >= 24 )
                v41 = 0;
              else
                v41 = (v37 & 0x7FFFFF | 0x800000) >> v40;
              v42 = ((v41 >> 13) & 1) + v41 + 4095;
            }
            v39 = (v42 >> 13) | v38;
          }
          else
          {
            v39 = v38 | 0x7FFF;
          }
          *(_WORD *)(v33 + 2) = v39;
          v43 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v34 + 4)));
          v44 = v43 & 0x7FFFFFFF;
          v45 = HIWORD(v43) & 0x8000;
          if ( v44 <= 0x47FFEFFF )
          {
            if ( v44 >= 0x38800000 )
            {
              v49 = v44 + ((v44 >> 13) & 1) - 939520001;
            }
            else
            {
              v47 = 113 - (v44 >> 23);
              if ( v47 >= 24 )
                v48 = 0;
              else
                v48 = (v44 & 0x7FFFFF | 0x800000) >> v47;
              v49 = ((v48 >> 13) & 1) + v48 + 4095;
            }
            v46 = (v49 >> 13) | v45;
          }
          else
          {
            v46 = v45 | 0x7FFF;
          }
          v60 = v46;
          v50 = CFloat16::operator float(v35);
          *(float *)v50.m128i_i32 = *(float *)v50.m128i_i32 * *(float *)CFloat16::operator float(&v60).m128i_i32;
          v53 = _mm_cvtsi128_si32(v50);
          v54 = v53 & 0x7FFFFFFF;
          v55 = HIWORD(v53) & 0x8000;
          if ( v54 <= 0x47FFEFFF )
          {
            if ( v54 >= 0x38800000 )
            {
              v59 = v54 + ((v54 >> 13) & 1) - 939520001;
            }
            else
            {
              v57 = 113 - (v54 >> 23);
              if ( v57 >= 24 )
                v58 = 0;
              else
                v58 = (v54 & 0x7FFFFF | 0x800000) >> v57;
              v59 = ((v58 >> 13) & 1) + v58 + 4095;
            }
            v56 = (v59 >> 13) | v55;
          }
          else
          {
            v56 = v55 | 0x7FFF;
          }
          *(_WORD *)(v51 + 4) = v56;
          v3 = (unsigned __int16 *)(v52 + 8);
        }
      }
    }
    while ( v2 );
  }
}
