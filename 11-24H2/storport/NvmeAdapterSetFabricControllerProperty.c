/*
 * XREFs of NvmeAdapterSetFabricControllerProperty @ 0x1400E7BA0
 * Callers:
 *     NvmeAdapterConfigureFabricController @ 0x1400DFB98 (NvmeAdapterConfigureFabricController.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E20B4 (NvmeAdapterEnableFabricController.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400E6500 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterSetFabricControllerProperty(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 NvmeSrb; // rax
  char *v7; // rdi
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // r8
  __int64 v14; // r9
  __int16 v15; // ax
  __int64 v16; // rcx
  const char *v17; // r11
  int v19; // [rsp+C8h] [rbp-60h]
  int v20; // [rsp+D8h] [rbp-50h]
  int v21; // [rsp+E8h] [rbp-40h]
  char v22; // [rsp+108h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v7 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 && (v9 = *(_DWORD *)(NvmeSrb + 56)) != 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = *(unsigned int *)(NvmeSrb + 4LL * v10 + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(NvmeSrb + 16) )
        {
          v12 = NvmeSrb + v11;
          if ( *(_DWORD *)(NvmeSrb + v11) == 67 )
            break;
        }
        if ( ++v10 >= v9 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v12 = 0LL;
    }
    memset_0((void *)(v12 + 16), 0, 0x40uLL);
    *(_BYTE *)(v12 + 56) &= 0xF8u;
    *(_BYTE *)(v12 + 16) = 127;
    *(_BYTE *)(v12 + 20) = 0;
    *(_DWORD *)(v12 + 60) = 20;
    *(_DWORD *)(v12 + 64) = a3;
    *(_BYTE *)(v12 + 80) = 2;
    *(_WORD *)(v12 + 106) = 0;
    v8 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (__int64)v7, v13, v14, 1, 0LL, 0LL, 0);
    if ( v8 < 0 || v7[3] != 1 || (v15 = *(_WORD *)(v12 + 86), (v15 & 0xE00) != 0) || (v15 & 0x1FE) != 0 )
    {
      if ( (byte_14017146A & 1) != 0 )
      {
        v16 = *(unsigned __int16 *)(v12 + 86);
        v17 = (const char *)&word_140150F48;
        if ( *(_QWORD *)(a1 + 752) )
          v17 = *(const char **)(a1 + 752);
        v22 = (unsigned __int16)v16 >> 1;
        LOWORD(v16) = (unsigned __int16)v16 >> 9;
        LOBYTE(v16) = v16 & 7;
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          v16,
          a1 + 841,
          a1 + 800,
          *(_DWORD *)(v3 + 56),
          v3 + 1032,
          *(const wchar_t **)(v3 + 1016),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v17,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Set Property Command",
          "PropertyOffset",
          20,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          v19,
          byte_140151064,
          v20,
          byte_140151064,
          v21,
          v8,
          v7[3],
          v16,
          v22);
      }
      v8 = -1073741823;
    }
    ExFreePoolWithTag(v7, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
