/*
 * XREFs of MiLockPte @ 0x1403E9E50
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiLockPte(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v2; // rbx
  int v5; // r14d
  int v6; // ebp
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int64 v10; // rdi
  signed __int64 v11; // rax
  __int64 v12; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v15; // rcx

  v2 = *(_QWORD *)BugCheckParameter2;
  v5 = 0;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = *(_QWORD *)BugCheckParameter2;
    if ( (v2 & 1) != 0 && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v15 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v12 = v2 | 0x20;
          v2 = v12 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v2 = v12;
        }
      }
    }
  }
  v6 = a2 & 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v2 & 1) == 0 )
        return 0LL;
      if ( (v2 & 0x1000000000000000LL) == 0 )
        break;
      if ( v6 )
        return 0LL;
      if ( ((v2 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
          v2 = *(_QWORD *)BugCheckParameter2;
        }
        while ( (*(_QWORD *)BugCheckParameter2 & 0x1000000000000000LL) != 0 );
      }
      else
      {
        v10 = v2 | 0x2000000000000000LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( (MiFlags & 0x1000000000LL) != 0 && (v2 & 0x21) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v2 | 0x2000000000000000LL, 128);
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v10, v2);
        v7 = v2 == v11;
        v2 = v11;
        if ( v7 )
          v2 = v10;
      }
    }
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    v8 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)BugCheckParameter2,
           v2 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
           v2);
    v7 = v2 == v8;
    v2 = v8;
    if ( v7 )
      break;
    if ( v6 )
      return 0LL;
  }
  return 1LL;
}
