/*
 * XREFs of RtlSetBitsEx @ 0x14026E120
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x14026DCA0 (RtlFindClearBitsAndSetEx.c)
 *     MiMirrorAddPagesToBrownList @ 0x14026E03C (MiMirrorAddPagesToBrownList.c)
 *     IopAddPageRangeToPageMaps @ 0x140590584 (IopAddPageRangeToPageMaps.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140599120 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140599870 (IopLiveDumpPopulateBitmapForDump.c)
 *     RtlpHpFixedHeapCreate @ 0x140602C10 (RtlpHpFixedHeapCreate.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14066F818 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x140670948 (MiAddPartitionHugeRange.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407F3514 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407F361C (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407F5A20 (MiPatchDataPagesCallback.c)
 *     MiSetVadBits @ 0x140919600 (MiSetVadBits.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiObtainRelocationBits @ 0x140A1A244 (MiObtainRelocationBits.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = byte_14002BBD0[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_140012870[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset_0(v6, 255, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_14002BBD0[v3];
      goto LABEL_4;
    }
  }
}
