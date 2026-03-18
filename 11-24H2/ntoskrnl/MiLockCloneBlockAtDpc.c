/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x14023EF08
 * Callers:
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecrementCloneBlock @ 0x1402F9160 (MiDecrementCloneBlock.c)
 *     MiReferenceCloneProto @ 0x1402F99D8 (MiReferenceCloneProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x1403951B4 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockCloneBlockAtDpc(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 16) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) );
  }
}
