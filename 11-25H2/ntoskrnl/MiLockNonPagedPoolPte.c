/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1402AAF08
 * Callers:
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebp

  while ( 1 )
  {
    v2 = *(_QWORD *)BugCheckParameter3;
    if ( (*(_QWORD *)BugCheckParameter3 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    v3 = 0xFFFFFFFFFFLL;
    v4 = 48 * ((v2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( v2 == *(_QWORD *)BugCheckParameter3 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 48 * ((v2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
}
