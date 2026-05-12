/*
 * XREFs of CreateNVMeScatterGatherListBufferPool @ 0x140119A90
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     AllocateNVMeSGLBufferContext @ 0x1401194C0 (AllocateNVMeSGLBufferContext.c)
 *     DeleteNVMeScatterGatherListBufferPool @ 0x140119F40 (DeleteNVMeScatterGatherListBufferPool.c)
 */

__int64 __fastcall CreateNVMeScatterGatherListBufferPool(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  _DWORD *v5; // r14
  unsigned int v6; // eax
  __int64 Pool; // rax
  int v8; // r13d
  __int64 v9; // r8
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rdx
  int v12; // r12d
  unsigned int v13; // r13d
  struct _SLIST_ENTRY *NVMeSGLBufferContext; // rax
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h]

  v1 = 0;
  if ( (*(_QWORD *)(a1 + 136) & 0x100000000LL) != 0 )
    return 0LL;
  v4 = 128;
  v5 = g_CpuInfo;
  v6 = *(_DWORD *)(a1 + 8) >> 2;
  if ( v6 < 0x80 )
  {
    v4 = 32;
    if ( v6 > 0x20 )
      v4 = *(_DWORD *)(a1 + 8) >> 2;
  }
  Pool = RaidAllocatePool(
           72LL,
           8LL * *((unsigned int *)g_CpuInfo + 2),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 896) = Pool;
  if ( !Pool )
    goto LABEL_17;
  v8 = g_RecommendedSharedDataAlignment
     * (((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 64)
      / (unsigned int)g_RecommendedSharedDataAlignment);
  v16 = v8;
  v17 = RaidAllocatePool(72LL, (unsigned int)(v5[2] * v8), 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  v9 = v17;
  if ( !v17 )
    goto LABEL_17;
  v10 = 0;
  if ( v5[2] )
  {
LABEL_9:
    v11 = *(unsigned __int16 **)(56LL * v10 + *((_QWORD *)v5 + 4) + 48);
    if ( v11 )
      v12 = *v11;
    else
      v12 = 0x80000000;
    *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL * v10) = v9 + v8 * v10;
    InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * v10));
    v13 = 0;
    while ( 1 )
    {
      NVMeSGLBufferContext = (struct _SLIST_ENTRY *)AllocateNVMeSGLBufferContext(a1, v10, v12);
      if ( !NVMeSGLBufferContext )
        break;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * v10), NVMeSGLBufferContext);
      ++v13;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL * v10);
      ++*(_DWORD *)(v15 + 16);
      if ( v13 >= v4 )
      {
        if ( ++v10 >= v5[2] )
          return v1;
        v8 = v16;
        v9 = v17;
        goto LABEL_9;
      }
    }
LABEL_17:
    v1 = -1073741670;
    DeleteNVMeScatterGatherListBufferPool(a1);
  }
  return v1;
}
