/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1404ED414
 * Callers:
 *     MiMoveZeroedPages @ 0x14020FE3C (MiMoveZeroedPages.c)
 * Callees:
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x140442050 (MiUpdatePageMoveInProgressInternal.c)
 *     MiHugePfnPartition @ 0x1404DA234 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x14066531C (MiLockHugeRangeColorHeadAtDpc.c)
 */

signed __int64 __fastcall MiHugeRangeFreeToZero(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  volatile signed __int64 *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r14

  v2 = a1 & 0x3FFFFF;
  v3 = (_QWORD *)(qword_140E2FD80 + 8 * v2);
  v4 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(v3);
  v5 = MiHugePfnPartition(v3);
  v6 = *(_QWORD *)(v5 + 16) + 57216LL * (unsigned int)MiPageToNode(v2 << 18);
  MiStopPageAccessor((ULONG_PTR)v3, 1LL, 0LL);
  MiUpdatePageMoveInProgressInternal(v6, 0, 1, 1);
  MiUnlinkHugeRange(v5, a1);
  _InterlockedAnd64(v4, 0xFFFFFFFFFFFFFFF7uLL);
  MiInsertHugeRangeInList(0LL, a1, 1LL);
  return MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
}
