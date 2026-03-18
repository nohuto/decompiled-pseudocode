/*
 * XREFs of ShrinkDIB_CY @ 0x1400EDAE0
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

__int64 __fastcall ShrinkDIB_CY(__int128 *a1)
{
  __int128 *v2; // rax
  int *v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rbx
  unsigned __int64 v20; // r13
  char *v21; // rdi
  __int64 v22; // rax
  size_t v23; // rsi
  char *v24; // r12
  char *v25; // r15
  __int64 v26; // r14
  int v27; // r8d
  int v28; // eax
  int v29; // ecx
  unsigned __int16 *v30; // rsi
  unsigned int v31; // edx
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  int v35; // r9d
  int v36; // edx
  int *v37; // rcx
  int v38; // r8d
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rdx
  _BYTE *v42; // r8
  char *v43; // r15
  char *v44; // r12
  __int16 v45; // r10
  __int64 v46; // r11
  int v47; // r9d
  int v48; // ecx
  int v49; // eax
  __int16 v50; // ax
  __int64 v51; // rcx
  char *v52; // rax
  char *v54; // rdx
  unsigned __int8 *v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  unsigned __int8 *v58; // r8
  char *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  _BYTE *v62; // r9
  unsigned __int64 v63; // r10
  _DWORD *v64; // rcx
  char *v65; // r12
  int v66; // edx
  int v67; // edx
  int v68; // r8d
  __int16 v69; // ax
  int *v70; // rcx
  int v71; // eax
  __int64 FixupScan; // rax
  char *v73; // rdx
  unsigned __int8 *v74; // r8
  __int64 v75; // rax
  unsigned __int8 *v76; // rax
  unsigned __int8 *v77; // rax
  unsigned int v78; // [rsp+50h] [rbp-B0h]
  int v79; // [rsp+54h] [rbp-ACh]
  unsigned int v80; // [rsp+58h] [rbp-A8h]
  int v81; // [rsp+60h] [rbp-A0h]
  __int64 v82; // [rsp+68h] [rbp-98h]
  char *v83; // [rsp+70h] [rbp-90h]
  char *v84; // [rsp+78h] [rbp-88h]
  char *v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  size_t Size; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v88; // [rsp+98h] [rbp-68h]
  int v89[34]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v92)(int *); // [rsp+160h] [rbp+60h]
  void (__fastcall *v93)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  void (__fastcall *v95)(__int64, __int64, __int64, __int64, int); // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1D0h] [rbp+D0h]
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  __int64 v98; // [rsp+1E0h] [rbp+E0h]
  __int64 v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  __int64 v101; // [rsp+238h] [rbp+138h]
  __int64 v102; // [rsp+240h] [rbp+140h]
  __int64 v103; // [rsp+248h] [rbp+148h]
  int v104; // [rsp+250h] [rbp+150h]
  int v105; // [rsp+254h] [rbp+154h]
  int v106; // [rsp+258h] [rbp+158h]
  unsigned __int8 *v107; // [rsp+260h] [rbp+160h]
  unsigned __int8 *v108; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v109; // [rsp+270h] [rbp+170h]
  int v110; // [rsp+278h] [rbp+178h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 *v112; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  __int64 v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  __int64 v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  int v118; // [rsp+2F0h] [rbp+1F0h]

  v2 = a1;
  v3 = v89;
  v4 = 4LL;
  do
  {
    v3 += 32;
    v5 = *v2;
    v6 = v2[1];
    v2 += 8;
    *((_OWORD *)v3 - 8) = v5;
    v7 = *(v2 - 6);
    *((_OWORD *)v3 - 7) = v6;
    v8 = *(v2 - 5);
    *((_OWORD *)v3 - 6) = v7;
    v9 = *(v2 - 4);
    *((_OWORD *)v3 - 5) = v8;
    v10 = *(v2 - 3);
    *((_OWORD *)v3 - 4) = v9;
    v11 = *(v2 - 2);
    *((_OWORD *)v3 - 3) = v10;
    v12 = *(v2 - 1);
    *((_OWORD *)v3 - 2) = v11;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = v2[1];
  *(_OWORD *)v3 = *v2;
  v14 = v2[2];
  *((_OWORD *)v3 + 1) = v13;
  v15 = v2[3];
  *((_OWORD *)v3 + 2) = v14;
  v16 = v2[4];
  v17 = *((_QWORD *)v2 + 10);
  *((_OWORD *)v3 + 3) = v15;
  *((_OWORD *)v3 + 4) = v16;
  *((_QWORD *)v3 + 10) = v17;
  v18 = v97;
  v19 = *(_DWORD **)(v97 + 32);
  v86 = *(_QWORD *)(v97 + 24);
  v20 = (unsigned __int64)(v19 + 256);
  v21 = (char *)(v19 + 512);
  v83 = (char *)(v19 + 512);
  v22 = *((_QWORD *)a1 + 39);
  v23 = 12 * v89[14];
  Size = v23;
  v24 = (char *)&v19[v23 / 4 + 512];
  v25 = &v24[v23];
  v84 = v24;
  v85 = &v24[v23];
  v26 = (__int64)&v24[Size + 9 + Size];
  v82 = v26;
  if ( (*(_DWORD *)(v22 + 16) || *(_WORD *)(v22 + 14)) && (!*(_QWORD *)(v22 + 32) || !*((_QWORD *)a1 + 67)) )
    return *((unsigned int *)a1 + 37);
  v27 = *(unsigned __int16 *)(v97 + 14);
  if ( *(_WORD *)(v97 + 14) )
  {
    v70 = *(int **)(v97 + 32);
    v71 = -v27;
    do
    {
      v71 += v27;
      *v70++ = v71;
    }
    while ( (unsigned __int64)v70 < v20 );
    FixupScan = GetFixupScan(v89, v111);
    v73 = &v24[v23];
    v74 = (unsigned __int8 *)(FixupScan + 1);
    do
    {
      *(_DWORD *)v73 = v19[v74[1]];
      *((_DWORD *)v73 + 1) = v19[*v74];
      v75 = *(v74 - 1);
      v74 += 3;
      *((_DWORD *)v73 + 2) = v19[v75];
      v73 += 12;
    }
    while ( v73 < &v25[v23] );
    v18 = v97;
    if ( !*(_WORD *)(v97 + 10) )
      v89[0] |= 0x20u;
  }
  v28 = *(unsigned __int16 *)(v18 + 12);
  v29 = *(_DWORD *)(v18 + 16);
  v30 = *(unsigned __int16 **)(v18 + 40);
  v31 = 0;
  v79 = v28;
  v78 = 0;
  if ( v29 )
  {
    LOBYTE(v31) = v28 == 1;
    v80 = v31;
    do
    {
      v81 = v29 - 1;
      v32 = GetFixupScan(v89, v111);
      v33 = *v30;
      v88 = v30 + 1;
      v34 = (unsigned __int64)&v25[Size];
      if ( (v33 & 0x4000) != 0 )
      {
        v35 = v33 & 0x3FFF;
        v36 = -v35;
        v37 = v19;
        v38 = *(_DWORD *)(v86 + 4) + (((__int16)v33 >> 15) & 1) - v35;
        v39 = v35 - (*(_DWORD *)(v86 + 4) + (((__int16)v33 >> 15) & 1));
        do
        {
          v36 += v35;
          v39 += v38;
          *v37 = v36;
          v37[256] = v39;
          ++v37;
        }
        while ( (unsigned __int64)v37 < v20 );
        v40 = v79--;
        if ( v40 > 0 )
        {
          v58 = (unsigned __int8 *)(v32 + 1);
          v59 = v25 + 4;
          v60 = v21 - v25 + 4;
          do
          {
            v59 += 12;
            *((_DWORD *)v59 - 4) += v19[v58[1]];
            *((_DWORD *)v59 - 3) += v19[*v58];
            *((_DWORD *)v59 - 2) += v19[*(v58 - 1)];
            *(_DWORD *)&v59[v21 - v25 - 16] = v19[v58[1] + 256];
            *(_DWORD *)&v59[v60 - 16] = v19[*v58 + 256];
            v61 = *(v58 - 1);
            v58 += 3;
            *(_DWORD *)&v59[v60 - 12] = v19[v61 + 256];
          }
          while ( (unsigned __int64)(v59 - 4) < v34 );
          if ( v80 )
          {
            memmove(v24, v25, Size);
            v80 = 0;
          }
        }
        else
        {
          v41 = v21 + 4;
          v42 = (_BYTE *)(v82 + 2);
          v43 = (char *)(v25 - v21);
          v44 = (char *)(v24 - v21);
          do
          {
            v45 = *(_WORD *)v32;
            v46 = *(unsigned __int8 *)(v32 + 2);
            v32 += 3LL;
            *(_DWORD *)((char *)v41 + (_QWORD)v43 - 4) += v19[v46];
            *(_DWORD *)&v43[(_QWORD)v41] += v19[HIBYTE(v45)];
            *(_DWORD *)((char *)v41 + (_QWORD)v43 + 4) += v19[(unsigned __int8)v45];
            v47 = (6 * *(_DWORD *)((char *)v41 + (_QWORD)v44 + 4) - v41[1] - *(_DWORD *)((char *)v41 + (_QWORD)v43 + 4)) >> 15;
            if ( (v47 & 0xFF00) != 0 )
              LOBYTE(v47) = ~HIBYTE(v47);
            *(v42 - 2) = v47;
            v48 = (6 * *(_DWORD *)((char *)v41 + (_QWORD)v44) - *(_DWORD *)&v43[(_QWORD)v41] - *v41) >> 15;
            if ( (v48 & 0xFF00) != 0 )
              LOBYTE(v48) = ~HIBYTE(v48);
            *(v42 - 1) = v48;
            v49 = (6 * *(_DWORD *)((char *)v41 + (_QWORD)v44 - 4)
                 - *(_DWORD *)((char *)v41 + (_QWORD)v43 - 4)
                 - *(v41 - 1)) >> 15;
            if ( (v49 & 0xFF00) != 0 )
              LOBYTE(v49) = ~HIBYTE(v49);
            *v42 = v49;
            v42 += 3;
            *(v41 - 1) = v19[v46 + 256];
            *v41 = v19[HIBYTE(v45) + 256];
            v41[1] = v19[(unsigned __int8)v45 + 256];
            v41 += 3;
          }
          while ( (_DWORD *)((char *)v41 + (_QWORD)v43 - 4) < (_DWORD *)v34 );
          v95(v96, v82, v116, v117, v118);
          v50 = v89[0];
          if ( SLOBYTE(v89[0]) < 0 )
          {
            v92(v89);
            v50 = v89[0];
          }
          if ( (v50 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v89);
            LOBYTE(v50) = v89[0];
          }
          if ( (v50 & 0x10) != 0 )
          {
            MappingBGRF(v112, v113, v100, v107);
            v76 = &v107[v110];
            if ( v76 == v108 )
              v76 = v109;
            v107 = v76;
          }
          v93(v89, v114, v115, v90, v99, v101, v101 + v105, v106, v94);
          v21 = v83;
          v51 = v104 + v101;
          if ( v51 == v102 )
            v51 = v103;
          v90 += v91;
          ++v78;
          v25 = v85;
          v24 = v84;
          v101 = v51;
        }
        v52 = v21;
        v83 = v24;
        v21 = v24;
        v84 = v25;
        v24 = v25;
        v85 = v52;
        v25 = v52;
      }
      else
      {
        v54 = v25 + 8;
        v55 = (unsigned __int8 *)(v32 + 1);
        v56 = v86 + ((v33 >> 5) & 0x400);
        do
        {
          v54 += 12;
          *((_DWORD *)v54 - 5) += *(_DWORD *)(v56 + 4LL * v55[1]);
          *((_DWORD *)v54 - 4) += *(_DWORD *)(v56 + 4LL * *v55);
          v57 = *(v55 - 1);
          v55 += 3;
          *((_DWORD *)v54 - 3) += *(_DWORD *)(v56 + 4 * v57);
        }
        while ( (unsigned __int64)(v54 - 8) < v34 );
      }
      v29 = v81;
      v30 = v88;
    }
    while ( v81 );
    v26 = v82;
    v31 = v78;
  }
  if ( v90 != v98 )
  {
    v62 = (_BYTE *)(v26 + 2);
    v63 = (unsigned __int64)&v24[Size];
    v64 = v21 + 4;
    v65 = (char *)(v24 - v21);
    do
    {
      v66 = (5 * *(_DWORD *)((char *)v64 + (_QWORD)v65 + 4) - v64[1]) >> 15;
      if ( (v66 & 0xFF00) != 0 )
        LOBYTE(v66) = ~HIBYTE(v66);
      *(v62 - 2) = v66;
      v67 = (5 * *(_DWORD *)&v65[(_QWORD)v64] - *v64) >> 15;
      if ( (v67 & 0xFF00) != 0 )
        LOBYTE(v67) = ~HIBYTE(v67);
      *(v62 - 1) = v67;
      v68 = (5 * *(_DWORD *)&v65[(_QWORD)v64 - 4] - *(v64 - 1)) >> 15;
      if ( (v68 & 0xFF00) != 0 )
        LOBYTE(v68) = ~HIBYTE(v68);
      v64 += 3;
      *v62 = v68;
      v62 += 3;
    }
    while ( (_DWORD *)((char *)v64 + (_QWORD)v65 - 4) < (_DWORD *)v63 );
    v95(v96, v26, v116, v117, v118);
    v69 = v89[0];
    if ( SLOBYTE(v89[0]) < 0 )
    {
      v92(v89);
      v69 = v89[0];
    }
    if ( (v69 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v89);
      LOBYTE(v69) = v89[0];
    }
    if ( (v69 & 0x10) != 0 )
    {
      MappingBGRF(v112, v113, v100, v107);
      v77 = &v107[v110];
      if ( v77 == v108 )
        v77 = v109;
      v107 = v77;
    }
    v93(v89, v114, v115, v90, v99, v101, v101 + v105, v106, v94);
    return v78 + 1;
  }
  return v31;
}
