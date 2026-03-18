/*
 * XREFs of KiAcquireMultiplePrcbLocks @ 0x140298E80
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KeApplyWobBamQos @ 0x1402A2218 (KeApplyWobBamQos.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireMultiplePrcbLocks(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi

  if ( a2 )
  {
    v3 = a2;
    do
    {
      v4 = *a1;
      v5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v4 + 48) );
      }
      ++a1;
      --v3;
    }
    while ( v3 );
  }
}
