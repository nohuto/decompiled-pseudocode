/*
 * XREFs of MiSnapPageMoveInProgress @ 0x140393280
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiGetPartitionNodePageCounts @ 0x1403930FC (MiGetPartitionNodePageCounts.c)
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSnapPageMoveInProgress(__int64 a1, char a2)
{
  __int64 v2; // rax

  if ( (a2 & 4) != 0 )
  {
    v2 = 15208LL;
    return *(_QWORD *)(v2 + a1);
  }
  if ( (a2 & 1) != 0 )
  {
    v2 = 15200LL;
    return *(_QWORD *)(v2 + a1);
  }
  return *(_QWORD *)(a1 + 15192);
}
