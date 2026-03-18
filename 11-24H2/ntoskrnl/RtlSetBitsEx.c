/*
 * XREFs of RtlSetBitsEx @ 0x1403A4600
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403A4180 (RtlFindClearBitsAndSetEx.c)
 *     MiMirrorAddPagesToBrownList @ 0x1403A451C (MiMirrorAddPagesToBrownList.c)
 *     MiObtainDynamicVa @ 0x1403A58DC (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF744 (MiMarkSystemVaAllocated.c)
 *     IopAddPageRangeToPageMaps @ 0x140593560 (IopAddPageRangeToPageMaps.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14059C1A0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14059C8F0 (IopLiveDumpPopulateBitmapForDump.c)
 *     RtlpHpFixedHeapCreate @ 0x1406055D0 (RtlpHpFixedHeapCreate.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14066E644 (MiPhysicalMemoryEverRemoved.c)
 *     MiAddPartitionHugeRange @ 0x14066F778 (MiAddPartitionHugeRange.c)
 *     MiAddRangeToPartitionTree @ 0x14068993C (MiAddRangeToPartitionTree.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407F2EE0 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1407F2FE8 (MiIdentifyPatchImageDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407F5330 (MiPatchDataPagesCallback.c)
 *     MiSetVadBits @ 0x1408E2A50 (MiSetVadBits.c)
 *     MiObtainRelocationBits @ 0x1408F6BB0 (MiObtainRelocationBits.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA9E60 (MiActOnMirrorBitmap.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
      v7 = byte_14002B770[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_140012BB8[v5];
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
      v7 = byte_14002B770[v3];
      goto LABEL_4;
    }
  }
}
