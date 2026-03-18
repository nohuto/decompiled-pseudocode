/*
 * XREFs of BuildShrinkAAInfo @ 0x14013F8E0
 * Callers:
 *     <none>
 * Callees:
 *     BuildRepData @ 0x1401409A4 (BuildRepData.c)
 */

_DWORD *__fastcall BuildShrinkAAInfo(
        __int64 a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int a10)
{
  int v10; // eax
  int v11; // ecx
  int v13; // esi
  int v14; // ebp
  int v15; // r13d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  int v18; // edx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r12d
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  char *v36; // rax
  _DWORD *v37; // rbx
  int *v38; // rdi
  int v39; // r14d
  _DWORD *v40; // r9
  int *v41; // rdx
  int v42; // eax
  int v43; // r12d
  int v44; // eax
  _WORD *v45; // r9
  __int16 v46; // dx
  int v47; // r8d
  int v48; // r11d
  int v49; // r15d
  int v50; // ecx
  __int64 v51; // r10
  int v52; // r8d
  __int16 v53; // r8
  int v54; // eax
  __int16 v55; // ax
  int v56; // r11d
  int v57; // eax
  int v58; // r10d
  int v59; // ecx
  _WORD *v60; // r9
  __int64 v62; // rdx
  __int16 v63; // ax
  __int16 v64; // ax
  __int16 v65; // ax
  _WORD *v66; // rdx
  int v67; // r8d
  _OWORD *v68; // r15
  char *v69; // rcx
  __int64 v70; // rax
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  unsigned __int64 v77; // rcx
  unsigned int v78; // [rsp+20h] [rbp-A8h]
  int v79; // [rsp+20h] [rbp-A8h]
  int v80; // [rsp+24h] [rbp-A4h]
  int v81; // [rsp+28h] [rbp-A0h]
  int v82; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v83; // [rsp+30h] [rbp-98h]
  int v84; // [rsp+30h] [rbp-98h]
  __int64 v85; // [rsp+38h] [rbp-90h]
  int v86; // [rsp+40h] [rbp-88h]
  int v87; // [rsp+44h] [rbp-84h]
  int v88; // [rsp+48h] [rbp-80h]
  int v89; // [rsp+4Ch] [rbp-7Ch]
  int v90; // [rsp+50h] [rbp-78h]
  int v91; // [rsp+54h] [rbp-74h]
  __int64 v92; // [rsp+58h] [rbp-70h]
  __int64 v93; // [rsp+58h] [rbp-70h]
  __int64 v94; // [rsp+68h] [rbp-60h]
  __int64 v95; // [rsp+70h] [rbp-58h]
  unsigned __int64 v96; // [rsp+78h] [rbp-50h]
  _WORD *v97; // [rsp+80h] [rbp-48h]
  _WORD *v98; // [rsp+88h] [rbp-40h]
  unsigned int v101; // [rsp+F8h] [rbp+30h]
  __int16 v102; // [rsp+F8h] [rbp+30h]
  int v103; // [rsp+100h] [rbp+38h]

  v10 = *a3;
  v11 = *a4;
  v89 = 0;
  v13 = 0;
  v78 = *a3;
  v14 = 0;
  if ( *a4 < *a3 )
    return 0LL;
  v15 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v16 = a7 - a6;
  v80 = 0;
  v103 = a7 - a6;
  v17 = v11 - v10;
  v18 = 0;
  v87 = v11 - v10;
  if ( v10 >= 0 )
    v18 = v10;
  v90 = v18;
  if ( v11 > a5 )
    v11 = a5;
  v82 = -1;
  v91 = *a8;
  v88 = v11;
  v19 = *a8 - 1;
  v86 = v19;
  v20 = *a9;
  v81 = *a9;
  if ( v19 >= *a9 )
    return 0LL;
  if ( v17 <= v16 )
    return 0LL;
  v21 = v20 - v19;
  v22 = v20 - v19 + 1;
  v101 = v22;
  if ( v22 < v21 )
    return 0LL;
  v23 = v17 * (unsigned __int64)v22;
  v94 = v17;
  if ( v23 > 0xFFFFFFFF )
    return 0LL;
  v24 = v23 + v16 - 1;
  if ( v24 < (unsigned int)v23 )
    return 0LL;
  v25 = v24 / v16;
  v26 = v25 + 4;
  if ( v25 + 4 < v25 )
    return 0LL;
  v27 = v17;
  if ( v26 <= v17 )
    v27 = v26;
  v83 = v27;
  v28 = v27 + 1;
  if ( (unsigned int)v28 < v27 )
    return 0LL;
  v29 = 2 * v28;
  if ( v29 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v29 + 8 < (unsigned int)v29 )
    return 0LL;
  v30 = (v29 + 8) & 0xFFFFFFF8;
  v31 = v30 + 2056;
  if ( v30 + 2056 < v30 )
    return 0LL;
  v95 = (__int64)((unsigned __int64)v16 << 13) / v17;
  if ( (a2 & 0x4A80) != 0 )
  {
    if ( v21 + 4 < v21 )
      return 0LL;
    v77 = 2LL * (v21 + 4);
    if ( v77 > 0xFFFFFFFF || (int)v77 + 8 < (unsigned int)v77 )
      return 0LL;
    v32 = (v77 + 8) & 0xFFFFFFF8;
    v31 = 0;
    if ( (a2 & 0x200) == 0 )
      v31 = v30 + 2056;
  }
  else
  {
    v32 = 0;
  }
  if ( a10 + 8 < a10 )
    return 0LL;
  v33 = (a10 + 8) & 0xFFFFFFF8;
  v34 = v31 + v32;
  if ( v31 + v32 < v32 )
    return 0LL;
  v35 = v34 + v33;
  if ( v34 + v33 < v34 || v35 + 240 < v35 )
    return 0LL;
  v36 = (char *)EngAllocMem(1u, v35 + 240, 0x35355448u);
  v37 = v36;
  if ( !v36 )
    return v37;
  v38 = (int *)(v36 + 240);
  if ( v33 )
  {
    *((_QWORD *)v36 + 4) = v38;
    v38 = (int *)((char *)v38 + v33);
  }
  if ( v32 )
  {
    v68 = v36 + 48;
    *((_QWORD *)v36 + 11) = v38;
    *((_DWORD *)v36 + 12) = v87;
    *((_DWORD *)v36 + 13) = v103;
    *((_DWORD *)v36 + 16) = v90;
    *((_DWORD *)v36 + 17) = v88;
    *((_DWORD *)v36 + 18) = v91;
    *((_DWORD *)v36 + 19) = v81;
    v69 = (char *)v38 + 2 * (int)v101;
    v70 = (int)v32;
    v39 = v78;
    v38 = (int *)((char *)v38 + v70);
    *((_QWORD *)v37 + 12) = v69;
    if ( !(unsigned int)BuildRepData(v68, v78, (unsigned int)v15) )
    {
LABEL_56:
      EngFreeMem(v37);
      return 0LL;
    }
    v71 = v68[1];
    *((_OWORD *)v37 + 7) = *v68;
    v72 = v68[2];
    *((_OWORD *)v37 + 8) = v71;
    v73 = v68[3];
    *((_OWORD *)v37 + 9) = v72;
    *((_OWORD *)v37 + 10) = v73;
    v74 = *((_OWORD *)v37 + 8);
    *((_OWORD *)v37 + 11) = *((_OWORD *)v37 + 7);
    v75 = *((_OWORD *)v37 + 9);
    *((_OWORD *)v37 + 12) = v74;
    v76 = *((_OWORD *)v37 + 10);
    *((_OWORD *)v37 + 13) = v75;
    *((_OWORD *)v37 + 14) = v76;
  }
  else
  {
    v39 = v78;
  }
  if ( !v31 )
  {
    v13 = v37[17] - 1;
    v59 = v37[16];
    v14 = v37[19] - 1;
    v67 = v37[18];
    goto LABEL_79;
  }
  v40 = v38 + 512;
  v41 = v38 + 256;
  *((_WORD *)v37 + 6) = 1;
  *((_QWORD *)v37 + 3) = v38;
  *((_QWORD *)v37 + 5) = v38 + 512;
  v96 = (unsigned __int64)v38 + 2 * v83 + 2048;
  v42 = -(int)v95;
  v43 = -(v95 + 1);
  do
  {
    v42 += v95;
    v43 += v95 + 1;
    *v38 = v42;
    v38[256] = v43;
    ++v38;
  }
  while ( v38 < v41 );
  v44 = v87;
  v45 = (_WORD *)v40 - 1;
  v79 = v87;
  v46 = 0;
  LOWORD(v85) = 0;
  v47 = v87;
  v92 = 0LL;
  if ( !v87 )
  {
    v58 = 0;
    goto LABEL_55;
  }
  v48 = -1;
  v49 = -v87;
  v50 = v103;
  while ( 1 )
  {
    --v79;
    LODWORD(v51) = v47;
    v52 = v47 - v50;
    v97 = v45;
    v49 += v50;
    v98 = v45;
    v84 = v52;
    if ( v52 <= 0 )
    {
      v43 = v49;
      v49 -= v87;
      v84 = v44 + v52;
      ++v15;
      v53 = 0x4000;
    }
    else
    {
      LODWORD(v51) = v50;
      v53 = 0;
    }
    v54 = v81;
    if ( v15 >= v86 - 1 && v15 <= v81 )
    {
      v93 = ((__int64)(int)v51 << 13) + v92;
      v51 = v93 / v94;
      v55 = v53 | 0x8000;
      if ( (int)(v93 / v94) <= (int)v95 )
        v55 = v53;
      v102 = v55;
      v53 = v55;
      LOWORD(v85) = v51 + v85;
      v92 = v93 % v94;
      if ( (v55 & 0x4000) != 0 )
      {
        v85 = ((__int64)v43 << 13) / v94;
        v62 = ((__int64)v43 << 13) % v94;
        v43 = 0;
        v92 = v62;
        v63 = v55 | 0x8000;
        if ( (int)v85 + (int)v51 <= (int)v95 )
          v63 = v102 & 0x7FFF;
        v50 = v103;
        v53 = v63;
      }
      v54 = v81;
      v46 = v85;
    }
    if ( v15 < v86 || v15 > v54 )
      break;
    if ( v39 >= v90 && v39 < v88 )
    {
      v14 = v15;
      ++v45;
      v56 = ((v53 & 0x4000) != 0) + v80;
      v80 = v56;
      if ( (unsigned __int64)v45 >= v96 )
        v45 = v98;
      *v45 = v53 | v51;
      if ( v82 != -1 )
      {
LABEL_50:
        v48 = v82;
        v13 = v39;
LABEL_51:
        v57 = v79;
        goto LABEL_52;
      }
      v82 = v39;
      v89 = v15;
      if ( (v53 & 0x4000) == 0 )
      {
        v64 = v85;
        goto LABEL_68;
      }
      if ( v15 == v86 )
      {
        *((_WORD *)v37 + 5) = 1;
        v65 = v85;
        v80 = v56 - 1;
        --v45;
      }
      else
      {
        v14 = v15 - 1;
        v64 = 0x2000;
        v89 = v15 - 1;
LABEL_68:
        v65 = v64 - v51;
      }
      *((_WORD *)v37 + 7) = v65;
      goto LABEL_50;
    }
    if ( v48 == -1 )
      goto LABEL_51;
    if ( (unsigned __int64)++v45 >= v96 )
      v45 = v97;
    if ( (v53 & 0x4000) == 0 )
      LOWORD(v51) = 0x2000 - v46 + v51;
    v57 = 0;
    *v45 = v53 | v51 | 0x4000;
    v79 = 0;
    ++v80;
LABEL_52:
    ++v39;
    if ( !v57 )
    {
      v58 = v80;
      goto LABEL_55;
    }
    v44 = v87;
    v46 = v85;
    v47 = v84;
  }
  if ( v48 == -1 )
    goto LABEL_51;
  ++v45;
  v13 = v39;
  if ( (unsigned __int64)v45 >= v96 )
    v45 = v97;
  *v45 = (0x2000 - v46) | 0x4000;
  v58 = v80 + 1;
LABEL_55:
  v59 = v82;
  v60 = v45 + 1;
  if ( v82 == -1 )
    goto LABEL_56;
  v66 = (_WORD *)*((_QWORD *)v37 + 5);
  if ( v60 == v66 )
    goto LABEL_56;
  if ( v13 >= v88 )
    v13 = v88 - 1;
  v67 = v89;
  if ( v89 < v91 )
  {
    ++*((_WORD *)v37 + 6);
    v67 = v91;
  }
  if ( v14 >= v81 )
    v14 = v81 - 1;
  if ( *((_WORD *)v37 + 5) )
  {
    if ( !*((_WORD *)v37 + 7) )
    {
      *((_WORD *)v37 + 5) = 0;
      v59 = v82 + 1;
    }
  }
  v37[5] = v58;
  v37[4] = v60 - v66;
  *v60 = 0;
LABEL_79:
  *a3 = v59;
  *a4 = v13;
  *a8 = v67;
  *a9 = v14;
  *v37 = v13 - v59 + 1;
  v37[1] = v14 - v67 + 1;
  return v37;
}
