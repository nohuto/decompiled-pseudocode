/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140216EC0
 * Callers:
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140477174 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int64 CurrentThread; // rax
  unsigned int v7; // edi
  int v8; // esi
  unsigned __int64 *v9; // r14
  ULONG_PTR v10; // rbx
  __int64 Process; // r8
  int SystemAddressValid; // r9d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rcx
  struct _KPRCB *v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  volatile signed __int64 **v23; // rbx
  int v24; // eax
  volatile signed __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v31; // al
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]
  unsigned __int64 v41; // [rsp+60h] [rbp-38h]
  __int64 v42; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  *(_DWORD *)a4 = 0;
  v35 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(CurrentThread) = 0;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  if ( v7 < 2 )
  {
    CurrentThread = 32LL * v7;
    v8 = 3;
    v9 = (unsigned __int64 *)((char *)&v35 + CurrentThread);
    while ( 1 )
    {
      if ( v8 < 1 )
      {
LABEL_29:
        ++v7;
        goto LABEL_2;
      }
      v10 = v9[v8];
      if ( v8 == 3 )
      {
        v24 = MiFastLockLeafPageTable(p_Blink, (__int64)(*v9 << 25) >> 16, 8LL);
        if ( v24 )
        {
          if ( v24 == 3 )
          {
            v8 = 2;
            SystemAddressValid = 0;
            v10 = v9[2];
            goto LABEL_7;
          }
          v25 = (volatile signed __int64 *)v9[v24];
          if ( v25 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = (_DWORD)p_Blink[23] & 0xF;
            if ( !v31 )
            {
              v32 = 2LL;
LABEL_80:
              KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v32]);
              goto LABEL_6;
            }
            if ( v31 != 7 )
            {
              v32 = 3LL;
              if ( v31 == 5 )
                v32 = 0LL;
              goto LABEL_80;
            }
            KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[1]);
          }
          else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
                 || (unsigned __int64)v25 < 0xFFFFF6FB7DBED000uLL
                 || (unsigned __int64)v25 > 0xFFFFF6FB7DBEDFFFuLL
                 || (v33 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) != 0
              && (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v25 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              _InterlockedAnd(
                (volatile signed __int32 *)&MiState
              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v25 + 0x12090482600LL) >> 3)) >> 5)
              + 2459,
                ~(3 << ((2 * ((__int64)(v25 + 0x12090482600LL) >> 3)) & 0x1F)));
            }
            else
            {
              _InterlockedAnd64(v25, 0xCFFFFFFFFFFFFFFFuLL);
            }
          }
          else
          {
            ExReleaseSpinLockRegardlessFromDpcLevel(v33 + 4LL * (((unsigned int)v25 >> 3) & 0x1FF));
          }
        }
      }
LABEL_6:
      SystemAddressValid = MiMakeSystemAddressValid(v10);
      if ( SystemAddressValid < 0 )
      {
        v13 = 0LL;
        goto LABEL_89;
      }
