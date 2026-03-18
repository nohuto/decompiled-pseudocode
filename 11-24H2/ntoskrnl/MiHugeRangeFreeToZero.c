/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1404F0BF0
 * Callers:
 *     MiMoveZeroedPages @ 0x14020B140 (MiMoveZeroedPages.c)
 * Callees:
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14043A010 (MiUpdatePageMoveInProgressInternal.c)
 *     MiHugePfnPartition @ 0x1404D91E4 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140670DC4 (MiLockHugeRangeColorHeadAtDpc.c)
 */

signed __int64 __fastcall MiHugeRangeFreeToZero(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  volatile signed __int64 *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r14

  v2 = a1 & 0x3FFFFF;
  v3 = (__int64 *)(qword_140E2FFC0 + 8 * v2);
  v4 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(v3);
  v5 = MiHugePfnPartition(v3);
  v6 = *(_QWORD *)(v5 + 16) + 57216LL * (unsigned int)MiPageToNode(v2 << 18);
  MiStopPageAccessor(v3, 1LL, 0LL);
  MiUpdatePageMoveInProgressInternal(v6, 0, 1, 1);
  MiUnlinkHugeRange(v5, a1);
  _InterlockedAnd64(v4, 0xFFFFFFFFFFFFFFF7uLL);
  MiInsertHugeRangeInList(0LL, a1, 1LL);
  return MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
}
