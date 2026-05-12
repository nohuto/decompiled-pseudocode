/*
 * XREFs of NvmeControllerInitializeAdminQueue @ 0x1400F02F4
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerAdminQueuesFreeResources @ 0x1400EA548 (NvmeControllerAdminQueuesFreeResources.c)
 *     NvmeControllerCompletionQueueInit @ 0x1400EBB48 (NvmeControllerCompletionQueueInit.c)
 *     NvmeControllerInitializeCompletionQueueDPC @ 0x1400F07B4 (NvmeControllerInitializeCompletionQueueDPC.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400F5828 (NvmeControllerSubmissionQueueInit.c)
 *     StorInitOutstandingRequestBitmap @ 0x140127530 (StorInitOutstandingRequestBitmap.c)
 */

__int64 __fastcall NvmeControllerInitializeAdminQueue(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  unsigned int v4; // eax
  __int64 v5; // r9
  __int64 Pool; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // r8
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 712);
  v2 = *(_QWORD *)(a1 + 856);
  v19 = 0LL;
  *(_QWORD *)(v1 + 88) = a1;
  v4 = *(unsigned __int16 *)(a1 + 6);
  *(_DWORD *)(v1 + 124) = v4;
  v5 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  Pool = RaidAllocatePool(72LL, 16LL * v4, 1363763538LL, *(_QWORD *)(v5 + 8));
  *(_QWORD *)(v1 + 24) = Pool;
  if ( !Pool
    || (v11 = RaidAllocatePool(
                72LL,
                (unsigned __int64)(unsigned int)(*(_DWORD *)(v1 + 124) - 1) << 7,
                1363763538LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
        (*(_QWORD *)(v1 + 32) = v11) == 0LL) )
  {
    v9 = -1073741670;
LABEL_3:
    NvmeControllerAdminQueuesFreeResources(a1, v7, v8);
    return (unsigned int)v9;
  }
  InitializeSListHead((PSLIST_HEADER)(v1 + 64));
  v13 = 0;
  if ( *(_DWORD *)(v1 + 124) != 1 )
  {
    do
    {
      v14 = (unsigned __int64)v13 << 7;
      *(_WORD *)(v14 + *(_QWORD *)(v1 + 32) + 54) = v13;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v1 + 64), (PSLIST_ENTRY)(v14 + *(_QWORD *)(v1 + 32)));
      ++v13;
    }
    while ( v13 < *(_DWORD *)(v1 + 124) - 1 );
  }
  *(_WORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 16) = *(_QWORD *)(a1 + 920) + 4096LL;
  *(_QWORD *)(v2 + 48) = a1;
  *(_WORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 920) + 4096LL + *(unsigned int *)(a1 + 1216);
  v15 = *(_DWORD *)(v1 + 124);
  v16 = v15 << 6;
  v17 = 16 * v15;
  v9 = NvmeAllocateDmaBuffer(a1, v16, v12, (void **)&v20, &v19, 1);
  if ( v9 < 0 )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    NvmeControllerQueryStorMQProperty(a1, 2147483650LL, 4LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL) = 0;
  }
  NvmeControllerSubmissionQueueInit(a1, v1, 0, v20, v19, 0LL, 0LL);
  v20 = 0LL;
  v19 = 0LL;
  StorInitOutstandingRequestBitmap(v1);
  v9 = NvmeAllocateDmaBuffer(a1, v17, v18, (void **)&v20, &v19, 1);
  if ( v9 < 0 )
    goto LABEL_3;
  NvmeControllerCompletionQueueInit(a1, v2, 0, v20, v19);
  v9 = NvmeControllerInitializeCompletionQueueDPC();
  if ( v9 < 0 )
    goto LABEL_3;
  return 0LL;
}
