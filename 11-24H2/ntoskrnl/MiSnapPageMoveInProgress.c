/*
 * XREFs of MiSnapPageMoveInProgress @ 0x1402647F0
 * Callers:
 *     MiGetPartitionNodePageCounts @ 0x1402646F8 (MiGetPartitionNodePageCounts.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
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
