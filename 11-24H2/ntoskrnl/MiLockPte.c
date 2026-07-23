/*
 * XREFs of MiLockPte @ 0x140203900
 * Callers:
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPte(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v17; // rcx
  signed __int64 v18; // rdi
  signed __int64 v19; // rax

  v2 = *(_QWORD *)BugCheckParameter2;
  v5 = 0;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)BugCheckParameter2;
    if ( (v2 & 1) != 0 && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v6 = v2 | 0x20;
          v2 = v6 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v2 = v6;
        }
      }
    }
  }
  v7 = a2 & 1;
LABEL_6:
  v8 = 0x4000000000LL;
  v9 = 0xFFFFF68000000000uLL;
  v10 = 0x2000000000000000LL;
  while ( 2 )
  {
    v11 = 0x1000000000LL;
    while ( 1 )
    {
      if ( (v2 & 1) == 0 )
        return 0LL;
      if ( (v2 & 0x1000000000000000LL) == 0 )
        break;
      if ( v7 )
        return 0LL;
      if ( ((v2 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v10, v9, v8) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
          v2 = *(_QWORD *)BugCheckParameter2;
        }
        while ( (*(_QWORD *)BugCheckParameter2 & 0x1000000000000000LL) != 0 );
        goto LABEL_6;
      }
      v18 = v2 | 0x2000000000000000LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( (MiFlags & 0x1000000000LL) != 0 && (v2 & 0x21) == 1 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v2 | 0x2000000000000000LL, 128LL);
        v11 = 0x1000000000LL;
        v9 = 0xFFFFF68000000000uLL;
        v10 = 0x2000000000000000LL;
        v8 = 0x4000000000LL;
      }
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v18, v2);
      v12 = v2 == v19;
      v2 = v19;
      if ( v12 )
        v2 = v18;
    }
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    v13 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)BugCheckParameter2,
            v2 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
            v2);
    v12 = v2 == v13;
    v2 = v13;
    if ( !v12 )
    {
      if ( !v7 )
        continue;
      return 0LL;
    }
    return 1LL;
  }
}
