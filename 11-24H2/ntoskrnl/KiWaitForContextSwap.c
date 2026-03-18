/*
 * XREFs of KiWaitForContextSwap @ 0x140269978
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140268FB8 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x140269E64 (KeDeleteThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  char result; // al
  unsigned int v3; // ebx

  result = *(_BYTE *)(a1 + 113);
  v3 = 0;
  while ( result )
  {
    if ( (++v3 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v3);
    }
    else
    {
      _mm_pause();
    }
    result = *(_BYTE *)(a1 + 113);
  }
  return result;
}
