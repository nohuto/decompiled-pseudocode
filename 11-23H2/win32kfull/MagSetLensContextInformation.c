/*
 * XREFs of MagSetLensContextInformation @ 0x1C01A3070
 * Callers:
 *     NtUserMagSetContextInformation @ 0x1C01D6540 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C0020350 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0138260 (memcmp.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     MagpFindThreadContext @ 0x1C014DF9A (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01A2614 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A2638 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 *     DwmAsyncMagnCreate @ 0x1C026BF74 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C026C04C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026C0FC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C026C2A8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C026C368 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C026C518 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C026C5DC (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C026C6DC (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C026C7F0 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, struct tagWND *a3, __int64 a4, char *Buf1)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rsi
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  struct _MAG_THREAD_CONTEXT *v13; // r13
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // r9
  struct _MAG_LENS_CONTEXT *v19; // rax
  struct _MAG_LENS_CONTEXT *v20; // r12
  double v21; // xmm0_8
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _MAG_LENS_CONTEXT *v25; // rcx
  int v26; // edi
  void *v27; // rax
  int v28; // edi
  void *v29; // rax
  int v30; // edi
  void *v31; // rax
  double v32; // xmm1_8
  __int64 v33; // rax
  double v34; // xmm2_8
  int v35; // ecx
  __int128 v36; // xmm1
  struct _MAG_LENS_CONTEXT *v37; // rax
  struct _MAG_LENS_CONTEXT *v38; // rbx
  INT v39; // ecx
  unsigned int v40; // r9d
  _DWORD *v41; // rdi
  __m128i v42; // xmm0
  INT v43; // eax
  unsigned int v44; // ecx
  __int128 v45; // xmm0
  struct _MAG_LENS_CONTEXT *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // eax
  void *v52; // rax
  void *v53; // rcx
  void *v54; // rcx
  __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // rax
  void *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  void *v61; // rax
  int v62; // eax
  void *v63; // rcx
  char *v64; // r13
  __int64 *v65; // rax
  struct _MAG_LENS_CONTEXT *v66; // rax
  __int64 v67; // rdx
  struct _MAG_LENS_CONTEXT *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  struct _MAG_LENS_CONTEXT *v71; // rcx
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  _DWORD *v75; // r12
  void *v76; // rax
  int v77; // eax
  int v78; // r9d
  int v79; // r9d
  int v80; // r9d
  struct _MAG_LENS_CONTEXT *v81; // rax
  __int64 v82; // rdx
  struct _MAG_LENS_CONTEXT *v83; // rsi
  _QWORD *v84; // rcx
  void *v85; // rax
  int v86; // eax
  void *v87; // rax
  int v88; // ebx
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v90; // rsi
  unsigned int v91; // ebx
  struct _MAG_LENS_CONTEXT *v92; // rbx
  __int64 v93; // r8
  __int64 v94; // rdx
  int v95; // ecx
  __int64 v96; // rcx
  void *v97; // rax
  void *v98; // rcx
  int v99; // edx
  unsigned int v100; // ecx
  int v101; // edx
  __int64 v102; // rsi
  char *v103; // rdx
  struct _MAG_LENS_CONTEXT *v104; // rbx
  __int64 v105; // rdi
  _QWORD *v106; // rcx
  void *v107; // rax
  void *v108; // rcx
  int v109; // ecx
  unsigned int v110; // eax
  int v111; // ecx
  __int64 v112; // [rsp+30h] [rbp-20h] BYREF
  __int64 v113; // [rsp+38h] [rbp-18h]
  __int64 v114; // [rsp+40h] [rbp-10h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0LL;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v13 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  if ( v12 > 5 )
  {
    v78 = v12 - 6;
    if ( v78 )
    {
      v79 = v78 - 1;
      if ( v79 )
      {
        v80 = v79 - 2;
        if ( !v80 )
        {
          v88 = *(_DWORD *)Buf1;
          if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
            return v6;
          if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            return v6;
          LensContext = MagpFindLensContext(ThreadContext, a3);
          v90 = LensContext;
          if ( !LensContext )
            return v6;
          v91 = v88 & 1;
          if ( ((*((_DWORD *)LensContext + 4) >> 6) & 1) != v91 )
          {
            ChangeComposableCursor(v91);
            *((_DWORD *)v90 + 4) = (v91 << 6) | *((_DWORD *)v90 + 4) & 0xFFFFFFBF;
          }
          return 0;
        }
        if ( v80 != 1 )
          return v6;
        if ( !a3 )
          return v6;
        v81 = MagpFindLensContext(ThreadContext, a3);
        v83 = v81;
        if ( !v81 )
          return v6;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v84 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL);
          v85 = (void *)ReferenceDwmApiPort(v84, *v84);
          v86 = DwmAsyncMagnSetDesktopSamplingMode(v85);
        }
        else
        {
          if ( (*((_DWORD *)v81 + 4) & 0x20) != 0 )
            goto LABEL_117;
          v87 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v82);
          v86 = DwmAsyncMagnSetSamplingMode(v87);
        }
        v6 = v86;
        if ( v86 < 0 )
          return v6;
LABEL_117:
        *((_DWORD *)v83 + 66) = *(_DWORD *)Buf1;
        return 0;
      }
      if ( *(_DWORD *)Buf1 > 6u )
        return v6;
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v92 = MagpFindLensContext(ThreadContext, a3);
      if ( !v92 )
        return v6;
      if ( (_DWORD)v93 )
      {
        v8 = Win32AllocPoolZInit(24 * v93, 1735226197LL);
        if ( !v8 )
          return (unsigned int)-1073741801;
      }
      v94 = 0LL;
      v95 = *(_DWORD *)Buf1;
      HIDWORD(v112) = *((_DWORD *)Buf1 + 1);
      v113 = *((_QWORD *)Buf1 + 1);
      LODWORD(v112) = v95;
      v114 = v8;
      if ( v95 )
      {
        do
        {
          v96 = 3 * v94;
          v94 = (unsigned int)(v94 + 1);
          *(_OWORD *)(v8 + 8 * v96) = *(_OWORD *)&Buf1[8 * v96 + 16];
          *(_QWORD *)(v8 + 8 * v96 + 16) = *(_QWORD *)&Buf1[8 * v96 + 32];
        }
        while ( (unsigned int)v94 < *(_DWORD *)Buf1 );
      }
      if ( (*((_DWORD *)v92 + 4) & 0x20) != 0
        || (v97 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v94),
            v6 = DwmAsyncMagnSetWindowSharedTextures(v97),
            (v6 & 0x80000000) == 0) )
      {
        v98 = (void *)*((_QWORD *)v92 + 32);
        if ( v98 )
        {
          Win32FreePool(v98);
          *((_QWORD *)v92 + 32) = 0LL;
        }
        v99 = *((_DWORD *)v92 + 4);
        *((_DWORD *)v92 + 60) = *(_DWORD *)Buf1;
        v100 = v99 & 0xFFFFFFEF;
        v101 = v99 | 0x10;
        *((_DWORD *)v92 + 61) = *((_DWORD *)Buf1 + 1);
        *((_DWORD *)v92 + 62) = *((_DWORD *)Buf1 + 2);
        *((_DWORD *)v92 + 63) = *((_DWORD *)Buf1 + 3);
        *((_QWORD *)v92 + 32) = v8;
        if ( !*(_DWORD *)Buf1 )
          v101 = v100;
        *((_DWORD *)v92 + 4) = v101;
        return 0;
      }
      if ( !v8 )
        return v6;
      v63 = (void *)v8;
    }
    else
    {
      v102 = (unsigned int)(*(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1));
      if ( (unsigned int)v102 > 0x19 )
        return v6;
      if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v104 = MagpFindLensContext(ThreadContext, a3);
      if ( !v104 )
        return v6;
      v105 = (unsigned int)v102;
      if ( (_DWORD)v102 )
      {
        v7 = Win32AllocPoolZInit(8 * v102, 1735226197LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
      }
      v112 = *(_QWORD *)Buf1;
      v113 = v7;
      if ( (_DWORD)v102 )
      {
        v106 = (_QWORD *)v7;
        v103 = &Buf1[-v7];
        do
        {
          *v106 = *(_QWORD *)((char *)v106 + (_QWORD)v103 + 8);
          ++v106;
          --v105;
        }
        while ( v105 );
      }
      if ( (*((_DWORD *)v104 + 4) & 0x20) != 0
        || (v107 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v103),
            v6 = DwmAsyncMagnSetWindowFilterList(v107),
            (v6 & 0x80000000) == 0) )
      {
        v108 = (void *)*((_QWORD *)v104 + 29);
        if ( v108 )
        {
          Win32FreePool(v108);
          *((_QWORD *)v104 + 29) = 0LL;
        }
        v109 = *((_DWORD *)v104 + 4);
        *((_DWORD *)v104 + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)v104 + 57) = *((_DWORD *)Buf1 + 1);
        v110 = v109 & 0xFFFFFFF7;
        *((_QWORD *)v104 + 29) = v7;
        v111 = v109 | 8;
        if ( !(_DWORD)v102 )
          v111 = v110;
        *((_DWORD *)v104 + 4) = v111;
        return 0;
      }
      if ( !v7 )
        return v6;
      v63 = (void *)v7;
    }
LABEL_151:
    Win32FreePool(v63);
    return v6;
  }
  if ( v12 == 5 )
  {
    if ( !a3 )
      return v6;
    v66 = MagpFindLensContext(ThreadContext, a3);
    v68 = v66;
    if ( !v66 )
      return v6;
    if ( a3 == (struct tagWND *)-1LL )
    {
      v22 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) != 0;
      v70 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
      v71 = *(struct _MAG_LENS_CONTEXT **)(v70 + 240);
      if ( v22 )
      {
        if ( v71 )
        {
          if ( v71 != v68 )
            return v6;
          v74 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v70 + 8), v69);
          v6 = DwmAsyncMagnSetDesktopColorTransform(v74);
        }
        else
        {
          v73 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v70 + 8), v69);
          v6 = DwmAsyncMagnSetDesktopColorTransform(v73);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 240LL) = v68;
        }
      }
      else if ( v71 )
      {
        if ( v71 != v68 )
          return v6;
        v72 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v70 + 8), v69);
        v6 = DwmAsyncMagnSetDesktopColorTransform(v72);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 240LL) = 0LL;
      }
      else
      {
        v6 = 0;
      }
      v75 = (_DWORD *)((char *)v68 + 16);
    }
    else
    {
      v75 = (_DWORD *)((char *)v66 + 16);
      if ( (*((_DWORD *)v66 + 4) & 0x20) != 0 )
        goto LABEL_105;
      v76 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v67);
      v6 = DwmAsyncMagnSetWindowColorTransform(v76);
    }
    if ( (v6 & 0x80000000) != 0 )
      return v6;
LABEL_105:
    *(_OWORD *)((char *)v68 + 120) = *(_OWORD *)Buf1;
    *(_OWORD *)((char *)v68 + 136) = *((_OWORD *)Buf1 + 1);
    *(_OWORD *)((char *)v68 + 152) = *((_OWORD *)Buf1 + 2);
    *(_OWORD *)((char *)v68 + 168) = *((_OWORD *)Buf1 + 3);
    *(_OWORD *)((char *)v68 + 184) = *((_OWORD *)Buf1 + 4);
    *(_OWORD *)((char *)v68 + 200) = *((_OWORD *)Buf1 + 5);
    v77 = *((_DWORD *)Buf1 + 24);
    *v75 |= 4u;
    *((_DWORD *)v68 + 54) = v77;
    return 0;
  }
  if ( !v12 )
  {
    if ( !a3 || MagpFindLensContext(ThreadContext, a3) )
      return v6;
    v48 = Win32AllocPoolZInit(272LL, 1735226197LL);
    if ( v48 )
    {
      if ( a3 != (struct tagWND *)-1LL )
      {
        v61 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v60);
        v62 = DwmAsyncMagnCreate(v61);
        v6 = v62;
        if ( v62 != -1073741823 && v62 < 0 )
          goto LABEL_80;
      }
      memset_0((void *)(v48 + 16), 0, 0x100uLL);
      *(double *)(v48 + 40) = gOneDouble;
      *(double *)(v48 + 48) = gOneDouble;
      if ( a3 == (struct tagWND *)-1LL )
      {
        *(_QWORD *)(v48 + 24) = -1LL;
      }
      else
      {
        v112 = v48 + 24;
        v113 = (__int64)a3;
        HMAssignmentLock(&v112, 0LL);
      }
      *(_DWORD *)(v48 + 264) = 0;
      v64 = (char *)v13 + 40;
      v65 = (__int64 *)*((_QWORD *)v64 + 1);
      if ( (char *)*v65 == v64 )
      {
        *(_QWORD *)v48 = v64;
        *(_QWORD *)(v48 + 8) = v65;
        *v65 = v48;
        *((_QWORD *)v64 + 1) = v48;
        return 0;
      }
      goto LABEL_85;
    }
    return (unsigned int)-1073741801;
  }
  v15 = v12 - 1;
  if ( !v15 )
  {
    MagpRevokeInputTransfrom();
    if ( !a3 )
      return v6;
    v46 = MagpFindLensContext(v13, a3);
    v48 = (__int64)v46;
    if ( !v46 )
      return v6;
    v49 = *(_QWORD *)v46;
    if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)v46 + 8LL) == v46 )
    {
      v50 = (_QWORD *)*((_QWORD *)v46 + 1);
      if ( *v50 == v48 )
      {
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        if ( a3 == (struct tagWND *)-1LL )
        {
          v55 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
          if ( *(_QWORD *)(v55 + 240) == v48 )
          {
            v56 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v55 + 8), v47);
            v6 = DwmAsyncMagnSetDesktopColorTransform(v56);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 240LL) = 0LL;
          }
          else
          {
            v6 = 0;
          }
          v57 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
          if ( *(_QWORD *)(v57 + 232) == v48 )
          {
            v58 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v57 + 8), v47);
            v59 = DwmAsyncMagnSetDesktopTransform(v58, 0);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
          }
          else
          {
            v59 = 0;
          }
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_80;
          if ( v59 < 0 )
          {
            v6 = v59;
            goto LABEL_80;
          }
        }
        else
        {
          v51 = *(_DWORD *)(v48 + 16);
          if ( (v51 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *(_DWORD *)(v48 + 16) &= ~0x40u;
            v51 = *(_DWORD *)(v48 + 16);
          }
          if ( (v51 & 0x20) != 0 )
          {
            v6 = 0;
          }
          else
          {
            v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 8LL), v47);
            v6 = DwmAsyncMagnDestroy(v52);
          }
          HMAssignmentUnlock(v48 + 24);
          v53 = *(void **)(v48 + 232);
          if ( v53 )
            Win32FreePool(v53);
          v54 = *(void **)(v48 + 256);
          if ( v54 )
            Win32FreePool(v54);
          if ( (v6 & 0x80000000) != 0 )
            goto LABEL_80;
        }
        v6 = 0;
LABEL_80:
        v63 = (void *)v48;
        goto LABEL_151;
      }
    }
LABEL_85:
    __fastfail(3u);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v6;
    v37 = MagpFindLensContext(ThreadContext, a3);
    v38 = v37;
    if ( !v37 )
      return v6;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 3) + 40LL) + 288LL) & 0xF) != 0
      || (v39 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v39 <= 0x60u) )
    {
      v44 = *(_DWORD *)Buf1;
      v41 = (_DWORD *)((char *)v37 + 16);
      if ( (*((_DWORD *)v37 + 4) & 2) == 0 )
      {
        *((_DWORD *)v37 + 8) = -v44;
        v43 = *((_DWORD *)Buf1 + 1);
        goto LABEL_46;
      }
      v42 = _mm_cvtsi32_si128(v44);
    }
    else
    {
      v40 = *(_DWORD *)Buf1;
      v41 = (_DWORD *)((char *)v37 + 16);
      if ( (*((_DWORD *)v37 + 4) & 2) == 0 )
      {
        *((_DWORD *)v37 + 8) = -EngMulDiv(v40, v39, 96);
        v43 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
        goto LABEL_46;
      }
      v42 = _mm_cvtsi32_si128(v40);
    }
    *((_DWORD *)v37 + 8) = -(int)(_mm_cvtepi32_pd(v42).m128d_f64[0] * *((double *)v37 + 11));
    v43 = (int)((double)*((int *)Buf1 + 1) * *((double *)v37 + 12));
LABEL_46:
    *((_DWORD *)v38 + 9) = -v43;
    v45 = *(_OWORD *)Buf1;
    *v41 |= 1u;
    *(_OWORD *)((char *)v38 + 72) = v45;
    return 0;
  }
  v17 = (unsigned int)(v16 - 1);
  if ( (_DWORD)v17 )
  {
    if ( (_DWORD)v17 == 1 )
    {
      if ( *((_DWORD *)Buf1 + 8) == 3 )
        return (unsigned int)MagpRevokeInputTransfrom();
      else
        return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v10, v11, v17);
    }
    return v6;
  }
  if ( a3 )
  {
    v19 = MagpFindLensContext(ThreadContext, a3);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(double *)Buf1;
      if ( a3 != (struct tagWND *)-1LL )
      {
        *((double *)v19 + 5) = v21;
        *((_QWORD *)v19 + 6) = *((_QWORD *)Buf1 + 1);
        v32 = *((double *)Buf1 + 2);
        v33 = *((_QWORD *)v19 + 3);
        *((double *)v20 + 7) = v32;
        v34 = *((double *)Buf1 + 3);
        *((double *)v20 + 8) = v34;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 288LL) & 0xF) == 0 )
        {
          v35 = *(unsigned __int16 *)(gpsi + 6998LL);
          if ( (unsigned __int16)v35 > 0x60u )
          {
            *((double *)v20 + 7) = (double)v35 * v32 / 96.0;
            *((double *)v20 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v34 / 96.0;
            *((double *)v20 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v20 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
        goto LABEL_34;
      }
      if ( v21 == *((double *)Buf1 + 1) )
      {
        v22 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) != 0;
        v24 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL);
        v25 = *(struct _MAG_LENS_CONTEXT **)(v24 + 232);
        if ( v22 )
        {
          if ( v25 )
          {
            if ( v20 != v25 )
              return v6;
            v30 = (int)*((double *)Buf1 + 3);
            v31 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v24 + 8), v23);
            v6 = DwmAsyncMagnSetDesktopTransform(v31, v30);
          }
          else
          {
            v28 = (int)*((double *)Buf1 + 3);
            v29 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v24 + 8), v23);
            v6 = DwmAsyncMagnSetDesktopTransform(v29, v28);
            if ( (v6 & 0x80000000) != 0 )
              return v6;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = v20;
          }
        }
        else if ( v25 )
        {
          if ( v20 != v25 )
            return v6;
          v26 = (int)*((double *)Buf1 + 3);
          v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v24 + 8), v23);
          v6 = DwmAsyncMagnSetDesktopTransform(v27, v26);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 456LL) + 232LL) = 0LL;
        }
        else
        {
          v6 = 0;
        }
        if ( (v6 & 0x80000000) == 0 )
        {
LABEL_34:
          *(_OWORD *)((char *)v20 + 88) = *(_OWORD *)Buf1;
          v36 = *((_OWORD *)Buf1 + 1);
          *((_DWORD *)v20 + 4) |= 2u;
          *(_OWORD *)((char *)v20 + 104) = v36;
          return 0;
        }
      }
    }
  }
  return v6;
}
