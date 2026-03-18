/*
 * XREFs of MiReacquireWalkLocks @ 0x1402193F0
 * Callers:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r12
  int v6; // eax
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *MmInternal; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  char v15; // al
  unsigned int v16; // ecx
  volatile __int64 *v17; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v18; // rcx
  __int64 v19; // r13
  unsigned __int64 v20; // r8
  ULONG_PTR v21; // rsi
  signed __int64 v22; // rcx
  signed __int64 v23; // rbx
  int v24; // r15d
  unsigned __int64 v25; // rdi
  char v26; // al
  unsigned int v27; // ecx
  volatile __int64 *v28; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v29; // rcx
  __int64 result; // rax
  _QWORD *v31; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v34; // rax
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  unsigned int v37; // r15d
  bool v38; // zf
  signed __int64 v39; // rax
  struct _KPRCB *v40; // rdx
  char v41; // al
  __int64 v42; // rcx
  volatile signed __int64 **v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rbp
  int v48; // eax
  volatile signed __int32 *v49; // rcx
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  __int64 v52; // rdx
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
  unsigned __int32 v66; // edx
  volatile signed __int32 *v67; // rbx
  int v68; // r15d
  __int64 v69; // rcx
  signed __int32 v70; // eax
  unsigned __int32 v71; // ecx
  signed __int32 v72; // eax
  unsigned int v73; // r15d
  signed __int64 v74; // rdx
  __int64 v75; // [rsp+48h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-68h]
  ULONG_PTR v77; // [rsp+58h] [rbp-60h]
  unsigned __int64 v78; // [rsp+60h] [rbp-58h]
  __int64 v79; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v83; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v84; // [rsp+D8h] [rbp+20h]
  unsigned int v85; // [rsp+D8h] [rbp+20h]

  v83 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = a2;
  v75 = v3;
  v5 = a1;
  if ( (_DWORD)a3 )
    goto LABEL_13;
  v6 = *(_DWORD *)(v3 + 184);
  if ( *(_BYTE *)(a1 + 9) == 17 )
  {
    if ( (v6 & 0xFu) > 5 )
      goto LABEL_13;
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 1 )
      v31 = &unk_140E38740;
    else
      v31 = (_QWORD *)(v3 + 192);
    v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v31 + ((unsigned __int64)v8 << 6)));
    goto LABEL_11;
  }
  if ( (v6 & 0xFu) < 6 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 1 )
      v7 = &unk_140E38740;
    else
      v7 = (_QWORD *)(v3 + 192);
    v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v9 = (_DWORD *)(*v7 + ((unsigned __int64)v8 << 6));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v9);
      v50 = *v9 & 0x7FFFFFFF;
      while ( 1 )
      {
        v51 = v50;
        v50 = _InterlockedCompareExchange(v9, v50 + 1, v50);
        if ( v51 == v50 )
          break;
        if ( v50 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v9, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, CurrentIrql);
    }
LABEL_11:
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v8;
    goto LABEL_13;
  }
  v63 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v63, 2LL, a3);
LABEL_13:
  v12 = 0LL;
  if ( (*(_DWORD *)v5 & 0x1000) != 0 )
  {
LABEL_50:
    *(_DWORD *)(v5 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(v5 + 56) = v4;
    return result;
  }
  BugCheckParameter2 = (((unsigned __int64)(v4 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v77 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v78 = ((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v79 = ((v78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v84 = 0xFFFFF6FB7DBEDF68uLL;
  v15 = *(_DWORD *)(v3 + 184) & 0xF;
  if ( v15 )
  {
    if ( v15 == 7 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 3;
      if ( v15 == 5 )
        v16 = 0;
    }
    v17 = (volatile __int64 *)(&MiState + 2 * v16 + 3232);
  }
  else
  {
    v16 = 2;
    v17 = (volatile __int64 *)(v3 + 176);
  }
  v18 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v16 + v16;
  *((_QWORD *)v18 + 1) = v17;
  *v18 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireQueuedSpinLockInstrumented(v18, v17);
LABEL_157:
    v12 = 0LL;
    goto LABEL_18;
  }
  if ( _InterlockedExchange64(v17, (__int64)v18) )
  {
    KxWaitForLockOwnerShip(v18);
    goto LABEL_157;
  }
LABEL_18:
  v19 = 2LL;
  v20 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v21 = *(&BugCheckParameter2 + v19);
    v22 = 0xFFFFF6FB7DBEDFFFuLL;
    v23 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL && (v23 & 1) != 0 )
    {
      if ( ((v23 & 0x42) == 0 || (v23 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v34 = *(_QWORD *)(KernelWaitTime + 8 * ((v21 >> 3) & 0x1FF));
            if ( (v34 & 0x20) != 0 )
              v23 |= 0x20uLL;
            v35 = v23;
            v23 |= 0x42uLL;
            if ( (v34 & 0x42) == 0 )
              v23 = v35;
          }
        }
      }
      v22 = 0xFFFFF6FB7DBEDFFFuLL;
    }
    if ( (v23 & 0x81) != 1 )
      break;
    if ( (v23 & 0x20) == 0 )
    {
      v24 = 0;
      v25 = (__int64)(v21 << 25) >> 16;
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v24 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
        v20 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v25 < 0xFFFFF68000000000uLL || v25 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v21, v23 | 0x20);
        v20 = 0xFFFFF6FB7DBED000uLL;
      }
      else
      {
        do
        {
          v74 = v23;
          v22 = v23 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v22, v23);
        }
        while ( v23 != v74 );
      }
      if ( v24 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
        v20 = 0xFFFFF6FB7DBED000uLL;
      }
    }
    if ( v21 != v13 )
    {
      if ( v21 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v20 = (unsigned __int64)KeGetCurrentPrcb();
        v26 = *(_DWORD *)(v3 + 184) & 0xF;
        if ( v26 )
        {
          if ( v26 == 7 )
          {
            v27 = 1;
          }
          else
          {
            v27 = 3;
            if ( v26 == 5 )
              v27 = 0;
          }
          v28 = (volatile __int64 *)(&MiState + 2 * v27 + 3232);
        }
        else
        {
          v27 = 2;
          v28 = (volatile __int64 *)(v3 + 176);
        }
        v29 = (_KSPIN_LOCK_QUEUE *volatile *)(v20 + 8 * (v27 + 2 * (v27 + 2500LL)));
        *((_QWORD *)v29 + 1) = v28;
        *v29 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v28, (__int64)v29) )
            KxWaitForLockOwnerShip(v29);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v29, v28);
        }
      }
      else if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0
             && v21 >= 0xFFFFF6FB7DBED000uLL
             && v21 <= 0xFFFFF6FB7DBEDFFFuLL
             && (v22 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v22 + 4LL * (((unsigned int)v21 >> 3) & 0x1FF)));
      }
      else if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v85 = 0;
        v64 = (unsigned __int64)(2 * (unsigned int)((__int64)(v21 + 0x90482413000LL) >> 3)) >> 5;
        v65 = (2 * ((__int64)(v21 + 0x90482413000LL) >> 3)) & 0x1F;
        v66 = *(&MiState + v64 + 2459);
        v67 = (volatile signed __int32 *)(&MiState + v64 + 2459);
        v68 = 1 << v65;
        v20 = (unsigned int)(2 << v65);
        do
        {
          while ( 1 )
          {
            v69 = (2 * (unsigned __int8)((__int64)(v21 + 0x90482413000LL) >> 3)) & 0x1F;
            if ( ((v66 >> v65) & 1) == 0 )
              break;
            if ( ((v66 >> v65) & 2) != 0 )
            {
              v73 = v85;
              do
              {
                if ( (++v73 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v69) )
                {
                  HvlNotifyLongSpinWait(v73);
                }
                else
                {
                  _mm_pause();
                }
                v66 = *v67;
                v69 = (2 * (unsigned __int8)((__int64)(v21 + 0x90482413000LL) >> 3)) & 0x1F;
              }
              while ( (((unsigned __int32)*v67 >> v65) & 1) != 0 );
              v20 = (unsigned int)(2 << v65);
              v85 = v73;
              v68 = 1 << v65;
            }
            else
            {
              v71 = v20 | v66;
              v72 = _InterlockedCompareExchange(v67, v20 | v66, v66);
              v38 = v66 == v72;
              v66 = v72;
              if ( v38 )
                v66 = v71;
            }
          }
          v70 = _InterlockedCompareExchange(v67, ~(2 << v65) & (v66 | v68), v66);
          v38 = v66 == v70;
          v66 = v70;
        }
        while ( !v38 );
      }
      else
      {
        v36 = *(_QWORD *)v21;
        v37 = 0;
        if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL && (v36 & 1) != 0 )
        {
          LOBYTE(v22) = (v36 & 0x42) != 0;
          if ( ((unsigned __int8)v22 & ((v36 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
          {
            v22 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(v22 + 352) != 1 )
            {
              v52 = *(_QWORD *)(v22 + 1288);
              if ( v52 )
              {
                v53 = *(_QWORD *)(v52 + 8 * ((v21 >> 3) & 0x1FF));
                if ( (v53 & 0x20) != 0 )
                  v36 |= 0x20uLL;
                v22 = v36;
                v36 |= 0x42uLL;
                if ( (v53 & 0x42) == 0 )
                  v36 = v22;
              }
            }
          }
        }
        while ( (v36 & 1) != 0 )
        {
          if ( (v36 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v36 >> 60) & 2) != 0 )
            {
              do
              {
                if ( (++v37 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
                {
                  HvlNotifyLongSpinWait(v37);
                }
                else
                {
                  _mm_pause();
                }
                v36 = *(_QWORD *)v21;
              }
              while ( (*(_QWORD *)v21 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              v61 = v36 | 0x2000000000000000LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              if ( _bittest64(&MiFlags, 0x24u) )
              {
                if ( (v36 & 0x21) == 1 )
                {
                  v22 = 0x4000000000LL;
                  if ( v21 >= 0xFFFFF6C000000000uLL )
                    MiCheckLinearProtectedPteAccessedBit(v21, v36 | 0x2000000000000000LL);
                }
              }
              v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v61, v36);
              v38 = v36 == v62;
              v36 = v62;
              if ( v38 )
                v36 = v61;
            }
          }
          else
          {
            v22 = v36 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v22, v36);
            v38 = v36 == v39;
            v36 = v39;
            if ( v38 )
              break;
          }
        }
        v13 = v84;
        v3 = v75;
        v5 = a1;
      }
      if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v40 = KeGetCurrentPrcb();
        v41 = *(_DWORD *)(v3 + 184) & 0xF;
        if ( v41 )
        {
          if ( v41 == 7 )
          {
            v42 = 1LL;
          }
          else
          {
            v42 = 3LL;
            if ( v41 == 5 )
              v42 = 0LL;
          }
        }
        else
        {
          v42 = 2LL;
        }
        v43 = (volatile signed __int64 **)&v40->SelfmapLockHandle[v42];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _m_prefetchw(v43);
          v44 = (__int64)*v43;
          if ( !*v43 )
          {
            if ( v43 == (volatile signed __int64 **)_InterlockedCompareExchange64(v43[1], 0LL, (signed __int64)v43) )
              goto LABEL_84;
            v44 = KxWaitForLockChainValid(v43, v40, v20, v12);
          }
          *v43 = 0LL;
          v45 = (__int64)v43[1];
          if ( (((unsigned __int8)v45 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v44 + 8), v45)) & 4) == 0 )
            goto LABEL_84;
          KeWakeAddressAll(v44 + 8, v45, v20, v12);
          v13 = v21;
          v84 = v21;
        }
        else
        {
          KiReleaseQueuedSpinLockInstrumented(v43, retaddr, v20, v12);
          v84 = v21;
          v13 = v21;
        }
      }
      else if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
             || v13 < 0xFFFFF6FB7DBED000uLL
             || v13 > 0xFFFFF6FB7DBEDFFFuLL
             || (v46 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd64((volatile signed __int64 *)v13, 0xCFFFFFFFFFFFFFFFuLL);
LABEL_84:
          v13 = v21;
          v84 = v21;
          goto LABEL_35;
        }
        _InterlockedAnd(
          (volatile signed __int32 *)&MiState
        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5)
        + 2459,
          ~(3 << ((2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)));
        v84 = v21;
        v13 = v21;
      }
      else
      {
        v47 = ((unsigned int)v13 >> 3) & 0x1FF;
        v48 = *(_DWORD *)(v46 + 4 * v47);
        v49 = (volatile signed __int32 *)(v46 + 4 * v47);
        if ( (v48 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v49, 0xBFFFFFFF);
            _InterlockedDecrement(v49);
            v13 = v21;
            v84 = v21;
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v49, retaddr);
            v84 = v21;
            v13 = v21;
          }
        }
        else
        {
          if ( v48 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v49, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            *v49 = 0;
            v13 = v21;
            v84 = v21;
          }
          else
          {
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v49, retaddr);
            v84 = v21;
            v13 = v21;
          }
        }
      }
    }
LABEL_35:
    v20 = 0xFFFFF6FB7DBED000uLL;
    if ( !v19 )
      break;
    v12 = 0LL;
    --v19;
  }
  if ( v13 == a2 )
  {
    v4 = a2;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)v5 & 0x1000) != 0 )
  {
    if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_46;
LABEL_133:
    if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
      || v13 < 0xFFFFF6FB7DBED000uLL
      || v13 > 0xFFFFF6FB7DBEDFFFuLL
      || (v60 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&MiState
        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5)
        + 2459,
          ~(2 << ((2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                  * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)));
      else
        _InterlockedAnd64((volatile signed __int64 *)v13, 0xCFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel(v60 + 4 * ((v13 >> 3) & 0x1FF));
    }
  }
  else
  {
    if ( v13 != 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_133;
    v54 = KeGetCurrentPrcb();
    v55 = *(_DWORD *)(v3 + 184) & 0xF;
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
        v58 = KxWaitForLockChainValid(v57, v56 * 24, 0xFFFFF6FB7DBED000uLL, v12);
      }
      *v57 = 0LL;
      v59 = (__int64)v57[1];
      LOBYTE(v59) = _InterlockedExchange64((volatile __int64 *)(v58 + 8), v59) ^ v59;
      if ( (v59 & 4) != 0 )
        KeWakeAddressAll(v58 + 8, v59, v20, v12);
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(v57, retaddr, 0xFFFFF6FB7DBED000uLL, v12);
    }
  }
LABEL_46:
  if ( !v83 )
    MiUnlockWorkingSetShared(*(_QWORD *)(v5 + 32), *(unsigned __int8 *)(v5 + 9));
  return 0LL;
}
