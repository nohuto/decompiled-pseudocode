/*
 * XREFs of MiWaitForPageMoveComplete @ 0x14026481C
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetPartitionNodePageCounts @ 0x1402646F8 (MiGetPartitionNodePageCounts.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiWaitForPageMoveComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // edi

  if ( (a2 & 4) != 0 )
  {
    v5 = 15208LL;
  }
  else
  {
    LOBYTE(a2) = -(a2 & 1);
    v5 = (_BYTE)a2 != 0 ? 15200LL : 15192LL;
  }
  result = *(_QWORD *)(v5 + a1);
  v7 = 0;
  while ( (_WORD)result )
  {
    if ( (++v7 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v7);
    }
    else
    {
      _mm_pause();
    }
    result = *(_QWORD *)(v5 + a1);
  }
  return result;
}
