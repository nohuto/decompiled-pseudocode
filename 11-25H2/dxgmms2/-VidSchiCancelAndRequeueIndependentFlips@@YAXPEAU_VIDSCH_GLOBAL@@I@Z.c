/*
 * XREFs of ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14000C610 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140014AA0 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140033820 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x1400542E4 (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x14005518C (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCancelAndRequeueIndependentFlips(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int i; // ebp
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // r12d
  unsigned int v17; // r13d
  __int64 v18; // r14
  __int64 v19; // rbx
  unsigned int v20; // r14d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // [rsp+50h] [rbp-68h]
  struct _VIDSCH_GLOBAL *v24; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-58h]
  unsigned int v26; // [rsp+64h] [rbp-54h]
  unsigned __int64 v28; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v24 = a1;
  v25 = a2;
  for ( i = -1; ; ++i )
  {
    v26 = i;
    if ( i == *((_DWORD *)a1 + 38) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v24);
    v6 = (__int64)FlipQueue;
    if ( FlipQueue )
    {
      if ( !*((_BYTE *)FlipQueue + 80) )
      {
        v23 = v2;
        v7 = *(int *)(304LL * i + *((_QWORD *)a1 + v2 + 429) + 188);
        if ( (int)v7 > -1 )
        {
          if ( *((_QWORD *)a1 + 445) + 160 * v7 )
          {
            v8 = *(unsigned int *)(v6 + 68);
            v9 = *(_DWORD *)(1400 * v8 + v6 + 1172);
            if ( (v9 == 5 || v9 == 15) && (*(_DWORD *)(1400 * v8 + v6 + 1272) & 0x2000) != 0 )
            {
              while ( (_DWORD)v8 != (((unsigned __int8)*(_DWORD *)(v6 + 72) + 1) & 0x3F) )
              {
                v10 = 1400LL * (unsigned int)v8;
                if ( (*(_DWORD *)(v10 + v6 + 1272) & 0x100000) == 0 )
                {
                  v11 = v10 + v6 + 120;
                  if ( v11 )
                  {
                    v12 = *(_QWORD *)(v11 + 1192);
                    v28 = 0LL;
                    v13 = *(_QWORD *)(v12 + 24);
                    v14 = VidSchiCancelQueuedFlips(a1, v2, i, v13, &v28, 3u);
                    if ( v14 < 0 || (v15 = v28, v28 < v13) )
                    {
                      WdLogSingleEntry3(3LL, v14, i, v13);
                      WdLogGlobalForLineNumber = 1588;
                    }
                    else
                    {
                      LODWORD(v28) = *(_DWORD *)(v6 + 72);
                      v16 = ((_BYTE)v28 + 1) & 0x3F;
                      while ( 1 )
                      {
                        if ( (_DWORD)v8 == v16 )
                        {
                          v17 = -1;
                          LODWORD(v8) = -1;
                          v18 = 0xFFFFFFFFLL;
                          goto LABEL_23;
                        }
                        if ( *(_QWORD *)(*(_QWORD *)(1400LL * (unsigned int)v8 + v6 + 1312) + 24LL) == v15 )
                          break;
                        LODWORD(v8) = ((_BYTE)v8 + 1) & 0x3F;
                      }
                      v17 = v8;
                      v29 = *(unsigned int *)(v6 + 68);
                      if ( (_DWORD)v8 == (_DWORD)v29 )
                        goto LABEL_24;
                      v18 = ((_BYTE)v8 - 1) & 0x3F;
LABEL_23:
                      v29 = v18;
                      do
                      {
LABEL_24:
                        v19 = 1400LL * v17;
                        VidSchiDecrementPendingFlipsForFlipEntry(
                          a1,
                          *((struct _VIDSCH_PRESENT_INFO **)a1 + v23 + 429),
                          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + v6 + 120));
                        *(_DWORD *)(v19 + v6 + 1272) |= 0x100000u;
                        *(_DWORD *)(v19 + v6 + 1172) = 2;
                        *(_QWORD *)(v19 + v6 + 1184) = ++*(_QWORD *)(v6 + 88);
                        VidSchiUpdateFlipQueueHistory(7, (__int64)a1, a2, v6, v17);
                        v17 = ((_BYTE)v17 + 1) & 0x3F;
                      }
                      while ( v17 != v16 );
                      v20 = v29;
                      v2 = a2;
                      if ( (byte_140081244 & 4) != 0 )
                        McTemplateK0pqqqqq_EtwWriteTransfer(
                          *((_QWORD *)a1 + v23 + 429),
                          1400 * v28,
                          1400 * v8,
                          *((_QWORD *)a1 + 2),
                          a2,
                          i,
                          *(_DWORD *)(1400LL * (unsigned int)v8 + v6 + 1168),
                          *(_DWORD *)(1400LL * (unsigned int)v28 + v6 + 1168),
                          *(_DWORD *)(*((_QWORD *)a1 + v23 + 429) + 3248LL));
                      v21 = *(_DWORD *)(v6 + 64);
                      while ( v21 != *(_DWORD *)(v6 + 56) )
                      {
                        ++*(_QWORD *)(v6 + 88);
                        v22 = 1400LL * v21;
                        v21 = ((_BYTE)v21 + 1) & 0x3F;
                        *(_QWORD *)(v22 + v6 + 1184) = *(_QWORD *)(v6 + 88);
                      }
                      VidSchiSetNextFlipEarliestIdealTime(
                        a1,
                        a2,
                        (struct VIDSCH_FLIP_QUEUE *)v6,
                        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v6 + 1400LL * v20 + 120));
                      *(_DWORD *)(v6 + 72) = v20;
                      *(_DWORD *)(v6 + 64) = v8;
                    }
                  }
                  break;
                }
                LODWORD(v8) = ((_BYTE)v8 + 1) & 0x3F;
              }
            }
          }
        }
      }
    }
  }
}
