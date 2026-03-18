/*
 * XREFs of KiAcquireMultiplePrcbLocks @ 0x140315390
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireMultiplePrcbLocks(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi

  if ( a2 )
  {
    v2 = a1;
    v3 = a2;
    do
    {
      v4 = *v2;
      v5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
      ++v2;
      --v3;
    }
    while ( v3 );
  }
}
