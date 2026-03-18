/*
 * XREFs of RtlSetBitsEx @ 0x14038E280
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     RtlFindClearBitsAndSetEx @ 0x14038DE00 (RtlFindClearBitsAndSetEx.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038E19C (MiMirrorAddPagesToBrownList.c)
 *     MiObtainDynamicVa @ 0x14038EB7C (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF764 (MiMarkSystemVaAllocated.c)
 *     IopAddPageRangeToPageMaps @ 0x14058FD68 (IopAddPageRangeToPageMaps.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140598A90 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405991E0 (IopLiveDumpPopulateBitmapForDump.c)
 *     RtlpHpFixedHeapCreate @ 0x1405F9290 (RtlpHpFixedHeapCreate.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140662B04 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x140663C58 (MiAddPartitionHugeRange.c)
 *     MiAddRangeToPartitionTree @ 0x14067E0AC (MiAddRangeToPartitionTree.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407E3058 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407E3160 (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407E54A0 (MiPatchDataPagesCallback.c)
 *     MiSetVadBits @ 0x14090116C (MiSetVadBits.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x1409405A0 (MiObtainRelocationBits.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA4ED0 (MiActOnMirrorBitmap.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
      v7 = byte_14002B070[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_1400127F8[v5];
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
      v7 = byte_14002B070[v3];
      goto LABEL_4;
    }
  }
}
