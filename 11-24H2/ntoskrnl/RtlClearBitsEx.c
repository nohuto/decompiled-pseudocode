/*
 * XREFs of RtlClearBitsEx @ 0x140261AD0
 * Callers:
 *     MiGetHighestUltraLevel @ 0x140261644 (MiGetHighestUltraLevel.c)
 *     MiClearVadCellBits @ 0x1402618D4 (MiClearVadCellBits.c)
 *     RtlFindSetBitsAndClearEx @ 0x140261B90 (RtlFindSetBitsAndClearEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140262A88 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiMakeSystemRangeAvailable @ 0x1403A5094 (MiMakeSystemRangeAvailable.c)
 *     MiExtendDynamicBitMap @ 0x1403A7584 (MiExtendDynamicBitMap.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1404293F0 (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x140487E14 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpFixedVsFree @ 0x14049D650 (RtlpHpFixedVsFree.c)
 *     MiMarkSystemVaAllocated @ 0x1404CF744 (MiMarkSystemVaAllocated.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     IopAddPageRangeToPageMaps @ 0x140593560 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1405950E0 (IopRemovePageFromPageMap.c)
 *     RtlShiftLeftBitMapEx @ 0x1405E83E0 (RtlShiftLeftBitMapEx.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiClearMirrorBitmaps @ 0x1406729C0 (MiClearMirrorBitmaps.c)
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14068993C (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140689E64 (MiClearRangeInPartitionTree.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1288 (MiApplyHotPatchToDriverDataPages.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiReturnImageBase @ 0x1408F6610 (MiReturnImageBase.c)
 *     MiObtainRelocationBits @ 0x1408F6BB0 (MiObtainRelocationBits.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiActOnMirrorBitmap @ 0x140AA9E60 (MiActOnMirrorBitmap.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 *     MiInitializeUltraSpace @ 0x140C5C4D0 (MiInitializeUltraSpace.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
      v7 = ~(byte_14002B770[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_14002B770[v5];
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
      v7 = byte_140012BB8[v3];
      goto LABEL_4;
    }
  }
}
