/*
 * XREFs of RtlClearBitsEx @ 0x1402920E0
 * Callers:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiMarkSystemVaAllocated @ 0x14026B454 (MiMarkSystemVaAllocated.c)
 *     MiMakeSystemRangeAvailable @ 0x14026C384 (MiMakeSystemRangeAvailable.c)
 *     MiExtendDynamicBitMap @ 0x14026ECB4 (MiExtendDynamicBitMap.c)
 *     MiGetHighestUltraLevel @ 0x140291C54 (MiGetHighestUltraLevel.c)
 *     MiClearVadCellBits @ 0x140291EE4 (MiClearVadCellBits.c)
 *     RtlFindSetBitsAndClearEx @ 0x1402921A0 (RtlFindSetBitsAndClearEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x140482E84 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpFixedVsFree @ 0x140498450 (RtlpHpFixedVsFree.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     IopAddPageRangeToPageMaps @ 0x140590584 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x140592104 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405E59D0 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiClearMirrorBitmaps @ 0x140673B90 (MiClearMirrorBitmaps.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14068AF94 (MiClearRangeInPartitionTree.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1858 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MiReturnImageBase @ 0x1409D83E0 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x140A1A244 (MiObtainRelocationBits.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MiInitializeUltraSpace @ 0x140C5E660 (MiInitializeUltraSpace.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      v7 = ~(byte_14002BBD0[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_14002BBD0[v5];
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
      v7 = byte_140012870[v3];
      goto LABEL_4;
    }
  }
}
