/*
 * XREFs of KiAcquireSubNodeLock @ 0x1403F6FA0
 * Callers:
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireSubNodeLock(volatile signed __int32 *a1)
{
  int v2; // edi

  v2 = 0;
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
  }
}
