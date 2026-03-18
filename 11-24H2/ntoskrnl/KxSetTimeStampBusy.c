/*
 * XREFs of KxSetTimeStampBusy @ 0x1403B0DCC
 * Callers:
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // esi
  int v5; // eax

  v2 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  v4 = v3;
  while ( (v3 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    v3 = *a1;
    v5 = *a1 - v4;
    if ( v5 >= 3 || v5 >= 2 && (v4 & 1) == 0 )
      return 0;
  }
  return 1;
}
