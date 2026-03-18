/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x140016400
 * Callers:
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14000C3A4 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140014AA0 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1400150F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400426E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1400161A4 (McTemplateK0xx_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x1400162B8 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140018324 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriodQpc(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v8; // r8
  unsigned int v9; // r13d
  int v10; // edx
  double v11; // xmm1_8
  int v12; // eax
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  double v16; // xmm0_8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + a2 + 429);
  if ( *(_DWORD *)(v4 + 3192) == -1 )
    return *(_QWORD *)(v4 + 83112);
  if ( !*(_DWORD *)(v4 + 3192) || *(_DWORD *)(v4 + 3192) == *(_DWORD *)(v4 + 83096) )
  {
    if ( *(_DWORD *)(v4 + 83096) )
    {
      v19 = *((_QWORD *)a1 + 359);
      v20 = *(unsigned int *)(v4 + 83096);
      v21 = (*(unsigned int *)(v4 + 83096) * (unsigned __int128)v19) >> 64;
      if ( is_mul_ok(v20, v19) )
        v5 = v20 * v19 / 0x989680;
      else
        v5 = v19 * (v20 / 0x989680) + v19 * (v20 % 0x989680) / 0x989680;
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 83112);
    }
    if ( !a3 || !*((_BYTE *)a1 + 7058) )
      return v5;
    v23 = *(_QWORD *)(v4 + 44408);
    v8 = v23;
    v9 = _mm_getcsr();
    v10 = 0;
    v22 = v9 | 1;
    _mm_setcsr(v9 | 1);
    v11 = *(double *)(v23 + 24) + 0.5;
    v12 = (int)v11;
    if ( v11 < 0.0 )
      v12 = (int)((double)(1 - v12) + v11) - (1 - v12);
    v13 = (double)v12;
    v14 = 0LL;
    if ( v13 >= 9.223372036854776e18 )
    {
      v13 = v13 - 9.223372036854776e18;
      if ( v13 < 9.223372036854776e18 )
        v14 = 0x8000000000000000uLL;
    }
    v6 = v14 + (unsigned int)(int)v13;
    v15 = v6 - v5;
    if ( (__int64)(v6 - v5) < 0 )
      v15 = v5 - v6;
    if ( v15 > v5 >> 1 )
    {
      if ( (byte_140081244 & 4) != 0 )
      {
        McTemplateK0xx_EtwWriteTransfer();
        v8 = v23;
      }
      if ( (v5 & 0x8000000000000000uLL) != 0LL )
        v16 = (double)(int)(v5 & 1 | (v5 >> 1)) + (double)(int)(v5 & 1 | (v5 >> 1));
      else
        v16 = (double)(int)v5;
      *(double *)(v8 + 32) = v16;
      LinearFitT<256>::Reset(v8);
      v10 = -1073741823;
      v6 = 0LL;
    }
    v22 = v9;
    _mm_setcsr(v9);
    if ( v10 >= 0 )
    {
      if ( (byte_140081244 & 4) != 0 )
      {
        is_mul_ok(*(unsigned int *)(v4 + 3192), *((_QWORD *)a1 + 359));
        McTemplateK0qxxx_EtwWriteTransfer();
      }
    }
    else
    {
      return v5;
    }
  }
  else
  {
    v17 = *((_QWORD *)a1 + 359);
    v18 = *(unsigned int *)(v4 + 3192);
    v21 = 0LL;
    if ( is_mul_ok(v18, v17) )
      v6 = v18 * v17 / 0x989680;
    else
      v6 = v17 * (v18 / 0x989680) + v17 * (v18 % 0x989680) / 0x989680;
    v21 = 0LL;
    if ( a3
      && *((_BYTE *)a1 + 7058)
      && (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v4 + 44408), v6, &v21) >= 0 )
    {
      if ( (byte_140081244 & 4) != 0 )
      {
        is_mul_ok(*(unsigned int *)(v4 + 3192), *((_QWORD *)a1 + 359));
        v6 = v21;
        McTemplateK0qxxx_EtwWriteTransfer();
      }
      else
      {
        return v21;
      }
    }
  }
  return v6;
}
