/*
 * XREFs of KxSetTimeStampBusy @ 0x1402703B8
 * Callers:
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14027139C (KxFlushNonGlobalTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KxSetTimeStampBusy(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // esi
  int v5; // eax

  v2 = 0;
  _m_prefetchw(a1);
  v3 = (unsigned int)*a1;
  v4 = v3;
  while ( (v3 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    v3 = (unsigned int)*a1;
    v5 = *a1 - v4;
    if ( v5 >= 3 || v5 >= 2 && (v4 & 1) == 0 )
      return 0;
  }
  return 1;
}
