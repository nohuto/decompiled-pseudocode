/*
 * XREFs of KiIpiWaitForRequestBarrier @ 0x1402916C0
 * Callers:
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 *     KeInvalidateRangeAllCaches @ 0x14047A650 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiIpiWaitForRequestBarrier(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = *(unsigned int *)(a1 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(i);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
