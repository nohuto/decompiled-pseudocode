/*
 * XREFs of ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000E520
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1F4 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002E470 (-VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUV.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400426E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003BB54 (-VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z.c)
 *     McTemplateK0qqqqqqqqq_EtwWriteTransfer @ 0x14004128C (McTemplateK0qqqqqqqqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiCheckPendingFlipsForThisEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        unsigned int **a3,
        struct VIDSCH_FLIP_QUEUE *a4)
{
  int v4; // r15d
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v6; // rcx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v8; // r11
  struct _VIDSCH_PRESENT_INFO *v9; // r10
  unsigned int *v10; // r13
  char v11; // bl
  unsigned int i; // r9d
  int v13; // esi
  int v14; // r9d
  int v15; // r12d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  bool v19; // zf
  int v20; // eax
  char v21; // cl
  unsigned int v22; // r9d
  int v23; // eax
  unsigned int v24; // ecx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  int v30; // eax
  int v31; // [rsp+30h] [rbp-31h]
  char v32; // [rsp+38h] [rbp-29h]
  int v33; // [rsp+40h] [rbp-21h]
  int v34; // [rsp+48h] [rbp-19h]
  int v35; // [rsp+50h] [rbp-11h]
  struct _VIDSCH_GLOBAL *v36; // [rsp+68h] [rbp+7h] BYREF
  unsigned int *v37; // [rsp+70h] [rbp+Fh]
  unsigned int v38; // [rsp+78h] [rbp+17h]
  unsigned int v39; // [rsp+7Ch] [rbp+1Bh]
  int v40; // [rsp+80h] [rbp+1Fh]
  unsigned int v41; // [rsp+84h] [rbp+23h]
  unsigned int v42; // [rsp+88h] [rbp+27h]

  v4 = *((_DWORD *)a2 + 6);
  v6 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)a2 + 15);
  v8 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)a3;
  v9 = a2;
  if ( v6 && v6 != (struct _VIDSCH_FLIP_QUEUE_ENTRY *)a3
    || (v6 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)a1 + 473)) != 0LL
    && v6 != (struct _VIDSCH_FLIP_QUEUE_ENTRY *)a3 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    LOBYTE(v35) = 0;
    v34 = *((_DWORD *)a2 + 812);
    v33 = *((_DWORD *)v6 + 262);
    v26 = *((_DWORD *)a3 + 262);
    v32 = 0;
LABEL_48:
    LOBYTE(v31) = v26;
    v27 = *((_DWORD *)a4 + 21);
LABEL_49:
    McTemplateK0qqqqqqqqq_EtwWriteTransfer(
      (_DWORD)v6,
      (_DWORD)a2,
      (_DWORD)a3,
      v4,
      v27,
      v31,
      v32,
      v33,
      v34,
      v35,
      0,
      -1,
      v36,
      v37);
    return 1;
  }
  v10 = a3[149];
  LODWORD(a3) = *((_DWORD *)a3 + 288);
  if ( ((unsigned __int8)a3 & 0x10) != 0 )
  {
    LODWORD(a2) = ((unsigned __int16)*v10 | (unsigned __int16)(*v10 >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v6) = *((_DWORD *)a1 + 38);
    LODWORD(a2) = (1 << (char)v6) - 1;
  }
  if ( !*((_BYTE *)a1 + 156) )
    goto LABEL_11;
  LODWORD(v6) = *((_DWORD *)v9 + 813);
  if ( ((unsigned int)v6 & (unsigned int)a2) != 0 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    LOBYTE(v35) = *((_DWORD *)v9 + 813);
    v34 = *((_DWORD *)v9 + 812);
    v26 = *((_DWORD *)v8 + 262);
    LOBYTE(v33) = 0;
    v32 = 1;
    goto LABEL_48;
  }
  if ( !*((_BYTE *)a1 + 59)
    && *((_DWORD *)a1 + 40) > 1u
    && *((_DWORD *)v9 + 1) != 3
    && ((unsigned __int16)a3 & 0x180) == 0x80 )
  {
    return 0;
  }
LABEL_11:
  v11 = -1;
  if ( ((unsigned int)a3 & 0x60000) != 0 )
  {
    i = -1;
    if ( ((unsigned int)a3 & 0x40000) != 0 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
      {
        v6 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)a1 + i + 429);
        if ( v6 && *((_DWORD *)v6 + 812) )
        {
          LODWORD(v6) = (unsigned int)a3 & 0x20000;
          goto LABEL_72;
        }
      }
    }
    else
    {
      LODWORD(v6) = (unsigned int)a3 & 0x20000;
      if ( ((unsigned int)a3 & 0x20000) != 0 && *((_DWORD *)v9 + 812) )
      {
LABEL_72:
        if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
          return 1;
        LODWORD(a2) = *((_DWORD *)v9 + 813);
        if ( (_DWORD)v6 )
        {
          v30 = *((_DWORD *)v9 + 812);
        }
        else
        {
          v6 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)*((_QWORD *)a1 + i + 429);
          v30 = *((_DWORD *)v6 + 812);
        }
        LOBYTE(v35) = *((_DWORD *)v9 + 813);
        LOBYTE(v34) = v30;
        LODWORD(a3) = (((unsigned int)a3 & 0x20000) == 0) | 2;
        LOBYTE(v33) = 0;
        v32 = (char)a3;
        goto LABEL_55;
      }
    }
  }
  v13 = *((_DWORD *)v9 + 812);
  if ( (v13 & (unsigned int)a2) == 0 )
    return 0;
  if ( !*((_BYTE *)a1 + 59) )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v35 = *((_DWORD *)v9 + 813);
    LOBYTE(v34) = *((_DWORD *)v9 + 812);
    LOBYTE(v33) = 0;
    v32 = 4;
    goto LABEL_55;
  }
  if ( ((unsigned __int8)a3 & 0x20) == 0
    || ((unsigned __int16)a3 & 0x2000) == 0 && !VidSchiFlipOverwriteEligible(v9, v8)
    || ((unsigned int)a3 & 0x100000) != 0 )
  {
    return 1;
  }
  if ( ((unsigned __int16)a3 & 0x1000) != 0 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v35 = *((_DWORD *)v9 + 813);
    LOBYTE(v34) = v13;
    LOBYTE(v33) = 0;
    v32 = 5;
    goto LABEL_55;
  }
  if ( *((_DWORD *)v8 + 263) == 14 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
      return 1;
    v35 = *((_DWORD *)v9 + 813);
    LOBYTE(v34) = v13;
    LOBYTE(v33) = 0;
    v32 = 6;
    goto LABEL_55;
  }
  v14 = *((_DWORD *)v8 + 289);
  if ( v14 && v14 != *((_DWORD *)v9 + 20774) )
  {
    if ( (*v10 & 0x3FF) != 0 && *((_DWORD *)v9 + 798) != v14 )
      goto LABEL_41;
    goto LABEL_27;
  }
  v15 = *((_DWORD *)v9 + 798);
  if ( !v15
    || (((unsigned __int8)a3 & 0x10) == 0
      ? (LODWORD(v6) = *((_DWORD *)a1 + 38), LODWORD(a2) = (1 << (char)v6) - 1)
      : (LODWORD(a2) = ((unsigned __int16)*v10 | (unsigned __int16)(*v10 >> 10)) & 0x3FF),
        !_bittest((const int *)&a2, *((_DWORD *)v9 + 799)) || v15 == v14) )
  {
LABEL_27:
    v16 = *v10;
    v17 = *v10 & 0x3FF;
    v36 = a1;
    v37 = v10;
    v38 = v17;
    if ( *((_BYTE *)a1 + 156) )
      v18 = (v16 >> 10) & 0x3FF;
    else
      v18 = 0;
    v19 = !_BitScanForward((unsigned int *)&v20, v17);
    v21 = -1;
    v39 = v18;
    v40 = 0;
    if ( !v19 )
      v21 = v20;
    v22 = v21;
    v19 = !_BitScanForward((unsigned int *)&v23, v18);
    v41 = v21;
    if ( !v19 )
      v11 = v23;
    v24 = v11;
    v42 = v11;
    while ( v17 || v18 )
    {
      if ( v22 < v24 )
        v24 = v22;
      v28 = 304LL * v24;
      v29 = *(_DWORD *)((char *)v9 + v28 + 200);
      if ( v29 >= *((_DWORD *)a1 + 15) )
      {
        if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          McTemplateK0qqqqqqqqq_EtwWriteTransfer(
            *((_DWORD *)a4 + 21),
            v28,
            v29,
            v4,
            *((_DWORD *)a4 + 21),
            *((_DWORD *)v8 + 262),
            8,
            0,
            *((_DWORD *)v9 + 812),
            *((_DWORD *)v9 + 813),
            v29,
            v24,
            v36,
            v37);
        return 1;
      }
      if ( (*((_DWORD *)v8 + 288) & 0x20) == 0 && *(_DWORD *)((char *)v9 + v28 + 204) )
        return 1;
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v36);
      v24 = v42;
      v18 = v39;
      v17 = v38;
      v22 = v41;
    }
    return 0;
  }
LABEL_41:
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v35 = *((_DWORD *)v9 + 813);
    LOBYTE(v34) = v13;
    LOBYTE(v33) = 0;
    v32 = 7;
LABEL_55:
    v31 = *((_DWORD *)v8 + 262);
    v27 = *((_DWORD *)a4 + 21);
    goto LABEL_49;
  }
  return 1;
}
