/*
 * XREFs of ComputeAABBP @ 0x14013B984
 * Callers:
 *     SetupAAHeader @ 0x14013A8BC (SetupAAHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAABBP(__int128 *a1, __int64 a2, __m128i *a3, int a4)
{
  int v4; // r11d
  __m128i v5; // xmm2
  int v6; // r9d
  __m128i v7; // xmm3
  int v8; // r15d
  int v9; // r10d
  int v10; // r14d
  int v11; // r12d
  int v12; // edi
  int v13; // ebx
  int v14; // r13d
  int v15; // edi
  int v16; // esi
  int v17; // ebx
  int v18; // edx
  int v19; // edx
  int v20; // r9d
  char v21; // al
  int v22; // esi
  __int64 (__fastcall *v23)(int, int, int, int, int); // rax
  __int64 (__fastcall *v24)(); // r9
  __int64 (__fastcall *v25)(); // rdx
  __int64 (__fastcall *v26)(int, int, int, int, int, int, int, __int64, __int64, int); // rdi
  int v27; // r9d
  int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  int v31; // edx
  int v32; // ebx
  int v33; // edi
  __int64 result; // rax
  int v35; // ecx
  int v36; // eax
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // xmm0_8
  unsigned __int64 v39; // rbx
  bool v40; // zf
  __m128i v41; // [rsp+0h] [rbp-89h]
  __m128i v42; // [rsp+0h] [rbp-89h]
  __m128i v43; // [rsp+10h] [rbp-79h]
  int v44; // [rsp+14h] [rbp-75h]
  int v45; // [rsp+1Ch] [rbp-6Dh]
  __int128 v46; // [rsp+30h] [rbp-59h]
  __m128i v47; // [rsp+40h] [rbp-49h]
  __m128i v48; // [rsp+50h] [rbp-39h]
  __int128 v49; // [rsp+60h] [rbp-29h]
  __int128 v50; // [rsp+70h] [rbp-19h]
  __int128 v51; // [rsp+80h] [rbp-9h]
  int v52; // [rsp+F0h] [rbp+67h]

  v4 = *((_DWORD *)a1 + 10);
  v5 = (__m128i)a1[2];
  v6 = a3->m128i_i32[0];
  v7 = (__m128i)a1[1];
  v46 = *a1;
  v8 = _mm_cvtsi128_si32(v5);
  v49 = a1[3];
  v47 = v7;
  v51 = a1[5];
  v48 = v5;
  v50 = a1[4];
  if ( v4 < v8 )
  {
    v48.m128i_i32[0] = *((_DWORD *)a1 + 10);
    v48.m128i_i32[2] = v8;
    v8 = v48.m128i_i32[0];
    v5 = v48;
    v4 = v48.m128i_i32[2];
    v6 |= 1u;
  }
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  if ( v9 < v10 )
  {
    v48.m128i_i32[1] = v9;
    v48.m128i_i32[3] = v10;
    v10 = v9;
    v5 = v48;
    v9 = v48.m128i_i32[3];
    v6 |= 2u;
  }
  v11 = _mm_cvtsi128_si32(v7);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  if ( v12 < v11 )
  {
    v47.m128i_i32[0] = v12;
    v47.m128i_i32[2] = v11;
    v11 = v12;
    v7 = v47;
    v12 = v47.m128i_i32[2];
    v6 ^= 1u;
  }
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  if ( v13 < v14 )
  {
    v47.m128i_i32[1] = v13;
    v47.m128i_i32[3] = v14;
    v14 = v13;
    v7 = v47;
    v13 = v47.m128i_i32[3];
    v6 ^= 2u;
  }
  if ( v11 >= v12 || v14 >= v13 || v8 >= v4 || v10 >= v9 )
    return 0LL;
  v15 = v12 - v11;
  a3[8].m128i_i64[0] = v51;
  v16 = v9 - v10;
  v52 = v4 - v8;
  v17 = v13 - v14;
  if ( (1000 * (v4 - v8) + 500) / v15 > 667 && (1000 * v16 + 500) / v17 > 667 )
    v6 |= 0x40u;
  v18 = 524304;
  if ( v52 * v16 >= v15 * v17 )
    v18 = 8;
  v19 = v6 | v18;
  if ( v17 == v16 )
  {
    v20 = a4;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[1].m128i_i64[1] = (__int64)BuildBltAAInfo;
    v21 = 1;
    a3[3].m128i_i64[1] = (__int64)BltAV_CY;
LABEL_20:
    v22 = v19;
    goto LABEL_21;
  }
  if ( v17 >= v16 )
  {
    v20 = a4;
    a3[2].m128i_i64[1] = (__int64)ShrinkMask_CY;
    a3[3].m128i_i64[1] = (__int64)ShrinkAV_CY;
    a3[1].m128i_i64[1] = (__int64)BuildShrinkAAInfo;
    if ( v52 >= v15 || (v21 = 3, a4) )
      v21 = 2;
    goto LABEL_20;
  }
  a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
  a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
  a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
  v22 = v19;
  if ( v52 <= v15 )
  {
    v21 = 4;
  }
  else
  {
    if ( (v19 & 0x200) == 0 && 5 * v17 >= v9 - v10 && 5 * v15 >= v52 )
      v22 = v19 | 0x4000;
    v21 = 5;
  }
  v20 = a4;
LABEL_21:
  a3->m128i_i8[4] = v21;
  if ( v15 == v52 )
  {
    a3->m128i_i8[5] = 0;
    v23 = GrayCopyDIB_CX;
    if ( !v20 )
      v23 = CopyDIB_CX;
    v24 = BltMask_CX;
    v25 = BltAV_CX;
    v26 = BuildBltAAInfo;
  }
  else if ( v15 >= v52 )
  {
    a3->m128i_i8[5] = 1;
    v22 |= 0x2000u;
    v23 = GrayShrinkDIB_CX;
    v40 = v20 == 0;
    v26 = BuildShrinkAAInfo;
    v24 = ShrinkMask_CX;
    if ( v40 )
      v23 = ShrinkDIB_CX;
    v25 = ShrinkAV_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    v23 = GrayExpandDIB_CX;
    if ( !v20 )
      v23 = ExpandDIB_CX;
    v26 = BuildExpandAAInfo;
    v25 = ExpandAV_CX;
    v24 = ExpandMask_CX;
  }
  a3[2].m128i_i64[0] = (__int64)v24;
  a3[3].m128i_i64[0] = (__int64)v25;
  a3[1].m128i_i64[0] = (__int64)v26;
  a3->m128i_i64[1] = (__int64)v23;
  if ( (v46 & 0x40) != 0 )
  {
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)TileAV_CY;
    a3[1].m128i_i64[0] = (__int64)BuildTileAAInfo;
    a3[1].m128i_i64[1] = (__int64)BuildTileAAInfo;
    a3->m128i_i8[4] = 0;
    a3[3].m128i_i64[0] = 0LL;
    a3->m128i_i64[1] = 0LL;
  }
  a3->m128i_i32[0] = v22;
  a3[8].m128i_i32[2] = DWORD2(v51) - v11;
  a3[8].m128i_i32[3] = HIDWORD(v51) - v14;
  a3[4] = v7;
  v41 = v5;
  if ( (v46 & 1) != 0 )
  {
    v35 = v8;
    if ( v8 < (int)v49 )
      v35 = v49;
    v36 = v4;
    v37 = HIDWORD(v5.m128i_i64[0]);
    v38 = _mm_srli_si128(v5, 8).m128i_u64[0];
    if ( v5.m128i_i32[1] < SDWORD1(v49) )
      LODWORD(v37) = DWORD1(v49);
    v41.m128i_i32[0] = v35;
    if ( v4 > SDWORD2(v49) )
      v36 = DWORD2(v49);
    v39 = HIDWORD(v38);
    v41.m128i_i32[1] = v37;
    if ( SHIDWORD(v38) > SHIDWORD(v49) )
      LODWORD(v39) = HIDWORD(v49);
    v41.m128i_i64[1] = __PAIR64__(v39, v36);
    if ( v36 <= v35 || (int)v39 <= (int)v37 )
      return 0LL;
  }
  v27 = v41.m128i_i32[0];
  if ( (v46 & 0x10) != 0 )
  {
    v28 = v41.m128i_i32[2];
    if ( v41.m128i_i32[0] < (int)v50 )
      v27 = v50;
    v29 = HIDWORD(v41.m128i_i64[0]);
    if ( v41.m128i_i32[1] < SDWORD1(v50) )
      LODWORD(v29) = DWORD1(v50);
    v44 = v29;
    if ( v41.m128i_i32[2] > SDWORD2(v50) )
      v28 = DWORD2(v50);
    v30 = HIDWORD(v41.m128i_i64[1]);
    if ( v41.m128i_i32[3] > SHIDWORD(v50) )
      LODWORD(v30) = HIDWORD(v50);
    v45 = v30;
    if ( v28 <= v27 || (int)v30 <= (int)v29 )
      return 0LL;
    v8 -= v50;
    v4 -= v50;
    v10 -= DWORD1(v50);
    a3[8].m128i_i32[0] -= v50;
    v9 -= DWORD1(v50);
    v31 = v28 - v50;
    v48.m128i_i64[0] = __PAIR64__(v10, v8);
    v32 = v44 - DWORD1(v50);
    v48.m128i_i64[1] = __PAIR64__(v9, v4);
    v33 = v45 - DWORD1(v50);
    v27 -= v50;
    a3[8].m128i_i32[1] -= DWORD1(v50);
    v5 = v48;
  }
  else
  {
    v33 = v41.m128i_i32[3];
    v31 = v41.m128i_i32[2];
    v32 = v41.m128i_i32[1];
  }
  if ( v27 < 0 )
    v27 = 0;
  if ( v32 < 0 )
    v32 = 0;
  v43.m128i_i64[0] = __PAIR64__(v32, v27);
  if ( v31 > *(_DWORD *)(a2 + 12) )
    v31 = *(_DWORD *)(a2 + 12);
  v43.m128i_i32[2] = v31;
  if ( v33 > *(_DWORD *)(a2 + 16) )
    v33 = *(_DWORD *)(a2 + 16);
  v43.m128i_i32[3] = v33;
  v42 = v43;
  if ( v31 <= v27 || v33 <= v32 )
    return 0LL;
  if ( (v22 & 1) != 0 )
  {
    a3[7].m128i_i32[0] = v4;
    v48.m128i_i32[0] = 0;
    v42.m128i_i32[0] = v4 - v31;
    v42.m128i_i32[2] = v4 - v27;
    v48.m128i_i32[2] = v4 - v8;
    v5 = v48;
  }
  if ( (v22 & 2) != 0 )
  {
    v42.m128i_i32[1] = v9 - v33;
    a3[7].m128i_i32[1] = v9;
    v48.m128i_i32[3] = v9 - v10;
    v48.m128i_i32[1] = 0;
    v5 = v48;
    v42.m128i_i32[3] = v9 - v32;
  }
  result = 1LL;
  a3[5] = v42;
  a3[6] = v5;
  return result;
}
