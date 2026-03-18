/*
 * XREFs of MiLockPageTableInternal @ 0x1402D4E40
 * Callers:
 *     MiTryLockPageTableUnordered @ 0x1402D4830 (MiTryLockPageTableUnordered.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402D5388 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, ULONG_PTR a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v7; // ebx
  char v8; // al
  unsigned int v9; // edi
  ULONG *v10; // rdx
  __int64 v11; // rcx
  signed __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  bool v18; // zf
  signed __int64 v19; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  signed __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rsi
  char v28; // r15
  unsigned __int32 v29; // r9d
  volatile signed __int32 *v30; // rsi
  char v31; // r15
  int v32; // edx
  int v33; // r8d
  signed __int32 v34; // eax
  volatile LONG *v35; // rcx
  signed __int32 v36; // r8d
  signed __int32 v37; // eax

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = 1;
    v8 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 3;
        if ( v8 == 5 )
          v9 = 0;
      }
      v10 = &MiState + 2 * v9 + 3232;
    }
    else
    {
      v9 = 2;
      v10 = (ULONG *)(a1 + 176);
    }
    v11 = v9 + 2 * (v9 + 2500LL);
    *((_QWORD *)&CurrentPrcb->MxCsr + v11) = 0LL;
    v12 = (signed __int64)CurrentPrcb + 8 * v11;
    *(_QWORD *)(v12 + 8) = v10;
    if ( (a3 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v10);
        if ( *v10 || _InterlockedCompareExchange64((volatile signed __int64 *)v10, v12, 0LL) )
        {
          v7 = 0;
          _mm_pause();
        }
      }
      else
      {
        return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented();
      }
      return v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)v10, v12) )
        KxWaitForLockOwnerShip(v12);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v12, v10);
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
    if ( v14 )
    {
      v35 = (volatile LONG *)(v14 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v35);
        return 1LL;
      }
      if ( (a3 & 1) == 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v35);
        return 1LL;
      }
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() != 0;
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v26 = 0;
    v27 = 2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3);
    v28 = v27;
    v27 >>= 5;
    v29 = *(&MiState + v27 + 2459);
    v30 = (volatile signed __int32 *)(&MiState + v27 + 2459);
    v31 = v28 & 0x1F;
    v32 = a3 & 1;
    while ( 1 )
    {
      v33 = 2 << v31;
      while ( ((v29 >> v31) & 1) == 0 )
      {
        v34 = _InterlockedCompareExchange(v30, ~v33 & (v29 | (1 << v31)), v29);
        v18 = v29 == v34;
        v29 = v34;
        if ( v18 )
          return 1LL;
        if ( v32 )
          return 0LL;
      }
      if ( v32 )
        break;
      if ( ((v29 >> v31) & 2) != 0 )
      {
        do
        {
          if ( (++v26 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v26);
          }
          else
          {
            _mm_pause();
          }
          v29 = *v30;
        }
        while ( (((unsigned __int32)*v30 >> v31) & 1) != 0 );
        v32 = a3 & 1;
      }
      else
      {
        v36 = v29 | v33;
        v37 = _InterlockedCompareExchange(v30, v36, v29);
        v18 = v29 == v37;
        v29 = v37;
        if ( v18 )
          v29 = v36;
        v32 = a3 & 1;
      }
    }
    return 0LL;
  }
  v15 = *(_QWORD *)a2;
  v16 = 0;
  v17 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v15 & 1) != 0
    && ((v15 & 0x42) == 0 || (v15 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v22 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v22 & 0x20) != 0 )
          v15 |= 0x20uLL;
        v23 = v15;
        v15 |= 0x42uLL;
        if ( (v22 & 0x42) == 0 )
          v15 = v23;
      }
    }
  }
  while ( (v15 & 1) != 0 )
  {
    if ( (v15 & 0x1000000000000000LL) != 0 )
    {
      if ( (a3 & 1) != 0 )
        return v16;
      if ( ((v15 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
          v15 = *(_QWORD *)a2;
        }
        while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
      }
      else
      {
        v24 = v15 | 0x2000000000000000LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( (MiFlags & 0x1000000000LL) != 0 && (v15 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(a2, v24, 128);
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v24, v15);
        v18 = v15 == v25;
        v15 = v25;
        if ( v18 )
          v15 = v24;
      }
    }
    else
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v19 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)a2,
              v15 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
              v15);
      v18 = v15 == v19;
      v15 = v19;
      if ( v18 )
        return 1;
      if ( (a3 & 1) != 0 )
        return 0LL;
    }
  }
  return v16;
}
