/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14
 * Callers:
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 * Callees:
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x14000D8A0 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x14000E690 (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x14010CA14 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x14010CB34 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x14015C564 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?EncodeRLE8@@YAHPEAE0III@Z @ 0x140213BA4 (-EncodeRLE8@@YAHPEAE0III@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1402280BC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?EncodeRLE4@@YAHPEAE0III@Z @ 0x140229944 (-EncodeRLE4@@YAHPEAE0III@Z.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x14026B4F8 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8,
        __int64 a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // r9d
  int v17; // r13d
  signed int v18; // r11d
  int v19; // edx
  bool v20; // zf
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // edx
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  unsigned int v29; // r8d
  int v30; // edx
  int v31; // eax
  int v32; // r10d
  int v33; // r9d
  int v34; // ebx
  int v35; // r11d
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rsi
  DC *v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  Gre::Base *v46; // rcx
  XLATEOBJ *XlateObject; // rdi
  int v48; // eax
  __int64 v49; // rcx
  unsigned int v50; // esi
  __int64 v51; // rbx
  LONG v52; // r11d
  LONG v53; // r10d
  LONG v54; // r9d
  unsigned int v55; // esi
  __int64 v56; // rax
  int v57; // edx
  signed int v58; // r8d
  LONG v59; // eax
  int v60; // eax
  unsigned int v61; // ebx
  Gre::Base *v62; // rcx
  int v63; // eax
  int cEntries; // eax
  unsigned int v66; // r11d
  int v67; // r8d
  int v68; // eax
  unsigned int *v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rdi
  unsigned int v73; // eax
  unsigned int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // r14
  int IsCMYKColor; // eax
  _WORD *v78; // rdi
  __int64 i; // rcx
  unsigned int v80; // edi
  __int64 *v81; // r14
  unsigned __int16 j; // dx
  unsigned int v83; // eax
  _WORD *v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // eax
  _WORD *v87; // rcx
  POINTL *pptlSrc; // [rsp+28h] [rbp-170h]
  __int64 v89; // [rsp+30h] [rbp-168h]
  __int64 v90; // [rsp+38h] [rbp-160h]
  __int64 v91; // [rsp+40h] [rbp-158h]
  XLATEOBJ *v92; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v93; // [rsp+70h] [rbp-128h]
  unsigned int v94; // [rsp+74h] [rbp-124h]
  int v95; // [rsp+78h] [rbp-120h]
  unsigned int v96; // [rsp+7Ch] [rbp-11Ch]
  int v97; // [rsp+80h] [rbp-118h]
  unsigned int v98; // [rsp+84h] [rbp-114h]
  unsigned int v99; // [rsp+88h] [rbp-110h]
  __int64 v100; // [rsp+90h] [rbp-108h] BYREF
  unsigned int v101; // [rsp+98h] [rbp-100h]
  int v102; // [rsp+A0h] [rbp-F8h]
  __int64 *v103; // [rsp+A8h] [rbp-F0h]
  __int64 v104; // [rsp+B0h] [rbp-E8h]
  __int64 v105; // [rsp+B8h] [rbp-E0h] BYREF
  char v106; // [rsp+C0h] [rbp-D8h]
  int v107; // [rsp+C4h] [rbp-D4h]
  __int64 v108; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-C8h]
  __int64 v110; // [rsp+D8h] [rbp-C0h]
  __int64 v111; // [rsp+E0h] [rbp-B8h]
  __int64 v112; // [rsp+E8h] [rbp-B0h]
  __int64 *v113; // [rsp+F0h] [rbp-A8h]
  __int64 v114; // [rsp+F8h] [rbp-A0h] BYREF
  int v115; // [rsp+100h] [rbp-98h]
  __int64 v116; // [rsp+108h] [rbp-90h] BYREF
  char v117[8]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v118; // [rsp+118h] [rbp-80h]
  __int64 v119; // [rsp+120h] [rbp-78h]
  POINTL v120; // [rsp+128h] [rbp-70h] BYREF
  __int64 v121; // [rsp+130h] [rbp-68h]
  __int64 v122; // [rsp+138h] [rbp-60h]
  __int64 v123; // [rsp+140h] [rbp-58h]
  RECTL prclDest; // [rsp+148h] [rbp-50h] BYREF

  v104 = a4;
  v118 = a3;
  v112 = a2;
  v12 = a1;
  LODWORD(v92) = a1;
  v122 = a4;
  v103 = a5;
  v98 = a6;
  v94 = a7;
  v113 = a8;
  v121 = a9;
  v123 = a9;
  v116 = 0LL;
  if ( !(unsigned int)bIsCompatible(
                        &v116,
                        *(_QWORD *)(*(_QWORD *)(a4 + 32) + 128LL),
                        *(_QWORD *)(a4 + 32),
                        *(_QWORD *)(*(_QWORD *)a2 + 48LL)) )
    return 0LL;
  v13 = v116;
  v119 = v116;
  v108 = 0LL;
  v109 = 0LL;
  v111 = 0LL;
  if ( (_DWORD)v12 == 12 )
  {
    v15 = 1;
    v97 = 1;
    v14 = a9 + 12;
    v66 = *(unsigned __int16 *)(a9 + 4);
    v99 = v66;
    v19 = *(unsigned __int16 *)(a9 + 6);
    v93 = v19;
    *(_WORD *)(a9 + 8) = 1;
    v16 = *(unsigned __int16 *)(a9 + 10);
    v96 = v16;
    v22 = ((v66 * v16 + 31) >> 3) & 0x1FFFFFFC;
    v17 = 0;
    v95 = 0;
    if ( v66 && v19 )
    {
      v21 = 2;
      goto LABEL_15;
    }
    goto LABEL_129;
  }
  if ( a12 < 0x28 )
    return 0LL;
  if ( (unsigned int)v12 > 0x28 )
    memset_0((void *)(a9 + 40), 0, v12 - 40);
  v97 = 0;
  v14 = a9 + 40;
  *(_DWORD *)a9 = 40;
  v15 = 1;
  *(_WORD *)(a9 + 12) = 1;
  v16 = *(unsigned __int16 *)(a9 + 14);
  v96 = v16;
  v17 = *(_DWORD *)(a9 + 16);
  v95 = v17;
  v18 = *(_DWORD *)(a9 + 4);
  v99 = v18;
  if ( v18 <= 0 )
    goto LABEL_129;
  v19 = *(_DWORD *)(a9 + 8);
  if ( !v19 )
    goto LABEL_129;
  if ( v19 >= 0 )
    goto LABEL_9;
  LODWORD(v111) = 1;
  if ( v17 )
  {
    if ( v17 != 3 )
    {
LABEL_129:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v19 = -v19;
LABEL_9:
  v93 = v19;
  if ( v17 == 3 )
  {
    v20 = ((v16 - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_11;
  }
  if ( v17 == 1 )
  {
    v20 = v16 == 8;
LABEL_11:
    v21 = 2;
    if ( v20 )
      goto LABEL_12;
    goto LABEL_54;
  }
  v21 = 2;
  if ( v17 != 2 )
  {
    if ( v17 == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*(DC **)v112);
      v19 = v93;
      if ( IsCMYKColor )
      {
        v17 = 10;
        *(_DWORD *)(a9 + 16) = 10;
        v95 = 10;
      }
      goto LABEL_12;
    }
    goto LABEL_54;
  }
  if ( v16 != 4 )
  {
LABEL_54:
    v95 = 0;
    v17 = 0;
    *(_DWORD *)(a9 + 16) = 0;
  }
LABEL_12:
  v22 = ((v18 * v16 + 31) >> 3) & 0x1FFFFFFC;
  if ( !v17 || v17 == 3 )
    *(_DWORD *)(a9 + 20) = v19 * v22;
  *(_QWORD *)(a9 + 32) = 0LL;
LABEL_15:
  v23 = v98;
  if ( v19 < v98 )
    v23 = v19;
  v98 = v23;
  v102 = v23;
  v24 = v19 - v23;
  v25 = v94;
  if ( v24 < v94 )
    v25 = v24;
  v94 = v25;
  v101 = v25;
  if ( (unsigned int)(v17 - 1) > 1 && a11 < v22 * v25 )
    return 0LL;
  v110 = 0LL;
  if ( v17 == 3 && a12 < 0x34 )
    return 0LL;
  if ( v16 == 1 )
  {
    v28 = 1LL;
    v27 = v21;
LABEL_126:
    v26 = a10;
    goto LABEL_31;
  }
  if ( v16 == 4 )
  {
    v28 = v21;
    v27 = 16;
    goto LABEL_126;
  }
  if ( v16 != 8 )
  {
    v26 = 0;
    if ( a10 != 1 )
      v26 = a10;
    v27 = 0;
    switch ( v16 )
    {
      case 0x18u:
        v28 = 5LL;
        goto LABEL_31;
      case 0x10u:
        v28 = 4LL;
        goto LABEL_31;
      case 0x20u:
        v28 = 6LL;
LABEL_31:
        LODWORD(v108) = v28;
        goto LABEL_32;
    }
    return 0LL;
  }
  v28 = 3LL;
  LODWORD(v108) = 3;
  v27 = 256;
  v26 = a10;
LABEL_32:
  v115 = 0;
  v114 = 0LL;
  if ( v26 == 1 )
  {
    if ( a12 < (unsigned int)v92 + 2 * (unsigned __int64)v27 )
    {
      EngSetLastError(0x57u);
LABEL_205:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
      return 0LL;
    }
    SEMOBJ<13>::SEMOBJ<13>(v117, *(_QWORD *)(v112 + 16));
    if ( !v13 && (_DWORD)v108 == 3 && *(_QWORD *)(*v103 + 72) )
    {
      v37 = 0LL;
      v100 = 0LL;
      v78 = (_WORD *)v14;
      for ( i = 256LL; i; --i )
        *v78++ = 0;
      v80 = 0;
      v81 = v103;
      do
      {
        for ( j = 0; j < *(_WORD *)(*v81 + 28); ++j )
        {
          if ( *(unsigned __int8 *)(j + *(_QWORD *)(*v81 + 72) + 4LL) == v80 )
          {
            *(_WORD *)(v14 + 2LL * v80) = j;
            break;
          }
        }
        ++v80;
      }
      while ( v80 < 0x100 );
      v13 = v119;
    }
    else
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, 1u, v27, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        SEMOBJ<13>::vUnlock(v117);
        goto LABEL_205;
      }
      v37 = v114;
      v100 = v114;
      v83 = 0;
      if ( v27 )
      {
        v84 = (_WORD *)v14;
        do
          *v84++ = v83++;
        while ( v83 < v27 );
      }
      v85 = *(_QWORD *)(*(_QWORD *)v118 + 1792LL);
      if ( v13 )
        v85 = v13;
      XEPALOBJ::vGetEntriesFrom(&v100, *v103, v85, v14, v27);
    }
    SEMOBJ<13>::vUnlock(v117);
    goto LABEL_66;
  }
  v29 = *(_DWORD *)(*(_QWORD *)(v104 + 32) + 96LL);
  if ( v26 )
  {
    if ( (_DWORD)v28 != v29 )
    {
LABEL_114:
      v15 = 0;
LABEL_115:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
      return v15;
    }
    v37 = v13;
    v100 = v13;
  }
  else
  {
    v30 = 0;
    if ( v29 == (_DWORD)v28 && v13 )
    {
      v30 = 1;
      if ( v17 == 3 || (((_DWORD)v28 - 4) & 0xFFFFFFFD) != 0 )
      {
        if ( (_DWORD)v28 == 5 && (*(_BYTE *)(v13 + 24) & 4) != 0 )
          v30 = 0;
      }
      else
      {
        v31 = *(_DWORD *)(v13 + 24);
        if ( ((unsigned __int8)v31 & (unsigned __int8)v21) != 0 )
        {
          v69 = *(unsigned int **)(v13 + 112);
          v29 = *v69;
          v32 = v69[1];
          v33 = v69[2];
          LODWORD(v92) = 16711680;
        }
        else
        {
          v32 = 65280;
          if ( (v31 & 4) != 0 )
          {
            v29 = 255;
            v33 = 16711680;
            LODWORD(v92) = 16711680;
          }
          else
          {
            LODWORD(v92) = 16711680;
            v29 = 16711680;
            v33 = 255;
          }
        }
        v34 = 31;
        if ( (_DWORD)v28 != 4 )
          v34 = 255;
        v35 = 992;
        if ( (_DWORD)v28 != 4 )
          v35 = 65280;
        v36 = 31744;
        if ( (_DWORD)v28 != 4 )
          v36 = (int)v92;
        if ( v29 != v36 || v32 != v35 || v33 != v34 )
          v30 = 0;
      }
    }
    if ( v30 )
    {
      v37 = v13;
      v100 = v13;
    }
    else
    {
      if ( v27 )
      {
        v74 = 1;
      }
      else
      {
        v74 = 8;
        if ( (_DWORD)v28 == 4 )
          v74 = 2;
      }
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, v74, v27, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
        goto LABEL_114;
      v37 = v114;
      v100 = v114;
      if ( *(_DWORD *)(*(_QWORD *)(v104 + 32) + 96LL) == (_DWORD)v108 && (_DWORD)v108 == 3 )
      {
        v86 = 0;
        if ( v27 )
        {
          v87 = (_WORD *)v14;
          do
            *v87++ = v86++;
          while ( v86 < v27 );
        }
        XEPALOBJ::vGetEntriesFrom(&v100, *v103, *(_QWORD *)(*(_QWORD *)v118 + 1792LL), v14, v27);
        XEPALOBJ::vInit256Default((XEPALOBJ *)&v100);
      }
      else
      {
        switch ( (_DWORD)v108 )
        {
          case 1:
            **(_DWORD **)(v114 + 112) = 0;
            *(_DWORD *)(*(_QWORD *)(v37 + 112) + 4LL) = 0xFFFFFF;
            break;
          case 2:
            v75 = 0LL;
            v76 = 16LL;
            do
            {
              *(_DWORD *)(v75 + *(_QWORD *)(v37 + 112)) = *(_DWORD *)((char *)&unk_14034ECA0 + v75);
              v75 += 4LL;
              --v76;
            }
            while ( v76 );
            v13 = v119;
            break;
          case 3:
            XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v100);
            break;
        }
      }
    }
    if ( v97 )
    {
      if ( a12 < (unsigned __int64)(3 * v27) + 12 )
        goto LABEL_114;
      v28 = v96;
      if ( ((v96 - 16) & 0xFFFFFFE7) != 0 || v96 == 40 )
        XEPALOBJ::vFill_triples((XEPALOBJ *)&v100, (struct tagRGBTRIPLE *)v14, v29, v27);
    }
    else
    {
      if ( v17 == 3 )
        v27 = 3;
      v28 = 4 * v27 + 40LL;
      if ( a12 < v28 )
        goto LABEL_114;
      v38 = *(_DWORD *)(v37 + 24);
      if ( (v38 & 0x4000) != 0 )
      {
        memmove((void *)v14, *(const void **)(v37 + 112), 2LL * v27);
      }
      else if ( v17 == 3 || (v28 = v96, v96 <= 8) && (v67 = 274, _bittest(&v67, v96)) )
      {
        if ( (v38 & 8) != 0 )
        {
          *(_DWORD *)v14 = 16711680;
          *(_DWORD *)(v14 + 4) = 65280;
          *(_DWORD *)(v14 + 8) = 255;
        }
        else if ( (v38 & 2) != 0 && v27 == 3 )
        {
          *(_DWORD *)v14 = **(_DWORD **)(v37 + 112);
          *(_DWORD *)(v14 + 4) = *(_DWORD *)(*(_QWORD *)(v37 + 112) + 4LL);
          v28 = *(unsigned int *)(*(_QWORD *)(v37 + 112) + 8LL);
          *(_DWORD *)(v14 + 8) = v28;
        }
        else if ( (v38 & 4) != 0 )
        {
          *(_DWORD *)v14 = 255;
          *(_DWORD *)(v14 + 4) = 65280;
          *(_DWORD *)(v14 + 8) = 16711680;
        }
        else
        {
          v70 = *(_DWORD *)(v37 + 28);
          if ( v27 < v70 )
            v70 = v27;
          if ( v70 )
          {
            BYTE3(v92) = 0;
            v71 = 0LL;
            v72 = v70;
            do
            {
              v73 = *(_DWORD *)(v71 + *(_QWORD *)(v37 + 112));
              BYTE2(v92) = v73;
              v28 = HIWORD(v73);
              LOBYTE(v92) = BYTE2(v73);
              BYTE1(v92) = BYTE1(v73);
              *(_DWORD *)v14 = (_DWORD)v92;
              v14 += 4LL;
              v71 += 4LL;
              --v72;
            }
            while ( v72 );
          }
        }
      }
    }
  }
LABEL_66:
  v92 = 0LL;
  v39 = *v103;
  v40 = *(DC **)v112;
  v41 = *(_DWORD *)(*(_QWORD *)v112 + 120LL);
  v96 = v41;
  v42 = *(_QWORD *)(*((_QWORD *)v40 + 122) + 248LL);
  if ( !v13
    && (!v37
     || (*(_DWORD *)(v37 + 24) & 0x800) != 0 && ((v28 = *(_QWORD *)(v39 + 80)) == 0 || v28 == *(_QWORD *)(v39 + 72)))
    || !v37
    && (*(_DWORD *)(v13 + 24) & 0x800) != 0
    && ((v28 = *(_QWORD *)(v39 + 80)) == 0 || v28 == *(_QWORD *)(v39 + 72))
    || v13
    && v37
    && ((v43 = *(_QWORD *)(v13 + 120), v43 != v13) ? (v44 = *(_DWORD *)(v43 + 32)) : (v44 = *(_DWORD *)(v13 + 32)),
        (v45 = *(_QWORD *)(v37 + 120), v45 != v37)
      ? (v28 = *(unsigned int *)(v45 + 32))
      : (v28 = *(unsigned int *)(v37 + 32)),
        v44 == (_DWORD)v28) )
  {
    XlateObject = (XLATEOBJ *)((char *)Gre::Base::Globals((Gre::Base *)v28) + 4552);
    v92 = XlateObject;
LABEL_85:
    v48 = 1;
    goto LABEL_86;
  }
  v97 = 1;
  if ( (v41 & 7) != 0 && v42 )
  {
    v97 = 0;
  }
  else if ( v13 )
  {
    if ( v37 )
    {
      LODWORD(v91) = 0;
      LODWORD(v90) = 0;
      LODWORD(v89) = 0xFFFFFF;
      LODWORD(pptlSrc) = 0;
      if ( (unsigned int)EXLATEOBJ::bSearchCache((Gre::Base *)&v92, v13, v37, v39, v39, pptlSrc, v89, v90, v91) )
      {
        v48 = 1;
        XlateObject = v92;
        goto LABEL_86;
      }
    }
  }
  XlateObject = (XLATEOBJ *)CreateXlateObject(v42, v96, v13, v37, v39, v39, 0, 0xFFFFFF, 0, 0);
  v92 = XlateObject;
  if ( XlateObject )
  {
    if ( v97 && v13 && v37 && (XlateObject[3].flXlate & 0x200) == 0 )
      EXLATEOBJ::vAddToCache((Gre::Base *)&v92, v13, v37, v39, v39);
    goto LABEL_85;
  }
  v48 = 0;
LABEL_86:
  if ( !v48 )
  {
    if ( XlateObject )
    {
      cEntries = XlateObject[1].cEntries;
      if ( cEntries >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v46) + 8 * (int)XlateObject[1].cEntries
                                                                                 + 1072);
      }
      else if ( cEntries == -1 )
      {
        FreeThreadBufferWithTag(XlateObject);
      }
    }
    goto LABEL_114;
  }
  v49 = *v113;
  if ( !*v113 && (unsigned int)(v17 - 1) > 1 )
  {
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
    goto LABEL_115;
  }
  HIDWORD(v108) = v99;
  LODWORD(v109) = v94;
  v105 = 0LL;
  v106 = 0;
  v107 = 0;
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    v50 = v93;
    if ( !v94 )
    {
      v98 = 0;
      v102 = 0;
      v94 = v93;
      v101 = v93;
      LODWORD(v109) = v93;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v105, (struct _DEVBITMAPINFO *)&v108, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  }
  else
  {
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v105,
      (struct _DEVBITMAPINFO *)&v108,
      (void *)(v49 + v113[2]),
      0LL,
      0,
      0LL,
      0LL,
      0,
      1,
      0,
      0);
    v50 = v93;
  }
  if ( !v105 )
    goto LABEL_138;
  *(_QWORD *)(v105 + 48) = *(_QWORD *)(*(_QWORD *)v112 + 48LL);
  memset_0(*(void **)(v105 + 72), 0, *(unsigned int *)(v105 + 64));
  v51 = v121;
  v52 = 0;
  *(_QWORD *)&prclDest.left = 0LL;
  v53 = HIDWORD(v108);
  prclDest.right = HIDWORD(v108);
  v54 = v109;
  prclDest.bottom = v109;
  v120.x = 0;
  v55 = v50 - v98;
  v120.y = v55 - v94;
  v56 = *(_QWORD *)(v104 + 32);
  v57 = *(_DWORD *)(v56 + 56);
  v58 = v94 - v55 + *(_DWORD *)(v56 + 60);
  v59 = 0;
  if ( (int)(v94 - v55) > 0 )
    v59 = v94 - v55;
  prclDest.top = v59;
  if ( v57 < SHIDWORD(v108) )
    v53 = v57;
  prclDest.right = v53;
  if ( v58 < (int)v109 )
    v54 = v58;
  prclDest.bottom = v54;
  if ( v53 < 0 )
  {
    v52 = v53;
    prclDest.left = v53;
  }
  else
  {
    if ( v54 < v59 )
      v59 = v54;
    prclDest.top = v59;
  }
  if ( v52 == v53 || (v20 = v59 == v54, v60 = 0, v20) )
    v60 = 1;
  if ( v60 )
    goto LABEL_138;
  EngCopyBits(
    (SURFOBJ *)((v105 + 24) & -(__int64)(v105 != 0)),
    (SURFOBJ *)((*(_QWORD *)(v104 + 32) + 24LL) & -(__int64)(*(_QWORD *)(v104 + 32) != 0LL)),
    0LL,
    XlateObject,
    &prclDest,
    &v120);
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    if ( v17 == 2 )
    {
      v68 = EncodeRLE4(
              *(unsigned __int8 **)(v105 + 72),
              (unsigned __int8 *)(*v113 + v113[2]),
              v99,
              v94,
              *(_DWORD *)(v51 + 20));
    }
    else
    {
      if ( v17 != 1 )
      {
LABEL_137:
        if ( *(_DWORD *)(v51 + 20) )
          goto LABEL_105;
LABEL_138:
        SURFMEM::~SURFMEM((SURFMEM *)&v105);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
        goto LABEL_114;
      }
      v68 = EncodeRLE8(
              *(unsigned __int8 **)(v105 + 72),
              (unsigned __int8 *)(*v113 + v113[2]),
              v99,
              v94,
              *(_DWORD *)(v51 + 20));
    }
    *(_DWORD *)(v51 + 20) = v68;
    goto LABEL_137;
  }
LABEL_105:
  v61 = prclDest.bottom - prclDest.top;
  SURFMEM::~SURFMEM((SURFMEM *)&v105);
  if ( XlateObject )
  {
    v63 = XlateObject[1].cEntries;
    if ( v63 >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v62) + 8 * (int)XlateObject[1].cEntries + 1072);
    }
    else if ( v63 == -1 )
    {
      FreeThreadBufferWithTag(XlateObject);
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
  return v61;
}
