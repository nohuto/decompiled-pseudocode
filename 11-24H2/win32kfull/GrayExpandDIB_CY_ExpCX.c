/*
 * XREFs of GrayExpandDIB_CY_ExpCX @ 0x1402F9650
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400ED40C (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400ED4BC (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400EFB60 (GetFixupScan.c)
 *     GrayExpYDIB_ExpCX @ 0x1402F8B74 (GrayExpYDIB_ExpCX.c)
 *     GraySharpenInput @ 0x1402FA070 (GraySharpenInput.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GrayExpandDIB_CY_ExpCX(__int64 a1)
{
  __int64 v1; // r8
  int *v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  char v16; // r14
  __int64 v17; // r13
  size_t v18; // rbx
  unsigned __int64 v19; // rdi
  char *v20; // r12
  char *v21; // r15
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // r15d
  char *v26; // r13
  char *v27; // rsi
  int v28; // eax
  size_t *v29; // rcx
  int v30; // eax
  unsigned __int16 v31; // bx
  __int64 v32; // rdx
  int v33; // esi
  _BYTE *v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  _WORD *v37; // r8
  int v38; // r11d
  int v39; // ecx
  int v40; // esi
  unsigned __int8 *v41; // r15
  unsigned __int8 *v42; // r9
  int *v43; // r10
  int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // r10
  __int64 v47; // r11
  __int64 v48; // rbx
  int v49; // edx
  __int64 v50; // rax
  int *v51; // r10
  int v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rax
  int *v59; // r10
  int v60; // r11d
  unsigned __int64 v61; // r10
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rax
  __int16 v66; // ax
  unsigned __int8 *v67; // rax
  __int64 v68; // rcx
  __int64 v70; // [rsp+28h] [rbp-E0h]
  size_t Size; // [rsp+58h] [rbp-B0h]
  size_t Sizea; // [rsp+58h] [rbp-B0h]
  char *v73; // [rsp+60h] [rbp-A8h]
  _BYTE *v74; // [rsp+60h] [rbp-A8h]
  char *v75; // [rsp+68h] [rbp-A0h]
  int v76; // [rsp+70h] [rbp-98h]
  char *Src; // [rsp+78h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-88h]
  int v79; // [rsp+88h] [rbp-80h]
  __int64 v80; // [rsp+90h] [rbp-78h]
  int v81; // [rsp+90h] [rbp-78h]
  int v82; // [rsp+98h] [rbp-70h]
  __int64 v83; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v84; // [rsp+A8h] [rbp-60h]
  __int16 v85; // [rsp+B0h] [rbp-58h]
  size_t *v86; // [rsp+C0h] [rbp-48h]
  int v87[14]; // [rsp+C8h] [rbp-40h] BYREF
  int v88; // [rsp+100h] [rbp-8h]
  __int64 v89; // [rsp+150h] [rbp+48h]
  int v90; // [rsp+158h] [rbp+50h]
  unsigned int v91; // [rsp+15Ch] [rbp+54h]
  int v92; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v93)(int *, __int64, _WORD *, unsigned __int8 *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v94)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  __int64 v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+200h] [rbp+F8h]
  __int64 v98; // [rsp+248h] [rbp+140h]
  __int64 v99; // [rsp+250h] [rbp+148h]
  __int64 v100; // [rsp+260h] [rbp+158h]
  __int64 v101; // [rsp+268h] [rbp+160h]
  __int64 v102; // [rsp+270h] [rbp+168h]
  int v103; // [rsp+278h] [rbp+170h]
  int v104; // [rsp+27Ch] [rbp+174h]
  int v105; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v106; // [rsp+288h] [rbp+180h]
  unsigned __int8 *v107; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v108; // [rsp+298h] [rbp+190h]
  int v109; // [rsp+2A0h] [rbp+198h]
  __int64 v110; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v111; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v112; // [rsp+2F0h] [rbp+1E8h]
  __int64 v113; // [rsp+2F8h] [rbp+1F0h]
  __int64 v114; // [rsp+300h] [rbp+1F8h]
  _WORD *v115; // [rsp+308h] [rbp+200h]
  _WORD *v116; // [rsp+310h] [rbp+208h]
  int v117; // [rsp+318h] [rbp+210h]
  unsigned __int64 v118; // [rsp+328h] [rbp+220h]
  __int64 v119; // [rsp+330h] [rbp+228h]
  __int64 v120; // [rsp+338h] [rbp+230h]
  __int64 v121; // [rsp+340h] [rbp+238h]

  v1 = 4LL;
  v2 = v87;
  v3 = (_OWORD *)a1;
  do
  {
    v4 = v3[1];
    *(_OWORD *)v2 = *v3;
    v5 = v3[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = v3[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = v3[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = v3[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = v3[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = v3[7];
    v3 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v10;
    --v1;
  }
  while ( v1 );
  v11 = v3[1];
  *(_OWORD *)v2 = *v3;
  v12 = v3[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = v3[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = v3[4];
  v15 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v15;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = -1;
    v17 = v97;
    v18 = v88;
    v83 = v90;
    v19 = *(_QWORD *)(v97 + 32);
    v85 = *(_WORD *)(v96 + 12);
    v79 = *(_WORD *)(v96 + 8) & 1;
    v84 = *(unsigned __int64 **)(v96 + 40);
    v118 = v19 + 4096;
    v119 = v90 + v19 + 4096;
    v80 = v97;
    v76 = v88;
    v120 = v119 + v90;
    v121 = v120 + v90;
    Size = v88;
    v20 = (char *)(v90 + 3LL + v121 + v88 + 6LL);
    v75 = (char *)(v90 + 3LL + v121);
    v21 = &v20[v88 + 6];
    v73 = v20;
    LODWORD(v78) = v110 + 3;
    Src = v21;
    GetFixupScan((unsigned int *)v87, (__int64)v20);
    if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
      GetFixupScan((unsigned int *)v87, (__int64)v21);
    else
      memmove(v21, v20, v18);
    v22 = *(unsigned __int16 *)(v17 + 12);
    v23 = v22 & 0xF;
    v24 = v22 >> 4;
    v25 = v23 + v24;
    if ( v23 + v24 )
    {
      v26 = v20;
      v27 = v75;
      do
      {
        ++v16;
        v75 = v26;
        v26 = Src;
        Src = v27;
        --v25;
        v28 = v24--;
        v74 = (_BYTE *)*(&v118 + (v16 & 3));
        if ( v28 <= 0 )
          GetFixupScan((unsigned int *)v87, (__int64)v27);
        else
          memmove(v27, v26, Size);
        v70 = (__int64)v27;
        v27 = v75;
        v78 = GraySharpenInput(v87[0], v78, (int)v75, (int)v26, v70, Size);
        GrayExpYDIB_ExpCX(v84, (unsigned __int8 *)(v79 + (v85 & 0xFu) - 1LL + v78), v74, &v74[v83]);
      }
      while ( v25 );
      v73 = v26;
      v20 = v26;
      v17 = v80;
    }
    else
    {
      v27 = v75;
    }
    v29 = *(size_t **)(v17 + 40);
    v30 = *(_DWORD *)(v17 + 16);
    while ( v30 )
    {
      v82 = v30 - 1;
      Sizea = *v29;
      v86 = v29 + 1;
      v31 = *v29;
      if ( (v31 & 0x8000u) != 0 )
      {
        v32 = (__int64)v27;
        v75 = v20;
        v33 = (int)Src;
        v73 = Src;
        Src = (char *)GetFixupScan((unsigned int *)v87, v32);
        v78 = GraySharpenInput(v87[0], v78, (int)v20, v33, (__int64)Src, v76);
        v34 = (_BYTE *)*(&v118 + (++v16 & 3));
        GrayExpYDIB_ExpCX(v84, (unsigned __int8 *)((unsigned __int16)v79 - 1LL + (v85 & 0xF) + v78), v34, &v34[v83]);
        v31 &= 0x3FFFu;
      }
      v35 = v19;
      v36 = HIWORD(Sizea);
      v37 = v115;
      v38 = -WORD1(Sizea);
      v39 = -WORD2(Sizea);
      v81 = v31;
      v40 = -v31;
      v41 = (unsigned __int8 *)*(&v118 + (v16 & 3));
      v42 = (unsigned __int8 *)*(&v118 + ((v16 - 1) & 3));
      if ( v31 )
      {
        v43 = (int *)(v19 + 2048);
        v44 = 256 - HIWORD(Sizea);
        do
        {
          v40 += v81;
          v38 += WORD1(Sizea);
          v39 += WORD2(Sizea);
          *(v43 - 512) = v40;
          v44 += HIWORD(Sizea);
          *(v43 - 256) = v38;
          *v43 = v39;
          v43[256] = v44;
          ++v43;
        }
        while ( (unsigned __int64)(v43 - 512) < v19 + 1024 );
        v45 = *(&v118 + ((v16 - 1) & 3));
        v46 = *(&v118 + (v16 & 3)) - v45;
        v47 = *(&v118 + ((v16 - 2) & 3)) - v45;
        v48 = *(&v118 + ((v16 + 1) & 3)) - v45;
        do
        {
          v49 = *(_DWORD *)(v19 + 4LL * v42[v48])
              + *(_DWORD *)(v19 + 4LL * v42[v47] + 1024)
              + *(_DWORD *)(v19 + 4LL * v42[v46] + 3072);
          v50 = *v42++;
          v36 = (unsigned int)((*(_DWORD *)(v19 + 4 * v50 + 2048) + v49) >> 5);
          *v37 = v36;
          v37 = (_WORD *)((char *)v37 + v117);
        }
        while ( v37 != v116 );
      }
      else if ( WORD1(Sizea) )
      {
        v51 = (int *)(v19 + 2048);
        v52 = 256 - HIWORD(Sizea);
        do
        {
          v38 += WORD1(Sizea);
          v39 += WORD2(Sizea);
          v52 += HIWORD(Sizea);
          *(v51 - 256) = v38;
          *v51 = v39;
          v51[256] = v52;
          ++v51;
        }
        while ( (unsigned __int64)(v51 - 512) < v19 + 1024 );
        v53 = *(&v118 + ((v16 - 1) & 3));
        v54 = *(&v118 + (v16 & 3)) - v53;
        v55 = *(&v118 + ((v16 - 2) & 3)) - v53;
        do
        {
          v56 = v42[v55];
          v57 = *(_DWORD *)(v19 + 4LL * v42[v54] + 3072);
          v58 = *v42++;
          v36 = (unsigned int)((*(_DWORD *)(v19 + 4 * v58 + 2048) + *(_DWORD *)(v19 + 4 * v56 + 1024) + v57) >> 5);
          *v37 = v36;
          v37 = (_WORD *)((char *)v37 + v117);
        }
        while ( v37 != v116 );
      }
      else if ( WORD2(Sizea) )
      {
        v59 = (int *)(v19 + 3072);
        v60 = 256 - HIWORD(Sizea);
        do
        {
          v39 += WORD2(Sizea);
          v60 += HIWORD(Sizea);
          *(v59 - 256) = v39;
          *v59++ = v60;
        }
        while ( (unsigned __int64)(v59 - 768) < v19 + 1024 );
        v61 = *(&v118 + (v16 & 3)) - *(&v118 + ((v16 - 1) & 3));
        do
        {
          v62 = v42[v61];
          v63 = *v42++;
          v36 = (unsigned int)((*(_DWORD *)(v19 + 4 * v63 + 2048) + *(_DWORD *)(v19 + 4 * v62 + 3072)) >> 5);
          *v37 = v36;
          v37 = (_WORD *)((char *)v37 + v117);
        }
        while ( v37 != v116 );
      }
      else
      {
        v64 = 256 - HIWORD(Sizea);
        do
        {
          v64 += HIWORD(Sizea);
          *(_DWORD *)(v35 + 3072) = v64;
          v35 += 4LL;
        }
        while ( v35 < v19 + 1024 );
        do
        {
          v65 = *v41++;
          *v37 = *(int *)(v19 + 4 * v65 + 3072) >> 5;
          v37 = (_WORD *)((char *)v37 + v117);
        }
        while ( v37 != v116 );
      }
      v66 = v87[0];
      if ( SLOBYTE(v87[0]) < 0 )
      {
        v93(v87, v36, v37, v42);
        v66 = v87[0];
      }
      if ( (v66 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v87);
        LOBYTE(v66) = v87[0];
      }
      if ( (v66 & 0x10) != 0 )
      {
        MappingBGRF(v111, v112, v99, v106);
        v67 = &v106[v109];
        if ( v67 == v107 )
          v67 = v108;
        v106 = v67;
      }
      v94(v87, v113, v114, v89, v98, v100, v100 + v104, v105, v95);
      v20 = v73;
      v68 = v103 + v100;
      if ( v68 == v101 )
        v68 = v102;
      v89 += v92;
      v30 = v82;
      v27 = v75;
      v100 = v68;
      v29 = v86;
    }
  }
  return v91;
}
