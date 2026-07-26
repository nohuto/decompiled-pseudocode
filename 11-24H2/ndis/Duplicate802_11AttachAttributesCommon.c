/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x140053140
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x140053C50 (NdisAllocateMemoryWithTag.c)
 *     PrivateULongMult @ 0x1400E4CC0 (PrivateULongMult.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        size_t a6,
        int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  char v12; // al
  unsigned int v13; // r10d
  __int64 v14; // rcx
  UINT v15; // edi
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rcx
  int v19; // r11d
  __int64 v20; // rcx
  unsigned int v21; // r11d
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r11d
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r11d
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r11d
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // r11d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r15
  int v37; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  int v43; // r11d
  __int64 v44; // rcx
  unsigned int v45; // r11d
  int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // r11d
  int v49; // eax
  __int64 v50; // r15
  int v51; // eax
  __int64 v52; // r10
  unsigned int v53; // r15d
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // eax
  _DWORD *v57; // r15
  __int128 v58; // xmm0
  _QWORD *v59; // rax
  char *v60; // rcx
  _QWORD *v61; // rsi
  unsigned int v62; // ecx
  char *v63; // rax
  __int64 v64; // rdi
  char *v65; // rax
  char *v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // rdi
  char *v69; // rax
  unsigned int v70; // ecx
  __int64 v71; // rdi
  char *v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rdi
  unsigned int v75; // ecx
  __int64 v76; // rdi
  unsigned int v77; // r13d
  __int64 v78; // rdx
  char v79; // al
  size_t v80; // rsi
  _BYTE *v81; // r14
  _BYTE *v82; // rdi
  unsigned int v83; // r12d
  __int64 v84; // r13
  __int64 v85; // r14
  _QWORD *v86; // rsi
  unsigned int v87; // ecx
  char *v88; // rax
  __int64 v89; // rdi
  char *v90; // rax
  unsigned int v91; // ecx
  __int64 v92; // rdi
  char *v93; // rax
  unsigned int v94; // ecx
  __int64 v95; // rdi
  __int64 v96; // rdx
  _QWORD *v97; // rsi
  unsigned int v98; // ecx
  char *v99; // rax
  __int64 v100; // rdi
  char *v101; // rax
  unsigned int v102; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  NDIS_STATUS v104; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v105; // [rsp+2Ch] [rbp-4Ch]
  size_t v106; // [rsp+30h] [rbp-48h] BYREF
  size_t v107; // [rsp+38h] [rbp-40h] BYREF
  size_t v108; // [rsp+40h] [rbp-38h] BYREF
  size_t v109; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v110; // [rsp+50h] [rbp-28h] BYREF
  __int64 v111; // [rsp+58h] [rbp-20h]
  __int64 v112; // [rsp+60h] [rbp-18h]
  __int64 v113; // [rsp+68h] [rbp-10h]
  size_t v115; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+58h] BYREF
  int Size_4; // [rsp+D4h] [rbp+5Ch]
  int v118; // [rsp+D8h] [rbp+60h]

  Size_4 = HIDWORD(a3);
  v10 = 0;
  a5 = 0;
  v11 = 0;
  Size = 0;
  LODWORD(v110) = 0;
  LODWORD(v115) = 0;
  v106 = 0LL;
  LODWORD(a6) = 0;
  LODWORD(a8) = 0;
  a7 = 0;
  v107 = 0LL;
  v108 = 0LL;
  v104 = 0;
  v118 = 0;
  v109 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) >= 0x28u )
    {
      v13 = 1;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) >= 0x38u )
    {
      v13 = 2;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
    return (unsigned int)-1073741811;
  v13 = 3;
LABEL_13:
  v14 = *((unsigned int *)a2 + 5);
  v15 = 64;
  v105 = v13;
  if ( (_DWORD)v14 && *((_QWORD *)a2 + 3) )
  {
    v16 = PrivateULongMult(v14, 1092LL, (char *)&v109 + 4);
    if ( v16 )
      return v16;
    v10 = HIDWORD(v109);
    v15 = HIDWORD(v109) + 64;
    if ( HIDWORD(v109) >= 0xFFFFFFC0 )
      return (unsigned int)-1073676267;
  }
  v17 = *((_QWORD *)a2 + 4);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 + 48);
    v19 = 160;
    a5 = 160;
    if ( (_DWORD)v18 && *(_QWORD *)(v17 + 56) )
    {
      v16 = PrivateULongMult(v18, 3LL, &Size);
      if ( v16 )
        return v16;
      v19 = Size + 160;
      a5 = Size + 160;
      if ( Size >= 0xFFFFFF60 )
        return (unsigned int)-1073676267;
    }
    v20 = *(unsigned int *)(v17 + 64);
    if ( (_DWORD)v20 && *(_QWORD *)(v17 + 72) )
    {
      v16 = PrivateULongMult(v20, 8LL, &v110);
      if ( v16 )
        return v16;
      v11 = (unsigned int)v110;
      v22 = (_DWORD)v110 + v21;
      if ( (unsigned int)v110 + v21 < v21 )
        return (unsigned int)-1073676267;
      v19 = (_DWORD)v110 + v21;
      a5 = v22;
    }
    v23 = *(unsigned int *)(v17 + 80);
    if ( (_DWORD)v23 && *(_QWORD *)(v17 + 88) )
    {
      v16 = PrivateULongMult(v23, 8LL, &v115);
      if ( v16 )
        return v16;
      v25 = v24 + v115;
      if ( v24 + (unsigned int)v115 < v24 )
        return (unsigned int)-1073676267;
      v19 = v24 + v115;
      a5 = v25;
    }
    v26 = *(unsigned int *)(v17 + 96);
    if ( (_DWORD)v26 && *(_QWORD *)(v17 + 104) )
    {
      v16 = PrivateULongMult(v26, 8LL, &a6);
      if ( v16 )
        return v16;
      v28 = v27 + a6;
      if ( v27 + (unsigned int)a6 < v27 )
        return (unsigned int)-1073676267;
      v19 = v27 + a6;
      a5 = v28;
    }
    v29 = *(unsigned int *)(v17 + 112);
    if ( (_DWORD)v29 && *(_QWORD *)(v17 + 120) )
    {
      v16 = PrivateULongMult(v29, 8LL, &a8);
      if ( v16 )
        return v16;
      v31 = v30 + a8;
      if ( v30 + (unsigned int)a8 < v30 )
        return (unsigned int)-1073676267;
      v19 = v30 + a8;
      a5 = v31;
    }
    if ( v13 >= 3 )
    {
      v32 = *(unsigned int *)(v17 + 140);
      if ( (_DWORD)v32 )
      {
        if ( *(_QWORD *)(v17 + 144) && *(_BYTE *)(v17 + 1) >= 3u )
        {
          v16 = PrivateULongMult(v32, 8LL, &v106);
          if ( v16 )
            return v16;
          v34 = v33 + v106;
          if ( v33 + (unsigned int)v106 < v33 )
            return (unsigned int)-1073676267;
          v19 = v33 + v106;
          a5 = v34;
        }
      }
    }
    if ( v19 + v15 < v15 )
      return (unsigned int)-1073676267;
    v15 += v19;
  }
  if ( v13 >= 2 )
  {
    v35 = *((_QWORD *)a2 + 5);
    v36 = *((_QWORD *)a2 + 6);
    v37 = *((_DWORD *)a2 + 1);
    v112 = v35;
    v113 = v36;
    if ( (v37 & 0x28) != 0 )
    {
      if ( !v36 )
        return (unsigned int)-1073741811;
    }
    else if ( v36 )
    {
      return (unsigned int)-1073741811;
    }
    if ( v35 )
    {
      v39 = *(unsigned int *)(v35 + 4);
      if ( (_DWORD)v39 )
      {
        v16 = PrivateULongMult(v39, 24LL, &v104);
        if ( v16 )
          return v16;
        v40 = v104;
      }
      else
      {
        v40 = 16;
      }
      v41 = v40 + 8;
      HIDWORD(v106) = v40 + 8;
      if ( v40 >= 0xFFFFFFF8 || v41 + v15 < v15 )
        return (unsigned int)-1073676267;
      v15 += v41;
    }
    if ( v36 )
    {
      v42 = *(unsigned int *)(v36 + 32);
      v43 = 80;
      a7 = 80;
      if ( (_DWORD)v42 && *(_QWORD *)(v36 + 40) )
      {
        v16 = PrivateULongMult(v42, 3LL, &v107);
        if ( v16 )
          return v16;
        v43 = v107 + 80;
        a7 = v107 + 80;
        if ( (unsigned int)v107 >= 0xFFFFFFB0 )
          return (unsigned int)-1073676267;
      }
      v44 = *(unsigned int *)(v36 + 48);
      if ( (_DWORD)v44 && *(_QWORD *)(v36 + 56) )
      {
        v16 = PrivateULongMult(v44, 8LL, (char *)&v107 + 4);
        if ( v16 )
          return v16;
        v46 = v45 + HIDWORD(v107);
        if ( v45 + HIDWORD(v107) < v45 )
          return (unsigned int)-1073676267;
        v43 = v45 + HIDWORD(v107);
        a7 = v46;
      }
      v47 = *(unsigned int *)(v36 + 64);
      if ( (_DWORD)v47 && *(_QWORD *)(v36 + 72) )
      {
        v16 = PrivateULongMult(v47, 8LL, &v108);
        if ( v16 )
          return v16;
        v49 = v48 + v108;
        if ( v48 + (unsigned int)v108 < v48 )
          return (unsigned int)-1073676267;
        v43 = v48 + v108;
        a7 = v49;
      }
      if ( v43 + v15 < v15 )
        return (unsigned int)-1073676267;
      v15 += v43;
    }
  }
  if ( v13 < 3 )
    goto LABEL_98;
  v50 = *((_QWORD *)a2 + 7);
  v51 = *((_DWORD *)a2 + 1);
  v111 = v50;
  if ( (v51 & 0x70) != 0 )
  {
    if ( !v50 )
      return (unsigned int)-1073741811;
    v52 = v111;
    v53 = 72;
    v118 = 72;
    v54 = *(unsigned int *)(v111 + 48);
    if ( (_DWORD)v54 && *(_QWORD *)(v111 + 56) )
    {
      v16 = PrivateULongMult(v54, 3LL, (char *)&v108 + 4);
      if ( v16 )
        return v16;
      v53 = HIDWORD(v108) + 72;
      v118 = HIDWORD(v108) + 72;
      if ( HIDWORD(v108) >= 0xFFFFFFB8 )
        return (unsigned int)-1073676267;
    }
    v55 = *(unsigned int *)(v52 + 32);
    if ( (_DWORD)v55 && *(_QWORD *)(v52 + 40) )
    {
      v16 = PrivateULongMult(v55, 6LL, &v109);
      if ( v16 )
        return v16;
      v56 = v53 + v109;
      if ( v53 + (unsigned int)v109 < v53 )
        return (unsigned int)-1073676267;
      v53 += v109;
      v118 = v56;
    }
    if ( v53 + v15 >= v15 )
    {
      v15 += v53;
      goto LABEL_98;
    }
    return (unsigned int)-1073676267;
  }
  if ( v50 )
    return (unsigned int)-1073741811;
