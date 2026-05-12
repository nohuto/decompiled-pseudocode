/*
 * XREFs of NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011536C
 * Callers:
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010C0D0 (NvmeNamespaceRemoveDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 */

__int64 __fastcall NvmeNamespaceWaitForPendingRequestsDrain(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // r12d
  char v8; // r13
  char v9; // di
  int v11; // eax
  unsigned int v12; // eax
  __int64 i; // r15
  __int64 v14; // rsi
  unsigned int v15; // ebp
  __int64 v16; // rdi
  __int64 v18; // [rsp+60h] [rbp+8h]
  _DWORD *v19; // [rsp+78h] [rbp+20h]

  v3 = g_CpuInfo;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 256);
  v6 = 0LL;
  v7 = 0;
  v19 = g_CpuInfo;
  v8 = 0;
  v18 = v5;
  v9 = a3;
  if ( a3 )
  {
    v11 = NvmeAdapterAcquireRemoveLock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL));
    v5 = v18;
    v4 = v11;
    if ( v11 < 0 )
      v9 = 0;
    else
      v8 = 1;
  }
  v12 = v3[3];
  for ( i = 0LL; (unsigned int)i < v12; v12 = v3[3] )
  {
    if ( v9 )
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL) + 8 * i);
    while ( **(_DWORD **)(v5 + 8 * i + 64) )
    {
      StorDelayExecution(0x3E8u);
      v7 += 1000;
      if ( v7 >= 0x989680 )
      {
LABEL_22:
        v4 = -1073741643;
        goto LABEL_23;
      }
      v5 = v18;
    }
    if ( v9 )
      _InterlockedExchange64((volatile __int64 *)(v6 + 8LL * *(unsigned int *)(a1 + 56) + 264), 0LL);
    i = (unsigned int)(i + 1);
  }
  if ( FeatureFixFUAForReadIoPerf )
  {
    v14 = *(_QWORD *)(a1 + 264);
    v15 = 0;
    if ( v14 )
    {
      v16 = 0LL;
      if ( v12 )
      {
        do
        {
          while ( **(_DWORD **)(v14 + 8 * v16 + 64) )
          {
            StorDelayExecution(0x3E8u);
            v15 += 1000;
            if ( v15 >= 0x989680 )
              goto LABEL_22;
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < v19[3] );
      }
    }
  }
LABEL_23:
  if ( v8 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL)
                                                                        + 152LL));
  return v4;
}
