/*
 * XREFs of ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140049C9C
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140045C20 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051E80 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall VidSchiSimulateProgressFenceCompletion(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  __int64 v5; // rbx
  LARGE_INTEGER *v6; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  char *v8; // r8
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
  v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6->LowPart = 9;
  v8 = (char *)a3 + 56;
  v6[1] = PerformanceCounter;
  if ( *((_DWORD *)a2 + 12) )
  {
    v6[3] = *(LARGE_INTEGER *)((char *)a2 + 768);
    *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 96);
    v9 = (unsigned __int64 *)*((_QWORD *)a2 + 98);
  }
  else
  {
    v6[*((unsigned int *)a2 + 314) + 3] = *(LARGE_INTEGER *)((char *)a2 + 1248);
    v8 += 24 * *((unsigned int *)a2 + 314);
    *((_QWORD *)v8 + 1) = *((_QWORD *)a2 + 156);
    v9 = (unsigned __int64 *)*((_QWORD *)a2 + 159);
  }
  v10 = *((_QWORD *)v8 + 1);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 24LL) + 48LL) )
  {
    if ( v10 > *v9 )
      *v9 = v10;
  }
  else if ( *(_DWORD *)v9 - (int)v10 < 0 )
  {
    *(_DWORD *)v9 = v10;
  }
  v6[2].QuadPart = (LONGLONG)a3;
  LOBYTE(v6[5].LowPart) = 1;
}
