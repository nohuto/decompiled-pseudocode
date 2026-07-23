/*
 * XREFs of KiAcquireMultiplePrcbLocks @ 0x1402A7970
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeApplyWobBamQos @ 0x1402D1948 (KeApplyWobBamQos.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
