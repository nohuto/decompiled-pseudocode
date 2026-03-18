/*
 * XREFs of GrayExpandDIB_CY @ 0x1402F8ED0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400ED40C (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400ED4BC (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400EFB60 (GetFixupScan.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int8 *v15; // r15
  __int64 v16; // rax
  unsigned __int8 *v17; // rdi
  unsigned __int8 *v18; // r14
  unsigned __int8 *v19; // rsi
  size_t v20; // r13
  unsigned __int8 *v21; // rbx
  __int64 FixupScan; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // r12d
  size_t v29; // r15
  int v30; // eax
  __m128i v31; // xmm1
  unsigned __int8 *v32; // r13
  const void *v33; // r14
  unsigned __int8 *v34; // xmm1_8
  unsigned __int8 *v35; // rbx
  __int64 v36; // rax
  signed __int64 v37; // r14
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // si
  unsigned __int8 *v42; // r14
  const void *v43; // xmm0_8
  _BYTE *v44; // xmm1_8
  _BYTE *v45; // rbx
  __int64 v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int8 *v50; // r14
  int v51; // ecx
  unsigned __int8 *v52; // r11
  _WORD *v53; // r8
  int v54; // ebx
  int v55; // r10d
  int *v56; // r9
  int v57; // r11d
  int v58; // edx
  __int64 v59; // rax
  int *v60; // r9
  int v61; // r11d
  __int64 v62; // rcx
  int v63; // edx
  __int64 v64; // rax
  int *v65; // r9
  int v66; // r10d
  __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  __int16 v71; // ax
  unsigned __int8 *v72; // rax
  __int64 v73; // rcx
  unsigned __int8 *v75; // [rsp+58h] [rbp-B0h]
  __int64 v76; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v77; // [rsp+60h] [rbp-A8h]
  _BYTE v78[40]; // [rsp+68h] [rbp-A0h]
  char *v79; // [rsp+90h] [rbp-78h]
  int v80; // [rsp+A0h] [rbp-68h]
  size_t v81; // [rsp+A8h] [rbp-60h]
  __int64 *v82; // [rsp+B0h] [rbp-58h]
  int v83[34]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v84; // [rsp+140h] [rbp+38h]
  int v85; // [rsp+148h] [rbp+40h]
  unsigned int v86; // [rsp+14Ch] [rbp+44h]
  int v87; // [rsp+154h] [rbp+4Ch]
  void (__fastcall *v88)(int *, __int64, _WORD *, unsigned __int64); // [rsp+178h] [rbp+70h]
  void (__fastcall *v89)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  void (__fastcall *v91)(__int64, __int64, unsigned __int8 *, unsigned __int8 *, int); // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int64 v94; // [rsp+238h] [rbp+130h]
  __int64 v95; // [rsp+240h] [rbp+138h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 v97; // [rsp+258h] [rbp+150h]
  __int64 v98; // [rsp+260h] [rbp+158h]
  int v99; // [rsp+268h] [rbp+160h]
  int v100; // [rsp+26Ch] [rbp+164h]
  int v101; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v102; // [rsp+278h] [rbp+170h]
  unsigned __int8 *v103; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v104; // [rsp+288h] [rbp+180h]
  int v105; // [rsp+290h] [rbp+188h]
  __int64 v106; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int8 *v107; // [rsp+2D8h] [rbp+1D0h]
  unsigned __int64 v108; // [rsp+2E0h] [rbp+1D8h]
  __int64 v109; // [rsp+2E8h] [rbp+1E0h]
  __int64 v110; // [rsp+2F0h] [rbp+1E8h]
  _WORD *v111; // [rsp+2F8h] [rbp+1F0h]
  _WORD *v112; // [rsp+300h] [rbp+1F8h]
  int v113; // [rsp+308h] [rbp+200h]

  v1 = 4LL;
  v2 = v83;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(unsigned __int8 **)(v93 + 32);
  v16 = v85 + 6;
  v75 = v15;
  v17 = v15 + 4099;
  *(_QWORD *)&v78[8] = &v15[v16 + 4099];
  *(_QWORD *)&v78[16] = v16 + *(_QWORD *)&v78[8];
  v77 = (unsigned __int8 *)(v16 + v16 + *(_QWORD *)&v78[8]);
  *(_QWORD *)&v78[24] = v77;
  v18 = &v77[v16];
  v19 = &v77[v16 + v16];
  *(_QWORD *)&v78[32] = &v77[v16];
  v79 = (char *)v19;
  v20 = v85;
  v81 = v85;
  v21 = &v77[v16 + v85];
  FixupScan = GetFixupScan((unsigned int *)v83, v106);
  v91(v92, FixupScan, v18, v21, 1);
  if ( (*(_BYTE *)(v93 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((unsigned int *)v83, v106);
    v91(v92, v23, v19, &v19[v20], 1);
  }
  else
  {
    memmove(v19, v18, v20);
  }
  v24 = v93;
  v25 = *(unsigned __int16 *)(v93 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    v29 = v20;
    do
    {
      v30 = v27;
      --v28;
      v31 = *(__m128i *)&v78[24];
      --v27;
      v32 = &v17[v29];
      *(_OWORD *)v78 = *(_OWORD *)&v78[8];
      *(_QWORD *)&v78[32] = v79;
      v33 = v79;
      v79 = (char *)v17;
      *(__m128i *)&v78[16] = v31;
      v34 = (unsigned __int8 *)_mm_srli_si128(v31, 8).m128i_u64[0];
      v77 = v34;
      v35 = v34;
      if ( v30 <= 0 )
      {
        v36 = GetFixupScan((unsigned int *)v83, v106);
        v91(v92, v36, v17, &v17[v29], 1);
      }
      else
      {
        memmove(v17, v33, v29);
      }
      if ( (v83[0] & 0x200) != 0 )
      {
        memmove(v34, v33, v29);
      }
      else
      {
        v37 = (_BYTE *)v33 - v34;
        do
        {
          v38 = (6 * v35[v37] - *v17 - *v35) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v35 = v38;
          ++v17;
          ++v35;
        }
        while ( v17 < v32 );
      }
      v17 = *(unsigned __int8 **)v78;
    }
    while ( v28 );
    v24 = v93;
    v15 = v75;
    v20 = v81;
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v80 = v40 - 1;
    v76 = *v39;
    v82 = v39 + 1;
    v41 = *v39;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = &v17[v20];
      *(_OWORD *)v78 = *(_OWORD *)&v78[8];
      v43 = v79;
      *(_OWORD *)&v78[16] = *(_OWORD *)&v78[24];
      v79 = (char *)v17;
      v44 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v78[16], 8).m128i_u64[0];
      *(_QWORD *)&v78[32] = v43;
      v45 = v44;
      v77 = v44;
      v46 = GetFixupScan((unsigned int *)v83, v106);
      v91(v92, v46, v17, &v17[v20], 1);
      if ( (v83[0] & 0x200) != 0 )
      {
        memmove(v44, v43, v20);
      }
      else
      {
        do
        {
          v47 = (6 * (unsigned __int8)v45[(_BYTE *)v43 - v44] - *v17 - (unsigned __int8)*v45) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v17;
          ++v45;
        }
        while ( v17 < v42 );
      }
      v17 = *(unsigned __int8 **)v78;
      v41 &= 0x3FFFu;
    }
    v48 = (unsigned __int64)v15;
    v49 = HIWORD(v76);
    v50 = v77;
    v51 = -WORD2(v76);
    v52 = *(unsigned __int8 **)&v78[16];
    v53 = v111;
    v54 = -v41;
    v55 = -WORD1(v76);
    if ( v41 )
    {
      v56 = (int *)(v15 + 2048);
      v57 = 256 - HIWORD(v76);
      do
      {
        v54 += v41;
        v55 += WORD1(v76);
        v51 += WORD2(v76);
        *(v56 - 512) = v54;
        v57 += HIWORD(v76);
        *(v56 - 256) = v55;
        *v56 = v51;
        v56[256] = v57;
        ++v56;
      }
      while ( v56 - 512 < (int *)v15 + 256 );
      v48 = *(_QWORD *)&v78[8];
      do
      {
        v58 = *(_DWORD *)&v15[4 * v17[v48 - *(_QWORD *)&v78[8]]]
            + *(_DWORD *)&v15[4 * *(unsigned __int8 *)(v48 + *(_QWORD *)&v78[16] - *(_QWORD *)&v78[8]) + 2048]
            + *(_DWORD *)&v15[4 * v77[v48 - *(_QWORD *)&v78[8]] + 3072];
        v59 = *(unsigned __int8 *)v48++;
        v49 = (unsigned int)((*(_DWORD *)&v15[4 * v59 + 1024] + v58) >> 5);
        *v53 = v49;
        v53 = (_WORD *)((char *)v53 + v113);
      }
      while ( v53 != v112 );
    }
    else if ( WORD1(v76) )
    {
      v60 = (int *)(v15 + 2048);
      v61 = 256 - HIWORD(v76);
      do
      {
        v55 += WORD1(v76);
        v51 += WORD2(v76);
        v61 += HIWORD(v76);
        *(v60 - 256) = v55;
        *v60 = v51;
        v60[256] = v61;
        ++v60;
      }
      while ( v60 - 512 < (int *)v15 + 256 );
      v48 = *(_QWORD *)&v78[8];
      do
      {
        v62 = *(unsigned __int8 *)(v48 + *(_QWORD *)&v78[16] - *(_QWORD *)&v78[8]);
        v63 = *(_DWORD *)&v15[4 * v77[v48 - *(_QWORD *)&v78[8]] + 3072];
        v64 = *(unsigned __int8 *)v48++;
        v49 = (unsigned int)((*(_DWORD *)&v15[4 * v64 + 1024] + *(_DWORD *)&v15[4 * v62 + 2048] + v63) >> 5);
        *v53 = v49;
        v53 = (_WORD *)((char *)v53 + v113);
      }
      while ( v53 != v112 );
    }
    else if ( WORD2(v76) )
    {
      v65 = (int *)(v15 + 3072);
      v66 = 256 - HIWORD(v76);
      do
      {
        v51 += WORD2(v76);
        v66 += HIWORD(v76);
        *(v65 - 256) = v51;
        *v65++ = v66;
      }
      while ( v65 - 768 < (int *)v15 + 256 );
      v48 = (unsigned __int64)&v77[-*(_QWORD *)&v78[16]];
      do
      {
        v67 = v52[v48];
        v68 = *v52++;
        v49 = (unsigned int)((*(_DWORD *)&v15[4 * v68 + 2048] + *(_DWORD *)&v15[4 * v67 + 3072]) >> 5);
        *v53 = v49;
        v53 = (_WORD *)((char *)v53 + v113);
      }
      while ( v53 != v112 );
    }
    else
    {
      v69 = 256 - HIWORD(v76);
      do
      {
        v69 += HIWORD(v76);
        *(_DWORD *)(v48 + 3072) = v69;
        v48 += 4LL;
      }
      while ( v48 < (unsigned __int64)(v15 + 1024) );
      do
      {
        v70 = *v50++;
        *v53 = *(int *)&v15[4 * v70 + 3072] >> 5;
        v53 = (_WORD *)((char *)v53 + v113);
      }
      while ( v53 != v112 );
    }
    v71 = v83[0];
    if ( SLOBYTE(v83[0]) < 0 )
    {
      v88(v83, v49, v53, v48);
      v71 = v83[0];
    }
    if ( (v71 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v83);
      LOBYTE(v71) = v83[0];
    }
    if ( (v71 & 0x10) != 0 )
    {
      MappingBGRF(v107, v108, v95, v102);
      v72 = &v102[v105];
      if ( v72 == v103 )
        v72 = v104;
      v102 = v72;
    }
    v89(v83, v109, v110, v84, v94, v96, v96 + v100, v101, v90);
    v20 = v81;
    v73 = v99 + v96;
    if ( v73 == v97 )
      v73 = v98;
    v84 += v87;
    v40 = v80;
    v39 = v82;
    v96 = v73;
  }
  return v86;
}
