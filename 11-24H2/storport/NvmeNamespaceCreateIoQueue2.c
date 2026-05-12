/*
 * XREFs of NvmeNamespaceCreateIoQueue2 @ 0x1400FD3FC
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     NvmeNamespaceFreeIoQueueResources @ 0x140103920 (NvmeNamespaceFreeIoQueueResources.c)
 */

_DWORD *__fastcall NvmeNamespaceCreateIoQueue2(_QWORD *DeferredContext, char a2)
{
  char v2; // bp
  _QWORD *v3; // r13
  _DWORD *Pool; // rax
  _DWORD *v6; // rbx
  unsigned __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // r14d
  unsigned __int16 *v12; // rdx
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _KTIMER *v21; // rax
  struct _KDPC *v22; // rax
  unsigned int v24; // [rsp+80h] [rbp+8h]
  __int64 v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v2 = a2;
  v3 = g_CpuInfo;
  Pool = (_DWORD *)RaidAllocatePool(
                     72LL,
                     g_RecommendedSharedDataAlignment
                   * (unsigned int)(((unsigned int)(g_RecommendedSharedDataAlignment - 1)
                                   + 8 * ((unsigned __int64)*((unsigned int *)g_CpuInfo + 2) + 8))
                                  / (unsigned int)g_RecommendedSharedDataAlignment),
                     1296982354LL,
                     DeferredContext[1]);
  v6 = Pool;
  if ( Pool )
  {
    v7 = (unsigned int)g_RecommendedSharedDataAlignment;
    Pool[1] = 4096;
    v8 = 0LL;
    Pool[2] = 2048;
    Pool[3] = 3686;
    v9 = (unsigned int)(v7 - 1);
    v10 = (unsigned int)v7 * (unsigned int)((v9 + 128) / v7);
    v11 = v7 * ((v9 + 256) / v7);
    v27 = v11;
    v24 = v7 * ((v9 + 0x8000) / v7);
    if ( *((_DWORD *)v3 + 2) )
    {
      v26 = (unsigned int)v7 * (unsigned int)((v9 + 128) / v7);
      do
      {
        v12 = *(unsigned __int16 **)(56LL * (unsigned int)v8 + v3[4] + 48);
        v13 = v12 ? *v12 : 0x80000000;
        v14 = RaidAllocatePoolEx(72LL, v10, 1296982354LL, DeferredContext[1], v13);
        *(_QWORD *)&v6[2 * v8 + 16] = v14;
        if ( !v14 )
          goto LABEL_21;
        *(_QWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 32LL) = RaidAllocatePoolEx(
                                                            72LL,
                                                            v11,
                                                            1296982354LL,
                                                            DeferredContext[1],
                                                            v13);
        if ( !*(_QWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 32LL) )
          goto LABEL_21;
        v15 = 0LL;
        v16 = 16LL;
        do
        {
          InitializeSListHead((PSLIST_HEADER)(v15 + *(_QWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 32LL)));
          v15 += 16LL;
          --v16;
        }
        while ( v16 );
        *(_DWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 12LL) = 16;
        *(_QWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 56LL) = RaidAllocatePoolEx(
                                                            72LL,
                                                            v24,
                                                            1296982354LL,
                                                            DeferredContext[1],
                                                            v13);
        v17 = *(_QWORD *)&v6[2 * v8 + 16];
        if ( !*(_QWORD *)(v17 + 56) )
          goto LABEL_21;
        v2 = a2;
        *(_QWORD *)(v17 + 16) = v6;
        *(_QWORD *)(*(_QWORD *)&v6[2 * v8 + 16] + 24LL) = DeferredContext;
        if ( !a2 )
        {
          v18 = *(_QWORD *)(DeferredContext[2] + 1104LL);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * v8);
            if ( v19 )
            {
              *(_QWORD *)(v19 + 8LL * *(unsigned int *)(v19 + 4) + 264) = *(_QWORD *)&v6[2 * v8 + 16];
              v20 = *(_QWORD *)(*(_QWORD *)(DeferredContext[2] + 1104LL) + 8 * v8);
              ++*(_DWORD *)(v20 + 4);
            }
          }
        }
        v10 = v26;
        v8 = (unsigned int)(v8 + 1);
        v11 = v27;
      }
      while ( (unsigned int)v8 < *((_DWORD *)v3 + 2) );
    }
    *((_BYTE *)v6 + 20) = 0;
    if ( v2 )
    {
      *((_BYTE *)v6 + 21) |= 1u;
      v21 = (struct _KTIMER *)RaidAllocatePool(72LL, 64LL, 1296982354LL, DeferredContext[1]);
      *((_QWORD *)v6 + 4) = v21;
      if ( !v21
        || (KeInitializeTimer(v21),
            v22 = (struct _KDPC *)RaidAllocatePool(72LL, 64LL, 1296982354LL, DeferredContext[1]),
            (*((_QWORD *)v6 + 3) = v22) == 0LL) )
      {
LABEL_21:
        NvmeNamespaceFreeIoQueueResources(v6);
        return 0LL;
      }
      KeInitializeDpc(v22, NvmeLowPriorityIoDpcRoutine, DeferredContext);
      KeSetImportanceDpc(*((PRKDPC *)v6 + 3), MediumHighImportance);
    }
  }
  return v6;
}
