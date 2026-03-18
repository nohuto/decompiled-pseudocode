/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FF6A0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C004CC80 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00BEBE0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00C0EB0 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01364A0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0137328 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C027617C (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C008B174 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02644C0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02DC234 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C0302F24 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(void *a1, int a2, ...)
{
  __int64 v2; // rdi
  unsigned int v5; // r13d
  __int64 result; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // r15
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  struct Gre::Base::SESSION_GLOBALS *v18; // rcx
  __int16 v19; // dx
  int v20; // eax
  struct _TRANSLATE *v21; // r8
  struct _TRANSLATE *v22; // r10
  int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r11
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // eax
  _DWORD *v38; // rcx
  unsigned int i; // edx
  __int64 v40; // rax
  int v41; // eax
  int v42; // edi
  unsigned int v43; // esi
  int v44; // eax
  int NearestIndexFromColorref; // eax
  int v46; // ebx
  void *v47; // rcx
  size_t v48; // r8
  __int64 v49; // rdx
  int v50; // eax
  struct _TRANSLATE *v51; // rdx
  _DWORD *v52; // r13
  unsigned int v53; // eax
  _DWORD *v54; // rcx
  _DWORD *v55; // rsi
  __int16 v56; // ax
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rax
  int v60; // eax
  int v61; // ebx
  _DWORD *v62; // r14
  char *v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rdi
  unsigned int v66; // esi
  __int64 v67; // rbx
  int v68; // eax
  unsigned int k; // esi
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // edx
  int v75; // ebx
  int v76; // r8d
  int *v77; // rdx
  int v78; // r11d
  int v79; // edi
  int v80; // r10d
  int v81; // ecx
  int *v82; // rcx
  int v83; // eax
  char v84; // [rsp+20h] [rbp-71h]
  __int16 v85; // [rsp+24h] [rbp-6Dh]
  int v86; // [rsp+24h] [rbp-6Dh]
  int v87; // [rsp+28h] [rbp-69h]
  int v88; // [rsp+28h] [rbp-69h]
  __int16 v89; // [rsp+2Ch] [rbp-65h]
  int v90; // [rsp+30h] [rbp-61h]
  struct _TRANSLATE *v91; // [rsp+38h] [rbp-59h]
  struct _TRANSLATE *v92; // [rsp+40h] [rbp-51h]
  struct Gre::Base::SESSION_GLOBALS *v93; // [rsp+48h] [rbp-49h]
  __int64 v94; // [rsp+50h] [rbp-41h]
  _BYTE v95[32]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v96; // [rsp+80h] [rbp-11h]
  __int64 j; // [rsp+E0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v99; // [rsp+E8h] [rbp+57h] BYREF
  va_list va1; // [rsp+E8h] [rbp+57h]
  __int64 v101; // [rsp+F0h] [rbp+5Fh]
  __int64 v102; // [rsp+F8h] [rbp+67h]
  __int64 v103; // [rsp+100h] [rbp+6Fh]
  __int64 v104; // [rsp+108h] [rbp+77h]
  __int64 v105; // [rsp+110h] [rbp+7Fh]
  __int64 v106; // [rsp+118h] [rbp+87h]
  va_list va2; // [rsp+120h] [rbp+8Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  j = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v99 = va_arg(va2, _QWORD);
  v101 = va_arg(va2, _QWORD);
  v102 = va_arg(va2, _QWORD);
  v103 = va_arg(va2, _QWORD);
  v104 = va_arg(va2, _QWORD);
  v105 = va_arg(va2, _QWORD);
  v106 = va_arg(va2, _QWORD);
  v2 = j;
  v85 = v106;
  if ( j )
    v5 = *(_DWORD *)(j + 28);
  else
    v5 = 256;
  result = AllocThreadBufferWithTag(4 * v5 + 88, 1953265735LL, 0LL);
  v8 = result;
  if ( !result )
    return result;
  v9 = Gre::Base::Globals(v7);
  v10 = 0;
  v11 = v8 + 84;
  *(_DWORD *)v8 = _InterlockedIncrement((volatile signed __int32 *)v9 + 962);
  v12 = 0LL;
  if ( !v5 )
  {
    v12 = 512LL;
    v11 = 0LL;
  }
  v13 = 2;
  if ( !v5 )
    v13 = 0;
  *(_DWORD *)(v8 + 4) = v13;
  *(_QWORD *)(v8 + 16) = v11;
  *(_DWORD *)(v8 + 76) = v12;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = v5;
  *(_DWORD *)(v8 + 36) = -1;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  v93 = Gre::Base::Globals((Gre::Base *)v12);
  v14 = *((_QWORD *)v93 + 5);
  v94 = v14;
  GreAcquireSemaphore(v14);
  *(_DWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      *(_DWORD *)(v8 + 72) = a2;
      *(_QWORD *)(v8 + 64) = a1;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v95, a1);
        v15 = v96;
        if ( v96 )
        {
          *(_DWORD *)(v8 + 4) |= 0x10u;
          DEC_SHARE_REF_CNT(v15);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v95);
      }
      else if ( (a2 & 1) != 0 )
      {
        v16 = *(_DWORD *)(v8 + 4) | 0x20;
        *(_DWORD *)(v8 + 4) = v16;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v8 + 4) = v16 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)(v8 + 4) |= 0x20u;
      *(_DWORD *)(v8 + 72) = a2;
    }
  }
  v87 = *(_DWORD *)(v8 + 4) & 8;
  if ( !v99 || (*(_DWORD *)(v99 + 24) & 0x800) != 0 )
  {
    v17 = v102;
    v18 = v93;
    v84 = 1;
    if ( !*(_QWORD *)(v102 + 72) )
      v17 = *((_QWORD *)v93 + 750);
    v19 = v85;
    if ( (v85 & 0x2000) == 0 )
    {
      v20 = *(_DWORD *)(v8 + 76) | 0x800;
      *(_DWORD *)(v8 + 76) = v20;
      if ( v99 )
        *(_DWORD *)(v8 + 76) = v20 | 0x1000;
    }
  }
  else
  {
    v17 = v102;
    v18 = v93;
    v19 = v85;
    v84 = 0;
  }
  *(_QWORD *)(v8 + 40) = v2;
  *(_QWORD *)(v8 + 48) = v99;
  *(_QWORD *)(v8 + 56) = v17;
  v21 = *(struct _TRANSLATE **)(v17 + 72);
  v22 = *(struct _TRANSLATE **)(v17 + 80);
  v92 = v21;
  v91 = v22;
  if ( v2 )
  {
    v23 = *(_DWORD *)(v2 + 24);
    v89 = v23;
    v90 = v23 & 0x800;
    if ( (v23 & 0x800) == 0 || v21 != v22 && (v19 & 0x4000) == 0 )
    {
      v24 = v99;
      if ( (v23 & 0x8000) != 0 )
      {
        if ( !v99 )
          goto LABEL_162;
        v25 = *(_DWORD *)(v99 + 24);
        if ( (v25 & 0x8000) != 0 )
        {
          LODWORD(v26) = *(_DWORD *)(v99 + 28);
          if ( *(_DWORD *)(v2 + 28) == (_DWORD)v26 && (_DWORD)v26 == 256 )
          {
            if ( (v25 & 0x100) != 0 )
            {
              v27 = *(_QWORD *)(v99 + 72);
              if ( v27 )
              {
                LODWORD(v28) = 256;
                while ( 1 )
                {
                  v28 = (unsigned int)(v28 - 1);
                  if ( *(unsigned __int8 *)(v28 + v27 + 4) != (_DWORD)v28 )
                    break;
                  if ( !(_DWORD)v28 )
                    goto LABEL_43;
                }
              }
            }
            else
            {
LABEL_43:
              v29 = *(_QWORD *)(v2 + 112);
              v30 = *(_QWORD *)(v99 + 112);
              j = v29;
              while ( 1 )
              {
                v26 = (unsigned int)(v26 - 1);
                if ( ((*(_DWORD *)(v29 + 4 * v26) ^ *(_DWORD *)(v30 + 4 * v26)) & 0xFFFFFF) != 0 )
                  break;
                v29 = j;
                if ( !(_DWORD)v26 )
                  goto LABEL_51;
              }
            }
          }
        }
        if ( !v99 || (*(_DWORD *)(v99 + 24) & 0x800) != 0 && v21 == v22 )
        {
LABEL_162:
          if ( (unsigned int)bEqualRGB_In_Palette(v2, v17) )
          {
LABEL_51:
            v31 = 0;
            v32 = (_DWORD *)(v8 + 84);
            do
              *v32++ = v31++;
            while ( v31 < 0x100 );
            goto LABEL_53;
          }
          v21 = v92;
          v22 = v91;
        }
        LOWORD(v23) = v89;
      }
      if ( v90 && !v24 )
      {
        v37 = 0;
        v38 = (_DWORD *)(v8 + 84);
        do
          *v38++ = v37++;
        while ( v37 < 0x100 );
        for ( i = 0;
              i < *(_DWORD *)(v17 + 28);
              *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v22 + v40 + 4) + 84) = *((unsigned __int8 *)v21 + v40 + 4) )
        {
          v40 = i++;
        }
        v41 = *(_DWORD *)(v2 + 24);
        if ( (v41 & 0x1000) != 0 )
        {
          *(_DWORD *)(v8 + 84) = 0;
          *(_DWORD *)(v8 + 1104) = 255;
          goto LABEL_54;
        }
        if ( (v41 & 0x10000) != 0 )
          goto LABEL_54;
        *(_DWORD *)(v8 + 84) = 0;
LABEL_123:
        *(_DWORD *)(v8 + 1068) = 246;
        *(_DWORD *)(v8 + 88) = 1;
        *(_DWORD *)(v8 + 1072) = 247;
        *(_DWORD *)(v8 + 92) = 2;
        *(_DWORD *)(v8 + 1076) = 248;
        *(_DWORD *)(v8 + 96) = 3;
        *(_DWORD *)(v8 + 1080) = 249;
        *(_DWORD *)(v8 + 100) = 4;
        *(_DWORD *)(v8 + 1084) = 250;
        *(_DWORD *)(v8 + 104) = 5;
        *(_DWORD *)(v8 + 1088) = 251;
        *(_DWORD *)(v8 + 108) = 6;
        *(_DWORD *)(v8 + 1092) = 252;
        *(_DWORD *)(v8 + 112) = 7;
        *(_DWORD *)(v8 + 1096) = 253;
        *(_DWORD *)(v8 + 116) = 8;
        *(_DWORD *)(v8 + 1100) = 254;
        *(_DWORD *)(v8 + 120) = 9;
        *(_DWORD *)(v8 + 1104) = 255;
        goto LABEL_54;
      }
      if ( (v23 & 0x2000) != 0 )
      {
        if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
        {
          *(_DWORD *)(v8 + 84) = 0;
          *(_DWORD *)(v8 + 88) = 1;
        }
        else
        {
          v42 = v103;
          if ( v87 )
          {
            v43 = v104;
            v44 = v104;
            *(_DWORD *)(v8 + 84) = v103;
          }
          else
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v24, v17, (unsigned int)v103, 1LL);
            v43 = v104;
            *(_DWORD *)(v8 + 84) = NearestIndexFromColorref;
            v44 = ulGetNearestIndexFromColorref(v99, v17, v43, 1LL);
          }
          *(_DWORD *)(v8 + 88) = v44;
          *(_DWORD *)(v8 + 76) |= 0x100u;
          *(_DWORD *)(v8 + 28) = v42;
          *(_DWORD *)(v8 + 32) = v43;
        }
        goto LABEL_54;
      }
      if ( !v5 )
      {
        if ( v24 && (*(_DWORD *)(v24 + 24) & 0x2000) != 0 )
        {
          v46 = v105;
          *(_DWORD *)(v8 + 84) = ulGetNearestIndexFromColorref(v2, v101, (unsigned int)v105, 1LL);
          *(_DWORD *)(v8 + 4) |= 4u;
          *(_DWORD *)(v8 + 24) = v46;
          *(_QWORD *)(v8 + 16) = v8 + 84;
        }
        goto LABEL_54;
      }
      if ( !v24 || (*(_DWORD *)(v24 + 24) & 0x2000) == 0 )
      {
        if ( v87 )
        {
          v49 = 4LL * v5;
          do
          {
            v49 -= 4LL;
            *(_DWORD *)(v8 + v49 + 84) = *(_DWORD *)(v49 + *(_QWORD *)(v2 + 112));
            --v5;
          }
          while ( v5 );
        }
        else
        {
          v50 = v85 & 0x2000;
          v86 = v50;
          if ( !v84 || v50 )
          {
            v17 = v24;
            if ( v50 )
              *(_DWORD *)(v8 + 76) |= 0x2000u;
          }
          for ( j = v17; ; v17 = j )
          {
            --v5;
            *(_DWORD *)(v8 + 4LL * v5 + 84) = XEPALOBJ::ulDispatchGFPEFunction(
                                                (__int64 *)va,
                                                *(unsigned int *)(v17 + 96),
                                                *(unsigned int *)(*(_QWORD *)(v2 + 112) + 4LL * v5));
            if ( !v5 )
              break;
          }
          if ( v84 && !v86 )
          {
            v51 = v92;
            if ( v99 )
              v51 = v91;
            XLATE::vMapNewXlate((XLATE *)v8, v51);
          }
        }
        goto LABEL_54;
      }
      v47 = (void *)(v8 + 84);
      v48 = 4LL * v5;
