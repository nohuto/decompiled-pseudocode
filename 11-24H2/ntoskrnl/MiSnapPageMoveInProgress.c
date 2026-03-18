/*
 * XREFs of MiSnapPageMoveInProgress @ 0x1403D598C
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiGetPartitionNodePageCounts @ 0x1403D5894 (MiGetPartitionNodePageCounts.c)
 *     MiGetHugeRange @ 0x1406700C4 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSnapPageMoveInProgress(__int64 a1, char a2)
{
  __int64 v2; // rax

  if ( (a2 & 4) != 0 )
  {
    v2 = 15208LL;
  }
  else if ( (a2 & 1) != 0 )
  {
    v2 = 15200LL;
  }
  else
  {
    v2 = 15192LL;
  }
  return *(_QWORD *)(v2 + a1);
}
