/*
 * XREFs of KiWaitForContextSwap @ 0x14021EF04
 * Callers:
 *     KeDeleteThread @ 0x14021F3F4 (KeDeleteThread.c)
 *     KiOutSwapKernelStacks @ 0x1402600D4 (KiOutSwapKernelStacks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  unsigned int v6; // ebx

  result = *(_BYTE *)(a1 + 113);
  v6 = 0;
  while ( result )
  {
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
    result = *(_BYTE *)(a1 + 113);
  }
  return result;
}