LABEL_126:
      memset_0(v47, 0, v48);
      v61 = v105;
      *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(v2, v101, (unsigned int)v105, 1LL) + 84) = 1;
      *(_DWORD *)(v8 + 4) |= 4u;
      *(_DWORD *)(v8 + 24) = v61;
      goto LABEL_54;
    }
  }
  if ( !v21 )
  {
    v17 = *((_QWORD *)v18 + 750);
    *(_QWORD *)(v8 + 56) = v17;
    v92 = (struct _TRANSLATE *)&defaultTranslate;
    v91 = (struct _TRANSLATE *)&defaultTranslate;
  }
  v52 = (_DWORD *)(v8 + 84);
  v53 = 0;
  v54 = (_DWORD *)(v8 + 84);
  do
    *v54++ = v53++;
  while ( v53 < 0x100 );
  v55 = (_DWORD *)v99;
  if ( !v99 )
    goto LABEL_53;
  v88 = *(_DWORD *)(v99 + 24);
  v56 = v88;
  if ( (v88 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v99, v17) || v2 && (unsigned int)bEqualRGB_In_Palette(v57, v2) )
      goto LABEL_53;
    v56 = v88;
  }
  if ( (v56 & 0x800) == 0 )
  {
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
    {
      if ( v55[7] != 256 )
      {
        memset_0((void *)(v8 + 84), 0, 0x400uLL);
        v55 = (_DWORD *)v99;
      }
      v62 = (_DWORD *)(v8 + 1068);
      v63 = (char *)v93 - v8;
      v64 = 10LL;
      while ( 1 )
      {
        *v52 = XEPALOBJ::ulDispatchGFPEFunction(
                 (__int64 *)va1,
                 (unsigned int)v55[24],
                 *(unsigned int *)((char *)v52 + (_QWORD)v63 + 3772));
        *v62 = XEPALOBJ::ulDispatchGFPEFunction(
                 (__int64 *)va1,
                 *(unsigned int *)(v99 + 96),
                 *(unsigned int *)((char *)v62 + (_QWORD)v63 + 2828));
        ++v62;
        ++v52;
        if ( !--v64 )
          break;
        v55 = (_DWORD *)v99;
      }
      v10 = 0;
      v65 = j;
      v14 = v94;
      if ( (v85 & 0x2000) != 0 )
      {
        v66 = 0;
        if ( *(_DWORD *)(j + 28) )
        {
          do
          {
            v67 = v66;
            v68 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va1,
                    *(unsigned int *)(v99 + 96),
                    *(unsigned int *)(*(_QWORD *)(v65 + 112) + 4LL * v66++));
            *(_DWORD *)(v8 + 4 * v67 + 84) = v68;
          }
          while ( v66 < *(_DWORD *)(v65 + 28) );
        }
        *(_DWORD *)(v8 + 76) |= 0x2000u;
      }
      else if ( v92 )
      {
        for ( k = 0; k < *(_DWORD *)(v17 + 28); *(_DWORD *)(v8 + 4 * v71 + 84) = v70 )
        {
          v70 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va1,
                  *(unsigned int *)(v99 + 96),
                  *(unsigned int *)(*(_QWORD *)(v17 + 112) + 4LL * k));
          v71 = *((unsigned __int8 *)v92 + k++ + 4);
        }
      }
      goto LABEL_54;
    }
    v48 = 1024LL;
    v47 = (void *)(v8 + 84);
    goto LABEL_126;
  }
  if ( v91 != v92 )
  {
    v58 = 0;
    if ( *(_DWORD *)(v17 + 28) )
    {
      do
      {
        v59 = v58++;
        *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v92 + v59 + 4) + 84) = *((unsigned __int8 *)v91 + v59 + 4);
      }
      while ( v58 < *(_DWORD *)(v17 + 28) );
      v55 = (_DWORD *)v99;
    }
    v60 = v55[6];
    if ( (v60 & 0x1000) != 0 )
    {
      *v52 = 0;
      *(_DWORD *)(v8 + 1104) = 255;
      goto LABEL_54;
    }
    if ( (v60 & 0x10000) != 0 )
      goto LABEL_54;
    *v52 = 0;
    goto LABEL_123;
  }
