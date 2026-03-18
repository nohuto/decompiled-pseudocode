/*
 * XREFs of ?AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802E7750
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802E4110 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaDivide_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // rbx
  float v3; // xmm1_4
  int v4; // r11d
  float v5; // xmm1_4
  __m128i v6; // xmm1
  unsigned __int16 *v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // edx
  int v10; // r8d
  unsigned __int16 v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  int v18; // r8d
  unsigned __int16 v19; // r8
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __m128i v23; // xmm1
  _WORD *v24; // r9
  __int64 v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // edx
  int v28; // r8d
  __int16 v29; // r8
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  int v35; // r8d
  unsigned __int16 v36; // r8
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // ecx
  __m128i v40; // xmm1
  __int64 v41; // r9
  __int64 v42; // r10
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // r8d
  __int16 v46; // r8
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  int v52; // r8d
  unsigned __int16 v53; // r8
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __m128i v57; // xmm1
  __int64 v58; // r9
  unsigned int v59; // r8d
  unsigned int v60; // edx
  int v61; // r8d
  __int16 v62; // r8
  int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // ecx
  unsigned __int16 v66; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v67; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 2) )
  {
    v2 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      v3 = *(float *)CFloat16::operator float(v2).m128i_i32;
      if ( v3 != *(float *)CFloat16::operator float((unsigned __int16 *)&word_180405904).m128i_i32 )
      {
        v5 = *(float *)CFloat16::operator float(v2).m128i_i32;
        if ( v5 != *(float *)CFloat16::operator float(word_180406AFC).m128i_i32 )
        {
          v6 = (__m128i)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          *(float *)v6.m128i_i32 = 1.0 / *(float *)CFloat16::operator float(v2).m128i_i32;
          v8 = _mm_cvtsi128_si32(v6);
          v9 = v8 & 0x7FFFFFFF;
          v10 = HIWORD(v8) & 0x8000;
          if ( v9 <= 0x47FFEFFF )
          {
            if ( v9 >= 0x38800000 )
            {
              v14 = v9 + ((v9 >> 13) & 1) - 939520001;
            }
            else
            {
              v12 = 113 - (v9 >> 23);
              if ( v12 >= 24 )
                v13 = 0;
              else
                v13 = (v9 & 0x7FFFFF | 0x800000) >> v12;
              v14 = ((v13 >> 13) & 1) + v13 + 4095;
            }
            v11 = (v14 >> 13) | v10;
          }
          else
          {
            v11 = v10 | 0x7FFF;
          }
          v15 = *v7;
          v66 = v11;
          v16 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v15));
          v17 = v16 & 0x7FFFFFFF;
          v18 = HIWORD(v16) & 0x8000;
          if ( v17 <= 0x47FFEFFF )
          {
            if ( v17 >= 0x38800000 )
            {
              v22 = v17 + ((v17 >> 13) & 1) - 939520001;
            }
            else
            {
              v20 = 113 - (v17 >> 23);
              if ( v20 >= 24 )
                v21 = 0;
              else
                v21 = (v17 & 0x7FFFFF | 0x800000) >> v20;
              v22 = ((v21 >> 13) & 1) + v21 + 4095;
            }
            v19 = (v22 >> 13) | v18;
          }
          else
          {
            v19 = v18 | 0x7FFF;
          }
          v67 = v19;
          v23 = CFloat16::operator float(&v67);
          *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * *(float *)CFloat16::operator float(&v66).m128i_i32;
          v26 = _mm_cvtsi128_si32(v23);
          v27 = v26 & 0x7FFFFFFF;
          v28 = HIWORD(v26) & 0x8000;
          if ( v27 <= 0x47FFEFFF )
          {
            if ( v27 >= 0x38800000 )
            {
              v32 = v27 + ((v27 >> 13) & 1) - 939520001;
            }
            else
            {
              v30 = 113 - (v27 >> 23);
              if ( v30 >= 24 )
                v31 = 0;
              else
                v31 = (v27 & 0x7FFFFF | 0x800000) >> v30;
              v32 = ((v31 >> 13) & 1) + v31 + 4095;
            }
            v29 = (v32 >> 13) | v28;
          }
          else
          {
            v29 = v28 | 0x7FFF;
          }
          *v24 = v29;
          v33 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v25 + 2)));
          v34 = v33 & 0x7FFFFFFF;
          v35 = HIWORD(v33) & 0x8000;
          if ( v34 <= 0x47FFEFFF )
          {
            if ( v34 >= 0x38800000 )
            {
              v39 = v34 + ((v34 >> 13) & 1) - 939520001;
            }
            else
            {
              v37 = 113 - (v34 >> 23);
              if ( v37 >= 24 )
                v38 = 0;
              else
                v38 = (v34 & 0x7FFFFF | 0x800000) >> v37;
              v39 = ((v38 >> 13) & 1) + v38 + 4095;
            }
            v36 = (v39 >> 13) | v35;
          }
          else
          {
            v36 = v35 | 0x7FFF;
          }
          v67 = v36;
          v40 = CFloat16::operator float(&v67);
          *(float *)v40.m128i_i32 = *(float *)v40.m128i_i32 * *(float *)CFloat16::operator float(&v66).m128i_i32;
          v43 = _mm_cvtsi128_si32(v40);
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
          *(_WORD *)(v41 + 2) = v46;
          v50 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v42 + 4)));
          v51 = v50 & 0x7FFFFFFF;
          v52 = HIWORD(v50) & 0x8000;
          if ( v51 <= 0x47FFEFFF )
          {
            if ( v51 >= 0x38800000 )
            {
              v56 = v51 + ((v51 >> 13) & 1) - 939520001;
            }
            else
            {
              v54 = 113 - (v51 >> 23);
              if ( v54 >= 24 )
                v55 = 0;
              else
                v55 = (v51 & 0x7FFFFF | 0x800000) >> v54;
              v56 = ((v55 >> 13) & 1) + v55 + 4095;
            }
            v53 = (v56 >> 13) | v52;
          }
          else
          {
            v53 = v52 | 0x7FFF;
          }
          v67 = v53;
          v57 = CFloat16::operator float(&v67);
          *(float *)v57.m128i_i32 = *(float *)v57.m128i_i32 * *(float *)CFloat16::operator float(&v66).m128i_i32;
          v59 = _mm_cvtsi128_si32(v57);
          v60 = v59 & 0x7FFFFFFF;
          v61 = HIWORD(v59) & 0x8000;
          if ( v60 <= 0x47FFEFFF )
          {
            if ( v60 >= 0x38800000 )
            {
              v65 = v60 + ((v60 >> 13) & 1) - 939520001;
            }
            else
            {
              v63 = 113 - (v60 >> 23);
              if ( v63 >= 24 )
                v64 = 0;
              else
                v64 = (v60 & 0x7FFFFF | 0x800000) >> v63;
              v65 = ((v64 >> 13) & 1) + v64 + 4095;
            }
            v62 = (v65 >> 13) | v61;
          }
          else
          {
            v62 = v61 | 0x7FFF;
          }
          *(_WORD *)(v58 + 4) = v62;
          v2 += 4;
        }
      }
    }
    while ( v4 );
  }
}
