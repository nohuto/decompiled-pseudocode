/*
 * XREFs of MiWaitForPageMoveComplete @ 0x1403931F4
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetPartitionNodePageCounts @ 0x1403930FC (MiGetPartitionNodePageCounts.c)
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiWaitForPageMoveComplete(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // edi

  if ( (a2 & 4) != 0 )
    v3 = 15208LL;
  else
    v3 = (a2 & 1) != 0 ? 15200LL : 15192LL;
  result = *(_QWORD *)(v3 + a1);
  v5 = 0;
  while ( (_WORD)result )
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait();
    }
    else
    {
      _mm_pause();
    }
    result = *(_QWORD *)(v3 + a1);
  }
  return result;
}
