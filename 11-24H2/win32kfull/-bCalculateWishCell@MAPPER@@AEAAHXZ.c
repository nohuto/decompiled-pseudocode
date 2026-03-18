/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1401A277C
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400B9F80 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400BA3EC (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400FBF10 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // r9d
  __int64 v5; // rbp
  int v6; // edi
  __int64 result; // rax
  float v8; // xmm0_4
  BOOL v9; // r14d
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  int v13; // r14d
  BOOL v14; // r10d
  float v15; // xmm0_4
  int v16; // r10d
  BOOL v17; // eax
  float v18; // xmm0_4
  BOOL v19; // ecx
  int v20; // r8d
  int v21; // r11d
  int v22; // eax
  __m128i v23; // xmm0
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm0
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  char v34; // cl
  __int64 v35; // rax
  unsigned int v36; // edx
  char v37; // cl
  int v38; // [rsp+50h] [rbp+8h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 61);
  v4 = v2;
  if ( (v3 & 0x20) == 0 )
  {
    v5 = *(_QWORD *)this;
    if ( *(_BYTE *)(*(_QWORD *)this + 74LL) || *(_BYTE *)(v5 + 85) )
    {
      *((_DWORD *)this + 44) = v2;
      v6 = v3 | 0x1C;
      result = 1LL;
    }
    else
    {
      v8 = *(float *)(v5 + 8);
      v9 = v8 > 0.0;
      v10 = v8 > 0.0;
      v11 = v8 == 0.0;
      v12 = *(float *)(v5 + 12);
      v13 = v9 - (!v10 && !v11);
      v14 = v12 > 0.0;
      v10 = v12 > 0.0;
      v11 = v12 == 0.0;
      v15 = *(float *)(v5 + 16);
      v16 = v14 - (!v10 && !v11);
      v17 = v15 > 0.0;
      v10 = v15 > 0.0;
      v11 = v15 == 0.0;
      v18 = *(float *)(v5 + 20);
      v19 = !v10 && !v11;
      v20 = v17 - v19;
      v21 = (__PAIR64__(v18 > 0.0, LODWORD(v18)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
      if ( *(_BYTE *)(v5 + 79) )
      {
        v20 = v19 - v17;
        v21 = (__PAIR64__(v18 < 0.0, 0.0) - LODWORD(v18)) >> 32;
      }
      if ( (v3 & 0x81000) != 0 )
      {
LABEL_14:
        if ( (v3 & 8) == 0 )
        {
          v23 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 41));
          if ( v21 )
          {
            *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * *(float *)(v5 + 20);
            LODWORD(v24) = 0;
            v25 = _mm_cvtsi128_si32(v23);
            v26 = (unsigned __int8)(v25 >> 23);
            if ( v26 <= 0x9E )
            {
              v27 = v25 & 0x7FFFFFLL | 0x800000;
              v28 = v26 < 0x76 ? v27 >> (118 - (unsigned __int8)v26) : v27 << ((unsigned __int8)v26 - 118);
              v24 = (v28 + 0x80000000LL) >> 32;
              if ( v25 < 0 )
                LODWORD(v24) = -(int)v24;
            }
          }
          else
          {
            *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 * *(float *)(v5 + 16);
            v38 = 0;
            bFToL(*(double *)v23.m128i_i64, &v38, 0);
            LODWORD(v24) = v38;
          }
          if ( (int)v24 < 0 )
            LODWORD(v24) = -(int)v24;
          *((_DWORD *)this + 41) = ((int)v24 + 8) >> 4;
        }
        if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL) || (v3 & 0x10) != 0 )
          goto LABEL_25;
        LODWORD(v29) = 0;
        v30 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 42));
        if ( v13 )
        {
          *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 * *(float *)(v5 + 8);
          v31 = _mm_cvtsi128_si32(v30);
          v32 = (unsigned __int8)(v31 >> 23) - 118;
          if ( v32 <= 40 )
          {
            v33 = v31 & 0x7FFFFFLL | 0x800000;
            if ( v32 >= 0 )
            {
              v34 = (v31 >> 23) - 118;
LABEL_33:
              v35 = v33 << v34;
              goto LABEL_34;
            }
            v37 = 118 - (v31 >> 23);
            goto LABEL_44;
          }
        }
        else
        {
          *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 * *(float *)(v5 + 12);
          v31 = _mm_cvtsi128_si32(v30);
          v36 = (unsigned __int8)(v31 >> 23);
          if ( v36 <= 0x9E )
          {
            v33 = v31 & 0x7FFFFFLL | 0x800000;
            if ( v36 >= 0x76 )
            {
              v34 = v36 - 118;
              goto LABEL_33;
            }
            v37 = 118 - v36;
LABEL_44:
            v35 = v33 >> v37;
LABEL_34:
            v29 = (v35 + 0x80000000LL) >> 32;
            if ( v31 < 0 )
              LODWORD(v29) = -(int)v29;
          }
        }
        if ( (int)v29 < 0 )
          LODWORD(v29) = -(int)v29;
        *((_DWORD *)this + 42) = ((int)v29 + 8) >> 4;
LABEL_25:
        *((_DWORD *)this + 61) |= 0x1Cu;
        return 1LL;
      }
      if ( v4 == 900 * (v4 / 900)
        && !((v20 + v16) | (v13 - v21) | ((unsigned __int8)v13 ^ (unsigned __int8)~(_BYTE)v16) & 1) )
      {
        v22 = (v16 & 0x384) + (v20 & 0xA8C) + v4 + (v13 & 0x708);
        *((_DWORD *)this + 44) = v22;
        if ( v22 >= 3600 )
          *((_DWORD *)this + 44) = v22 - 3600;
        v3 |= 0x80000u;
        *((_DWORD *)this + 61) = v3;
        goto LABEL_14;
      }
      v6 = v3 | 0x20;
      result = 0LL;
    }
    *((_DWORD *)this + 61) = v6;
    return result;
  }
  return 0LL;
}
