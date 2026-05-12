/*
 * XREFs of NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterGetControllerNvmSetData @ 0x1400E3960 (NvmeAdapterGetControllerNvmSetData.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetControllerIdentifyData(
        __int64 a1,
        int a2,
        char a3,
        __int16 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v9; // bp
  int v11; // r15d
  unsigned int v12; // edi
  __int64 NvmeSrb; // r14
  void *Pool; // r12
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  __int16 v20; // ax
  const char *v21; // rbp
  int v23; // [rsp+C8h] [rbp-A0h]
  int v24; // [rsp+D8h] [rbp-90h]
  int v25; // [rsp+E8h] [rbp-80h]
  unsigned __int16 v26; // [rsp+170h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 128);
  v7 = 0LL;
  v9 = 0;
  v26 = 0;
  if ( !a3 || a3 == 1 || a3 == 2 || a3 == 3 )
  {
LABEL_11:
    v12 = 4096;
    goto LABEL_12;
  }
  if ( a3 != 4 )
  {
    if ( a3 != 5 && a3 != 6 )
    {
      if ( a3 != 28 )
        return (unsigned int)-1073741808;
      v9 = -1;
      v26 = -1;
    }
    goto LABEL_11;
  }
  v12 = 4224;
LABEL_12:
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  if ( NvmeSrb )
  {
    Pool = (void *)RaidAllocatePool(64LL, v12, 1380147538LL, *(_QWORD *)(v6 + 8));
    if ( Pool )
    {
      if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
      {
        v15 = *(_DWORD *)(NvmeSrb + 56);
        if ( v15 )
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = *(unsigned int *)(NvmeSrb + 4LL * v16 + 120);
            if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(NvmeSrb + 16) )
            {
              v7 = NvmeSrb + v17;
              if ( *(_DWORD *)(NvmeSrb + v17) == 67 )
                break;
            }
            if ( ++v16 >= v15 )
            {
              v7 = 0LL;
              break;
            }
          }
        }
      }
      memset_0((void *)(v7 + 16), 0, 0x40uLL);
      *(_DWORD *)(v7 + 20) = a2;
      *(_WORD *)(v7 + 60) = a4;
      *(_BYTE *)(v7 + 63) = a5;
      *(_BYTE *)(v7 + 16) = 6;
      *(_WORD *)(v7 + 58) = v9;
      *(_BYTE *)(v7 + 56) = a3;
      *(_DWORD *)(NvmeSrb + 60) = v12;
      *(_QWORD *)(NvmeSrb + 64) = Pool;
      *(_DWORD *)(NvmeSrb + 24) = 64;
      *(_BYTE *)(v7 + 80) = 1;
      *(_WORD *)(v7 + 82) = 1;
      *(_WORD *)(v7 + 106) = 0;
      v11 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), NvmeSrb, v18, v19, 1, 0LL, 0LL, 0);
      if ( v11 < 0
        || *(_BYTE *)(NvmeSrb + 3) != 1
        || (v20 = *(_WORD *)(v7 + 86), (v20 & 0xE00) != 0)
        || (v20 & 0x1FE) != 0 )
      {
        if ( (byte_14017146A & 1) != 0 )
        {
          v21 = (const char *)&word_140150F48;
          if ( *(_QWORD *)(a1 + 752) )
            v21 = *(const char **)(a1 + 752);
          McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
            v6,
            v26,
            a5,
            *(_DWORD *)(v6 + 56),
            v6 + 1032,
            *(const wchar_t **)(v6 + 1016),
            *(const char **)(a1 + 792),
            *(_WORD *)(a1 + 4),
            0,
            *(_BYTE *)(a1 + 744),
            v21,
            (const char *)(a1 + 800),
            (const char *)(a1 + 841),
            "Identify Command",
            "NamespaceId",
            a2,
            "IdentifyCNS",
            a3,
            "IdentifyCNSSpecificId",
            a4,
            "CommandSetId",
            a5,
            "ControllerId",
            v26,
            byte_140151064,
            v23,
            byte_140151064,
            v24,
            byte_140151064,
            v25,
            v11,
            *(_BYTE *)(NvmeSrb + 3),
            (*(_WORD *)(v7 + 86) >> 9) & 7,
            *(_WORD *)(v7 + 86) >> 1);
        }
        v11 = -1073741823;
        ExFreePoolWithTag(Pool, 0x52436152u);
      }
      else
      {
        *a6 = Pool;
      }
    }
    else
    {
      v11 = -1073741801;
    }
    ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
