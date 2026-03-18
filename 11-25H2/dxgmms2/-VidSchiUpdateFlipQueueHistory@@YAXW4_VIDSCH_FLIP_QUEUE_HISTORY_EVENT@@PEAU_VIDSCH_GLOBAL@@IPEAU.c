/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiRestartQueuedFlip @ 0x14002E36C (VidSchiRestartQueuedFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(int a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rbx
  void *v11; // rcx
  __int64 v12; // r15
  bool v13; // zf
  __int64 result; // rax
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  int v17; // ebp
  char v18; // cl
  int v19; // eax
  __int64 v20; // r12
  char v21; // cl
  int v22; // eax
  unsigned int v23; // r14d
  char v24; // cl
  int v25; // eax
  char v26; // cl
  int v27; // eax

  v8 = *(_QWORD *)(a2 + 8LL * a3 + 3432);
  v9 = *(unsigned int *)(v8 + 144);
  v10 = *(_QWORD *)(v8 + 136) + 112 * v9;
  *(_DWORD *)(v8 + 144) = (v9 + 1) & (*(_DWORD *)(v8 + 128) - 1);
  v11 = *(void **)(v10 + 72);
  if ( v11 )
    memset(v11, 0, 8LL * *(unsigned int *)(a2 + 152));
  *(_DWORD *)v10 = a1;
  v12 = 1400LL * a5;
  *(_DWORD *)(v10 + 16) = **(_DWORD **)(v12 + a4 + 1312) & 0x3FF;
  *(_DWORD *)(v10 + 20) = (**(_DWORD **)(v12 + a4 + 1312) >> 10) & 0x3FF;
  *(_BYTE *)(v10 + 24) = *(_BYTE *)(a4 + 80);
  *(_DWORD *)(v10 + 28) = a5;
  *(LARGE_INTEGER *)(v10 + 8) = KeQueryPerformanceCounter(0LL);
  v13 = *(_QWORD *)(v10 + 72) == 0LL;
  *(_BYTE *)(v10 + 36) = (*(_DWORD *)(v12 + a4 + 1272) & 0x20) != 0;
  *(_DWORD *)(v10 + 40) = *(_DWORD *)(v12 + a4 + 1172);
  *(_DWORD *)(v10 + 32) = *(_DWORD *)(v12 + a4 + 1176);
  *(_DWORD *)(v10 + 44) = *(_DWORD *)(v12 + a4 + 1276);
  *(_DWORD *)(v10 + 48) = *(_DWORD *)(v8 + 3192);
  *(_QWORD *)(v10 + 56) = *(_QWORD *)(v12 + a4 + 1432);
  *(_QWORD *)(v10 + 64) = *(_QWORD *)(v12 + a4 + 1440);
  if ( !v13 && ((a1 - 1) & 0xFFFFFFFD) == 0 )
  {
    v15 = **(_DWORD **)(v12 + a4 + 1312) & 0x3FF;
    if ( *(_BYTE *)(a2 + 156) )
      v16 = (**(_DWORD **)(v12 + a4 + 1312) >> 10) & 0x3FF;
    else
      v16 = 0;
    v17 = 0;
    v18 = -1;
    v13 = !_BitScanForward((unsigned int *)&v19, v15);
    if ( !v13 )
      v18 = v19;
    v20 = (unsigned int)v18;
    v21 = -1;
    v13 = !_BitScanForward((unsigned int *)&v22, v16);
    if ( !v13 )
      v21 = v22;
    v23 = v21;
    while ( v15 || v16 )
    {
      if ( (unsigned int)v20 >= v23 )
      {
        v26 = -1;
        v16 &= ~(1 << v23);
        v13 = !_BitScanForward((unsigned int *)&v27, v16);
        if ( !v13 )
          v26 = v27;
        v23 = v26;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 72) + 8 * v20) = *(_QWORD *)(v17
                                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v12 + a4 + 1312) + 8LL)
                                                                   + 231) & 0xFFFFFFF8)
                                                                 + *(_QWORD *)(v12 + a4 + 1312)
                                                                 + 24LL);
        v24 = -1;
        v15 &= ~(1 << v20);
        v13 = !_BitScanForward((unsigned int *)&v25, v15);
        if ( !v13 )
          v24 = v25;
        v20 = (unsigned int)v24;
      }
      ++v17;
    }
  }
  *(_DWORD *)(v10 + 84) = *(_DWORD *)(v8 + 3252);
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(v8 + 3248);
  *(_DWORD *)(v10 + 88) = *(_DWORD *)(a4 + 56);
  *(_DWORD *)(v10 + 92) = *(_DWORD *)(a4 + 60);
  *(_DWORD *)(v10 + 96) = *(_DWORD *)(a4 + 64);
  *(_DWORD *)(v10 + 100) = *(_DWORD *)(a4 + 68);
  *(_DWORD *)(v10 + 104) = *(_DWORD *)(a4 + 72);
  result = *(unsigned int *)(a4 + 76);
  *(_DWORD *)(v10 + 108) = result;
  return result;
}
