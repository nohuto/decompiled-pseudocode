/*
 * XREFs of MiWaitForPageMoveComplete @ 0x1403D59B8
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetPartitionNodePageCounts @ 0x1403D5894 (MiGetPartitionNodePageCounts.c)
 *     MiGetHugeRange @ 0x1406700C4 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiWaitForPageMoveComplete(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // edi

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
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
    result = *(_QWORD *)(v3 + a1);
  }
  return result;
}
