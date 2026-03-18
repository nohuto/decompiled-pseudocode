/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x14033FE5C
 * Callers:
 *     MiDecrementCloneBlock @ 0x140224FE8 (MiDecrementCloneBlock.c)
 *     MiReferenceCloneProto @ 0x14023AF4C (MiReferenceCloneProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockCloneBlockAtDpc(__int64 a1)
{
  int v1; // ebx

  v1 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(a1 + 16) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) );
  }
}
