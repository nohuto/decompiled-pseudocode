/*
 * XREFs of MiWriteUselessChildPte @ 0x140391668
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiWriteUselessChildPte(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 result; // rax

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  *a1 = MiMakeDemandZeroPte(4LL, a2, a3, a4);
  MiIncreaseUsedPtesInPfn(a2, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
