/*
 * XREFs of NvmeNamespaceScsiSyncCacheRequest @ 0x140118B8C
 * Callers:
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 * Callees:
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400E8A7C (NvmeAdapterSubmitControllerNvmRequest.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceScsiSyncCacheRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r8d
  unsigned int v10; // r8d
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi

  v6 = 0LL;
  v7 = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
    v7 = -1073741637;
LABEL_16:
    *(_DWORD *)(v6 + 20) = 0;
    return v7;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 525LL) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a3 + 56);
    v6 = a3;
    if ( v10 )
    {
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        v12 = *(unsigned int *)(a3 + 4 * i + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(a3 + 16) )
        {
          v13 = a3 + v12;
          if ( *(_DWORD *)(a3 + v12) == 67 )
          {
            if ( !v13 )
              break;
            *(_DWORD *)(a3 + 20) = 10;
            memset_0((void *)(v13 + 8), 0, 0x64uLL);
            *(_DWORD *)(v13 + 20) = *(_DWORD *)(a1 + 56);
            v7 = NvmeAdapterSubmitControllerNvmRequest(
                   *(_QWORD *)(a1 + 16),
                   a3,
                   a2,
                   a1,
                   a5,
                   (__int64)NvmeNamespaceCompleteNvmRequest,
                   0LL);
            if ( (v7 & 0x80000000) == 0 )
              return v7;
            goto LABEL_16;
          }
        }
      }
    }
    SetSrbSenseData(a3, 6, 5, 36, 0);
    v7 = -1073741811;
    goto LABEL_16;
  }
  *(_BYTE *)(a3 + 3) = 1;
  return v7;
}
