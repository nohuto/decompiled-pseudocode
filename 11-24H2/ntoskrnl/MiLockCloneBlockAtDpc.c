/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x140207058
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiReferenceCloneProto @ 0x140294790 (MiReferenceCloneProto.c)
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockCloneBlockAtDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 16) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) );
  }
}
