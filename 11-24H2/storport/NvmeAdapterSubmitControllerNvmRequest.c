/*
 * XREFs of NvmeAdapterSubmitControllerNvmRequest @ 0x1400E8A7C
 * Callers:
 *     NvmeNamespaceScsiReadWriteRequest @ 0x1401189B0 (NvmeNamespaceScsiReadWriteRequest.c)
 *     NvmeNamespaceScsiSyncCacheRequest @ 0x140118B8C (NvmeNamespaceScsiSyncCacheRequest.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x140118CB8 (NvmeNamespaceScsiUnmapRequest.c)
 * Callees:
 *     NvmeAdapterAssignControllerIoQueue @ 0x1400DE9A0 (NvmeAdapterAssignControllerIoQueue.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400E631C (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 */

__int64 __fastcall NvmeAdapterSubmitControllerNvmRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rax
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  if ( *(_DWORD *)(a1 + 568) != 2 || **(_DWORD **)(a1 + 1288) )
    return 3221225996LL;
  v11 = NvmeAdapterAssignControllerIoQueue(a1);
  if ( !v11 )
    return 2147483665LL;
  if ( *(_BYTE *)(a2 + 2) == 40 && (v13 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(unsigned int *)(a2 + 4 * v14 + 120);
      if ( (unsigned int)v15 >= 0x80 && (unsigned int)v15 < *(_DWORD *)(a2 + 16) )
      {
        v16 = a2 + v15;
        if ( *(_DWORD *)v16 == 67 )
          break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v16 = 0LL;
  }
  *(_DWORD *)v16 = 67;
  *(_DWORD *)(v16 + 4) = 100;
  *(_BYTE *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 + 560);
  *(_WORD *)(v16 + 106) = *(_WORD *)(v11 + 136);
  if ( a6 )
    return NvmeAdapterProcessControllerQueueRequestAsync(v11, a2, 0, 0, 0, a3, a4, a5, a6, a7);
  else
    return NvmeAdapterProcessControllerQueueRequestSync(v11, a2, 0, 0LL, 0, a3, a4, a5);
}
