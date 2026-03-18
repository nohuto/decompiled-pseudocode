/*
 * XREFs of KiWaitForContextSwap @ 0x140228EEC
 * Callers:
 *     KeDeleteThread @ 0x140228AA4 (KeDeleteThread.c)
 *     KiOutSwapKernelStacks @ 0x1402D2D70 (KiOutSwapKernelStacks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
