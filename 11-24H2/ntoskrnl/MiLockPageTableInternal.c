/*
 * XREFs of MiLockPageTableInternal @ 0x1403560C0
 * Callers:
 *     MiTryLockPageTableUnordered @ 0x140355AB0 (MiTryLockPageTableUnordered.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140356608 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
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
  __int64 v20; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  signed __int64 v26; // rax
  unsigned int v27; // r14d
  unsigned __int64 v28; // rsi
  char v29; // r15
  unsigned __int32 v30; // r9d
  volatile signed __int32 *v31; // rsi
  char v32; // r15
  int v33; // edx
  int v34; // r8d
  signed __int32 v35; // eax
  volatile LONG *v36; // rcx
  signed __int32 v37; // r8d
  signed __int32 v38; // eax

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
        return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(v12, v10, CurrentPrcb);
      }
      return v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v20 = _InterlockedExchange64((volatile __int64 *)v10, v12);
      if ( v20 )
        KxWaitForLockOwnerShip(v12, v20);
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
      v36 = (volatile LONG *)(v14 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v36);
        return 1LL;
      }
      if ( (a3 & 1) == 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v36);
        return 1LL;
      }
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v36) != 0;
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v27 = 0;
    v28 = 2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3);
    v29 = v28;
    v28 >>= 5;
    v30 = *(&MiState + v28 + 2459);
    v31 = (volatile signed __int32 *)(&MiState + v28 + 2459);
    v32 = v29 & 0x1F;
    v33 = a3 & 1;
    while ( 1 )
    {
      v34 = 2 << v32;
      while ( ((v30 >> v32) & 1) == 0 )
      {
        v35 = _InterlockedCompareExchange(v31, ~v34 & (v30 | (1 << v32)), v30);
        v18 = v30 == v35;
        v30 = v35;
        if ( v18 )
          return 1LL;
        if ( v33 )
          return 0LL;
      }
      if ( v33 )
        break;
      if ( ((v30 >> v32) & 2) != 0 )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v27);
          }
          else
          {
            _mm_pause();
          }
          v30 = *v31;
        }
        while ( (((unsigned __int32)*v31 >> v32) & 1) != 0 );
        v33 = a3 & 1;
      }
      else
      {
        v37 = v30 | v34;
        v38 = _InterlockedCompareExchange(v31, v37, v30);
        v18 = v30 == v38;
        v30 = v38;
        if ( v18 )
          v30 = v37;
        v33 = a3 & 1;
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
        v23 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v15 |= 0x20uLL;
        v24 = v15;
        v15 |= 0x42uLL;
        if ( (v23 & 0x42) == 0 )
          v15 = v24;
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
        v25 = v15 | 0x2000000000000000LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( (MiFlags & 0x1000000000LL) != 0 && (v15 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(a2, v25, 128LL);
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v25, v15);
        v18 = v15 == v26;
        v15 = v26;
        if ( v18 )
          v15 = v25;
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
