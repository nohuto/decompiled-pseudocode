/*
 * XREFs of MiReacquireWalkLocks @ 0x1402B8560
 * Callers:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // eax
  _QWORD *v7; // rax
  unsigned int v8; // edi
  _DWORD *v9; // rbx
  unsigned __int8 v10; // si
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v16; // r9
  char v17; // al
  unsigned int v18; // ecx
  volatile __int64 *v19; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v20; // rcx
  __int64 v21; // rax
  __int64 i; // r12
  ULONG_PTR v23; // rsi
  signed __int64 Process; // rcx
  signed __int64 v25; // rbx
  int v26; // r14d
  unsigned __int64 v27; // rdi
  struct _KPRCB *v28; // r8
  char v29; // al
  unsigned int v30; // ecx
  volatile __int64 *v31; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v32; // rcx
  __int64 v33; // rax
  __int64 result; // rax
  _QWORD *v35; // rax
  unsigned int v36; // ebx
  _DWORD *MmInternal; // rcx
  unsigned __int64 v38; // rbx
  unsigned int v39; // r14d
  bool v40; // zf
  signed __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rbp
  int v44; // eax
  volatile signed __int32 *v45; // rcx
  struct _KPRCB *v46; // rdx
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  _DWORD *v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 v53; // rbp
  int v54; // eax
  volatile signed __int32 *v55; // rcx
  struct _KPRCB *v56; // rdx
  char v57; // al
  __int64 v58; // rcx
  signed __int64 v59; // rdi
  signed __int64 v60; // rax
  __int64 CurrentIrql; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  char v65; // di
  unsigned __int32 v66; // edx
  volatile signed __int32 *v67; // rbx
  int v68; // r14d
  int v69; // r13d
  __int64 v70; // rcx
  signed __int32 v71; // eax
  int v72; // ecx
  signed __int32 v73; // eax
  unsigned int v74; // r14d
  signed __int64 v75; // rdx
  _DWORD *v76; // [rsp+38h] [rbp-90h]
  __int64 v77; // [rsp+40h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  ULONG_PTR v79; // [rsp+60h] [rbp-68h]
  unsigned __int64 v80; // [rsp+68h] [rbp-60h]
  __int64 v81; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned __int64 v86; // [rsp+E8h] [rbp+20h]
  unsigned int v87; // [rsp+E8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = a2;
  v77 = v3;
  v5 = a1;
  if ( !a3 )
  {
    v6 = *(_DWORD *)(v3 + 184);
    if ( *(_BYTE *)(a1 + 9) == 17 )
    {
      if ( (v6 & 0xFu) <= 5 )
      {
        v35 = (*(_DWORD *)(v3 + 184) & 0xF) == 1 ? &unk_140E38500 : (_QWORD *)(v3 + 192);
        v36 = (KeGetPcr()->Prcb.Number >> 1) & 3;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v35 + ((unsigned __int64)v36 << 6)));
        MmInternal = KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          MmInternal[81] = v36;
      }
    }
    else if ( (v6 & 0xFu) >= 6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) == 1 )
        v7 = &unk_140E38500;
      else
        v7 = (_QWORD *)(v3 + 192);
      v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v9 = (_DWORD *)(*v7 + ((unsigned __int64)v8 << 6));
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v10);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v9);
        v11 = *v9 & 0x7FFFFFFF;
        while ( 1 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(v9, v11 + 1, v11);
          if ( v12 == v11 )
            break;
          if ( v11 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v9, v10);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v10);
      }
      v13 = KeGetCurrentPrcb()->MmInternal;
      if ( v13 )
        v13[81] = v8;
      v3 = v77;
    }
  }
  if ( (*(_DWORD *)v5 & 0x1000) != 0 )
    goto LABEL_47;
  BugCheckParameter2 = (((unsigned __int64)(v4 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v79 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = ((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v81 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = (_DWORD *)(v3 + 184);
  v86 = 0xFFFFF6FB7DBEDF68uLL;
  v76 = (_DWORD *)(v3 + 184);
  v17 = *(_DWORD *)(v3 + 184) & 0xF;
  if ( v17 )
  {
    if ( v17 == 7 )
    {
      v18 = 1;
    }
    else
    {
      v18 = 3;
      if ( v17 == 5 )
        v18 = 0;
    }
    v19 = (volatile __int64 *)(&MiState + 2 * v18 + 3232);
  }
  else
  {
    v18 = 2;
    v19 = (volatile __int64 *)(v3 + 176);
  }
  v20 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v18 + v18;
  *((_QWORD *)v20 + 1) = v19;
  *v20 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireQueuedSpinLockInstrumented(v20, v19);
LABEL_153:
    v16 = (_DWORD *)(v3 + 184);
    goto LABEL_19;
  }
  v21 = _InterlockedExchange64(v19, (__int64)v20);
  if ( v21 )
  {
    KxWaitForLockOwnerShip(v20, v21, CurrentPrcb, v16);
    goto LABEL_153;
  }
LABEL_19:
  for ( i = 2LL; ; --i )
  {
    v23 = *(&BugCheckParameter2 + i);
    Process = 0xFFFFF6FB7DBED7F8uLL;
    v25 = *(_QWORD *)v23;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (v25 & 1) != 0 )
    {
      LOBYTE(Process) = (v25 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v25 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v49 = *(_QWORD *)(Process + 1288);
          if ( v49 )
          {
            v50 = *(_QWORD *)(v49 + 8 * ((v23 >> 3) & 0x1FF));
            if ( (v50 & 0x20) != 0 )
              v25 |= 0x20uLL;
            Process = v25;
            v25 |= 0x42uLL;
            if ( (v50 & 0x42) == 0 )
              v25 = Process;
          }
        }
      }
    }
    if ( (v25 & 0x81) != 1 )
      break;
    if ( (v25 & 0x20) == 0 )
    {
      v26 = 0;
      v27 = (__int64)(v23 << 25) >> 16;
      if ( (*v16 & 0xF) != 0 && v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v26 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
        v16 = v76;
      }
      if ( v27 < 0xFFFFF68000000000uLL || v27 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        MiWriteValidPteNewProtection(v23, v25 | 0x20);
        v16 = v76;
      }
      else
      {
        do
        {
          v75 = v25;
          Process = v25 | 0x20;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, Process, v25);
        }
        while ( v25 != v75 );
      }
      if ( v26 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
        v16 = v76;
      }
      v3 = v77;
    }
    if ( v23 != v14 )
    {
      if ( v23 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v28 = KeGetCurrentPrcb();
        v29 = *v16 & 0xF;
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
          v31 = (volatile __int64 *)(&MiState + 2 * v30 + 3232);
        }
        else
        {
          v30 = 2;
          v31 = (volatile __int64 *)(v3 + 176);
        }
        v32 = &v28->SelfmapLockHandle[0].LockQueue.Next + 2 * v30 + v30;
        *((_QWORD *)v32 + 1) = v31;
        *v32 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
        {
          KiAcquireQueuedSpinLockInstrumented(v32, v31);
          goto LABEL_67;
        }
        v33 = _InterlockedExchange64(v31, (__int64)v32);
        if ( v33 )
        {
          KxWaitForLockOwnerShip(v32, v33, v28, v16);
          goto LABEL_67;
        }
      }
      else
      {
        if ( (*v16 & 0xF) == 0
          && v23 >= 0xFFFFF6FB7DBED000uLL
          && v23 <= 0xFFFFF6FB7DBEDFFFuLL
          && (Process = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4LL * (((unsigned int)v23 >> 3) & 0x1FF)));
        }
        else if ( (*v16 & 0xF) != 0 && v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v87 = 0;
          v64 = (unsigned __int64)(2 * (unsigned int)((__int64)(v23 + 0x90482413000LL) >> 3)) >> 5;
          v65 = (2 * ((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
          v66 = *(&MiState + v64 + 2459);
          v67 = (volatile signed __int32 *)(&MiState + v64 + 2459);
          v68 = 1 << v65;
          v69 = 2 << v65;
          do
          {
            while ( 1 )
            {
              v70 = (2 * (unsigned __int8)((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
              if ( ((v66 >> v65) & 1) == 0 )
                break;
              if ( ((v66 >> v65) & 2) != 0 )
              {
                v74 = v87;
                do
                {
                  if ( (++v74 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70) )
                  {
                    HvlNotifyLongSpinWait(v74);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v66 = *v67;
                  v70 = (2 * (unsigned __int8)((__int64)(v23 + 0x90482413000LL) >> 3)) & 0x1F;
                }
                while ( (((unsigned __int32)*v67 >> v65) & 1) != 0 );
                v87 = v74;
                v68 = 1 << v65;
              }
              else
              {
                v72 = v66 | v69;
                v73 = _InterlockedCompareExchange(v67, v66 | v69, v66);
                v40 = v66 == v73;
                v66 = v73;
                if ( v40 )
                  v66 = v72;
              }
            }
            v71 = _InterlockedCompareExchange(v67, ~(2 << v65) & (v68 | v66), v66);
            v40 = v66 == v71;
            v66 = v71;
          }
          while ( !v40 );
        }
        else
        {
          v38 = *(_QWORD *)v23;
          v39 = 0;
          if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (v38 & 1) != 0 )
          {
            LOBYTE(Process) = (v38 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v38 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                v62 = *(_QWORD *)(Process + 1288);
                if ( v62 )
                {
                  v63 = *(_QWORD *)(v62 + 8 * ((v23 >> 3) & 0x1FF));
                  if ( (v63 & 0x20) != 0 )
                    v38 |= 0x20uLL;
                  Process = v38;
                  v38 |= 0x42uLL;
                  if ( (v63 & 0x42) == 0 )
                    v38 = Process;
                }
              }
            }
          }
          while ( (v38 & 1) != 0 )
          {
            if ( (v38 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v38 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v39 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process) )
                  {
                    HvlNotifyLongSpinWait(v39);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v38 = *(_QWORD *)v23;
                }
                while ( (*(_QWORD *)v23 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v59 = v38 | 0x2000000000000000LL;
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) )
                {
                  if ( (v38 & 0x21) == 1 )
                  {
                    Process = 0x4000000000LL;
                    if ( v23 >= 0xFFFFF6C000000000uLL )
                      MiCheckLinearProtectedPteAccessedBit(v23, v38 | 0x2000000000000000LL);
                  }
                }
                v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v59, v38);
                v40 = v38 == v60;
                v38 = v60;
                if ( v40 )
                  v38 = v59;
              }
            }
            else
            {
              Process = v38 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, Process, v38);
              v40 = v38 == v41;
              v38 = v41;
              if ( v40 )
                break;
            }
          }
          v14 = v86;
          v5 = a1;
        }
LABEL_67:
        v16 = v76;
      }
      if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v46 = KeGetCurrentPrcb();
        v47 = *v16 & 0xF;
        if ( v47 )
        {
          if ( v47 == 7 )
          {
            v48 = 1LL;
          }
          else
          {
            v48 = 3LL;
            if ( v47 == 5 )
              v48 = 0LL;
          }
        }
        else
        {
          v48 = 2LL;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46->SelfmapLockHandle[v48]);
        v16 = v76;
        v14 = v23;
        v86 = v23;
      }
      else if ( (*v16 & 0xF) != 0
             || v14 < 0xFFFFF6FB7DBED000uLL
             || v14 > 0xFFFFF6FB7DBEDFFFuLL
             || (v42 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*v16 & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v14 + 0x90482413000LL) >> 3)) >> 5)
          + 2459,
            ~(3 << ((2 * ((__int64)(v14 + 0x90482413000LL) >> 3)) & 0x1F)));
          v14 = v23;
          v86 = v23;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v14, 0xCFFFFFFFFFFFFFFFuLL);
          v14 = v23;
          v86 = v23;
        }
      }
      else
      {
        v43 = ((unsigned int)v14 >> 3) & 0x1FF;
        v44 = *(_DWORD *)(v42 + 4 * v43);
        v45 = (volatile signed __int32 *)(v42 + 4 * v43);
        if ( (v44 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v45, 0xBFFFFFFF);
            _InterlockedDecrement(v45);
            v14 = v23;
            v86 = v23;
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v45, retaddr);
            v16 = v76;
            v14 = v23;
            v86 = v23;
          }
        }
        else
        {
          if ( v44 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v45, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            *v45 = 0;
            v14 = v23;
            v86 = v23;
          }
          else
          {
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v45, retaddr);
            v16 = v76;
            v14 = v23;
            v86 = v23;
          }
        }
      }
    }
    if ( !i )
      break;
    v3 = v77;
  }
  v4 = a2;
  if ( v14 == a2 )
  {
LABEL_47:
    *(_DWORD *)(v5 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(v5 + 56) = v4;
    return result;
  }
  if ( (*(_DWORD *)v5 & 0x1000) == 0 )
  {
    v51 = v16;
    if ( v14 != 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_117;
    v56 = KeGetCurrentPrcb();
    v57 = *v16 & 0xF;
    if ( v57 )
    {
      if ( v57 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56->SelfmapLockHandle[1]);
        goto LABEL_44;
      }
      v58 = 3LL;
      if ( v57 == 5 )
        v58 = 0LL;
    }
    else
    {
      v58 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56->SelfmapLockHandle[v58]);
    goto LABEL_44;
  }
  if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
    goto LABEL_44;
  v51 = v16;
LABEL_117:
  if ( (*v51 & 0xF) != 0
    || v14 < 0xFFFFF6FB7DBED000uLL
    || v14 > 0xFFFFF6FB7DBEDFFFuLL
    || (v52 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*v16 & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
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
    v53 = (v14 >> 3) & 0x1FF;
    v54 = *(_DWORD *)(v52 + 4 * v53);
    v55 = (volatile signed __int32 *)(v52 + 4 * v53);
    if ( (v54 & 0x3FFFFFFF) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v55, 0xBFFFFFFF);
        _InterlockedDecrement(v55);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v55, retaddr);
      }
    }
    else
    {
      if ( v54 >= 0 )
        KeBugCheckEx(0x10u, (ULONG_PTR)v55, 0x100uLL, 0LL, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v55 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
    }
  }
LABEL_44:
  if ( !a3 )
    MiUnlockWorkingSetShared(*(_QWORD *)(v5 + 32), *(unsigned __int8 *)(v5 + 9));
  return 0LL;
}
