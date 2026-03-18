/*
 * XREFs of ComputeBGRMappingTable @ 0x1402F3914
 * Callers:
 *     CreateDyesColorMappingTable @ 0x14013C2F8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1402F49F0 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x14013E82C (MulFD6.c)
 *     RaisePower @ 0x14013E960 (RaisePower.c)
 *     DivFD6 @ 0x14013ED98 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x14013F334 (MulDivFD6Pairs.c)
 *     FD6DivL @ 0x1401B1D98 (FD6DivL.c)
 *     CacheRGBToXYZ @ 0x1402F3824 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1402F46D4 (ScaleRGB.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _DWORD *v5; // r12
  __m128i v6; // xmm2
  unsigned __int64 *v7; // r14
  int v8; // ebx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r15
  char v11; // r8
  char v12; // cl
  unsigned int v13; // edx
  __int64 v15; // r13
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  int v21; // eax
  __int16 v22; // bx
  __int16 v23; // r15
  int v24; // r14d
  int v25; // r12d
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  int v33; // r8d
  unsigned int v34; // ebx
  int v35; // r9d
  int v36; // ecx
  _DWORD *v37; // r13
  int v38; // r10d
  __int64 v39; // r11
  int v40; // eax
  int v41; // esi
  int v42; // ebx
  int v43; // r14d
  int v44; // edx
  int v45; // eax
  int v46; // r12d
  int v47; // r15d
  int v48; // ebx
  int v49; // edx
  int v50; // esi
  int v51; // r14d
  int v52; // edx
  int v53; // ecx
  int v54; // esi
  int v55; // eax
  int v56; // ebx
  int v57; // esi
  int v58; // r14d
  int v59; // eax
  int v60; // eax
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // esi
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  int v68; // edx
  int v69; // esi
  int v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // ecx
  int v74; // eax
  int v75; // edx
  int v76; // ebx
  int v77; // edx
  int v78; // eax
  int v79; // eax
  int v80; // r15d
  int v81; // edx
  _DWORD *v82; // rsi
  int v83; // r15d
  char v84; // al
  _BYTE *v85; // r15
  char v86; // al
  PVOID v87; // rax
  size_t v88; // r8
  char v89; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v90; // [rsp+24h] [rbp-DCh]
  int v91; // [rsp+24h] [rbp-DCh]
  int v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+28h] [rbp-D8h]
  int v94; // [rsp+2Ch] [rbp-D4h]
  int v95; // [rsp+2Ch] [rbp-D4h]
  int v96; // [rsp+30h] [rbp-D0h]
  int v97; // [rsp+34h] [rbp-CCh]
  __int16 v98; // [rsp+3Ch] [rbp-C4h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh]
  int v101; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v102; // [rsp+50h] [rbp-B0h]
  _DWORD *v103; // [rsp+58h] [rbp-A8h]
  _DWORD *v104; // [rsp+60h] [rbp-A0h]
  _DWORD *v105; // [rsp+68h] [rbp-98h]
  _DWORD *v106; // [rsp+70h] [rbp-90h]
  _BYTE *v107; // [rsp+78h] [rbp-88h]
  int v108; // [rsp+80h] [rbp-80h]
  __int64 v109; // [rsp+88h] [rbp-78h]
  char *v110; // [rsp+90h] [rbp-70h]
  char *v111; // [rsp+98h] [rbp-68h]
  _DWORD *v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v114; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v115; // [rsp+C8h] [rbp-38h] BYREF
  int v116; // [rsp+D0h] [rbp-30h]
  int v117; // [rsp+D8h] [rbp-28h] BYREF
  int v118; // [rsp+E0h] [rbp-20h]
  int v119; // [rsp+E4h] [rbp-1Ch]
  int v120; // [rsp+E8h] [rbp-18h]
  int v121; // [rsp+ECh] [rbp-14h]
  int v122; // [rsp+F0h] [rbp-10h]
  int v123; // [rsp+F4h] [rbp-Ch]
  int v124; // [rsp+F8h] [rbp-8h] BYREF
  int v125; // [rsp+FCh] [rbp-4h]
  int v126; // [rsp+100h] [rbp+0h]
  int v127; // [rsp+104h] [rbp+4h]
  int v128; // [rsp+108h] [rbp+8h]
  int v129; // [rsp+10Ch] [rbp+Ch]
  int v130; // [rsp+110h] [rbp+10h] BYREF
  int v131; // [rsp+114h] [rbp+14h]
  int v132; // [rsp+118h] [rbp+18h]
  int v133; // [rsp+11Ch] [rbp+1Ch]
  int v134; // [rsp+120h] [rbp+20h]
  int v135; // [rsp+124h] [rbp+24h]

  v107 = a4;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v5 = 0LL;
  v106 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v101 = 0;
  v115 = 0LL;
  v116 = 0;
  v97 = 0;
  if ( a3 )
  {
    v6 = *(__m128i *)a3;
    v114 = *(unsigned __int64 **)(a3 + 16);
    v7 = v114;
    v99 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(a3 + 8)));
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 1));
    v12 = _mm_cvtsi128_si32(v6);
  }
  else
  {
    v12 = 0;
    v99 = 0x8000;
    v11 = 0;
    v7 = &v115;
    v10 = 0;
    v9 = 0;
    v8 = 255;
  }
  v102 = v7;
  v94 = v8;
  v90 = v10;
  if ( v12 )
    return 4294967267LL;
  v13 = *(_DWORD *)(a2 + 56);
  v98 = v13;
  if ( !a4 )
    return 4294967267LL;
  if ( !v7 )
    return 4294967278LL;
  v109 = 0LL;
  v15 = 0LL;
  if ( v11 )
  {
    if ( v9 > 5u )
      return 4294967273LL;
    v16 = *(_DWORD *)&SrcOrderTable[4 * v9];
    v17 = v16 >> 8;
    if ( BYTE1(v16) >= 3u )
      return 4294967273LL;
    v13 = HIWORD(v16);
    if ( BYTE2(v16) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v16);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v103 = (_DWORD *)&v115 + (unsigned __int8)v17;
    v19 = (unsigned __int8)v13;
    LOWORD(v13) = v98;
    v104 = (_DWORD *)&v115 + v19;
    v105 = (_DWORD *)&v115 + (unsigned __int8)v18;
  }
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v96 = 1;
        break;
      case 2:
        v96 = 2;
        break;
      case 4:
        v96 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 304);
    v10 = 0;
    v8 = 31;
    v90 = 0;
    v94 = 31;
    v109 = v15;
    v96 = 0;
  }
  if ( (v13 & 0x400) != 0 )
    v112 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v20 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v89 = v20;
  if ( !v20 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v13 & 0x80C0) != 0 )
  {
    v21 = 1000000;
    v22 = 1;
    v23 = v20 == 0;
    v92 = 1000000;
    if ( (v13 & 0x40) != 0 )
      v24 = *(_DWORD *)(a2 + 92);
    else
      v24 = 1000000;
    v25 = v24;
    if ( (v13 & 0x80u) != 0 )
    {
      if ( v20 == 1 )
      {
        v25 = 500 * v24;
        v24 *= 200;
      }
      v23 = 1;
      v26 = *(_DWORD *)(a2 + 96);
      v128 = MulFD6(v24, -v26);
      v27 = MulFD6(v25, v26);
      v22 = 2;
      v134 = v27;
      v21 = *(_DWORD *)(a2 + 100);
      v92 = v21;
      v125 = 500000000;
      v131 = 200000000;
    }
    v126 = MulFD6(v25, v21);
    v28 = MulFD6(v24, v92);
    v7 = v102;
    LOWORD(v124) = v22;
    v5 = 0LL;
    HIWORD(v124) = v23;
    LOWORD(v130) = v22;
    v8 = v94;
    HIWORD(v130) = v23;
    v10 = v90;
    v132 = v28;
  }
  if ( v15 )
  {
    v29 = EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x31355448u);
    v106 = v29;
    v5 = v29;
    if ( v29 )
    {
      v30 = *(unsigned __int16 *)(v15 + 16);
      v109 = CacheRGBToXYZ(v15, v29, (__int64)&v101, a2);
      v15 = v109;
      v31 = 3 * (v30 + 1);
      v110 = (char *)&v5[v31];
      v111 = (char *)&v5[v31 + v31];
      v8 = 0;
    }
  }
  v117 = 3;
  v32 = 0;
  v91 = 0;
  if ( v8 == 1000000 )
    v8 = 0;
  v100 = 0;
  v95 = v8;
  v33 = 0;
  v34 = v99;
  v35 = 0;
  v93 = 0;
  v36 = v99;
  if ( v99 )
  {
    v37 = (_DWORD *)v7 + 1;
    v38 = v98 & 0x80C0;
    v108 = v98 & 0x400;
    v39 = v10;
    ++v107;
    v113 = v10;
    while ( 1 )
    {
      LODWORD(v102) = v36 - 1;
      if ( v96 )
      {
        if ( v96 == 1 )
        {
          *v103 = *((unsigned __int8 *)v37 - 4);
          *v104 = *((unsigned __int8 *)v37 - 3);
          v40 = *((unsigned __int8 *)v37 - 2);
        }
        else if ( v96 == 2 )
        {
          *v103 = *((__int16 *)v37 - 2);
          *v104 = *((__int16 *)v37 - 1);
          v40 = *(__int16 *)v37;
        }
        else
        {
          *v103 = *(v37 - 1);
          *v104 = *v37;
          v40 = v37[1];
        }
        *v105 = v40;
        v41 = v116;
        v42 = HIDWORD(v115);
        v43 = v115;
      }
      else
      {
        v43 = v35;
        v115 = __PAIR64__(v33, v35);
        v116 = v32;
        v93 = v35 + 1;
        v42 = v33;
        v41 = v32;
        if ( v35 + 1 >= 32 )
        {
          v93 = 0;
          v91 = v33 + 1;
          if ( v33 + 1 >= 32 )
          {
            v44 = v32 + 1;
            v91 = 0;
            if ( v44 >= 32 )
              v44 = 0;
            v100 = v44;
          }
        }
      }
      v37 = (_DWORD *)((char *)v37 + v39);
      if ( v95 )
      {
        LODWORD(v115) = DivFD6(v43, v95);
        v43 = v115;
        HIDWORD(v115) = DivFD6(v42, v95);
        v42 = HIDWORD(v115);
        v45 = DivFD6(v41, v95);
        v38 = v98 & 0x80C0;
        v41 = v45;
        v116 = v45;
      }
      if ( !v38 )
        goto LABEL_102;
      if ( v5 )
      {
        v46 = *(_DWORD *)&v111[12 * v41] + *(_DWORD *)&v110[12 * v42] + v5[3 * v43];
        v47 = *(_DWORD *)&v111[12 * v41 + 4] + v106[3 * v43 + 1] + *(_DWORD *)&v110[12 * v42 + 4];
        v48 = *(_DWORD *)&v111[12 * v41 + 8] + v106[3 * v43 + 2] + *(_DWORD *)&v110[12 * v42 + 8];
      }
      else
      {
        v118 = *(_DWORD *)(a2 + 124);
        v120 = *(_DWORD *)(a2 + 128);
        v122 = *(_DWORD *)(a2 + 132);
        HIWORD(v117) = 0;
        v119 = v43;
        v121 = v42;
        v123 = v41;
        v46 = MulDivFD6Pairs(&v117);
        v119 = v43;
        v118 = *(_DWORD *)(a2 + 136);
        v120 = *(_DWORD *)(a2 + 140);
        v122 = *(_DWORD *)(a2 + 144);
        v121 = v42;
        v123 = v41;
        v47 = MulDivFD6Pairs(&v117);
        v118 = *(_DWORD *)(a2 + 148);
        v120 = *(_DWORD *)(a2 + 152);
        v122 = *(_DWORD *)(a2 + 156);
        v119 = v43;
        v121 = v42;
        v123 = v41;
        v48 = MulDivFD6Pairs(&v117);
      }
      if ( v89 )
      {
        v49 = *(_DWORD *)(a2 + 160);
        if ( v49 != 1000000 )
          v46 = DivFD6(v46, v49);
        if ( v46 < 8856 )
          v50 = MulFD6(v46, 7787000) + 137931;
        else
          v50 = RaisePower(v46, 3LL, 3LL);
        if ( v47 < 8856 )
          v51 = MulFD6(v47, 7787000) + 137931;
        else
          v51 = RaisePower(v47, 3LL, 3LL);
        v52 = *(_DWORD *)(a2 + 168);
        v97 = v51;
        if ( v52 != 1000000 )
          v48 = DivFD6(v48, v52);
        if ( v48 < 8856 )
          v53 = MulFD6(v48, 7787000) + 137931;
        else
          v53 = RaisePower(v48, 3LL, 3LL);
        v54 = v50 - v51;
        v55 = v51 - v53;
      }
      else
      {
        v56 = v46 + 2 * (v47 + v48 + 4 * v47) + v47 + v48 + 4 * v47;
        v57 = DivFD6(4 * v46, v56) - *(_DWORD *)(a2 + 184);
        v58 = DivFD6(9 * v47, v56) - *(_DWORD *)(a2 + 188);
        if ( v47 <= 8856 )
        {
          v60 = MulFD6(v47, 9033000);
        }
        else
        {
          v59 = RaisePower(v47, 3LL, 3LL);
          v60 = MulFD6(v59, 1160000) - 160000;
        }
        v61 = 13 * v60;
        v54 = MulFD6(13 * v60, v57);
        v55 = MulFD6(v61, v58);
        v51 = v97;
        v125 = v61;
        v131 = v61;
      }
      v135 = v54;
      v127 = v54;
      v133 = v55;
      v129 = v55;
      v62 = MulDivFD6Pairs(&v124);
      v63 = MulDivFD6Pairs(&v130);
      if ( v89 )
      {
        v64 = v51 + v62;
        v65 = v51 - v63;
        if ( v64 <= 206893 )
        {
          v67 = DivFD6(v64 - 137931, 7787000);
        }
        else
        {
          v66 = MulFD6(v64, v64);
          v67 = MulFD6(v64, v66);
        }
        v68 = *(_DWORD *)(a2 + 240);
        v69 = v67;
        if ( v68 != 1000000 )
          v69 = MulFD6(v67, v68);
        if ( v65 <= 206893 )
        {
          v71 = DivFD6(v65 - 137931, 7787000);
        }
        else
        {
          v70 = MulFD6(v65, v65);
          v71 = MulFD6(v65, v70);
        }
        v72 = *(_DWORD *)(a2 + 248);
        v73 = v71;
        if ( v72 == 1000000 )
          goto LABEL_101;
        v74 = MulFD6(v71, v72);
      }
      else
      {
        v75 = v63 + *(_DWORD *)(a2 + 268);
        if ( v75 < 0 || (v76 = DivFD6(9 * v47, v75), v76 < 0) )
          v76 = 2147000000;
        v77 = v62 + *(_DWORD *)(a2 + 264);
        if ( v77 >= 0 )
        {
          v78 = MulFD6(v76, v77);
          v69 = FD6DivL(v78, 4);
        }
        else
        {
          v69 = 0;
        }
        v74 = FD6DivL(v76 - 15 * v47 - v69, 3);
      }
      v73 = v74;
LABEL_101:
      v118 = *(_DWORD *)(a2 + 204);
      v120 = *(_DWORD *)(a2 + 208);
      v79 = *(_DWORD *)(a2 + 212);
      v123 = v73;
      v122 = v79;
      HIWORD(v117) = 0;
      v119 = v69;
      v121 = v47;
      LODWORD(v115) = MulDivFD6Pairs(&v117);
      v118 = *(_DWORD *)(a2 + 216);
      v120 = *(_DWORD *)(a2 + 220);
      v122 = *(_DWORD *)(a2 + 224);
      HIDWORD(v115) = MulDivFD6Pairs(&v117);
      v118 = *(_DWORD *)(a2 + 228);
      v120 = *(_DWORD *)(a2 + 232);
      v122 = *(_DWORD *)(a2 + 236);
      v116 = MulDivFD6Pairs(&v117);
      ScaleRGB(&v115);
      v41 = v116;
      v42 = HIDWORD(v115);
      v43 = v115;
      v5 = v106;
LABEL_102:
      if ( v108 )
      {
        if ( (v98 & 0x800) != 0 )
        {
          v80 = v42;
          if ( v43 > v42 )
            v80 = v43;
          if ( v41 > v80 )
            v80 = v41;
        }
        else
        {
          v80 = 1000000;
        }
        HIWORD(v117) = 0;
        v81 = v80 - v41;
        v82 = v112;
        v119 = v80 - v43;
        v123 = v81;
        v97 = v80 - v42;
        v118 = *v112;
        v120 = v112[1];
        v122 = v112[2];
        v121 = v80 - v42;
        v43 = v80 - MulDivFD6Pairs(&v117);
        LODWORD(v115) = v43;
        v118 = v82[3];
        v120 = v82[4];
        v122 = v82[5];
        v42 = v80 - MulDivFD6Pairs(&v117);
        HIDWORD(v115) = v42;
        v118 = v82[6];
        v120 = v82[7];
        v122 = v82[8];
        v83 = v80 - MulDivFD6Pairs(&v117);
        v116 = v83;
        v41 = v83;
        if ( v43 >= 0 )
        {
          if ( v43 > 1000000 )
          {
            v43 = 1000000;
            LODWORD(v115) = 1000000;
          }
        }
        else
        {
          v43 = 0;
          LODWORD(v115) = 0;
        }
        if ( v42 >= 0 )
        {
          if ( v42 > 1000000 )
          {
            v42 = 1000000;
            HIDWORD(v115) = 1000000;
          }
        }
        else
        {
          v42 = 0;
          HIDWORD(v115) = 0;
        }
        if ( v83 >= 0 )
        {
          if ( v83 > 1000000 )
          {
            v41 = 1000000;
            v116 = 1000000;
          }
        }
        else
        {
          v41 = 0;
          v116 = 0;
        }
      }
      v84 = MulFD6(v43, 255);
      v85 = v107;
      v107[1] = v84;
      *v85 = MulFD6(v42, 255);
      v86 = MulFD6(v41, 255);
      v36 = (int)v102;
      v32 = v100;
      v33 = v91;
      v35 = v93;
      v38 = v98 & 0x80C0;
      v39 = v113;
      *(v85 - 1) = v86;
      v107 = v85 + 3;
      if ( !v36 )
      {
        v15 = v109;
        v34 = v99;
        break;
      }
    }
  }
  if ( v5 )
  {
    if ( v15 )
    {
      v87 = *(PVOID *)(v15 + 8);
      if ( v87
        || (v87 = EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x32345448u), (*(_QWORD *)(v15 + 8) = v87) != 0LL) )
      {
        v88 = *(unsigned __int16 *)(v15 + 18);
        *(_DWORD *)v15 = v101;
        memmove(v87, v5, v88);
      }
    }
    EngFreeMem(v5);
  }
  return v34;
}
