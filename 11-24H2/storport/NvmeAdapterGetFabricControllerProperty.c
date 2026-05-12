/*
 * XREFs of NvmeAdapterGetFabricControllerProperty @ 0x1400E3D90
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E20B4 (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     BuildNvmePropertyGetCommand @ 0x140119348 (BuildNvmePropertyGetCommand.c)
 */

__int64 __fastcall NvmeAdapterGetFabricControllerProperty(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 NvmeSrb; // rax
  char *v8; // rdi
  int v9; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rcx
  const char *v19; // rbx
  int v21; // [rsp+C8h] [rbp-70h]
  int v22; // [rsp+D8h] [rbp-60h]
  int v23; // [rsp+E8h] [rbp-50h]
  char v24; // [rsp+108h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v8 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 && (v10 = *(_DWORD *)(NvmeSrb + 56)) != 0 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int *)(NvmeSrb + 4LL * v11 + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(NvmeSrb + 16) )
        {
          v13 = NvmeSrb + v12;
          if ( *(_DWORD *)(NvmeSrb + v12) == 67 )
            break;
        }
        if ( ++v11 >= v10 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v13 = 0LL;
    }
    BuildNvmePropertyGetCommand(a2, v13 + 16);
    *(_BYTE *)(v13 + 80) = 2;
    *(_WORD *)(v13 + 106) = 0;
    v9 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (_DWORD)v8, v14, v15, 1, 0LL, 0LL, 0);
    if ( v9 < 0 || v8[3] != 1 || (v17 = *(_WORD *)(v13 + 86), (v17 & 0xE00) != 0) || (v17 & 0x1FE) != 0 )
    {
      if ( (byte_14017146A & 1) != 0 )
      {
        v18 = *(unsigned __int16 *)(v13 + 86);
        v19 = (const char *)&word_140150F48;
        if ( *(_QWORD *)(a1 + 752) )
          v19 = *(const char **)(a1 + 752);
        v24 = (unsigned __int16)v18 >> 1;
        LOWORD(v18) = (unsigned __int16)v18 >> 9;
        LOBYTE(v18) = v18 & 7;
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          v18,
          v16,
          a1 + 841,
          *(_DWORD *)(v3 + 56),
          v3 + 1032,
          *(const wchar_t **)(v3 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v19,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Get Property Command",
          "PropertyOffset",
          a2,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          v21,
          byte_140151064,
          v22,
          byte_140151064,
          v23,
          v9,
          v8[3],
          v18,
          v24);
      }
      v9 = -1073741823;
    }
    else
    {
      *a3 = *(_QWORD *)(v13 + 96);
    }
    ExFreePoolWithTag(v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