LABEL_53:
  *(_DWORD *)(v8 + 4) |= 1u;
LABEL_54:
  v33 = *(_DWORD *)(v8 + 4);
  if ( (v33 & 9) == 0 )
  {
    v34 = *(_DWORD *)(v8 + 12);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v8 + 40);
      if ( !v35 || (v36 = *(_QWORD *)(v8 + 48)) == 0 || *(_DWORD *)(v35 + 28) == *(_DWORD *)(v36 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v8 + 16) + 4LL * v10) == v10 )
        {
          if ( ++v10 >= v34 )
            goto LABEL_156;
        }
      }
    }
    else
    {
      v72 = *(_QWORD *)(v8 + 40);
      v73 = *(_QWORD *)(v8 + 48);
      if ( v72 && v73 && !*(_DWORD *)(v73 + 28) )
      {
        v74 = *(_DWORD *)(v72 + 24);
        v75 = 65280;
        v76 = 16711680;
        if ( (v74 & 2) != 0 )
        {
          v77 = *(int **)(v72 + 112);
          v78 = *v77;
          v79 = v77[1];
          v80 = v77[2];
        }
        else
        {
          v79 = 65280;
          if ( (v74 & 4) != 0 )
          {
            v78 = 255;
            v80 = 16711680;
          }
          else
          {
            v78 = 16711680;
            v80 = 255;
          }
        }
        v81 = *(_DWORD *)(v73 + 24);
        if ( (v81 & 2) != 0 )
        {
          v82 = *(int **)(v73 + 112);
          v83 = *v82;
          v75 = v82[1];
          v76 = v82[2];
        }
        else if ( (v81 & 4) != 0 )
        {
          v83 = 255;
        }
        else
        {
          v83 = 16711680;
          v76 = 255;
        }
        if ( v78 == v83 && v79 == v75 && v80 == v76 )
LABEL_156:
          *(_DWORD *)(v8 + 4) = v33 | 1;
      }
    }
  }
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v14);
  }
  return v8;
}
