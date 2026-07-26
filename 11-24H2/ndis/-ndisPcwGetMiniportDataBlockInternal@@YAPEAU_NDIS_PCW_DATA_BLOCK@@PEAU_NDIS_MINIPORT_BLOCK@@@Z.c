/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401664E0
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x140069E80 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013F6CC (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1400483D0 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1400B1C78 (--$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14015EEF0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1401623D0 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v3; // ebp
  unsigned __int16 v4; // r15
  __int64 Pool2; // rax
  __int64 v6; // rsi
  unsigned int v7; // r9d
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // r14
  int MiniportInstanceId; // eax
  __int64 v12; // r9
  int v13; // r9d

  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v3 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v4 = pModifiedInstanceName->Length + 18;
    Pool2 = ExAllocatePool2(72LL, v3 + ndisPcwOffsetToPerCpuData + v4 * (ndisMaxNumberOfProcessors + 1), 2002994254LL);
    v6 = Pool2;
    if ( !Pool2 )
      return a1->PcwDataBlock;
    v7 = ndisMaxNumberOfProcessors;
    *(_QWORD *)(Pool2 + 176) = a1;
    *(_DWORD *)(Pool2 + 168) = 2;
    v8 = v3;
    v9 = 0;
    v10 = Pool2 + ndisPcwOffsetToPerCpuData + v8;
    if ( v7 )
    {
      while ( 1 )
      {
        ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)v6, v9);
        MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v9);
        *(_DWORD *)(v12 + 408) = MiniportInstanceId;
        *(_WORD *)(v12 + 416) = 0;
        *(_WORD *)(v12 + 418) = v4;
        *(_QWORD *)(v12 + 424) = v10 + v9 * v4;
        if ( ndisPcwGetInstanceName(a1, (const wchar_t *)v9, (struct _UNICODE_STRING *)(v12 + 416)) < 0 )
          break;
        if ( ++v9 >= ndisMaxNumberOfProcessors )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      *(_DWORD *)(v6 + 184) = ndisPcwGetMiniportInstanceId(a1, 4095);
      *(_WORD *)(v6 + 192) = 0;
      *(_WORD *)(v6 + 194) = v4;
      *(_QWORD *)(v6 + 200) = v10 + v13 * (unsigned int)v4;
      if ( ndisPcwGetInstanceName(a1, (const wchar_t *)0xFFF, (struct _UNICODE_STRING *)(v6 + 192)) >= 0 )
      {
        a1->IfBlock->PcwDataBlock = (struct _NDIS_PCW_DATA_BLOCK *)v6;
        mem::WriteRelease<_NDIS_PCW_DATA_BLOCK *,void>(&a1->Reserved4.Buffer, v6);
        *(_QWORD *)(v6 + 160) = ndisPcwDataBlockList;
        ndisPcwDataBlockList = (PVOID)v6;
        return a1->PcwDataBlock;
      }
    }
    ExFreePoolWithTag((PVOID)v6, 0);
    return a1->PcwDataBlock;
  }
  return a1->PcwDataBlock;
}
