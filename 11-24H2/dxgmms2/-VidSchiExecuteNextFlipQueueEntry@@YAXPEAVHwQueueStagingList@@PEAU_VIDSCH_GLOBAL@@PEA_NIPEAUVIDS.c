/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002EEFC (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiRestartQueuedFlip @ 0x140031464 (VidSchiRestartQueuedFlip.c)
 *     VidSchiVirtualizeFlipInterval @ 0x140031584 (VidSchiVirtualizeFlipInterval.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400410E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r14
  struct _VIDSCH_PRESENT_INFO *v9; // r15
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v10; // rdi
  bool v11; // zf
  unsigned int v12; // esi
  struct _VIDSCH_PRESENT_INFO *v13; // r13
  char *v14; // r15
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  struct HwQueueStagingList *v18; // rsi
  int v19; // eax
  char i; // si
  unsigned int v21; // esi
  _DWORD *v22; // r15
  int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v26; // [rsp+40h] [rbp-18h] BYREF
  struct HwQueueStagingList *v27; // [rsp+A0h] [rbp+48h]
  struct _VIDSCH_PRESENT_INFO *v28; // [rsp+A8h] [rbp+50h]
  unsigned int v30; // [rsp+B8h] [rbp+60h] BYREF

  v30 = a4;
  v27 = a1;
  v5 = a5;
  v7 = a4;
  v8 = *((unsigned int *)a5 + 16);
  v9 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a4 + 429);
  v28 = v9;
  v10 = (struct VIDSCH_FLIP_QUEUE *)((char *)a5 + 1400 * v8 + 120);
  LODWORD(a5) = *((_DWORD *)a5 + 16);
  v11 = *((_DWORD *)v9 + 809) == 0;
  v26 = v10;
  if ( !v11 )
  {
    v12 = ((_BYTE)v8 + 1) & 0x3F;
    if ( v12 != (_DWORD)v8 )
    {
      v13 = v9;
      do
      {
        v14 = (char *)v5 + 1400 * v12 + 120;
        v15 = *((_DWORD *)v14 + 263);
        if ( (unsigned int)(v15 - 2) > 1 && v15 != 14
          || VidSchiCheckPendingFlipsForThisEntry(
               a2,
               v13,
               (struct VIDSCH_FLIP_QUEUE *)((char *)v5 + 1400 * v12 + 120),
               v5) )
        {
          break;
        }
        if ( v14[1076] )
        {
          LODWORD(v8) = v12;
          LODWORD(a5) = v12;
          v10 = (struct VIDSCH_FLIP_QUEUE *)((char *)v5 + 1400 * v12 + 120);
          v26 = v10;
        }
        v12 = ((_BYTE)v12 + 1) & 0x3F;
      }
      while ( v12 != *((_DWORD *)v5 + 16) );
      v7 = v30;
      v9 = v28;
      a1 = v27;
    }
    v16 = *((unsigned int *)v5 + 16);
    if ( (_DWORD)v8 == (_DWORD)v16 )
    {
      v17 = *((_DWORD *)v10 + 263);
      if ( (unsigned int)(v17 - 2) <= 1 || v17 == 14 )
      {
        if ( !*((_BYTE *)a2 + 59) )
        {
          v10 = v26;
          LODWORD(v8) = (_DWORD)a5;
          *((_QWORD *)v26 + 138) = MEMORY[0xFFFFF78000000320];
        }
        if ( !VidSchiCheckPendingFlipsForThisEntry(a2, v9, v10, v5) )
        {
          v19 = *((_DWORD *)v10 + 288);
          if ( (v19 & 0x2000) != 0 )
          {
            v18 = v27;
            VidSchiSelectPresentAtFlip(v27, a2, v7, v5, (unsigned int *)&a5, &v26);
            LODWORD(v8) = (_DWORD)a5;
            v10 = v26;
LABEL_11:
            if ( *((_DWORD *)v10 + 263) == 4 )
            {
              LOBYTE(v30) = 0;
              VidSchiExecuteMmIoFlip(v18, a2, v7, v5, v8, a3, &v30);
            }
            return;
          }
          if ( !*((_DWORD *)v5 + 28) )
          {
            if ( (v19 & 0x80u) != 0 )
            {
              for ( i = *((_DWORD *)v5 + 16) + 1; ; i = v21 + 1 )
              {
                v21 = i & 0x3F;
                if ( v21 == *((_DWORD *)v5 + 16) )
                  break;
                v22 = (_DWORD *)((char *)v5 + 1400 * v21);
                v23 = v22[293];
                if ( v23 != 2 && v23 != 14 )
                  break;
                if ( VidSchiCheckPendingFlipsForThisEntry(a2, v28, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v22 + 30), v5) )
                  break;
                v25 = v22[318];
                v10 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v22 + 30);
                LODWORD(v8) = v21;
                if ( (v25 & 0x80u) == 0 )
                {
                  if ( (v25 & 0x1000) != 0 )
                    v22[318] = v25 & 0xFFFFEFFF;
                  break;
                }
              }
              v24 = *((_DWORD *)v5 + 16);
              v18 = v27;
              if ( (_DWORD)v8 != v24 )
              {
                LOBYTE(v30) = 0;
                VidSchiCompleteFlipEntry(v27, (__int64)a2, v7, (__int64)v5, v24, ((_BYTE)v8 - 1) & 0x3F, 6u, &v30);
              }
              v9 = v28;
            }
            else
            {
              v18 = v27;
            }
            VidSchiVirtualizeFlipInterval(v9, v10);
            *((_DWORD *)v10 + 263) = 4;
            goto LABEL_11;
          }
          *((_DWORD *)v10 + 263) = 3;
        }
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(a1, *((_QWORD *)v5 + 175 * v16 + 145), v7, v5, v8);
      *((_DWORD *)v10 + 263) = 4;
    }
    v18 = v27;
    goto LABEL_11;
  }
}
