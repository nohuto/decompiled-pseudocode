/*
 * XREFs of ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002D068
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x14005488C (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1F4 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     VidSchExitIndependentFlipInternal @ 0x14002EAA8 (VidSchExitIndependentFlipInternal.c)
 */

void __fastcall VidSchiSubmitNextFlipRange(struct HwQueueStagingList *a1, struct _VIDSCH_GLOBAL *a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v4; // esi
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF
  bool v18; // [rsp+90h] [rbp+18h] BYREF

  v3 = a3;
  v4 = -1;
  v7 = *((_QWORD *)a2 + a3 + 429);
  while ( v4 != *((_DWORD *)a2 + 38) )
  {
    v8 = *((_QWORD *)a2 + v3 + 429);
    v18 = 0;
    if ( v4 == -1 )
      v9 = *(_QWORD *)(v8 + 32);
    else
      v9 = *(_QWORD *)(v8 + 8LL * v4 + 40);
    if ( v9 )
    {
      if ( *(_DWORD *)(v7 + 3236) )
      {
        if ( *(_BYTE *)(v7 + 78948) )
        {
          VidSchiSubmitNextFlipQueueEntryRange(a1, a2, &v18, v3, (struct VIDSCH_FLIP_QUEUE *)v9);
          if ( v18 )
          {
            if ( !*(_BYTE *)(v9 + 80) )
            {
              v10 = *(int *)(*((_QWORD *)a2 + v3 + 429) + 304LL * *(unsigned int *)(v9 + 84) + 188);
              if ( (int)v10 > -1 )
              {
                v11 = *((_QWORD *)a2 + 445) + 160 * v10;
                if ( v11 )
                {
                  if ( (unsigned int)(*(_DWORD *)(v11 + 112) - 1) <= 1 )
                  {
                    v12 = *(_QWORD *)(v11 + 8);
                    v18 = 0;
                    LOBYTE(v14) = 0;
                    v17 = 0LL;
                    VidSchExitIndependentFlipInternal(a1, a2, v11, v12, 0, v14, &v18, &v17, v16);
                  }
                }
              }
            }
            if ( *((_BYTE *)a2 + 59) )
            {
              v15 = *(_DWORD *)(v9 + 76);
              v13 = ((_BYTE)v15 + 1) & 0x3F;
            }
            else
            {
              v15 = 63;
              v13 = 0;
            }
            VidSchiCompleteFlipEntry(a1, (__int64)a2, v3, v9, v13, v15, 9u, 0LL);
          }
        }
      }
    }
    ++v4;
  }
}
