/*
 * XREFs of GrayShrinkDIB_CY @ 0x1400F0870
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

__int64 __fastcall GrayShrinkDIB_CY(_OWORD *a1)
{
  int *v1; // rdx
  __int64 v2; // rax
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
  __int64 v15; // rdx
  int *v16; // r12
  int v17; // r8d
  size_t v18; // r15
  char *v19; // rsi
  char *v20; // rbx
  char *v21; // r14
  unsigned __int8 *v22; // r9
  unsigned __int8 *v23; // r13
  unsigned int v24; // r13d
  int v25; // eax
  int v26; // edx
  unsigned __int8 *v27; // rdi
  __int64 v28; // rax
  char *v29; // r15
  _DWORD *v30; // r9
  __int16 v31; // ax
  int *v32; // rcx
  int v33; // r10d
  int v34; // edx
  int v35; // eax
  int v36; // r8d
  int v37; // eax
  _WORD *v38; // r8
  char *v39; // rbx
  __int64 v40; // r10
  _DWORD *v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rax
  __int16 v44; // ax
  __int64 v45; // rcx
  __int64 i; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _WORD *v51; // rdx
  char *v52; // r8
  signed __int64 v53; // rsi
  int v54; // ecx
  __int16 v55; // ax
  unsigned __int8 *v56; // rax
  int *v57; // rcx
  int v58; // eax
  char *v59; // rdi
  __int64 FixupScan; // rax
  char *v61; // rdx
  __int64 v62; // rax
  unsigned __int8 *v63; // rax
  int v64; // [rsp+58h] [rbp-B0h]
  BOOL v65; // [rsp+5Ch] [rbp-ACh]
  unsigned __int8 *v66; // [rsp+60h] [rbp-A8h]
  int v67; // [rsp+68h] [rbp-A0h]
  size_t Size; // [rsp+70h] [rbp-98h]
  __int16 *v69; // [rsp+78h] [rbp-90h]
  __int64 v70; // [rsp+80h] [rbp-88h]
  char *v71; // [rsp+88h] [rbp-80h]
  char *v72; // [rsp+90h] [rbp-78h]
  char *v73; // [rsp+98h] [rbp-70h]
  unsigned __int8 *v74; // [rsp+A0h] [rbp-68h]
  int v75[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+130h] [rbp+28h]
  int v77; // [rsp+138h] [rbp+30h]
  int v78; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v79)(int *, __int64, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v80)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v82)(__int64, __int64, char *, unsigned __int8 *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  __int64 v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  __int64 v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]
  int v91; // [rsp+258h] [rbp+150h]
  int v92; // [rsp+25Ch] [rbp+154h]
  int v93; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v94; // [rsp+268h] [rbp+160h]
  unsigned __int8 *v95; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v96; // [rsp+278h] [rbp+170h]
  int v97; // [rsp+280h] [rbp+178h]
  __int64 v98; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int8 *v99; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v100; // [rsp+2D0h] [rbp+1C8h]
  __int64 v101; // [rsp+2D8h] [rbp+1D0h]
  __int64 v102; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v103; // [rsp+2E8h] [rbp+1E0h]
  int v104; // [rsp+2F8h] [rbp+1F0h]

  v1 = v75;
  v73 = 0LL;
  v2 = 4LL;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v1 = *a1;
    v4 = a1[2];
    *((_OWORD *)v1 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v1 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v1 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v1 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v1 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v1 + 6) = v8;
    v1 += 32;
    *((_OWORD *)v1 - 1) = v9;
    --v2;
  }
  while ( v2 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v1 = *a1;
  v12 = a1[2];
  *((_OWORD *)v1 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v1 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v1 + 3) = v13;
  *((_OWORD *)v1 + 4) = v14;
  *((_QWORD *)v1 + 10) = v10;
  v15 = v84;
  v16 = *(int **)(v84 + 32);
  v17 = *(unsigned __int16 *)(v84 + 14);
  v70 = *(_QWORD *)(v84 + 24);
  v18 = 4 * v77;
  Size = v18;
  v19 = (char *)(v16 + 512);
  v71 = (char *)(v16 + 512);
  v20 = (char *)v16 + v18 + 2048;
  v72 = v20;
  v21 = &v20[v18];
  v73 = &v20[v18];
  v22 = (unsigned __int8 *)&v20[Size + Size];
  v66 = v22;
  v23 = &v22[v77];
  v74 = v23;
  if ( v17 )
  {
    v57 = v16;
    v58 = -v17;
    do
    {
      v58 += v17;
      *v57++ = v58;
    }
    while ( v57 < v16 + 256 );
    v59 = &v20[v18 + v18];
    FixupScan = GetFixupScan((unsigned int *)v75, v98);
    v82(v83, FixupScan, v59, v23, 1);
    v61 = &v20[v18];
    do
    {
      v62 = (unsigned __int8)*v59++;
      *(_DWORD *)v61 = v16[v62];
      v61 += 4;
    }
    while ( v61 < &v21[v18] );
    v15 = v84;
    v22 = v66;
    if ( !*(_WORD *)(v84 + 10) )
      v75[0] |= 0x20u;
  }
  v24 = 0;
  v69 = *(__int16 **)(v15 + 40);
  v25 = *(unsigned __int16 *)(v15 + 12);
  v26 = *(_DWORD *)(v15 + 16);
  v64 = v25;
  if ( v26 )
  {
    v65 = v25 == 1;
    do
    {
      v67 = v26 - 1;
      v27 = v22;
      v28 = GetFixupScan((unsigned int *)v75, v98);
      v82(v83, v28, (char *)v66, v74, 1);
      v29 = &v21[v18];
      v30 = v21;
      v31 = *v69++;
      if ( (v31 & 0x4000) != 0 )
      {
        v32 = v16;
        v33 = v31 & 0x3FFF;
        v34 = -v33;
        v35 = *(_DWORD *)(v70 + 4) + ((v31 >> 15) & 1) - v33;
        v36 = -v35;
        do
        {
          v34 += v33;
          v36 += v35;
          *v32 = v34;
          v32[256] = v36;
          ++v32;
        }
        while ( v32 < v16 + 256 );
        v37 = v64--;
        if ( v37 > 0 )
        {
          do
          {
            *v30 += v16[*v27];
            v48 = *v27++;
            *(_DWORD *)((char *)v30++ + v19 - v21) = v16[v48 + 256];
          }
          while ( v30 < (_DWORD *)v29 );
          if ( v65 )
          {
            memmove(v20, v21, Size);
            v65 = 0;
          }
        }
        else
        {
          v38 = v103;
          v39 = (char *)(v20 - v19);
          v40 = v19 - v21;
          do
          {
            v41 = (_DWORD *)((char *)v30 + v40);
            *v30 += v16[*v27];
            v42 = (unsigned int)((6 * *(_DWORD *)((char *)v30 + v40 + (_QWORD)v39)
                                - *v30
                                - *(_DWORD *)((char *)v30 + v40)) >> 7);
            if ( (v42 & 0xFF0000) != 0 )
              v42 = ~WORD1(v42);
            *v38 = v42;
            ++v30;
            v38 = (_WORD *)((char *)v38 + v104);
            v43 = *v27++;
            *v41 = v16[v43 + 256];
          }
          while ( v30 < (_DWORD *)v29 );
          v44 = v75[0];
          if ( SLOBYTE(v75[0]) < 0 )
          {
            v79(v75, v42, v38);
            v44 = v75[0];
          }
          if ( (v44 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v75);
            LOBYTE(v44) = v75[0];
          }
          if ( (v44 & 0x10) != 0 )
          {
            MappingBGRF(v99, v100, v87, v94);
            v56 = &v94[v97];
            if ( v56 == v95 )
              v56 = v96;
            v94 = v56;
          }
          v80(v75, v101, v102, v76, v86, v88, v88 + v92, v93, v81);
          v45 = v91 + v88;
          if ( v45 == v89 )
            v45 = v90;
          v76 += v78;
          ++v24;
          v88 = v45;
        }
        v21 = v19;
        for ( i = 0LL; i < 2; ++i )
          (&v71)[i] = (&v72)[i];
        v20 = v72;
        v73 = v19;
        v19 = v71;
      }
      else
      {
        v49 = v70 + (((unsigned __int64)(unsigned __int16)v31 >> 5) & 0x400);
        do
        {
          v50 = *v27++;
          *v30++ += *(_DWORD *)(v49 + 4 * v50);
        }
        while ( v30 < (_DWORD *)v29 );
      }
      v26 = v67;
      v18 = Size;
      v22 = v66;
    }
    while ( v67 );
  }
  if ( v76 != v85 )
  {
    v51 = v103;
    v52 = &v20[v18];
    v53 = v19 - v20;
    do
    {
      v54 = (5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v53]) >> 7;
      if ( (v54 & 0xFF0000) != 0 )
        LOWORD(v54) = ~HIWORD(v54);
      *v51 = v54;
      v20 += 4;
      v51 = (_WORD *)((char *)v51 + v104);
    }
    while ( v20 < v52 );
    v55 = v75[0];
    if ( SLOBYTE(v75[0]) < 0 )
    {
      ((void (__fastcall *)(int *, _WORD *, char *, unsigned __int8 *))v79)(v75, v51, v52, v22);
      v55 = v75[0];
    }
    if ( (v55 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v75);
      LOBYTE(v55) = v75[0];
    }
    if ( (v55 & 0x10) != 0 )
    {
      MappingBGRF(v99, v100, v87, v94);
      v63 = &v94[v97];
      if ( v63 == v95 )
        v63 = v96;
      v94 = v63;
    }
    v80(v75, v101, v102, v76, v86, v88, v88 + v92, v93, v81);
    ++v24;
  }
  return v24;
}
