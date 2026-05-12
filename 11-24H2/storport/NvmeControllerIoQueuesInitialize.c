/*
 * XREFs of NvmeControllerIoQueuesInitialize @ 0x1400F159C
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerCompletionQueueInit @ 0x1400EBB48 (NvmeControllerCompletionQueueInit.c)
 *     NvmeControllerInitializeCQIoPolling @ 0x1400F0530 (NvmeControllerInitializeCQIoPolling.c)
 *     NvmeControllerInitializeCompletionQueueDPC @ 0x1400F07B4 (NvmeControllerInitializeCompletionQueueDPC.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400F5828 (NvmeControllerSubmissionQueueInit.c)
 *     CreateNVMePrpListBufferPool @ 0x140119754 (CreateNVMePrpListBufferPool.c)
 *     CreateNVMeSplitIoContextPool @ 0x140119C4C (CreateNVMeSplitIoContextPool.c)
 *     StorInitOutstandingRequestBitmap @ 0x140127530 (StorInitOutstandingRequestBitmap.c)
 *     NvmeControllerCreateNVMCommandZombieLists @ 0x140129230 (NvmeControllerCreateNVMCommandZombieLists.c)
 */

__int64 __fastcall NvmeControllerIoQueuesInitialize(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // r13d
  __int64 Pool; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int NVMePrpListBufferPool; // ebx
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-18h]
  unsigned int v21; // [rsp+48h] [rbp-10h]
  unsigned int v22; // [rsp+A0h] [rbp+48h]
  __int64 v23; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+60h]

  if ( *(_WORD *)(a1 + 26) && *(_WORD *)(a1 + 22) )
  {
    v2 = 16 * *(_DWORD *)(a1 + 8);
    v3 = *(_DWORD *)(a1 + 8) << 6;
    v22 = v2;
    v21 = v3;
    Pool = RaidAllocatePool(
             72LL,
             (unsigned __int64)*(unsigned __int16 *)(a1 + 26) << 7,
             1380147538LL,
             *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    *(_QWORD *)(a1 + 864) = Pool;
    if ( Pool
      && (v9 = RaidAllocatePool(
                 72LL,
                 192LL * *(unsigned __int16 *)(a1 + 22),
                 1380147538LL,
                 *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
          (*(_QWORD *)(a1 + 728) = v9) != 0LL)
      && (v20 = RaidAllocatePool(
                  72LL,
                  16 * *(unsigned int *)(a1 + 8) * (unsigned __int64)*(unsigned __int16 *)(a1 + 22),
                  1380147538LL,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) != 0
      && (v25 = RaidAllocatePool(
                  72LL,
                  (*(unsigned __int16 *)(a1 + 22) * (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 8) - 1)) << 7,
                  1380147538LL,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) != 0 )
    {
      v10 = 0;
      if ( *(_WORD *)(a1 + 22) )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(a1 + 728);
          v23 = 0LL;
          v24 = 0LL;
          v12 = 192LL * v10;
          v13 = v12 + v11;
          *(_QWORD *)(v13 + 88) = a1;
          *(_DWORD *)(v13 + 124) = *(_DWORD *)(a1 + 8);
          NVMePrpListBufferPool = NvmeAllocateDmaBuffer(a1, v3, v6, (void **)&v24, &v23, 1);
          if ( NVMePrpListBufferPool < 0 )
            break;
          NvmeControllerSubmissionQueueInit(
            a1,
            v13,
            v10 + 1,
            v24,
            v23,
            v20 + 16 * v10 * (unsigned __int64)*(unsigned int *)(a1 + 8),
            v25 + ((v10 * (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 8) - 1)) << 7));
          InitializeSListHead((PSLIST_HEADER)(v13 + 64));
          v14 = 0;
          if ( *(_DWORD *)(a1 + 8) != 1 )
          {
            do
            {
              v15 = (unsigned __int64)v14 << 7;
              *(_WORD *)(v15 + *(_QWORD *)(v13 + 32) + 54) = v14;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 64), (PSLIST_ENTRY)(v15 + *(_QWORD *)(v13 + 32)));
              ++v14;
            }
            while ( v14 < *(_DWORD *)(a1 + 8) - 1 );
            v3 = v21;
          }
          StorInitOutstandingRequestBitmap(v12 + *(_QWORD *)(a1 + 728));
          if ( ++v10 >= *(unsigned __int16 *)(a1 + 22) )
          {
            v2 = v22;
            goto LABEL_17;
          }
        }
      }
      else
      {
LABEL_17:
        v16 = 0;
        if ( *(_WORD *)(a1 + 26) )
        {
          while ( v16 < *(unsigned __int16 *)(a1 + 22) )
          {
            v23 = 0LL;
            v17 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)v16 << 7);
            v24 = 0LL;
            *(_QWORD *)(v17 + 48) = a1;
            NVMePrpListBufferPool = NvmeAllocateDmaBuffer(a1, v2, v6, (void **)&v24, &v23, 1);
            if ( NVMePrpListBufferPool < 0 )
              goto LABEL_5;
            NvmeControllerCompletionQueueInit(a1, v17, v16 + 1, v24, v23);
            NVMePrpListBufferPool = NvmeControllerInitializeCompletionQueueDPC(v19, v18);
            if ( NVMePrpListBufferPool < 0 )
              goto LABEL_5;
            NVMePrpListBufferPool = NvmeControllerInitializeCQIoPolling((_QWORD *)a1, v17);
            if ( NVMePrpListBufferPool < 0 )
              goto LABEL_5;
            ++v16;
            v2 = v22;
            if ( v16 >= *(unsigned __int16 *)(a1 + 26) )
              break;
          }
        }
        NVMePrpListBufferPool = CreateNVMePrpListBufferPool(a1);
        if ( NVMePrpListBufferPool >= 0 )
        {
          NVMePrpListBufferPool = CreateNVMeSplitIoContextPool(a1);
          if ( NVMePrpListBufferPool >= 0 )
          {
            NVMePrpListBufferPool = NvmeControllerCreateNVMCommandZombieLists(a1);
            if ( NVMePrpListBufferPool >= 0 )
              return 0;
          }
        }
      }
    }
    else
    {
      NVMePrpListBufferPool = -1073741670;
    }
LABEL_5:
    NvmeControllerIoQueuesFreeResources(a1, v5, v6);
    return (unsigned int)NVMePrpListBufferPool;
  }
  return 3221225701LL;
}
