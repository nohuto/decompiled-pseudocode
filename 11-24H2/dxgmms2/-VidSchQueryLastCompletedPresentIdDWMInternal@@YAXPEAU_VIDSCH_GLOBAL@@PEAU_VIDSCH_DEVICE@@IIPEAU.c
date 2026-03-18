/*
 * XREFs of ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14000B550
 * Callers:
 *     VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x14000A770 (VidSchQueryLastCompletedVidPnSourcePresentIdDWM.c)
 *     VidSchQueryLastCompletedPresentIdDWM @ 0x14000B3A0 (VidSchQueryLastCompletedPresentIdDWM.c)
 * Callees:
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x14000AFE0 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000C844 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?floor@@YANN@Z @ 0x14000C87C (-floor@@YANN@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14000C8BC (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x14000CDEC (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x14000CF94 (McTemplateK0qxxxxiq_EtwWriteTransfer.c)
 *     RtlULongLongMult @ 0x1400348C0 (RtlULongLongMult.c)
 *     ?VidSchiConvertTicksToSchedulerUnitsDelta@@YA_J_J_K@Z @ 0x14003A498 (-VidSchiConvertTicksToSchedulerUnitsDelta@@YA_J_J_K@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x14003E20C (McTemplateK0xx_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchQueryLastCompletedPresentIdDWMInternal(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r12
  __int64 v8; // rdi
  struct _D3DKMT_PRESENT_STATS_DWM2 *v9; // r14
  ULONGLONG v10; // rax
  unsigned __int64 v11; // r11
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // r10d
  double v16; // xmm1_8
  int v17; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  double v20; // xmm0_8
  unsigned __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // r13
  __int64 v27; // r8
  int v28; // edx
  double v29; // xmm1_8
  int v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  double v33; // xmm0_8
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  double *v39; // r10
  int v40; // r9d
  double v41; // xmm1_8
  int v42; // eax
  double v43; // xmm0_8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rcx
  __int64 v51; // r11
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rcx
  __int64 v54; // rsi
  ULONGLONG v55; // r10
  __int64 v56; // rdx
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 SmoothenedFrameTimeQpc; // rsi
  __int64 v60; // r8
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // rcx
  double v63; // xmm0_8
  unsigned __int64 v64; // rax
  char v65; // al
  char v66; // r10
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  unsigned __int64 v69; // r8
  __int64 v70; // r11
  __int64 v71; // rdx
  unsigned __int64 v72; // r13
  __int64 v73; // r10
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned __int64 v76; // r10
  unsigned __int64 v77; // r11
  unsigned __int64 v78; // r8
  unsigned __int128 v79; // rax
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r10
  ULONGLONG v85; // r9
  __int64 v86; // [rsp+48h] [rbp-B8h]
  int v87; // [rsp+48h] [rbp-B8h]
  int v88; // [rsp+48h] [rbp-B8h]
  __int64 v89; // [rsp+58h] [rbp-A8h]
  __int64 v90; // [rsp+58h] [rbp-A8h]
  __int64 v91; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v94; // [rsp+68h] [rbp-98h]
  char v95; // [rsp+70h] [rbp-90h]
  char v96; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v98; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONGLONG pullResult; // [rsp+1A8h] [rbp+A8h] BYREF
  int v100; // [rsp+1B0h] [rbp+B0h]
  unsigned int v101; // [rsp+1B8h] [rbp+B8h]

  v101 = a4;
  v5 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *((_QWORD *)a1 + a3 + 429);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 249, &LockHandle);
  v9 = (struct _D3DKMT_PRESENT_STATS_DWM2 *)a5;
  if ( !a2 )
  {
    v54 = *(_QWORD *)(v8 + 44352);
    v55 = *(_QWORD *)(v8 + 44368);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v8 + 44400);
    *((_DWORD *)v9 + 2) = *(_DWORD *)(v8 + 44352);
    *((_DWORD *)v9 + 17) = *(_DWORD *)(v8 + 44360);
    v95 = v54;
    pullResult = v55;
    if ( !*((_BYTE *)a1 + 7058) )
      goto LABEL_90;
    v56 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 429);
    if ( *(_DWORD *)(v56 + 3192) != -1 )
    {
      if ( *(_DWORD *)(v56 + 3192) && *(_DWORD *)(v56 + 3192) != *(_DWORD *)(v56 + 83096) )
      {
        v82 = *(unsigned int *)(v56 + 3192);
        goto LABEL_154;
      }
      if ( *(_DWORD *)(v56 + 83096) )
      {
        v82 = *(unsigned int *)(v56 + 83096);
LABEL_154:
        if ( is_mul_ok(v82, *((_QWORD *)a1 + 359)) )
          v57 = v82 * *((_QWORD *)a1 + 359) / 0x989680;
        else
          v57 = *((_QWORD *)a1 + 359) * (v82 / 0x989680) + *((_QWORD *)a1 + 359) * (v82 % 0x989680) / 0x989680;
LABEL_81:
        v91 = *(_QWORD *)(v8 + 44408);
        v98 = v57;
        LODWORD(a5) = _mm_getcsr();
        v100 = a5 | 1;
        _mm_setcsr(a5 | 1);
        SmoothenedFrameTimeQpc = (unsigned int)(int)floor(
                                                      (double)((int)v54 - *(_DWORD *)(v91 + 40)) * *(double *)(v91 + 24)
                                                    + (double)(int)*(_QWORD *)(v91 + 48)
                                                    + *(double *)(v91 + 16)
                                                    + 0.5);
        v62 = SmoothenedFrameTimeQpc - v55;
        if ( (__int64)(SmoothenedFrameTimeQpc - v55) < 0 )
          v62 = v55 - SmoothenedFrameTimeQpc;
        if ( v62 > v61 >> 1 )
        {
          if ( (byte_140081244 & 4) != 0 )
          {
            McTemplateK0xx_EtwWriteTransfer(v62, v58, v60, v61, v61);
            v60 = v91;
          }
          if ( (v98 & 0x8000000000000000uLL) != 0LL )
            v63 = (double)(int)(v98 & 1 | (v98 >> 1)) + (double)(int)(v98 & 1 | (v98 >> 1));
          else
            v63 = (double)(int)v98;
          *(double *)(v60 + 32) = v63;
          LinearFitT<256>::Reset(v60);
          v55 = pullResult;
          LODWORD(v58) = -1073741823;
          SmoothenedFrameTimeQpc = 0LL;
        }
        v100 = a5;
        _mm_setcsr(a5);
        if ( (int)v58 >= 0 )
        {
          if ( (byte_140081244 & 4) != 0 )
          {
            v65 = VidSchiConvertTicksToSchedulerUnitsDelta(SmoothenedFrameTimeQpc - v55, *((_QWORD *)a1 + 359));
            v67 = *((_QWORD *)a1 + 359);
            if ( is_mul_ok(SmoothenedFrameTimeQpc, 0x989680uLL) )
            {
              v68 = SmoothenedFrameTimeQpc * (unsigned __int128)0x989680uLL % v67;
              v69 = SmoothenedFrameTimeQpc * (unsigned __int128)0x989680uLL / v67;
            }
            else
            {
              v68 = SmoothenedFrameTimeQpc % v67;
              v69 = 10000000 * (SmoothenedFrameTimeQpc / v67) + 10000000 * (SmoothenedFrameTimeQpc % v67) / v67;
            }
            if ( (byte_140081244 & 4) != 0 )
            {
              v87 = *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL);
              McTemplateK0qxxxxiq_EtwWriteTransfer(
                v87,
                v68,
                v69,
                *(_DWORD *)(v8 + 24),
                v95,
                v66,
                SmoothenedFrameTimeQpc,
                v69,
                v65,
                v87);
            }
          }
          goto LABEL_91;
        }
LABEL_90:
        SmoothenedFrameTimeQpc = v55;
LABEL_91:
        v64 = *(_QWORD *)(v8 + 44376);
        *((_QWORD *)v9 + 2) = SmoothenedFrameTimeQpc;
        if ( *(_QWORD *)(v8 + 44368) != v64 )
          SmoothenedFrameTimeQpc = VidSchiGetSmoothenedFrameTimeQpc(
                                     (struct _VIDSCH_PRESENT_INFO *)v8,
                                     a1,
                                     v64,
                                     *(_QWORD *)(v8 + 44360));
        *((_QWORD *)v9 + 9) = SmoothenedFrameTimeQpc;
        goto LABEL_22;
      }
    }
    v57 = *(_QWORD *)(v56 + 83112);
    goto LABEL_81;
  }
  v10 = *((_QWORD *)a2 + v5 + 72);
  v11 = *((_QWORD *)a2 + v5 + 88);
  *(_DWORD *)(a5 + 4) = *((_DWORD *)a2 + v5 + 127);
  *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 2 * v5 + 144);
  *((_DWORD *)v9 + 17) = *((_DWORD *)a2 + 2 * v5 + 208);
  pullResult = v10;
  v94 = v11;
  if ( !*((_BYTE *)a1 + 7058) )
    goto LABEL_18;
  v12 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 429);
  if ( *(_DWORD *)(v12 + 3192) == -1 )
    goto LABEL_6;
  if ( *(_DWORD *)(v12 + 3192) && *(_DWORD *)(v12 + 3192) != *(_DWORD *)(v12 + 83096) )
  {
    v80 = *(unsigned int *)(v12 + 3192);
    goto LABEL_134;
  }
  if ( !*(_DWORD *)(v12 + 83096) )
  {
LABEL_6:
    v13 = *(_QWORD *)(v12 + 83112);
    goto LABEL_7;
  }
  v80 = *(unsigned int *)(v12 + 83096);
LABEL_134:
  if ( is_mul_ok(v80, *((_QWORD *)a1 + 359)) )
    v13 = v80 * *((_QWORD *)a1 + 359) / 0x989680;
  else
    v13 = *((_QWORD *)a1 + 359) * (v80 / 0x989680) + *((_QWORD *)a1 + 359) * (v80 % 0x989680) / 0x989680;
LABEL_7:
  v14 = *(_QWORD *)(v8 + 44408);
  v89 = v14;
  v98 = v13;
  v15 = 0;
  LODWORD(a5) = _mm_getcsr();
  v100 = a5 | 1;
  _mm_setcsr(a5 | 1);
  v16 = (double)((int)pullResult - *(_DWORD *)(v14 + 40)) * *(double *)(v14 + 24)
      + (double)(int)*(_QWORD *)(v14 + 48)
      + *(double *)(v14 + 16)
      + 0.5;
  v17 = (int)v16;
  if ( v16 < 0.0 )
    v17 = (int)((double)(1 - v17) + v16) - (1 - v17);
  v18 = (unsigned int)(int)(double)v17;
  v92 = v18;
  v19 = v18 - v11;
  if ( (__int64)(v18 - v11) < 0 )
    v19 = v11 - v18;
  if ( v19 > v13 >> 1 )
  {
    if ( (byte_140081244 & 4) != 0 )
    {
      McTemplateK0xx_EtwWriteTransfer(v19, v14, v18, v13, v13);
      v13 = v98;
      v14 = v89;
    }
    if ( (v13 & 0x8000000000000000uLL) != 0LL )
      v20 = (double)(int)(v13 & 1 | (v13 >> 1)) + (double)(int)(v13 & 1 | (v13 >> 1));
    else
      v20 = (double)(int)v13;
    *(double *)(v14 + 32) = v20;
    LinearFitT<256>::Reset(v14);
    v11 = v94;
    v15 = -1073741823;
    v18 = 0LL;
    v92 = 0LL;
  }
  v100 = a5;
  _mm_setcsr(a5);
  if ( v15 >= 0 )
  {
    if ( (byte_140081244 & 4) != 0 )
    {
      v52 = *((_QWORD *)a1 + 359);
      v53 = v18 - v11;
      if ( (__int64)(v18 - v11) < 0 )
      {
        v73 = is_mul_ok(v11 - v18, 0x989680uLL)
            ? (v11 - v18) * (unsigned __int128)0x989680uLL / v52
            : 10000000 * ((v11 - v18) / v52) + 10000000 * ((v11 - v18) % v52) / v52;
        a5 = -v73;
      }
      else
      {
        a5 = is_mul_ok(v53, 0x989680uLL)
           ? v53 * (unsigned __int128)0x989680uLL / v52
           : 10000000 * (v53 / v52) + 10000000 * (v53 % v52) / v52;
      }
      v74 = *((_QWORD *)a1 + 359);
      if ( is_mul_ok(v18, 0x989680uLL) )
      {
        v75 = v18 * (unsigned __int128)0x989680uLL % v74;
        v76 = v18 * (unsigned __int128)0x989680uLL / v74;
      }
      else
      {
        v75 = v18 % v74;
        v76 = 10000000 * (v18 / v74) + 10000000 * (v18 % v74) / v74;
      }
      if ( (byte_140081244 & 4) != 0 )
      {
        v88 = *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL);
        McTemplateK0qxxxxiq_EtwWriteTransfer(v88, v75, v18, *(_DWORD *)(v8 + 24), pullResult, v11, v18, v76, a5, v88);
        v18 = v92;
      }
    }
    goto LABEL_19;
  }
LABEL_18:
  v18 = v11;
LABEL_19:
  v21 = *((_QWORD *)a2 + v5 + 120);
  *((_QWORD *)v9 + 2) = v18;
  if ( *((_QWORD *)a2 + v5 + 88) != v21 )
    v18 = VidSchiGetSmoothenedFrameTimeQpc((struct _VIDSCH_PRESENT_INFO *)v8, a1, v21, *((_QWORD *)a2 + v5 + 104));
  *((_QWORD *)v9 + 9) = v18;
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v22 = *((_BYTE *)a1 + 7058) == 0;
  v23 = *(_QWORD *)(v8 + 44352);
  v24 = *(_QWORD *)(v8 + 44368);
  *((_DWORD *)v9 + 6) = *(_DWORD *)(v8 + 44352);
  *((_DWORD *)v9 + 11) = *(_DWORD *)(v8 + 44360);
  v96 = v23;
  v93 = v24;
  if ( v22 )
  {
LABEL_38:
    v31 = v24;
    goto LABEL_39;
  }
  v25 = *((_QWORD *)a1 + *(unsigned int *)(v8 + 24) + 429);
  if ( *(_DWORD *)(v25 + 3192) == -1 )
    goto LABEL_26;
  if ( *(_DWORD *)(v25 + 3192) && *(_DWORD *)(v25 + 3192) != *(_DWORD *)(v25 + 83096) )
  {
    v77 = *((_QWORD *)a1 + 359);
    v78 = *(unsigned int *)(v25 + 3192);
    v79 = *(unsigned int *)(v25 + 3192) * (unsigned __int128)v77;
    goto LABEL_120;
  }
  if ( !*(_DWORD *)(v25 + 83096) )
  {
LABEL_26:
    v26 = *(_QWORD *)(v25 + 83112);
    goto LABEL_27;
  }
  v77 = *((_QWORD *)a1 + 359);
  v78 = *(unsigned int *)(v25 + 83096);
  v79 = *(unsigned int *)(v25 + 83096) * (unsigned __int128)v77;
LABEL_120:
  if ( *((_QWORD *)&v79 + 1) )
    v26 = v77 * (v78 / 0x989680) + v77 * (v78 % 0x989680) / 0x989680;
  else
    v26 = (unsigned __int64)v79 / 0x989680;
LABEL_27:
  v27 = *(_QWORD *)(v8 + 44408);
  v90 = v27;
  v28 = 0;
  LODWORD(a5) = _mm_getcsr();
  v100 = a5 | 1;
  _mm_setcsr(a5 | 1);
  v29 = (double)((int)v23 - *(_DWORD *)(v27 + 40)) * *(double *)(v27 + 24)
      + (double)(int)*(_QWORD *)(v27 + 48)
      + *(double *)(v27 + 16)
      + 0.5;
  v30 = (int)v29;
  if ( v29 < 0.0 )
    v30 = (int)((double)(1 - v30) + v29) - (1 - v30);
  v31 = (unsigned int)(int)(double)v30;
  v32 = v31 - v24;
  if ( (__int64)(v31 - v24) < 0 )
    v32 = v24 - v31;
  if ( v32 > v26 >> 1 )
  {
    if ( (byte_140081244 & 4) != 0 )
    {
      McTemplateK0xx_EtwWriteTransfer(v32, 0LL, v27, v26, v26);
      v27 = v90;
    }
    if ( (v26 & 0x8000000000000000uLL) != 0LL )
      v33 = (double)(int)(v26 & 1 | (v26 >> 1)) + (double)(int)(v26 & 1 | (v26 >> 1));
    else
      v33 = (double)(int)v26;
    *(double *)(v27 + 32) = v33;
    LinearFitT<256>::Reset(v27);
    v24 = v93;
    v28 = -1073741823;
    LOBYTE(v23) = v96;
    v31 = 0LL;
  }
  v100 = a5;
  _mm_setcsr(a5);
  if ( v28 < 0 )
    goto LABEL_38;
  if ( (byte_140081244 & 4) != 0 )
  {
    v49 = *((_QWORD *)a1 + 359);
    v50 = v31 - v24;
    if ( (__int64)(v31 - v24) < 0 )
    {
      v70 = is_mul_ok(v24 - v31, 0x989680uLL)
          ? (v24 - v31) * (unsigned __int128)0x989680uLL / v49
          : 10000000 * ((v24 - v31) / v49) + 10000000 * ((v24 - v31) % v49) / v49;
      v51 = -v70;
    }
    else
    {
      v51 = is_mul_ok(v50, 0x989680uLL)
          ? v50 * (unsigned __int128)0x989680uLL / v49
          : 10000000 * (v50 / v49) + 10000000 * (v50 % v49) / v49;
    }
    if ( is_mul_ok(v31, 0x989680uLL) )
    {
      v71 = v31 * (unsigned __int128)0x989680uLL % v49;
      v72 = v31 * (unsigned __int128)0x989680uLL / v49;
    }
    else
    {
      v71 = v31 % v49;
      v72 = 10000000 * (v31 / v49) + 10000000 * (v31 % v49) / v49;
    }
    if ( (byte_140081244 & 4) != 0 )
    {
      LODWORD(v86) = *(_DWORD *)(*(_QWORD *)(v8 + 44408) + 8LL);
      McTemplateK0qxxxxiq_EtwWriteTransfer(
        v86,
        v71,
        (unsigned __int8)byte_140081244,
        *(_DWORD *)(v8 + 24),
        v23,
        v24,
        v31,
        v72,
        v51,
        v86);
    }
  }
LABEL_39:
  v34 = *(_QWORD *)(v8 + 44376);
  *((_QWORD *)v9 + 4) = v31;
  if ( *(_QWORD *)(v8 + 44368) != v34 )
    v31 = VidSchiGetSmoothenedFrameTimeQpc((struct _VIDSCH_PRESENT_INFO *)v8, a1, v34, *(_QWORD *)(v8 + 44360));
  v35 = 304LL * v101;
  *((_QWORD *)v9 + 6) = v31;
  v36 = *((_QWORD *)a1 + v5 + 429);
  if ( *(int *)(v35 + v36 + 188) > -1 && (v37 = *((_QWORD *)a1 + 445) + 160LL * *(int *)(v35 + v36 + 188)) != 0 )
    *((_DWORD *)v9 + 10) = *(_DWORD *)(v37 + 100);
  else
    *((_DWORD *)v9 + 10) = 0;
  if ( *(_DWORD *)(v8 + 3192) == -1 )
  {
    v45 = 0xFFFFFFFFLL;
  }
  else if ( *(_DWORD *)(v36 + 3192) == -1 )
  {
    v45 = *(_QWORD *)(v36 + 83112);
  }
  else if ( !*(_DWORD *)(v36 + 3192) || *(_DWORD *)(v36 + 3192) == *(_DWORD *)(v36 + 83096) )
  {
    if ( *(_DWORD *)(v36 + 83096) )
    {
      if ( is_mul_ok(*(unsigned int *)(v36 + 83096), *((_QWORD *)a1 + 359)) )
        v38 = (unsigned __int64)*(unsigned int *)(v36 + 83096) * *((_QWORD *)a1 + 359) / 0x989680;
      else
        v38 = *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 83096) / 0x989680uLL)
            + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 83096) % 0x989680uLL) / 0x989680;
    }
    else
    {
      v38 = *(_QWORD *)(v36 + 83112);
    }
    v22 = *((_BYTE *)a1 + 7058) == 0;
    a5 = v38;
    if ( v22 )
      goto LABEL_100;
    v39 = *(double **)(v36 + 44408);
    v40 = 0;
    v100 = _mm_getcsr();
    v101 = v100 | 1;
    _mm_setcsr(v100 | 1);
    v41 = v39[3] + 0.5;
    v42 = (int)v41;
    if ( v41 < 0.0 )
      v42 = (int)((double)(1 - v42) + v41) - (1 - v42);
    v43 = (double)v42;
    v44 = 0LL;
    if ( v43 >= 9.223372036854776e18 )
    {
      v43 = v43 - 9.223372036854776e18;
      if ( v43 < 9.223372036854776e18 )
        v44 = 0x8000000000000000uLL;
    }
    v45 = v44 + (unsigned int)(int)v43;
    v46 = v45 - v38;
    if ( (__int64)(v45 - v38) < 0 )
      v46 = v38 - v45;
    if ( v46 > v38 >> 1 )
    {
      VIDSCH_VSYNC_SMOOTHER::ResetSmoother((VIDSCH_VSYNC_SMOOTHER *)v39, v45, v38);
      v38 = a5;
      v40 = -1073741823;
      v45 = 0LL;
    }
    v101 = v100;
    _mm_setcsr(v100);
    if ( v40 < 0 )
    {
LABEL_100:
      v45 = v38;
    }
    else if ( (byte_140081244 & 4) != 0 )
    {
      if ( is_mul_ok(*(unsigned int *)(v36 + 3192), *((_QWORD *)a1 + 359)) )
        v81 = (unsigned __int64)*(unsigned int *)(v36 + 3192) * *((_QWORD *)a1 + 359) / 0x989680;
      else
        LODWORD(v81) = *((_QWORD *)a1 + 359) * (*(_DWORD *)(v36 + 3192) / 0x989680u)
                     + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 3192) % 0x989680uLL) / 0x989680;
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v81,
          (unsigned int)&EventVSyncSmoothenedPeriod,
          (unsigned __int8)byte_140081244,
          v5,
          v45,
          *(_QWORD *)(v36 + 83112),
          v81);
    }
  }
  else
  {
    if ( is_mul_ok(*(unsigned int *)(v36 + 3192), *((_QWORD *)a1 + 359)) )
      v45 = (unsigned __int64)*(unsigned int *)(v36 + 3192) * *((_QWORD *)a1 + 359) / 0x989680;
    else
      v45 = *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 3192) / 0x989680uLL)
          + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 3192) % 0x989680uLL) / 0x989680;
    v22 = *((_BYTE *)a1 + 7058) == 0;
    v98 = 0LL;
    if ( v22
      || (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v36 + 44408), v45, &v98) < 0 )
    {
      v98 = v45;
    }
    else if ( (byte_140081244 & 4) != 0
           && (!is_mul_ok(*(unsigned int *)(v36 + 3192), *((_QWORD *)a1 + 359))
             ? (LODWORD(v83) = *((_QWORD *)a1 + 359) * (*(_DWORD *)(v36 + 3192) / 0x989680u)
                             + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v36 + 3192) % 0x989680uLL) / 0x989680)
             : (v83 = (unsigned __int64)*(unsigned int *)(v36 + 3192) * *((_QWORD *)a1 + 359) / 0x989680),
               (byte_140081244 & 4) != 0) )
    {
      v45 = v98;
      McTemplateK0qxxx_EtwWriteTransfer(
        v83,
        (unsigned int)&EventVSyncSmoothenedPeriod,
        (unsigned __int8)byte_140081244,
        v5,
        v98,
        *(_QWORD *)(v36 + 83112),
        v83);
    }
    else
    {
      v45 = v98;
    }
  }
  v22 = *((_BYTE *)a1 + 7065) == 0;
  *((_QWORD *)v9 + 7) = v45;
  if ( !v22 && v45 != 0xFFFFFFFF )
  {
    v47 = *((_QWORD *)a1 + 359);
    v48 = is_mul_ok(v45, 0x989680uLL)
        ? v45 * (unsigned __int128)0x989680uLL / v47
        : 10000000 * (v45 / v47) + 10000000 * (v45 % v47) / v47;
    if ( v48 > 0x989680 )
    {
      pullResult = 0LL;
      if ( RtlULongLongMult(v45, 0x989680uLL, &pullResult) >= 0 )
        v85 = pullResult / v84;
      else
        v85 = 10000000 * (v45 / v84) + 10000000 * (v45 % v84) / v84;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 260LL, v85, 0LL, 0LL);
      WdLogGlobalForLineNumber = 906;
      JUMPOUT(0x14000C70ALL);
    }
  }
  *((_DWORD *)v9 + 16) = *(_DWORD *)(*((_QWORD *)a1 + v5 + 429) + 83092LL);
}