LABEL_7:
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(CurrentThread) = 0;
      v14 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL )
      {
        LOBYTE(CurrentThread) = -8;
        if ( v10 <= 0xFFFFF6FB7DBED7F8uLL && (v14 & 1) != 0 )
        {
          LOBYTE(Process) = (v14 & 0x42) != 0;
          LOBYTE(CurrentThread) = (v14 & 0x20) != 0;
          if ( ((unsigned __int8)Process & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
          {
            CurrentThread = (unsigned __int64)KeGetCurrentThread();
            Process = *(_QWORD *)(CurrentThread + 184);
            if ( *(_BYTE *)(Process + 352) != 1 )
            {
              v16 = *(_QWORD *)(Process + 1288);
              if ( v16 )
              {
                CurrentThread = *(_QWORD *)(v16 + 8 * ((v10 >> 3) & 0x1FF));
                if ( (CurrentThread & 0x20) != 0 )
                  v14 |= 0x20uLL;
                Process = v14;
                v14 |= 0x42uLL;
                if ( (CurrentThread & 0x42) == 0 )
                  v14 = Process;
              }
            }
          }
        }
      }
      if ( v14 )
      {
        v15 = 0;
        if ( v7 )
          goto LABEL_22;
        goto LABEL_13;
      }
LABEL_89:
      LOBYTE(CurrentThread) = v7;
      Process = 1LL;
      v15 = 1;
      LOBYTE(Process) = 1 << (v8 - 1);
      *(_BYTE *)(v7 + a4) = Process;
      if ( v7 )
        goto LABEL_22;
      if ( !v13 )
      {
        LOBYTE(CurrentThread) = v8;
        if ( ((*(&v39 + v8) ^ v10) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          *(_BYTE *)(a4 + 1) = Process;
          return CurrentThread;
        }
      }
LABEL_13:
      if ( v8 == 1 )
      {
        Process = v40;
        LOBYTE(CurrentThread) = v10 ^ v40;
        if ( ((v10 ^ v40) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          v9 = &v39;
          v7 = 1;
          if ( SystemAddressValid < 0 )
            goto LABEL_21;
          CurrentThread = *(_QWORD *)v40;
          Process = v40;
          if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= 0xFFFFF6FB7DBED7F8uLL && (CurrentThread & 1) != 0 )
          {
            LOBYTE(Process) = (CurrentThread & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((CurrentThread & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                v28 = *(_QWORD *)(Process + 1288);
                if ( v28 )
                {
                  v29 = *(_QWORD *)(v28 + 8 * ((v40 >> 3) & 0x1FF));
                  if ( (v29 & 0x20) != 0 )
                    CurrentThread |= 0x20uLL;
                  Process = CurrentThread;
                  CurrentThread |= 0x42uLL;
                  if ( (v29 & 0x42) == 0 )
                    CurrentThread = Process;
                }
              }
            }
          }
          if ( !CurrentThread )
LABEL_21:
            *(_BYTE *)(a4 + 1) = 1;
        }
      }
LABEL_22:
      if ( !v13 )
        goto LABEL_27;
      if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v20 = KeGetCurrentPrcb();
        v21 = (_DWORD)p_Blink[23] & 0xF;
        if ( v21 )
        {
          if ( v21 == 7 )
          {
            v22 = 1LL;
          }
          else
          {
            v22 = 3LL;
            if ( v21 == 5 )
              v22 = 0LL;
          }
        }
        else
        {
          v22 = 2LL;
        }
        v23 = (volatile signed __int64 **)&v20->SelfmapLockHandle[v22];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          LOBYTE(CurrentThread) = KiReleaseQueuedSpinLockInstrumented(v23, retaddr, Process, 0LL);
          goto LABEL_27;
        }
        _m_prefetchw(v23);
        CurrentThread = (unsigned __int64)*v23;
        if ( !*v23 )
        {
          CurrentThread = _InterlockedCompareExchange64(v23[1], 0LL, (signed __int64)v23);
          if ( v23 == (volatile signed __int64 **)CurrentThread )
            goto LABEL_27;
          CurrentThread = KxWaitForLockChainValid(v23, v20, Process, 0LL);
        }
        v26 = CurrentThread + 8;
        *v23 = 0LL;
        v27 = (__int64)v23[1];
        LOBYTE(CurrentThread) = v27 ^ _InterlockedExchange64((volatile __int64 *)(CurrentThread + 8), v27);
        if ( (CurrentThread & 4) != 0 )
          LOBYTE(CurrentThread) = KeWakeAddressAll(v26, v27, Process, 0LL);
      }
      else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
             || v13 < 0xFFFFF6FB7DBED000uLL
             || v13 > 0xFFFFF6FB7DBEDFFFuLL
             || (v17 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          CurrentThread = (unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5;
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState + CurrentThread + 2459,
            ~(2 << ((2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                    * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)));
        }
        else
        {
          LOBYTE(CurrentThread) = -1;
          _InterlockedAnd64((volatile signed __int64 *)v13, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v18 = (v13 >> 3) & 0x1FF;
        LODWORD(CurrentThread) = *(_DWORD *)(v17 + 4 * v18);
        v19 = (volatile signed __int32 *)(v17 + 4 * v18);
        if ( (CurrentThread & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
            || (LOBYTE(CurrentThread) = PopHibernateInProgress, PopHibernateInProgress) )
          {
            _InterlockedAnd(v19, 0xBFFFFFFF);
            _InterlockedDecrement(v19);
          }
          else
          {
            LOBYTE(CurrentThread) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v19, retaddr);
          }
        }
        else
        {
          if ( (CurrentThread & 0x80000000) == 0LL )
            KeBugCheckEx(0x10u, (ULONG_PTR)v19, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
            || (LOBYTE(CurrentThread) = PopHibernateInProgress, PopHibernateInProgress) )
          {
            *v19 = 0;
          }
          else
          {
            LOBYTE(CurrentThread) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19, retaddr);
          }
        }
      }
LABEL_27:
      if ( v15 )
        goto LABEL_29;
      --v8;
    }
  }
  return CurrentThread;
}
