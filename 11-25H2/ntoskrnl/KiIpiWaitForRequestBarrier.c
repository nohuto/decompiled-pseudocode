/*
 * XREFs of KiIpiWaitForRequestBarrier @ 0x14032BC30
 * Callers:
 *     KeInvalidateRangeAllCaches @ 0x14026F2F0 (KeInvalidateRangeAllCaches.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14027139C (KxFlushNonGlobalTb.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
