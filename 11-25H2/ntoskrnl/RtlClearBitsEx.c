/*
 * XREFs of RtlClearBitsEx @ 0x1402A9FB0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     RtlFindSetBitsAndClearEx @ 0x1402A9760 (RtlFindSetBitsAndClearEx.c)
 *     MiGetHighestUltraLevel @ 0x1402A9B28 (MiGetHighestUltraLevel.c)
 *     MiClearVadCellBits @ 0x1402A9DB8 (MiClearVadCellBits.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1402AA064 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x14038E334 (MiMakeSystemRangeAvailable.c)
 *     MiExtendDynamicBitMap @ 0x1403905A4 (MiExtendDynamicBitMap.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140430070 (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x140488134 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpFixedVsFree @ 0x14049E570 (RtlpHpFixedVsFree.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF764 (MiMarkSystemVaAllocated.c)
 *     IopAddPageRangeToPageMaps @ 0x14058FD68 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1405918E0 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405DC330 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiClearMirrorBitmaps @ 0x140666F10 (MiClearMirrorBitmaps.c)
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14067E0AC (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14067E5D4 (MiClearRangeInPartitionTree.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407E13E8 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x140940000 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x1409405A0 (MiObtainRelocationBits.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA4ED0 (MiActOnMirrorBitmap.c)
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 *     MiInitializeUltraSpace @ 0x140C4B150 (MiInitializeUltraSpace.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = ~(byte_14002B070[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_14002B070[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset_0(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_1400127F8[v3];
      goto LABEL_4;
    }
  }
}
