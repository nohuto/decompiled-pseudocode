/*
 * XREFs of ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x14000AFE0
 * Callers:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14000B550 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400410E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000C844 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x14000CF94 (McTemplateK0qxxxxiq_EtwWriteTransfer.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x14003E20C (McTemplateK0xx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall VidSchiGetSmoothenedFrameTimeQpc(
        struct _VIDSCH_PRESENT_INFO *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned __int64 a3,
        int a4)
{
  unsigned __int64 v5; // r14
  __int64 v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // ebp
  int v12; // edx
  double v13; // xmm1_8
  int v14; // eax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  double v17; // xmm0_8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  int v25; // [rsp+48h] [rbp-40h]

  v5 = a3;
  if ( !*((_BYTE *)a2 + 7058) )
    return v5;
  v8 = *((_QWORD *)a2 + *((unsigned int *)a1 + 6) + 429);
  if ( *(_DWORD *)(v8 + 3192) == -1 )
    goto LABEL_5;
  if ( *(_DWORD *)(v8 + 3192) && *(_DWORD *)(v8 + 3192) != *(_DWORD *)(v8 + 83096) )
  {
    v24 = *(unsigned int *)(v8 + 3192);
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(v8 + 83096) )
  {
LABEL_5:
    v9 = *(_QWORD *)(v8 + 83112);
    goto LABEL_6;
  }
  v24 = *(unsigned int *)(v8 + 83096);
LABEL_34:
  if ( is_mul_ok(v24, *((_QWORD *)a2 + 359)) )
  {
    v9 = v24 * *((_QWORD *)a2 + 359) / 0x989680;
  }
  else
  {
    a3 = 0xD6BF94D5E57A42BDuLL;
    v9 = *((_QWORD *)a2 + 359) * (v24 / 0x989680) + *((_QWORD *)a2 + 359) * (v24 % 0x989680) / 0x989680;
  }
LABEL_6:
  v10 = *((_QWORD *)a1 + 5551);
  v11 = _mm_getcsr();
  v12 = 0;
  _mm_setcsr(v11 | 1);
  v13 = (double)(a4 - *(_DWORD *)(v10 + 40)) * *(double *)(v10 + 24)
      + (double)(int)*(_QWORD *)(v10 + 48)
      + *(double *)(v10 + 16)
      + 0.5;
  v14 = (int)v13;
  if ( v13 < 0.0 )
    v14 = (int)((double)(1 - v14) + v13) - (1 - v14);
  v15 = (unsigned int)(int)(double)v14;
  v16 = v15 - v5;
  if ( (__int64)(v15 - v5) < 0 )
    v16 = v5 - v15;
  if ( v16 > v9 >> 1 )
  {
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0xx_EtwWriteTransfer(v16, 0LL, a3, v9, v9);
    if ( (v9 & 0x8000000000000000uLL) != 0LL )
      v17 = (double)(int)(v9 & 1 | (v9 >> 1)) + (double)(int)(v9 & 1 | (v9 >> 1));
    else
      v17 = (double)(int)v9;
    *(double *)(v10 + 32) = v17;
    LinearFitT<256>::Reset(v10);
    v12 = -1073741823;
    v15 = 0LL;
  }
  _mm_setcsr(v11);
  if ( v12 < 0 )
    return v5;
  if ( (byte_140081244 & 4) != 0 )
  {
    v19 = *((_QWORD *)a2 + 359);
    v20 = v15 - v5;
    if ( (__int64)(v15 - v5) < 0 )
    {
      if ( is_mul_ok(v5 - v15, 0x989680uLL) )
        v22 = (v5 - v15) * (unsigned __int128)0x989680uLL / v19;
      else
        v22 = 10000000 * ((v5 - v15) / v19) + 10000000 * ((v5 - v15) % v19) / v19;
      v21 = -(__int64)v22;
    }
    else if ( is_mul_ok(v20, 0x989680uLL) )
    {
      v21 = v20 * (unsigned __int128)0x989680uLL / v19;
    }
    else
    {
      LOBYTE(v21) = ((unsigned __int8)(v20 / v19) << 7) + 10000000 * (v20 % v19) / v19;
    }
    if ( is_mul_ok(v15, 0x989680uLL) )
      v19 = v15 * (unsigned __int128)0x989680uLL / v19;
    else
      LOBYTE(v19) = ((unsigned __int8)(v15 / v19) << 7) + 10000000 * (v15 % v19) / v19;
    if ( (byte_140081244 & 4) != 0 )
    {
      v23 = *((_QWORD *)a1 + 5551);
      v25 = *(_DWORD *)(v23 + 8);
      McTemplateK0qxxxxiq_EtwWriteTransfer(
        v23,
        v25,
        (unsigned __int8)byte_140081244,
        *((_DWORD *)a1 + 6),
        a4,
        v5,
        v15,
        v19,
        v21,
        v25,
        0LL);
    }
  }
  return v15;
}
