/*
 * XREFs of MiWriteUselessChildPte @ 0x140396F60
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 */

__int64 __fastcall MiWriteUselessChildPte(__int64 *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  *a1 = MiMakeDemandZeroPte(4);
  MiIncreaseUsedPtesInPfn(a2, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
