/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000C930
 * Callers:
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14002CD68 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x14002FA40 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003CF7C (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400410E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000C844 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x14000CDEC (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x14003E20C (McTemplateK0xx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriodQpc(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v9; // r8
  unsigned int v10; // r13d
  int v11; // edx
  double v12; // xmm1_8
  int v13; // eax
  double v14; // xmm0_8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  double v18; // xmm0_8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v5 = *((_QWORD *)a1 + a2 + 429);
  if ( *(_DWORD *)(v5 + 3192) == -1 )
    return *(_QWORD *)(v5 + 83112);
  if ( !*(_DWORD *)(v5 + 3192) || *(_DWORD *)(v5 + 3192) == *(_DWORD *)(v5 + 83096) )
  {
    if ( *(_DWORD *)(v5 + 83096) )
    {
      v21 = *((_QWORD *)a1 + 359);
      v22 = *(unsigned int *)(v5 + 83096);
      v24 = (*(unsigned int *)(v5 + 83096) * (unsigned __int128)v21) >> 64;
      if ( is_mul_ok(v22, v21) )
        v6 = v22 * v21 / 0x989680;
      else
        v6 = v21 * (v22 / 0x989680) + v21 * (v22 % 0x989680) / 0x989680;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 83112);
    }
    if ( !a3 || !*((_BYTE *)a1 + 7058) )
      return v6;
    v26 = *(_QWORD *)(v5 + 44408);
    v9 = v26;
    v10 = _mm_getcsr();
    v11 = 0;
    v25 = v10 | 1;
    _mm_setcsr(v10 | 1);
    v12 = *(double *)(v26 + 24) + 0.5;
    v13 = (int)v12;
    if ( v12 < 0.0 )
      v13 = (int)((double)(1 - v13) + v12) - (1 - v13);
    v14 = (double)v13;
    v15 = 0LL;
    if ( v14 >= 9.223372036854776e18 )
    {
      v14 = v14 - 9.223372036854776e18;
      if ( v14 < 9.223372036854776e18 )
        v15 = 0x8000000000000000uLL;
    }
    v7 = v15 + (unsigned int)(int)v14;
    v16 = v7 - v6;
    if ( (__int64)(v7 - v6) < 0 )
      v16 = v6 - v7;
    if ( v16 > v6 >> 1 )
    {
      if ( (byte_140081244 & 4) != 0 )
      {
        McTemplateK0xx_EtwWriteTransfer(v16, 0LL, v26, v7, v6);
        v9 = v26;
      }
      if ( (v6 & 0x8000000000000000uLL) != 0LL )
        v18 = (double)(int)(v6 & 1 | (v6 >> 1)) + (double)(int)(v6 & 1 | (v6 >> 1));
      else
        v18 = (double)(int)v6;
      *(double *)(v9 + 32) = v18;
      LinearFitT<256>::Reset(v9);
      v11 = -1073741823;
      v7 = 0LL;
    }
    v25 = v10;
    _mm_setcsr(v10);
    if ( v11 >= 0 )
    {
      if ( (byte_140081244 & 4) != 0 )
      {
        if ( is_mul_ok(*(unsigned int *)(v5 + 3192), *((_QWORD *)a1 + 359)) )
          v17 = (unsigned __int64)*(unsigned int *)(v5 + 3192) * *((_QWORD *)a1 + 359) / 0x989680;
        else
          LODWORD(v17) = *((_QWORD *)a1 + 359) * (*(_DWORD *)(v5 + 3192) / 0x989680u)
                       + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v5 + 3192) % 0x989680uLL) / 0x989680;
        if ( (byte_140081244 & 4) != 0 )
          McTemplateK0qxxx_EtwWriteTransfer(
            v17,
            (unsigned int)&EventVSyncSmoothenedPeriod,
            (unsigned __int8)byte_140081244,
            a2,
            v7,
            *(_QWORD *)(v5 + 83112),
            v17);
      }
    }
    else
    {
      return v6;
    }
  }
  else
  {
    v19 = *((_QWORD *)a1 + 359);
    v20 = *(unsigned int *)(v5 + 3192);
    v24 = 0LL;
    if ( is_mul_ok(v20, v19) )
      v7 = v20 * v19 / 0x989680;
    else
      v7 = v19 * (v20 / 0x989680) + v19 * (v20 % 0x989680) / 0x989680;
    v24 = 0LL;
    if ( a3
      && *((_BYTE *)a1 + 7058)
      && (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44408), v7, &v24) >= 0 )
    {
      if ( (byte_140081244 & 4) != 0
        && (is_mul_ok(*(unsigned int *)(v5 + 3192), *((_QWORD *)a1 + 359))
          ? (v23 = (unsigned __int64)*(unsigned int *)(v5 + 3192) * *((_QWORD *)a1 + 359) / 0x989680)
          : (LODWORD(v23) = *((_QWORD *)a1 + 359) * (*(_DWORD *)(v5 + 3192) / 0x989680u)
                          + *((_QWORD *)a1 + 359) * (*(unsigned int *)(v5 + 3192) % 0x989680uLL) / 0x989680),
            (byte_140081244 & 4) != 0) )
      {
        v7 = v24;
        McTemplateK0qxxx_EtwWriteTransfer(
          v23,
          (unsigned int)&EventVSyncSmoothenedPeriod,
          (unsigned __int8)byte_140081244,
          a2,
          v24,
          *(_QWORD *)(v5 + 83112),
          v23);
      }
      else
      {
        return v24;
      }
    }
  }
  return v7;
}
