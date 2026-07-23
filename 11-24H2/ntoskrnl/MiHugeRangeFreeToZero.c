/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1404EE690
 * Callers:
 *     MiMoveZeroedPages @ 0x140332F20 (MiMoveZeroedPages.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14042CA30 (MiUpdatePageMoveInProgressInternal.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140671F94 (MiLockHugeRangeColorHeadAtDpc.c)
 */

signed __int64 __fastcall MiHugeRangeFreeToZero(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  volatile signed __int64 *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r9

  v2 = a1 & 0x3FFFFF;
  v3 = (__int64 *)(qword_140E30100 + 8 * v2);
  v4 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(v3);
  v5 = MiHugePfnPartition(v3);
  v6 = *(_QWORD *)(v5 + 16) + 57216LL * (unsigned int)MiPageToNode(v2 << 18);
  MiStopPageAccessor(v3, 1LL, 0LL, v7);
  MiUpdatePageMoveInProgressInternal(v6, 0, 1, 1);
  MiUnlinkHugeRange(v5, a1);
  _InterlockedAnd64(v4, 0xFFFFFFFFFFFFFFF7uLL);
  MiInsertHugeRangeInList(0LL, a1, 1LL);
  return MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
}