LABEL_98:
  v104 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
  v16 = v104;
  if ( v104 )
    return v16;
  memset(VirtualAddress, 0, v15);
  v57 = VirtualAddress;
  v58 = *a2;
  v59 = a9;
  v110 = VirtualAddress;
  *(_OWORD *)VirtualAddress = v58;
  *v59 = v57;
  v57[4] = *((_DWORD *)a2 + 4);
  VirtualAddress = (char *)VirtualAddress + 64;
  *v57 = 4195233;
  if ( v10 && *((_DWORD *)a2 + 5) )
  {
    *((_QWORD *)v57 + 3) = VirtualAddress;
    v57[5] = *((_DWORD *)a2 + 5);
    memmove(VirtualAddress, *((const void **)a2 + 3), v10);
    v60 = (char *)VirtualAddress + v10;
    VirtualAddress = v60;
  }
  else
  {
    *((_QWORD *)v57 + 3) = 0LL;
    v57[5] = 0;
    v60 = (char *)VirtualAddress;
  }
  if ( !a5 || !v17 )
    goto LABEL_135;
  *((_QWORD *)v57 + 4) = v60;
  v61 = VirtualAddress;
  *(_OWORD *)v60 = *(_OWORD *)v17;
  *((_OWORD *)v60 + 1) = *(_OWORD *)(v17 + 16);
  *((_OWORD *)v60 + 2) = *(_OWORD *)(v17 + 32);
  v62 = Size;
  v63 = (char *)VirtualAddress + 160;
  VirtualAddress = (char *)VirtualAddress + 160;
  if ( !Size )
    goto LABEL_108;
  if ( *(_DWORD *)(v17 + 48) )
  {
    v61[7] = v63;
    v64 = v62;
    *((_DWORD *)v61 + 12) = *(_DWORD *)(v17 + 48);
    memmove(VirtualAddress, *(const void **)(v17 + 56), v62);
    v65 = (char *)VirtualAddress + v64;
    VirtualAddress = (char *)VirtualAddress + v64;
  }
  else
  {
LABEL_108:
    v61[7] = 0LL;
    *((_DWORD *)v61 + 12) = 0;
    v65 = (char *)VirtualAddress;
  }
  if ( v11 && *(_DWORD *)(v17 + 64) )
  {
    v61[9] = v65;
    *((_DWORD *)v61 + 16) = *(_DWORD *)(v17 + 64);
    memmove(VirtualAddress, *(const void **)(v17 + 72), v11);
    v66 = (char *)VirtualAddress + v11;
    VirtualAddress = v66;
  }
  else
  {
    v61[9] = 0LL;
    *((_DWORD *)v61 + 16) = 0;
    v66 = (char *)VirtualAddress;
  }
  v67 = v115;
  if ( (_DWORD)v115 && *(_DWORD *)(v17 + 80) )
  {
    v61[11] = v66;
    v68 = v67;
    *((_DWORD *)v61 + 20) = *(_DWORD *)(v17 + 80);
    memmove(VirtualAddress, *(const void **)(v17 + 88), v67);
    v69 = (char *)VirtualAddress + v68;
    VirtualAddress = (char *)VirtualAddress + v68;
  }
  else
  {
    v61[11] = 0LL;
    *((_DWORD *)v61 + 20) = 0;
    v69 = (char *)VirtualAddress;
  }
  v70 = a6;
  if ( (_DWORD)a6 && *(_DWORD *)(v17 + 96) )
  {
    v61[13] = v69;
    v71 = v70;
    *((_DWORD *)v61 + 24) = *(_DWORD *)(v17 + 96);
    memmove(VirtualAddress, *(const void **)(v17 + 104), v70);
    v72 = (char *)VirtualAddress + v71;
    VirtualAddress = (char *)VirtualAddress + v71;
  }
  else
  {
    v61[13] = 0LL;
    *((_DWORD *)v61 + 24) = 0;
    v72 = (char *)VirtualAddress;
  }
  v73 = a8;
  if ( (_DWORD)a8 && *(_DWORD *)(v17 + 112) )
  {
    v61[15] = v72;
    v74 = v73;
    *((_DWORD *)v61 + 28) = *(_DWORD *)(v17 + 112);
    memmove(VirtualAddress, *(const void **)(v17 + 120), v73);
    v60 = (char *)VirtualAddress + v74;
    VirtualAddress = (char *)VirtualAddress + v74;
  }
  else
  {
    v61[15] = 0LL;
    *((_DWORD *)v61 + 28) = 0;
    v60 = (char *)VirtualAddress;
  }
  if ( v105 < 3 )
    goto LABEL_135;
  *(_BYTE *)(*((_QWORD *)v57 + 4) + 128LL) = *(_BYTE *)(v17 + 128);
  *(_DWORD *)(*((_QWORD *)v57 + 4) + 132LL) = *(_DWORD *)(v17 + 132);
  *(_BYTE *)(*((_QWORD *)v57 + 4) + 136LL) = *(_BYTE *)(v17 + 136);
  if ( *(_DWORD *)(v17 + 140) && *(_QWORD *)(v17 + 144) && *(_BYTE *)(v17 + 1) >= 3u )
  {
    v75 = v106;
    if ( (_DWORD)v106 )
    {
      v76 = (unsigned int)v106;
      v61[18] = VirtualAddress;
      *((_DWORD *)v61 + 35) = *(_DWORD *)(v17 + 140);
      memmove(VirtualAddress, *(const void **)(v17 + 144), v75);
      v60 = (char *)VirtualAddress + v76;
      VirtualAddress = (char *)VirtualAddress + v76;
      goto LABEL_133;
    }
    v61[18] = 0LL;
    *((_DWORD *)v61 + 35) = 0;
  }
  v60 = (char *)VirtualAddress;
