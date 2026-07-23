/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140243D80
 * Callers:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140473714 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // r15
  __int64 CurrentThread; // rax
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
  __int64 v25; // r9
  volatile signed __int64 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v32; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]
  unsigned __int64 v42; // [rsp+60h] [rbp-38h]
  __int64 v43; // [rsp+68h] [rbp-30h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  *(_DWORD *)a4 = 0;
  v36 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(CurrentThread) = 0;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  if ( v7 < 2 )
  {
    CurrentThread = 32LL * v7;
    v8 = 3;
    v9 = (unsigned __int64 *)((char *)&v36 + CurrentThread);
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
        v24 = MiFastLockLeafPageTable((__int64)p_Blink, (__int64)(*v9 << 25) >> 16, 8u);
        if ( v24 )
        {
          if ( v24 == 3 )
          {
            v8 = 2;
            SystemAddressValid = 0;
            v10 = v9[2];
            goto LABEL_7;
          }
          v26 = (volatile signed __int64 *)v9[v24];
          if ( v26 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = (_DWORD)p_Blink[23] & 0xF;
            if ( !v32 )
            {
              v33 = 2LL;
LABEL_80:
              KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v33]);
              goto LABEL_6;
            }
            if ( v32 != 7 )
            {
              v33 = 3LL;
              if ( v32 == 5 )
                v33 = 0LL;
              goto LABEL_80;
            }
            KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[1]);
          }
          else if ( ((_DWORD)p_Blink[23] & 0xF) != 0
                 || (unsigned __int64)v26 < 0xFFFFF6FB7DBED000uLL
                 || (unsigned __int64)v26 > 0xFFFFF6FB7DBEDFFFuLL
                 || (v34 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) != 0
              && (unsigned __int64)v26 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v26 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              _InterlockedAnd(
                (volatile signed __int32 *)&MiState
              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v26 + 0x12090482600LL) >> 3)) >> 5)
              + 2459,
                ~(3 << ((2 * ((__int64)(v26 + 0x12090482600LL) >> 3)) & 0x1F)));
            }
            else
            {
              _InterlockedAnd64(v26, 0xCFFFFFFFFFFFFFFFuLL);
            }
          }
          else
          {
            ExReleaseSpinLockRegardlessFromDpcLevel(
              (volatile signed __int32 *)(v34 + 4LL * (((unsigned int)v26 >> 3) & 0x1FF)),
              ((unsigned int)v26 >> 3) & 0x1FF,
              Process,
              v25);
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
            CurrentThread = (__int64)KeGetCurrentThread();
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
        if ( ((*(&v40 + v8) ^ v10) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          *(_BYTE *)(a4 + 1) = Process;
          return CurrentThread;
        }
      }
LABEL_13:
      if ( v8 == 1 )
      {
        Process = v41;
        LOBYTE(CurrentThread) = v10 ^ v41;
        if ( ((v10 ^ v41) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          v9 = &v40;
          v7 = 1;
          if ( SystemAddressValid < 0 )
            goto LABEL_21;
          CurrentThread = *(_QWORD *)v41;
          Process = v41;
          if ( v41 >= 0xFFFFF6FB7DBED000uLL
            && v41 <= 0xFFFFF6FB7DBED7F8uLL
            && ((unsigned __int8)CurrentThread & (unsigned __int8)v8) != 0 )
          {
            LOBYTE(Process) = (CurrentThread & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((CurrentThread & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (__int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != (_BYTE)v8 )
              {
                v29 = *(_QWORD *)(Process + 1288);
                if ( v29 )
                {
                  v30 = *(_QWORD *)(v29 + 8 * ((v41 >> 3) & 0x1FF));
                  if ( (v30 & 0x20) != 0 )
                    CurrentThread |= 0x20uLL;
                  Process = CurrentThread;
                  CurrentThread |= 0x42uLL;
                  if ( (v30 & 0x42) == 0 )
                    CurrentThread = Process;
                }
              }
            }
          }
          if ( !CurrentThread )
LABEL_21:
            *(_BYTE *)(a4 + 1) = v8;
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
          LOBYTE(CurrentThread) = KiReleaseQueuedSpinLockInstrumented(v23, retaddr);
          goto LABEL_27;
        }
        _m_prefetchw(v23);
        CurrentThread = (__int64)*v23;
        if ( !*v23 )
        {
          CurrentThread = _InterlockedCompareExchange64(v23[1], 0LL, (signed __int64)v23);
          if ( v23 == (volatile signed __int64 **)CurrentThread )
            goto LABEL_27;
          CurrentThread = KxWaitForLockChainValid(v23);
        }
        v27 = CurrentThread + 8;
        *v23 = 0LL;
        v28 = (__int64)v23[1];
        LOBYTE(CurrentThread) = v28 ^ _InterlockedExchange64((volatile __int64 *)(CurrentThread + 8), v28);
        if ( (CurrentThread & 4) != 0 )
          LOBYTE(CurrentThread) = KeWakeAddressAll(v27, v28, Process, 0LL);
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
          if ( (int)CurrentThread >= 0 )
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
