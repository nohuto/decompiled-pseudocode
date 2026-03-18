/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14008EA20
 * Callers:
 *     pprFlattenRec @ 0x14008E470 (pprFlattenRec.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14008ED6C (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1401C3904 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v3; // rsi
  int v6; // ebp
  __m128i *v7; // r11
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  int v10; // r8d
  __int32 v11; // r11d
  unsigned __int32 v12; // r14d
  __int32 v13; // edx
  int v14; // eax
  int v15; // r10d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  _DWORD *v19; // r9
  __int32 v20; // edx
  _DWORD *v21; // r8
  int v22; // r10d
  int v23; // r11d
  int v24; // edi
  int v25; // esi
  int v26; // edx
  int v27; // r15d
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  _DWORD *v33; // r10
  _DWORD *v34; // r11
  int v35; // edx
  char v36; // cl
  int v37; // edi
  int v38; // eax
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // r9d
  int v43; // eax
  int v44; // eax
  int v45; // r9d
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  __int64 result; // rax
  int v50; // edx
  int v51; // ecx
  int v52; // ecx
  int v53; // edx
  int v54; // ecx

  v3 = (struct _RECTFX *)((char *)this + 36);
  *(_DWORD *)this = 1;
  v6 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = v7[1];
  v9 = *v7;
  v10 = v7->m128i_i64[1] - v3->xLeft;
  v11 = v8.m128i_i32[0] - v3->xLeft;
  v12 = _mm_srli_si128(v8, 8).m128i_u32[0] - v3->xLeft;
  v13 = v9.m128i_i32[0] - v3->xLeft;
  v14 = *((_DWORD *)this + 10);
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)) - v14;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v14;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v14;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  if ( ((v13 | v10 | v11 | v12 | v15 | v18 | v17 | v16) & 0xFFFFC000) != 0 )
    return 0LL;
  v19 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 1) = v13 << 10;
  *((_DWORD *)this + 2) = (v12 - v13) << 10;
  *((_DWORD *)this + 3) = 6144 * (v12 + v10 - 2 * v11);
  v20 = v13 - 2 * v10;
  v21 = (_DWORD *)((char *)this + 20);
  *((_DWORD *)this + 4) = 6144 * (v11 + v20);
  *((_DWORD *)this + 5) = v15 << 10;
  *((_DWORD *)this + 6) = (v16 - v15) << 10;
  *((_DWORD *)this + 7) = 6144 * (v16 + v18 - 2 * v17);
  *((_DWORD *)this + 8) = 6144 * (v17 + v15 - 2 * v18);
  if ( !a3 || bIntersect(v3, a3) )
  {
    v22 = *((_DWORD *)this + 7);
    v23 = *((_DWORD *)this + 8);
    while ( 1 )
    {
      v24 = *((_DWORD *)this + 3);
      v25 = *((_DWORD *)this + 4);
      v26 = -v24;
      v27 = 65472 << v6;
      v28 = -v25;
      v29 = -v24;
      if ( v24 >= 0 )
        v29 = *((_DWORD *)this + 3);
      if ( v25 >= 0 )
        v28 = *((_DWORD *)this + 4);
      if ( v29 <= v28 )
      {
        v26 = *((_DWORD *)this + 4);
        if ( v25 < 0 )
          v26 = -*((_DWORD *)this + 4);
      }
      else if ( v24 >= 0 )
      {
        v26 = *((_DWORD *)this + 3);
      }
      if ( v26 <= v27 )
      {
        v30 = -v23;
        v31 = -v22;
        if ( v22 >= 0 )
          v31 = v22;
        if ( v23 >= 0 )
          v30 = v23;
        if ( v31 <= v30 )
        {
          v32 = v23;
          if ( v23 < 0 )
            v32 = -v23;
        }
        else
        {
          v32 = v22;
          if ( v22 < 0 )
            v32 = -v22;
        }
        if ( v32 <= v27 )
          break;
      }
      v6 += 2;
      v53 = (v24 + v25) >> 1;
      *((_DWORD *)this + 3) = v53;
      v22 = (v23 + v22) >> 1;
      *((_DWORD *)this + 2) = (*((_DWORD *)this + 2) - (v53 >> v6)) >> 1;
      v54 = *((_DWORD *)this + 6) - (v22 >> v6);
      *((_DWORD *)this + 7) = v22;
      *((_DWORD *)this + 6) = v54 >> 1;
      *(_DWORD *)this *= 2;
    }
    v33 = (_DWORD *)((char *)this + 4);
    v34 = (_DWORD *)((char *)this + 20);
  }
  *v19 *= 8;
  v35 = v6 - 3;
  v19[1] *= 8;
  v36 = v6 - 3;
  v37 = v19[2];
  v38 = v19[3];
  if ( v6 - 3 >= 0 )
  {
    v39 = v38 >> v36;
    v40 = v37 >> v36;
  }
  else
  {
    v39 = v38 << (3 - v6);
    v40 = v37 << (3 - v6);
  }
  v19[2] = v40;
  v19[3] = v39;
  v41 = v21[1];
  *v21 *= 8;
  v42 = v21[2];
  v21[1] = 8 * v41;
  v43 = v21[3];
  if ( v35 >= 0 )
  {
    v44 = v43 >> v35;
    v45 = v42 >> v35;
  }
  else
  {
    v44 = v43 << (3 - v6);
    v45 = v42 << (3 - v6);
  }
  v21[2] = v45;
  v21[3] = v44;
  v46 = v33[2];
  v47 = v33[1];
  *v33 += v47;
  v33[1] = v46 + v47;
  v48 = v46 - v33[3];
  v33[3] = v46;
  v33[2] = v46 + v48;
  result = 1LL;
  v50 = v34[2];
  v51 = v34[1];
  *v34 += v51;
  v34[1] = v50 + v51;
  v52 = v50 - v34[3];
  v34[3] = v50;
  v34[2] = v50 + v52;
  --*(_DWORD *)this;
  return result;
}