LABEL_133:
  if ( *(_BYTE *)(v17 + 1) >= 4u )
  {
    *(_BYTE *)(*((_QWORD *)v57 + 4) + 152LL) = *(_BYTE *)(v17 + 152);
    *(_BYTE *)(*((_QWORD *)v57 + 4) + 153LL) = *(_BYTE *)(v17 + 153);
    *(_BYTE *)(*((_QWORD *)v57 + 4) + 154LL) = *(_BYTE *)(v17 + 154);
    *(_BYTE *)(*((_QWORD *)v57 + 4) + 155LL) = *(_BYTE *)(v17 + 155);
    *(_BYTE *)(*((_QWORD *)v57 + 4) + 156LL) = *(_BYTE *)(v17 + 156);
    v60 = (char *)VirtualAddress;
  }
LABEL_135:
  v77 = HIDWORD(v106);
  if ( HIDWORD(v106) )
  {
    v78 = v112;
    if ( v112 )
    {
      *((_QWORD *)v57 + 5) = v60;
      *(_QWORD *)v60 = *(_QWORD *)v78;
      if ( *(_DWORD *)(v78 + 4) )
      {
        v79 = *(_BYTE *)(v78 + 9);
        if ( v79 == 3 )
        {
          v80 = 24LL;
        }
        else if ( v79 == 2 )
        {
          v80 = 20LL;
        }
        else
        {
          v80 = 0LL;
          if ( v79 == 1 )
            v80 = 16LL;
        }
        v81 = (_BYTE *)(v78 + 8);
        v82 = (_BYTE *)(*((_QWORD *)v57 + 5) + 8LL);
        v83 = 0;
        v84 = v78;
        do
        {
          memmove(v82, v81, v80);
          if ( a1 >= 0x61Eu )
            *((_DWORD *)v82 + 4) = 0;
          ++v83;
          *v82 = *v81;
          v81 += v80;
          v82[1] = 3;
          *((_WORD *)v82 + 1) = 24;
          v82 += 24;
        }
        while ( v83 < *(_DWORD *)(v84 + 4) );
        v16 = v104;
        v57 = v110;
        v77 = HIDWORD(v106);
      }
      v60 = (char *)VirtualAddress + v77;
      VirtualAddress = v60;
    }
  }
  if ( a7 )
  {
    v85 = v113;
    if ( v113 )
    {
      *((_QWORD *)v57 + 6) = v60;
      v86 = VirtualAddress;
      *(_OWORD *)v60 = *(_OWORD *)v85;
      *((_OWORD *)v60 + 1) = *(_OWORD *)(v85 + 16);
      v87 = v107;
      v88 = (char *)VirtualAddress + 80;
      VirtualAddress = (char *)VirtualAddress + 80;
      if ( (_DWORD)v107 && *(_DWORD *)(v85 + 32) )
      {
        v86[5] = v88;
        v89 = v87;
        *((_DWORD *)v86 + 8) = *(_DWORD *)(v85 + 32);
        memmove(VirtualAddress, *(const void **)(v85 + 40), v87);
        v90 = (char *)VirtualAddress + v89;
        VirtualAddress = (char *)VirtualAddress + v89;
      }
      else
      {
        v86[5] = 0LL;
        *((_DWORD *)v86 + 8) = 0;
        v90 = (char *)VirtualAddress;
      }
      v91 = HIDWORD(v107);
      if ( HIDWORD(v107) && *(_DWORD *)(v85 + 48) )
      {
        v86[7] = v90;
        v92 = v91;
        *((_DWORD *)v86 + 12) = *(_DWORD *)(v85 + 48);
        memmove(VirtualAddress, *(const void **)(v85 + 56), v91);
        v93 = (char *)VirtualAddress + v92;
        VirtualAddress = (char *)VirtualAddress + v92;
      }
      else
      {
        v86[7] = 0LL;
        *((_DWORD *)v86 + 12) = 0;
        v93 = (char *)VirtualAddress;
      }
      v94 = v108;
      if ( (_DWORD)v108 && *(_DWORD *)(v85 + 64) )
      {
        v86[9] = v93;
        v95 = v94;
        *((_DWORD *)v86 + 16) = *(_DWORD *)(v85 + 64);
        memmove(VirtualAddress, *(const void **)(v85 + 72), v94);
        v60 = (char *)VirtualAddress + v95;
        VirtualAddress = (char *)VirtualAddress + v95;
      }
      else
      {
        v86[9] = 0LL;
        *((_DWORD *)v86 + 16) = 0;
        v60 = (char *)VirtualAddress;
      }
    }
  }
  if ( v118 )
  {
    v96 = v111;
    if ( v111 )
    {
      *((_QWORD *)v57 + 7) = v60;
      v97 = VirtualAddress;
      *(_OWORD *)v60 = *(_OWORD *)v96;
      *((_OWORD *)v60 + 1) = *(_OWORD *)(v96 + 16);
      *((_OWORD *)v60 + 2) = *(_OWORD *)(v96 + 32);
      *((_OWORD *)v60 + 3) = *(_OWORD *)(v96 + 48);
      *((_QWORD *)v60 + 8) = *(_QWORD *)(v96 + 64);
      v98 = HIDWORD(v108);
      v99 = (char *)VirtualAddress + 72;
      VirtualAddress = (char *)VirtualAddress + 72;
      if ( HIDWORD(v108) && *(_DWORD *)(v96 + 48) )
      {
        v97[7] = v99;
        v100 = v98;
        *((_DWORD *)v97 + 12) = *(_DWORD *)(v96 + 48);
        memmove(VirtualAddress, *(const void **)(v96 + 56), v98);
        v96 = v111;
        v101 = (char *)VirtualAddress + v100;
        VirtualAddress = (char *)VirtualAddress + v100;
      }
      else
      {
        v97[7] = 0LL;
        *((_DWORD *)v97 + 12) = 0;
        v101 = (char *)VirtualAddress;
      }
      v102 = v109;
      if ( (_DWORD)v109 && *(_DWORD *)(v96 + 32) )
      {
        v97[5] = v101;
        *((_DWORD *)v97 + 8) = *(_DWORD *)(v96 + 32);
        memmove(VirtualAddress, *(const void **)(v96 + 40), v102);
      }
      else
      {
        v97[5] = 0LL;
        *((_DWORD *)v97 + 8) = 0;
      }
    }
  }
  return v16;
}
