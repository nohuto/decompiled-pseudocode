/*
 * XREFs of FastExpAA_CY @ 0x1400EF480
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400ED40C (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400ED4BC (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400EFB60 (GetFixupScan.c)
 *     Do5225 @ 0x1400F0700 (Do5225.c)
 *     Do35 @ 0x140182B2C (Do35.c)
 *     Do1141 @ 0x14018F7F4 (Do1141.c)
 *     Do3121 @ 0x1401C2640 (Do3121.c)
 *     Do6251 @ 0x140221C90 (Do6251.c)
 *     Do1319 @ 0x1402F8944 (Do1319.c)
 *     Do3263 @ 0x1402F8A18 (Do3263.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 (__fastcall *v19)(int, int, int, int, __int64, int); // r13
  int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int16 *v28; // r14
  unsigned int v29; // edi
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  int v32; // esi
  unsigned __int8 *v33; // rcx
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rbx
  __int64 (__fastcall *v36)(int, int, int, int, int); // rcx
  int v37; // ebx
  __int64 i; // rcx
  unsigned __int8 *v39; // r12
  bool v40; // sf
  unsigned int v41; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // r13d
  _BYTE *v46; // rdi
  unsigned __int8 *v47; // r14
  unsigned __int8 *v48; // r8
  unsigned __int8 *v49; // r11
  int v50; // r10d
  int v51; // ebx
  _BYTE *v52; // r9
  __int64 v53; // r12
  int v54; // eax
  int v55; // edx
  __int64 v56; // r11
  __int64 v57; // r9
  size_t v58; // rbx
  __int16 v59; // ax
  __int64 v60; // rcx
  unsigned __int8 *v61; // r8
  _BYTE *v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  int v65; // r9d
  int v66; // edx
  int v67; // r9d
  int v68; // edx
  unsigned __int8 *v69; // rax
  char v70; // [rsp+58h] [rbp-B0h]
  int v71; // [rsp+5Ch] [rbp-ACh]
  int v72; // [rsp+60h] [rbp-A8h]
  int v73; // [rsp+64h] [rbp-A4h]
  __int64 (__fastcall *v74)(int, int, int, int, __int64, int); // [rsp+68h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v76; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v77; // [rsp+80h] [rbp-88h]
  __int128 v78; // [rsp+88h] [rbp-80h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  __int64 v80; // [rsp+A0h] [rbp-68h]
  __int64 v81; // [rsp+B0h] [rbp-58h]
  __int64 v82; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall *v83)(int, int, int, int, int); // [rsp+C0h] [rbp-48h]
  unsigned __int16 *v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  int v86; // [rsp+D8h] [rbp-30h] BYREF
  char v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+118h] [rbp+10h]
  __int64 v89; // [rsp+160h] [rbp+58h]
  unsigned int v90; // [rsp+16Ch] [rbp+64h]
  int v91; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v92)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v93)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+1F0h] [rbp+E8h]
  __int64 v95; // [rsp+208h] [rbp+100h]
  __int64 v96; // [rsp+210h] [rbp+108h]
  __int64 v97; // [rsp+258h] [rbp+150h]
  __int64 v98; // [rsp+260h] [rbp+158h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  __int64 v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  int v102; // [rsp+288h] [rbp+180h]
  int v103; // [rsp+28Ch] [rbp+184h]
  int v104; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v105; // [rsp+298h] [rbp+190h]
  unsigned __int8 *v106; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v107; // [rsp+2A8h] [rbp+1A0h]
  int v108; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  unsigned __int8 *v110; // [rsp+2F8h] [rbp+1F0h]
  unsigned __int64 v111; // [rsp+300h] [rbp+1F8h]
  __int64 v112; // [rsp+308h] [rbp+200h]
  __int64 v113; // [rsp+310h] [rbp+208h]
  __int64 v114; // [rsp+318h] [rbp+210h]
  __int64 v115; // [rsp+320h] [rbp+218h]
  int v116; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v85 = a1;
  v3 = (_OWORD *)a1;
  v4 = &v86;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = *v3;
  v79 = 0LL;
  v13 = v3[1];
  *(_OWORD *)v4 = v12;
  v14 = v3[2];
  *((_OWORD *)v4 + 1) = v13;
  v15 = v3[3];
  *((_OWORD *)v4 + 2) = v14;
  v16 = v3[4];
  v17 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  *((_QWORD *)v4 + 10) = v17;
  v78 = 0LL;
  if ( *(_QWORD *)(a1 + 536) )
  {
    v18 = v95;
    v19 = GraySharpenInput;
    v20 = v116;
    v21 = v114;
    v22 = v115;
    v23 = *(_QWORD *)(v95 + 96);
    v72 = v116;
    **(_WORD **)(v95 + 88) += *(unsigned __int8 *)(v95 + 82);
    *(_WORD *)(v23 - 2) += *(unsigned __int8 *)(v18 + 83);
    v24 = v20 * *(unsigned __int8 *)(v18 + 83);
    v82 = v21 - v20 * *(unsigned __int8 *)(v18 + 82);
    v25 = v96;
    v80 = v96;
    v26 = *(_QWORD *)(v96 + 96);
    v27 = v24 + v22;
    LOWORD(v24) = *(unsigned __int8 *)(v96 + 83);
    v28 = *(unsigned __int16 **)(v96 + 88);
    v81 = v27;
    *(_WORD *)(v26 - 2) += v24;
    v29 = *(unsigned __int8 *)(v25 + 80);
    v70 = v87 & 4;
    v30 = *(_QWORD *)(v25 + 32) + (-(__int64)((v87 & 4) != 0) & 0xFFFFFFFFFFFFFFFAuLL) + 9;
    v75 = v30;
    v31 = ((v87 & 4) != 0 ? 6 : 18) + v88;
    v32 = v88;
    v33 = (unsigned __int8 *)(v31 + v31 + v30);
    v76 = (unsigned __int8 *)(v31 + v30);
    v34 = &v33[v31];
    v77 = v33;
    v35 = &v33[v31 + v31];
    *(_QWORD *)&v78 = &v33[v31];
    *((_QWORD *)&v78 + 1) = v35;
    v36 = GrayFastExpAA_CX;
    if ( (v87 & 4) == 0 )
      v36 = FastExpAA_CX;
    v83 = v36;
    if ( (v87 & 4) == 0 )
      v19 = SharpenInput;
    v74 = v19;
    GetFixupScan(&v86, v34);
    if ( !v29 )
      v86 |= 0x20u;
    GetFixupScan(&v86, v35);
    if ( v29 < 2 )
      v86 |= 0x20u;
    Src = (char *)Src + 9;
    v37 = -3;
    while ( 1 )
    {
      for ( i = 0LL; i < 4; ++i )
        *(&v75 + i) = (unsigned __int64)(&v76)[i];
      *((_QWORD *)&v78 + 1) = v30;
      GetFixupScan(&v86, v30);
      v39 = v77;
      v74(0, (int)v77, (int)v77, v78, v30, v32);
      v30 = v75;
      v40 = ++v37 < 0;
      v73 = v37;
      if ( !v40 )
      {
        v43 = *v28++;
        v71 = v43;
        v44 = v43;
        v84 = v28;
        v45 = v43;
        if ( !v37 )
        {
          v44 = *(unsigned __int8 *)(v80 + 82) + v43;
          v71 = v44;
        }
        v46 = Src;
        if ( v43 )
          break;
      }
      v41 = v90;
LABEL_17:
      if ( !v41 )
        return *(unsigned int *)(v85 + 148);
    }
    v47 = v76;
    v41 = v90;
    while ( 1 )
    {
      --v45;
      if ( !v41 )
        return *(unsigned int *)(v85 + 148);
      switch ( v44 )
      {
        case 1:
          Do5225((_DWORD)v46, v30, (_DWORD)v47, (_DWORD)v39, v32);
          break;
        case 2:
          v48 = v39;
          if ( v45 == 1 )
            v48 = (unsigned __int8 *)v30;
          v49 = v47;
          v50 = v32 & 3;
          v51 = v32 >> 2;
          v52 = v46;
          if ( v32 >> 2 )
          {
            v53 = v47 - v46;
            do
            {
              v54 = *v49;
              v49 += 4;
              *v52 = (v54 + 2 * (v54 + 1) + (unsigned int)*v48) >> 2;
              v52[1] = ((unsigned __int8)v52[v53 + 1] + 2 * ((unsigned __int8)v52[v53 + 1] + 1) + (unsigned int)v48[1]) >> 2;
              v52[2] = ((unsigned __int8)v52[v53 + 2] + 2 * ((unsigned __int8)v52[v53 + 2] + 1) + (unsigned int)v48[2]) >> 2;
              v55 = v48[3];
              v48 += 4;
              v52[3] = (3 * (unsigned int)(unsigned __int8)v52[v53 + 3] + v55 + 2) >> 2;
              v52 += 4;
              --v51;
            }
            while ( v51 );
            v39 = v77;
          }
          if ( (v32 & 3) != 0 )
          {
            v56 = v49 - v48;
            v57 = v52 - v48;
            do
            {
              v48[v57] = (3 * v48[v56] + (unsigned int)*v48 + 2) >> 2;
              ++v48;
              --v50;
            }
            while ( v50 );
          }
          break;
        case 3:
          v61 = v47;
          v62 = v46;
          if ( v45 == 1 )
          {
            Do1141((_DWORD)v46, v30, (_DWORD)v47, (_DWORD)v39, v32);
            break;
          }
          v63 = (unsigned __int64)v39;
          if ( v45 == 2 )
            v63 = v30;
          goto LABEL_49;
        case 4:
          switch ( v45 )
          {
            case 0:
              v63 = (unsigned __int64)v39;
LABEL_72:
              v61 = v47;
              v62 = v46;
LABEL_49:
              Do35(v62, v63, v61, (unsigned int)v32);
              goto LABEL_35;
            case 1:
              v67 = v30;
              v68 = (int)v39;
              goto LABEL_75;
            case 2:
              v67 = (int)v39;
              v68 = v30;
LABEL_75:
              Do3121((_DWORD)v46, v68, (_DWORD)v47, v67, v32);
              goto LABEL_35;
            case 3:
              v63 = v30;
              goto LABEL_72;
          }
          break;
        case 5:
          switch ( v45 )
          {
            case 0:
              v64 = (unsigned __int64)v39;
              goto LABEL_65;
            case 1:
              v65 = v30;
              v66 = (int)v39;
              goto LABEL_62;
            case 2:
              Do3263((_DWORD)v46, v30, (_DWORD)v47, (_DWORD)v39, v32);
              goto LABEL_35;
            case 3:
              v65 = (int)v39;
              v66 = v30;
LABEL_62:
              Do6251((_DWORD)v46, v66, (_DWORD)v47, v65, v32);
              goto LABEL_35;
            case 4:
              v64 = v30;
LABEL_65:
              Do1319(v46, v64, v47, (unsigned int)v32);
              break;
          }
          break;
      }
LABEL_35:
      v58 = (-(__int64)(v70 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3;
      memmove(&v46[-v58], v46, v58);
      memmove(&v46[v32], &v46[v32 - v58], v58);
      v83(v95, (int)v46, v82, v81, v72);
      v59 = v86;
      if ( (v86 & 0x80u) != 0 )
      {
        v92(&v86);
        v59 = v86;
      }
      if ( (v59 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v86);
        LOBYTE(v59) = v86;
      }
      if ( (v59 & 0x10) != 0 )
      {
        MappingBGRF(v110, v111, v98, v105);
        v69 = &v105[v108];
        if ( v69 == v106 )
          v69 = v107;
        v105 = v69;
      }
      v93(&v86, v112, v113, v89, v97, v99, v99 + v103, v104, v94);
      v44 = v71;
      v60 = v102 + v99;
      if ( v60 == v100 )
        v60 = v101;
      v89 += v91;
      v41 = v90 - 1;
      v99 = v60;
      --v90;
      if ( !v45 )
      {
        v37 = v73;
        v28 = v84;
        goto LABEL_17;
      }
    }
  }
  return v90;
}
