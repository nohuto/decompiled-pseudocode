/*
 * XREFs of MiReacquireWalkLocks @ 0x140246140
 * Callers:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r12
  int v7; // eax
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *MmInternal; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  char v16; // al
  unsigned int v17; // ecx
  volatile __int64 *v18; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned __int64 v22; // r8
  ULONG_PTR v23; // rsi
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rbx
  int v27; // r15d
  unsigned __int64 v28; // rdi
  char v29; // al
  unsigned int v30; // ecx
  _KSPIN_LOCK_QUEUE *volatile *v31; // rcx
  __int64 v32; // rax
  __int64 result; // rax
  _QWORD *v34; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v37; // rax
  signed __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  unsigned int v40; // r15d
  bool v41; // zf
  signed __int64 v42; // rax
  char v43; // al
  __int64 v44; // rcx
  volatile signed __int64 **v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rbp
  int v49; // eax
  volatile signed __int32 *v50; // rcx
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  __int64 v53; // rax
  struct _KPRCB *v54; // rcx
  char v55; // al
  __int64 v56; // rdx
  volatile signed __int64 **v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  signed __int64 v61; // rdi
  signed __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rbx
  char v65; // di
  volatile signed __int32 *v66; // rbx
  int v67; // r15d
  __int64 v68; // rcx
  unsigned __int32 v69; // eax
  unsigned int v70; // ecx
  unsigned __int32 v71; // eax
  unsigned int v72; // r15d
  __int64 v73; // [rsp+48h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-68h]
  ULONG_PTR v75; // [rsp+58h] [rbp-60h]
  unsigned __int64 v76; // [rsp+60h] [rbp-58h]
  __int64 v77; // [rsp+68h] [rbp-50h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  int v81; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v82; // [rsp+D8h] [rbp+20h]
  unsigned int v83; // [rsp+D8h] [rbp+20h]

  v81 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v73 = v4;
  v6 = a1;
  if ( (_DWORD)a3 )
    goto LABEL_13;
  v7 = *(_DWORD *)(v4 + 184);
  if ( *(_BYTE *)(a1 + 9) == 17 )
  {
    if ( (v7 & 0xFu) > 5 )
      goto LABEL_13;
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
      v34 = &unk_140E38880;
    else
      v34 = (_QWORD *)(v4 + 192);
    v9 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v34 + ((unsigned __int64)v9 << 6)));
    goto LABEL_11;
  }
  if ( (v7 & 0xFu) < 6 )
  {
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
      v8 = &unk_140E38880;
    else
      v8 = (_QWORD *)(v4 + 192);
    v9 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v10 = (_DWORD *)(*v8 + ((unsigned __int64)v9 << 6));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v10);
      v51 = *v10 & 0x7FFFFFFF;
      while ( 1 )
      {
        v52 = v51;
        v51 = _InterlockedCompareExchange(v10, v51 + 1, v51);
        if ( v52 == v51 )
          break;
        if ( v51 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql, a3, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
    }
LABEL_11:
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v9;
    goto LABEL_13;
  }
  v63 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v63, 2LL);
LABEL_13:
  v13 = 0LL;
  if ( (*(_DWORD *)v6 & 0x1000) != 0 )
  {
LABEL_50:
    *(_DWORD *)(v6 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(v6 + 56) = v5;
    return result;
  }
  BugCheckParameter2 = (((unsigned __int64)(v5 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v76 = ((v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v77 = ((v76 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v82 = 0xFFFFF6FB7DBEDF68uLL;
  v16 = *(_DWORD *)(v4 + 184) & 0xF;
  if ( v16 )
  {
    if ( v16 == 7 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 3;
      if ( v16 == 5 )
        v17 = 0;
    }
    v18 = (volatile __int64 *)(&MiState + 2 * v17 + 3232);
  }
  else
  {
    v17 = 2;
    v18 = (volatile __int64 *)(v4 + 176);
  }
  v19 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v17 + v17;
  *((_QWORD *)v19 + 1) = v18;
  *v19 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireQueuedSpinLockInstrumented(v19, v18);
LABEL_157:
    v13 = 0LL;
    goto LABEL_18;
  }
  v20 = _InterlockedExchange64(v18, (__int64)v19);
  if ( v20 )
  {
    KxWaitForLockOwnerShip(v19, v20);
    goto LABEL_157;
  }
LABEL_18:
  v21 = 2LL;
  v22 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v23 = *(&BugCheckParameter2 + v21);
    v24 = 0xFFFFF6FFFFFFFFFFuLL;
    v25 = 0xFFFFF6FB7DBEDFFFuLL;
    v26 = *(_QWORD *)v23;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (v26 & 1) != 0 )
    {
      if ( ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v37 = *(_QWORD *)(KernelWaitTime + 8 * ((v23 >> 3) & 0x1FF));
            if ( (v37 & 0x20) != 0 )
              v26 |= 0x20uLL;
            v38 = v26;
            v26 |= 0x42uLL;
            if ( (v37 & 0x42) == 0 )
              v26 = v38;
          }
          v24 = 0xFFFFF6FFFFFFFFFFuLL;
        }
      }
      v25 = 0xFFFFF6FB7DBEDFFFuLL;
    }
    if ( (v26 & 0x81) != 1 )
      break;
    if ( (v26 & 0x20) == 0 )
    {
      v27 = 0;
      v28 = (__int64)(v23 << 25) >> 16;
      if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v27 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
        v22 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v28 < 0xFFFFF68000000000uLL || v28 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v23, v26 | 0x20, 0xFFFFF6FB7DBED000uLL);
        v22 = 0xFFFFF6FB7DBED000uLL;
      }
      else
      {
        do
        {
          v24 = v26;
          v25 = v26 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v25, v26);
        }
        while ( v26 != v24 );
      }
      if ( v27 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
        v22 = 0xFFFFF6FB7DBED000uLL;
      }
    }
    if ( v23 == v14 )
      goto LABEL_35;
    if ( v23 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v22 = (unsigned __int64)KeGetCurrentPrcb();
      v29 = *(_DWORD *)(v4 + 184) & 0xF;
      if ( v29 )
      {
        if ( v29 == 7 )
        {
          v30 = 1;
        }
        else
        {
          v30 = 3;
          if ( v29 == 5 )
            v30 = 0;
        }
        v24 = (unsigned __int64)(&MiState + 2 * v30 + 3232);
      }
      else
      {
        v30 = 2;
        v24 = v4 + 176;
      }
      v31 = (_KSPIN_LOCK_QUEUE *volatile *)(v22 + 8 * (v30 + 2 * (v30 + 2500LL)));
      *((_QWORD *)v31 + 1) = v24;
      *v31 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v32 = _InterlockedExchange64((volatile __int64 *)v24, (__int64)v31);
        if ( v32 )
          KxWaitForLockOwnerShip(v31, v32);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v31, v24);
      }
    }
    else
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 )
      {
        v24 = 0xFFFFF6FB7DBEDFFFuLL;
      }
      else
      {
        v24 = 0xFFFFF6FB7DBEDFFFuLL;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v25 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v25 )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v25 + 4LL * (((unsigned int)v23 >> 3) & 0x1FF)));
            goto LABEL_80;
          }
        }
      }
      if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v83 = 0;
        v64 = (unsigned __int64)(2 * (unsigned int)((__int64)(v23 + 0x90482413000LL) >> 3)) >> 5;
        v65 = (2 * ((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
        v24 = *(&MiState + v64 + 2459);
        v66 = (volatile signed __int32 *)(&MiState + v64 + 2459);
        v67 = 1 << v65;
        v22 = (unsigned int)(2 << v65);
        do
        {
          while ( 1 )
          {
            v68 = (2 * (unsigned __int8)((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
            if ( (((unsigned int)v24 >> v65) & 1) == 0 )
              break;
            if ( (((unsigned int)v24 >> v65) & 2) != 0 )
            {
              v72 = v83;
              do
              {
                if ( (++v72 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v68, v24, v22, v13) )
                {
                  HvlNotifyLongSpinWait(v72);
                }
                else
                {
                  _mm_pause();
                }
                v24 = *(unsigned int *)v66;
                v68 = (2 * (unsigned __int8)((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
              }
              while ( (((unsigned __int32)*v66 >> v65) & 1) != 0 );
              v22 = (unsigned int)(2 << v65);
              v83 = v72;
              v67 = 1 << v65;
            }
            else
            {
              v70 = v22 | v24;
              v71 = _InterlockedCompareExchange(v66, v22 | v24, v24);
              v41 = (_DWORD)v24 == v71;
              v24 = v71;
              if ( v41 )
                v24 = v70;
            }
          }
          v69 = _InterlockedCompareExchange(v66, ~(2 << v65) & (v24 | v67), v24);
          v41 = (_DWORD)v24 == v69;
          v24 = v69;
        }
        while ( !v41 );
      }
      else
      {
        v39 = *(_QWORD *)v23;
        v40 = 0;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (v39 & 1) != 0 )
        {
          LOBYTE(v25) = (v39 & 0x42) != 0;
          if ( ((unsigned __int8)v25 & ((v39 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
          {
            v25 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(v25 + 352) != 1 )
            {
              v24 = *(_QWORD *)(v25 + 1288);
              if ( v24 )
              {
                v53 = *(_QWORD *)(v24 + 8 * ((v23 >> 3) & 0x1FF));
                if ( (v53 & 0x20) != 0 )
                  v39 |= 0x20uLL;
                v25 = v39;
                v39 |= 0x42uLL;
                if ( (v53 & 0x42) == 0 )
                  v39 = v25;
              }
            }
          }
        }
        while ( (v39 & 1) != 0 )
        {
          if ( (v39 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v39 >> 60) & 2) != 0 )
            {
              do
              {
                if ( (++v40 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, v22, v13) )
                {
                  HvlNotifyLongSpinWait(v40);
                }
                else
                {
                  _mm_pause();
                }
                v39 = *(_QWORD *)v23;
              }
              while ( (*(_QWORD *)v23 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              v61 = v39 | 0x2000000000000000LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              if ( _bittest64(&MiFlags, 0x24u) )
              {
                if ( (v39 & 0x21) == 1 )
                {
                  v25 = 0x4000000000LL;
                  if ( v23 >= 0xFFFFF6C000000000uLL )
                    MiCheckLinearProtectedPteAccessedBit(v23, v39 | 0x2000000000000000LL, 128LL);
                }
              }
              v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v61, v39);
              v41 = v39 == v62;
              v39 = v62;
              if ( v41 )
                v39 = v61;
            }
          }
          else
          {
            v25 = v39 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v25, v39);
            v41 = v39 == v42;
            v39 = v42;
            if ( v41 )
              break;
          }
        }
        v14 = v82;
        v4 = v73;
        v6 = a1;
      }
    }
LABEL_80:
    if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v24 = (unsigned __int64)KeGetCurrentPrcb();
      v43 = *(_DWORD *)(v4 + 184) & 0xF;
      if ( v43 )
      {
        if ( v43 == 7 )
        {
          v44 = 24LL;
        }
        else
        {
          v44 = 72LL;
          if ( v43 == 5 )
            v44 = 0LL;
        }
      }
      else
      {
        v44 = 48LL;
      }
      v45 = (volatile signed __int64 **)(v44 + v24 + 40000);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v45);
        v46 = (__int64)*v45;
        if ( !*v45 )
        {
          if ( v45 == (volatile signed __int64 **)_InterlockedCompareExchange64(v45[1], 0LL, (signed __int64)v45) )
            goto LABEL_84;
          v46 = KxWaitForLockChainValid(v45);
        }
        *v45 = 0LL;
        v24 = (unsigned __int64)v45[1];
        if ( (((unsigned __int8)v24 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v46 + 8), v24)) & 4) == 0 )
          goto LABEL_84;
        KeWakeAddressAll(v46 + 8, v24, v22, v13);
        v14 = v23;
        v82 = v23;
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(v45, retaddr);
        v82 = v23;
        v14 = v23;
      }
    }
    else if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
           || v14 < 0xFFFFF6FB7DBED000uLL
           || v14 > 0xFFFFF6FB7DBEDFFFuLL
           || (v47 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 || v14 < 0xFFFFF6FB7DBED000uLL || v14 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        _InterlockedAnd64((volatile signed __int64 *)v14, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_84:
        v14 = v23;
        v82 = v23;
        goto LABEL_35;
      }
      v24 = (unsigned __int64)(&MiState
                             + ((unsigned __int64)(2 * (unsigned int)((__int64)(v14 + 0x90482413000LL) >> 3)) >> 5));
      _InterlockedAnd(
        (volatile signed __int32 *)(v24 + 9836),
        ~(3 << ((2 * ((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F)));
      v82 = v23;
      v14 = v23;
    }
    else
    {
      v48 = ((unsigned int)v14 >> 3) & 0x1FF;
      v49 = *(_DWORD *)(v47 + 4 * v48);
      v50 = (volatile signed __int32 *)(v47 + 4 * v48);
      if ( (v49 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v50, 0xBFFFFFFF);
          _InterlockedDecrement(v50);
          v14 = v23;
          v82 = v23;
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v50, retaddr);
          v82 = v23;
          v14 = v23;
        }
      }
      else
      {
        if ( v49 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v50, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          *v50 = 0;
          v14 = v23;
          v82 = v23;
        }
        else
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v50, retaddr);
          v82 = v23;
          v14 = v23;
        }
      }
    }
LABEL_35:
    v22 = 0xFFFFF6FB7DBED000uLL;
    if ( !v21 )
      break;
    v13 = 0LL;
    --v21;
  }
  if ( v14 == a2 )
  {
    v5 = a2;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)v6 & 0x1000) != 0 )
  {
    if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_46;
LABEL_133:
    if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0
      || v14 < 0xFFFFF6FB7DBED000uLL
      || v14 > 0xFFFFF6FB7DBEDFFFuLL
      || (v60 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&MiState
        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v14 + 0x90482413000LL) >> 3)) >> 5)
        + 2459,
          ~(2 << ((2 * ((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                  * ((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F)));
      else
        _InterlockedAnd64((volatile signed __int64 *)v14, 0xCFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel(
        (volatile signed __int32 *)(v60 + 4 * ((v14 >> 3) & 0x1FF)),
        v24,
        0xFFFFF6FB7DBED000uLL,
        v13);
    }
  }
  else
  {
    if ( v14 != 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_133;
    v54 = KeGetCurrentPrcb();
    v55 = *(_DWORD *)(v4 + 184) & 0xF;
    if ( v55 )
    {
      if ( v55 == 7 )
      {
        v56 = 1LL;
      }
      else
      {
        v56 = 3LL;
        if ( v55 == 5 )
          v56 = 0LL;
      }
    }
    else
    {
      v56 = 2LL;
    }
    v57 = (volatile signed __int64 **)&v54->SelfmapLockHandle[v56];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v57);
      v58 = (__int64)*v57;
      if ( !*v57 )
      {
        if ( v57 == (volatile signed __int64 **)_InterlockedCompareExchange64(v57[1], 0LL, (signed __int64)v57) )
          goto LABEL_46;
        v58 = KxWaitForLockChainValid(v57);
      }
      *v57 = 0LL;
      v59 = (__int64)v57[1];
      LOBYTE(v59) = _InterlockedExchange64((volatile __int64 *)(v58 + 8), v59) ^ v59;
      if ( (v59 & 4) != 0 )
        KeWakeAddressAll(v58 + 8, v59, v22, v13);
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(v57, retaddr);
    }
  }
LABEL_46:
  if ( !v81 )
    MiUnlockWorkingSetShared(*(_QWORD *)(v6 + 32), *(_BYTE *)(v6 + 9));
  return 0LL;
}
