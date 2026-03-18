/*
 * XREFs of ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1400301B8
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x14002EAA8 (VidSchExitIndependentFlipInternal.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x14002FEC4 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x14002CF08 (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x1400542E4 (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 */

void __fastcall VidSchiCancelIndependentFlipsHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        bool *a5,
        unsigned int *a6,
        char a7,
        unsigned int a8)
{
  __int64 v8; // r12
  unsigned int *v10; // r13
  unsigned int v11; // r14d
  int v13; // ebx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  unsigned int *v18; // r9
  __int64 v19; // rdi
  int v20; // eax
  unsigned int i; // edx
  int v22; // r8d
  unsigned int v23; // eax
  int v24; // ecx
  bool *v25; // r14
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+20h] BYREF

  v8 = *((int *)a4 + 21);
  v10 = a6;
  v11 = a3;
  v29 = *((_DWORD *)a4 + 21);
  v13 = -1;
  v14 = 1400LL * *a6;
  v27 = *((_QWORD *)a2 + a3 + 429);
  v26 = 304 * v8;
  v15 = *(_DWORD *)((char *)a4 + v14 + 1172);
  if ( v15 != 15 && v15 != 5 || (*(_DWORD *)((_BYTE *)a4 + v14 + 1272) & 0x2000) == 0 )
  {
    v13 = *a6;
    goto LABEL_4;
  }
  v19 = *(_QWORD *)((char *)a4 + v14 + 1312);
  v31 = 0LL;
  v20 = VidSchiCancelQueuedFlips(a2, a3, v8, *(_QWORD *)(v19 + 24), &v31, a8);
  if ( v20 >= 0 && v31 >= *(_QWORD *)(v19 + 24) )
  {
    i = *v10;
    if ( v31 != *(_QWORD *)(v19 + 24) )
    {
      for ( i = ((_BYTE)i + 1) & 0x3F; i != (((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F); i = ((_BYTE)i + 1) & 0x3F )
      {
        if ( *(_QWORD *)(*((_QWORD *)a4 + 175 * i + 164) + 24LL) == v31 )
          goto LABEL_24;
      }
      goto LABEL_9;
    }
LABEL_24:
    v13 = i;
LABEL_4:
    if ( v13 != -1 )
    {
      v16 = v13;
      v17 = (a7 + 1) & 0x3F;
      if ( v13 != v17 )
      {
        v25 = a5;
        do
        {
          VidSchiCompleteFlipEntry(a1, (__int64)a2, a3, (__int64)a4, v16, v16, 0xCu, v25);
          v16 = ((_BYTE)v16 + 1) & 0x3F;
        }
        while ( v16 != v17 );
        LODWORD(v8) = v29;
        v10 = a6;
        v11 = a3;
      }
      v18 = (unsigned int *)(*(_QWORD *)(v27 + v26 + 392) + 1LL);
      a6 = v18;
      if ( *(_DWORD *)(v27 + v26 + 196) )
      {
        VidSchiRecalculateInterruptTargetForFlipQueue(a2, a4, v8, (unsigned __int64 *)&a6);
        v18 = a6;
      }
      VidSchiSetInterruptTargetPresentId(a2, v11, v8, (unsigned __int64)v18, 0, 0);
    }
    goto LABEL_9;
  }
  WdLogSingleEntry3(3LL, v20, v8, *(_QWORD *)(v19 + 24));
  i = *((_DWORD *)a4 + 16);
  v22 = *((_DWORD *)a4 + 14);
  WdLogGlobalForLineNumber = 3178;
  while ( i != v22 )
  {
    v23 = *((_DWORD *)a4 + 350 * i + 293);
    if ( v23 > 0xC || (v24 = 4673, !_bittest(&v24, v23)) )
    {
      if ( v23 != 13 )
        goto LABEL_24;
    }
    i = ((_BYTE)i + 1) & 0x3F;
  }
LABEL_9:
  *v10 = v13;
}
