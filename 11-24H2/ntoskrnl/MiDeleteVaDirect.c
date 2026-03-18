/*
 * XREFs of MiDeleteVaDirect @ 0x1402DA300
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403CC1D4 (MiDeletePagablePteRange.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DA128 (KxTryToAcquireQueuedSpinLock.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteEmptyPageTable @ 0x140473750 (MiDeleteEmptyPageTable.c)
 *     MiDeleteEmptyPageTableTail @ 0x140476F00 (MiDeleteEmptyPageTableTail.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiDeleteVaDirect(int *a1)
{
  __int64 v1; // r14
  bool v3; // zf
  unsigned int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  ULONG_PTR i; // rdx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 Process; // rdx
  unsigned __int64 j; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  int v18; // r12d
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // r13
  _QWORD *v24; // r15
  unsigned int v25; // esi
  unsigned __int64 *v26; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // eax
  bool v33; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebp
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rbp
  int v43; // edi
  int v44; // eax
  int v45; // ecx
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  __int64 v48; // rcx
  unsigned __int64 k; // rcx
  char result; // al
  char v51; // al
  __int64 v52; // rcx
  struct _KPRCB *v53; // rcx
  __int64 v54; // rcx
  volatile unsigned __int64 v55; // rdx
  _KPROCESS *v56; // rcx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v58; // rax
  volatile unsigned __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r14
  struct _KPRCB *v63; // r8
  char v64; // al
  unsigned int v65; // ecx
  _DWORD *v66; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v67; // rcx
  int v68; // eax
  __int64 v69; // r9
  __int64 v70; // rcx
  signed __int64 v71; // rax
  char v72; // al
  __int64 v73; // rcx
  volatile signed __int64 **v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  char v77; // di
  __int64 v78; // r8
  __int64 v79; // rcx
  struct _KPRCB *v80; // rcx
  unsigned __int64 v81; // rcx
  volatile signed __int32 *v82; // rcx
  char v83; // cl
  __int64 v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int32 v86; // r10d
  char v87; // cl
  __int64 v88; // rcx
  struct _KPRCB *v89; // rdx
  char v90; // al
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int32 v93; // eax
  unsigned __int32 v94; // ett
  __int64 v95; // rdx
  unsigned __int32 v96; // eax
  unsigned __int32 v97; // ett
  __int64 v98; // rcx
  __int64 v99; // rcx
  signed __int32 v100[8]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v101; // [rsp+30h] [rbp-E8h]
  __int64 v102; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v103; // [rsp+40h] [rbp-D8h]
  __int64 LeafVa; // [rsp+48h] [rbp-D0h]
  __int64 v105; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v106; // [rsp+58h] [rbp-C0h]
  __int64 v107; // [rsp+60h] [rbp-B8h]
  __int64 v108; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v109; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v111; // [rsp+80h] [rbp-98h]
  unsigned __int64 v112; // [rsp+88h] [rbp-90h]
  __int64 v113; // [rsp+90h] [rbp-88h]
  __int64 v114; // [rsp+98h] [rbp-80h]
  __int64 (__fastcall *v115)(); // [rsp+A0h] [rbp-78h]
  unsigned __int64 v116; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v117; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v118; // [rsp+B8h] [rbp-60h]
  __int64 v119; // [rsp+C0h] [rbp-58h]
  __int64 retaddr; // [rsp+118h] [rbp+0h]
  int v121; // [rsp+120h] [rbp+8h]
  unsigned int v122; // [rsp+128h] [rbp+10h]
  int v123; // [rsp+130h] [rbp+18h]
  __int64 v124; // [rsp+138h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v115 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 22);
  v3 = *((_QWORD *)a1 + 21) == (_QWORD)MiDeleteVa;
  v4 = 0;
  v102 = v1;
  if ( !v3 )
    v4 = 8;
  v122 = v4;
  v5 = (unsigned int)!v3 + 1;
  v6 = *((_QWORD *)a1 + 23);
  v108 = v5;
  v123 = *(_DWORD *)(*(_QWORD *)v6 + 160LL);
  v110 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v112 = ((v111 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = ((v112 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v116 = ((*((_QWORD *)a1 + 6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v117 = ((v116 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v118 = ((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(&v110 + v5);
  v119 = ((v118 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(&v116 + v5);
  v109 = v8;
  v124 = -1LL;
  v106 = v7;
  v9 = 0LL;
  v105 = 0LL;
  v10 = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v7 > v8 )
        return 1;
      for ( i = v7; i >= 0xFFFFF68000000000uLL; i = v12 >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v12 = (i << 25) - v10;
        v10 = v9;
      }
      v13 = MiFastLockLeafPageTable(v1, i, v4);
      if ( !v13 )
        return 0;
      v103 = v7;
      v16 = v7;
      v107 = v9;
      v17 = (__int64)((v7 << 25) - v9) >> 16;
      if ( (int)v5 < v13 )
      {
        Process = 0x7FFFFFFFF8LL;
        v99 = (unsigned int)(v13 - v5);
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v99;
        }
        while ( v99 );
        v103 = v16;
      }
      v18 = v13 - 1;
      if ( v13 == 1 )
      {
        v19 = v16 + 8;
        LeafVa = v16 + 8;
        if ( v16 + 8 >= 0xFFFFF68000000000uLL )
        {
          Process = 0xFFFFF6FFFFFFFFFFuLL;
          do
          {
            if ( v19 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v19 = (__int64)((v19 << 25) - v9) >> 16;
          }
          while ( v19 >= 0xFFFFF68000000000uLL );
          LeafVa = v19;
        }
        v20 = 0LL;
        v101 = 0LL;
      }
      else
      {
        v20 = v18;
        v101 = v18;
        if ( v17 < *(&v110 + v18) )
          v17 = *(&v110 + v18);
        LeafVa = MiGetLeafVa(v17 + 8);
      }
LABEL_17:
      *((_QWORD *)a1 + 7) = v16;
      v21 = (_QWORD *)*((_QWORD *)a1 + 23);
      v22 = *((_QWORD *)a1 + 21);
      if ( v17 < *(&v110 + v20) )
        v17 = *(&v110 + v20);
      v114 = *((_QWORD *)a1 + 21);
      v23 = v17;
      v24 = (_QWORD *)*v21;
      if ( !v18 )
      {
        v23 = v17 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
        if ( v23 > *(&v116 + v20) )
          v23 = *(&v116 + v20);
      }
      v25 = 0;
      v121 = 0;
      while ( 1 )
      {
        if ( v17 > v23 )
        {
          v42 = v101;
LABEL_237:
          v43 = v121;
          goto LABEL_95;
        }
        if ( v18 )
        {
          v41 = *(_QWORD *)v17;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL && (v41 & 1) != 0 )
          {
            LOBYTE(Process) = (v41 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v41 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                j = *(_QWORD *)(Process + 1288);
                if ( j )
                {
                  v54 = *(_QWORD *)(j + 8 * ((v17 >> 3) & 0x1FF));
                  if ( (v54 & 0x20) != 0 )
                    v41 |= 0x20uLL;
                  Process = v41;
                  v41 |= 0x42uLL;
                  if ( (v54 & 0x42) == 0 )
                    v41 = Process;
                }
              }
            }
          }
          if ( v41 && (v41 & 1) == 0 )
          {
            v42 = v101;
            v43 = 5;
            goto LABEL_95;
          }
        }
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v22 == MiDeleteVa )
        {
          MiDeleteVa(a1, v17, (unsigned int)v18);
        }
        else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v22 == MiDeleteEmptyPageTable )
        {
          MiDeleteEmptyPageTable(a1, v17, (unsigned int)v18);
        }
        else
        {
          guard_dispatch_icall_no_overrides(a1, v17, (unsigned int)v18, v22);
        }
        Process = ++*((_QWORD *)a1 + 20);
        if ( (*a1 & 2) == 0 || ((unsigned __int8)Process & (_BYTE)a1[2]) != 0 )
          goto LABEL_38;
        v22 = *((_QWORD *)a1 + 4);
        if ( (*(_DWORD *)(v22 + 184) & 0xFu) <= 5 )
        {
          if ( (*(_DWORD *)(v22 + 184) & 0xF) == 1 )
            v26 = (unsigned __int64 *)&unk_140E38740;
          else
            v26 = (unsigned __int64 *)(v22 + 192);
          Process = *v26;
          if ( (*a1 & 4) != 0 )
          {
            MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
              v28 = MmInternal[81];
            else
              v28 = 0LL;
            if ( (*(_DWORD *)(Process + (v28 << 6)) & 0x40000000) != 0 )
              goto LABEL_36;
          }
          else
          {
            for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
            {
              if ( (*(_DWORD *)(((unsigned __int64)(unsigned int)j << 6) + Process) & 0x40000000) != 0 )
                goto LABEL_36;
            }
          }
        }
        if ( (*a1 & 4) == 0 )
          goto LABEL_58;
        j = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v17 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          Process = (unsigned __int64)KeGetCurrentPrcb();
          v51 = *(_DWORD *)(v22 + 184) & 0xF;
          if ( v51 )
          {
            if ( v51 == 7 )
            {
              v33 = *(_QWORD *)(Process + 40024) == 0LL;
LABEL_57:
              if ( !v33 )
                goto LABEL_36;
              goto LABEL_58;
            }
            v52 = 72LL;
            if ( v51 == 5 )
              v52 = 0LL;
          }
          else
          {
            v52 = 48LL;
          }
          v33 = *(_QWORD *)(v52 + Process + 40000) == 0LL;
          goto LABEL_57;
        }
        if ( (*(_DWORD *)(v22 + 184) & 0xF) == 0 && j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v38 )
          {
            j = (((v17 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
            v32 = (*(_DWORD *)(v38 + 4 * j) & 0x40000000) != 0;
LABEL_56:
            v33 = v32 == 0;
            goto LABEL_57;
          }
        }
        if ( (*(_DWORD *)(v22 + 184) & 0xF) == 0 || j < 0xFFFFF6FB7DBED000uLL || j > 0xFFFFF6FB7DBEDFFFuLL )
        {
          v31 = *(_QWORD *)j;
          if ( j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBED7F8uLL && (v31 & 1) != 0 )
          {
            LOBYTE(Process) = (v31 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v31 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                v39 = *(_QWORD *)(Process + 1288);
                if ( v39 )
                {
                  j = (j >> 3) & 0x1FF;
                  v40 = *(_QWORD *)(v39 + 8 * j);
                  if ( (v40 & 0x20) != 0 )
                    v31 |= 0x20uLL;
                  Process = v31;
                  v31 |= 0x42uLL;
                  if ( (v40 & 0x42) == 0 )
                    v31 = Process;
                }
              }
            }
          }
          v32 = (v31 >> 60) & 2;
          goto LABEL_56;
        }
        j = (__int64)(j + 0x90482413000LL) >> 3;
        Process = (unsigned int)dword_140E2F0AC[(unsigned __int64)(unsigned int)(2 * j) >> 5] >> ((2 * j) & 0x1F);
        if ( (Process & 2) != 0 )
          goto LABEL_36;
LABEL_58:
        if ( *((_BYTE *)a1 + 9) >= 2u )
          goto LABEL_38;
        CurrentPrcb = KeGetCurrentPrcb();
        j = 0LL;
        v22 = 0LL;
        Process = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (Process & 1) == 0 )
        {
          if ( CurrentPrcb->NestingLevel )
          {
            v22 = 1LL;
            if ( DpcWatchdogCount <= 7 )
              goto LABEL_38;
            if ( CurrentPrcb->QuantumEnd )
            {
              v25 = 7;
              goto LABEL_84;
            }
            goto LABEL_66;
          }
          if ( (Process & 0x1E) != 0 )
          {
            v25 = 2;
            goto LABEL_84;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v25 = 3;
            goto LABEL_84;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v25 = 4;
            goto LABEL_84;
          }
LABEL_64:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_38;
          if ( !(_DWORD)j )
          {
LABEL_124:
            _disable();
            CurrentPrcb->DpcWatchdogCount = 0;
            CurrentPrcb->DpcTimeCount = 0;
            v53 = KeGetCurrentPrcb();
            j = (unsigned __int64)v53->SchedulerAssist;
            if ( j )
            {
              _m_prefetchw((const void *)j);
              v93 = *(_DWORD *)j;
              do
              {
                Process = v93;
                LODWORD(Process) = v93 & 0xFFDFFFFF;
                v94 = v93;
                v93 = _InterlockedCompareExchange((volatile signed __int32 *)j, v93 & 0xFFDFFFFF, v93);
              }
              while ( v94 != v93 );
              if ( (v93 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v53);
            }
            _enable();
            goto LABEL_84;
          }
          goto LABEL_66;
        }
        j = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_64;
        if ( CurrentPrcb->QuantumEnd )
        {
          v25 = 1;
          goto LABEL_84;
        }
LABEL_66:
        if ( (Process & 0x1E) != 0 )
        {
          v25 = 5;
        }
        else
        {
          if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
            goto LABEL_124;
          v25 = 6;
        }
LABEL_84:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v25, DpcWatchdogCount, DpcTimeCount, v22);
        if ( v25 )
        {
          v25 = 0;
LABEL_36:
          v121 = 2;
          goto LABEL_38;
        }
        v25 = 0;
LABEL_38:
        v29 = v105;
        v30 = (unsigned int)(a1[3] + 1);
        a1[3] = 0;
        v17 += 8 * v30;
        v24[9] = v17;
        v24[11] = v17;
        v24[7] = (__int64)((v17 << 25) - v29) >> 16;
        if ( v121 == 2 )
          break;
        v22 = v114;
      }
      v42 = v101;
      if ( v17 > *(&v116 + v101) )
      {
        v43 = 0;
        goto LABEL_95;
      }
      if ( v124 != -1 )
        goto LABEL_237;
      Process = v17;
      v124 = v17;
      if ( v17 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( Process > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          Process = (__int64)((Process << 25) - v29) >> 16;
        }
        while ( Process >= 0xFFFFF68000000000uLL );
        v42 = v101;
        v124 = Process;
      }
      v43 = 2;
LABEL_95:
      if ( v115 == MiDeleteVaTail )
      {
        MiDecommitPagesTail(**((_QWORD **)a1 + 23));
      }
      else if ( (char *)v115 == (char *)MiDeleteEmptyPageTableTail )
      {
        MiDeleteEmptyPageTableTail(a1, Process, j, v22);
      }
      else
      {
        guard_dispatch_icall_no_overrides(a1, Process, j, v22);
      }
      if ( v43 == 5 )
      {
        v95 = *((_QWORD *)a1 + 7);
        if ( v95 )
        {
          MiUnlockPageTableInternal(v102, v95);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        return 0;
      }
      v44 = a1[1];
      v45 = *a1;
      if ( (v44 & 1) != 0 )
      {
        v124 = -1LL;
        a1[1] = v44 & 0xFFFFFFFE;
        v3 = (v45 & 4) == 0;
        v88 = *((_QWORD *)a1 + 4);
        if ( v3 )
          MiLockWorkingSetExclusive(v88);
        else
          MiLockWorkingSetShared(v88);
        v10 = v107;
        v9 = v105;
        v1 = v102;
        v7 = v106;
        LODWORD(v5) = v108;
        v4 = v122;
        v8 = v109;
        continue;
      }
      break;
    }
    v46 = v103;
    if ( (*a1 & 0x800) == 0 && (v123 & 0x80u) == 0 || v18 == 3 )
      goto LABEL_100;
    v55 = *(_QWORD *)v103;
    if ( v103 >= 0xFFFFF6FB7DBED000uLL
      && v103 <= 0xFFFFF6FB7DBED7F8uLL
      && (v55 & 1) != 0
      && ((v55 & 0x42) == 0 || (v55 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      v56 = KeGetCurrentThread()->ApcState.Process;
      if ( v56->AddressPolicy != 1 )
      {
        KernelWaitTime = v56[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v58 = *(_QWORD *)(KernelWaitTime + 8 * ((v103 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            v55 |= 0x20uLL;
          v59 = v55;
          v55 |= 0x42uLL;
          if ( (v58 & 0x42) == 0 )
            v55 = v59;
        }
      }
    }
    Process = (v55 >> 12) & 0xFFFFFFFFFFLL;
    v60 = 48 * Process - 0x220000000000LL;
    v61 = (*(_DWORD *)(v60 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v60) : *(_QWORD *)(v60 + 16) >> 16;
    if ( (v61 & 0x3FF) != 0 )
    {
LABEL_100:
      v1 = v102;
      if ( v103 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v102 + 184) & 0xF) != 0
          || v103 < 0xFFFFF6FB7DBED000uLL
          || v103 > 0xFFFFF6FB7DBEDFFFuLL
          || (v92 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v102 + 184) & 0xF) != 0 && v103 >= 0xFFFFF6FB7DBED000uLL && v103 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              &dword_140E2F0AC[(unsigned __int64)(2 * (unsigned int)((__int64)(v103 + 0x90482413000LL) >> 3)) >> 5],
              ~(2 << ((2 * ((__int64)(v103 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                       * ((__int64)(v103
                                                                                                  + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v103, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v92 + 4 * ((v103 >> 3) & 0x1FF));
        }
        goto LABEL_104;
      }
      v89 = KeGetCurrentPrcb();
      v90 = *(_DWORD *)(v102 + 184) & 0xF;
      if ( v90 )
      {
        if ( v90 == 7 )
        {
          KxReleaseQueuedSpinLock(&v89->SelfmapLockHandle[1]);
          goto LABEL_104;
        }
        v91 = 3LL;
        if ( v90 == 5 )
          v91 = 0LL;
      }
      else
      {
        v91 = 2LL;
      }
      KxReleaseQueuedSpinLock(&v89->SelfmapLockHandle[v91]);
LABEL_104:
      *((_QWORD *)a1 + 7) = 0LL;
      if ( v43 == 2 )
      {
        MiReleaseWalkLocks(a1);
        a1[1] &= ~1u;
        v47 = v124;
        v48 = *((_QWORD *)a1 + 4);
        v124 = -1LL;
        if ( (*a1 & 4) != 0 )
          MiLockWorkingSetShared(v48);
        else
          MiLockWorkingSetExclusive(v48);
      }
      else
      {
        v47 = LeafVa;
      }
      LODWORD(v5) = v108;
      v7 = ((v47 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v106 = v7;
      if ( (unsigned int)v108 > 1 )
      {
        v98 = (unsigned int)(v108 - 1);
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v98;
        }
        while ( v98 );
        v106 = v7;
      }
      for ( k = v116; k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
      {
        if ( k > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      if ( v47 > k )
        return 1;
      v110 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v111 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v112 = ((v111 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = v105;
      v10 = v107;
      v4 = v122;
      v8 = v109;
      v113 = ((v112 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  j = ((v103 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = v102;
  if ( ((v103 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v63 = KeGetCurrentPrcb();
    v64 = *(_DWORD *)(v102 + 184) & 0xF;
    if ( v64 )
    {
      if ( v64 == 7 )
      {
        v65 = 1;
      }
      else
      {
        v65 = 3;
        if ( v64 == 5 )
          v65 = 0;
      }
      v66 = (_DWORD *)((char *)&unk_140E2FCC0 + 8 * v65);
    }
    else
    {
      v65 = 2;
      v66 = (_DWORD *)(v102 + 176);
    }
    v67 = &v63->SelfmapLockHandle[0].LockQueue.Next + 2 * v65 + v65;
    *((_QWORD *)v67 + 1) = v66;
    *v67 = 0LL;
    v68 = KxTryToAcquireQueuedSpinLock((signed __int64)v67, v66);
    goto LABEL_179;
  }
  if ( (*(_DWORD *)(v102 + 184) & 0xF) == 0
    && j >= 0xFFFFF6FB7DBED000uLL
    && j <= 0xFFFFF6FB7DBEDFFFuLL
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7] )
  {
    v68 = ExTryAcquireSpinLockExclusiveAtDpcLevel();
LABEL_179:
    if ( v68 )
      goto LABEL_180;
    goto LABEL_262;
  }
  if ( (*(_DWORD *)(v102 + 184) & 0xF) == 0 || j < 0xFFFFF6FB7DBED000uLL || j > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v71 = *(_QWORD *)j;
    if ( j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v71 & 1) == 0 )
      {
LABEL_235:
        v68 = 0;
        goto LABEL_179;
      }
      LOBYTE(Process) = (v71 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v71 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v69 = *(_QWORD *)(Process + 1288);
          if ( v69 )
          {
            v70 = *(_QWORD *)(v69 + 8 * ((j >> 3) & 0x1FF));
            if ( (v70 & 0x20) != 0 )
              v71 |= 0x20uLL;
            Process = v71;
            v71 |= 0x42uLL;
            if ( (v70 & 0x42) == 0 )
              v71 = Process;
          }
        }
      }
    }
    if ( (v71 & 1) != 0 && (v71 & 0x1000000000000000LL) == 0 )
    {
      Process = 0x1000000000000020LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v68 = v71 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)j,
                     v71 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                     v71);
      goto LABEL_179;
    }
    goto LABEL_235;
  }
  v84 = (__int64)(j + 0x90482413000LL) >> 3;
  v85 = (unsigned __int64)(unsigned int)(2 * v84) >> 5;
  v86 = dword_140E2F0AC[v85];
  v87 = (2 * v84) & 0x1F;
  if ( ((v86 >> v87) & 1) == 0 )
  {
    Process = (unsigned int)~(2 << v87);
    j = (unsigned int)Process & (v86 | (1 << v87));
    if ( v86 == _InterlockedCompareExchange(&dword_140E2F0AC[v85], j, v86) )
    {
LABEL_180:
      if ( v46 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v62 + 184) & 0xF) != 0
          || v46 < 0xFFFFF6FB7DBED000uLL
          || v46 > 0xFFFFF6FB7DBEDFFFuLL
          || (v81 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v62 + 184) & 0xF) != 0 && v46 >= 0xFFFFF6FB7DBED000uLL && v46 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            j = 2 * (unsigned int)((__int64)(v46 + 0x90482413000LL) >> 3);
            v83 = (2 * ((__int64)(v46 + 0x90482413000LL) >> 3)) & 0x1F;
            Process = (unsigned int)~(2 << v83);
            LODWORD(Process) = Process & ~(1 << v83);
            _InterlockedAnd(&dword_140E2F0AC[j >> 5], Process);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v46, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          v82 = (volatile signed __int32 *)(v81 + 4 * ((v46 >> 3) & 0x1FF));
          if ( (*v82 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v82, 0xBFFFFFFF);
              _InterlockedDecrement(v82);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v82, retaddr);
            }
          }
          else
          {
            if ( *(int *)v82 >= 0 )
              KeBugCheckEx(0x10u, (ULONG_PTR)v82, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v82 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v82, retaddr);
          }
        }
        goto LABEL_184;
      }
      Process = (unsigned __int64)KeGetCurrentPrcb();
      v72 = *(_DWORD *)(v62 + 184) & 0xF;
      if ( v72 )
      {
        if ( v72 == 7 )
        {
          v73 = 24LL;
        }
        else
        {
          v73 = 72LL;
          if ( v72 == 5 )
            v73 = 0LL;
        }
      }
      else
      {
        v73 = 48LL;
      }
      v74 = (volatile signed __int64 **)(v73 + Process + 40000);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v74, retaddr);
        goto LABEL_184;
      }
      _m_prefetchw(v74);
      v75 = (__int64)*v74;
      if ( !*v74 )
      {
        if ( v74 == (volatile signed __int64 **)_InterlockedCompareExchange64(v74[1], 0LL, (signed __int64)v74) )
        {
LABEL_184:
          v17 = v46;
          v16 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v18;
          v20 = v42 + 1;
          v103 = v16;
          v101 = v20;
          goto LABEL_17;
        }
        v75 = KxWaitForLockChainValid(v74);
      }
      j = v75 + 8;
      *v74 = 0LL;
      v76 = (__int64)v74[1];
      if ( (((unsigned __int8)v76 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v75 + 8), v76)) & 4) != 0 )
      {
        _InterlockedOr(v100, 0);
        v77 = KeDisableInterrupts(v76, Process, (j >> 5) & 0x7F);
        KiHaltOnAddressWakeEntireList(v79, _InterlockedExchange64(&KiHaltOnAddressHashTable[v78], 0LL));
        if ( v77 )
        {
          v80 = KeGetCurrentPrcb();
          j = (unsigned __int64)v80->SchedulerAssist;
          if ( j )
          {
            _m_prefetchw((const void *)j);
            v96 = *(_DWORD *)j;
            do
            {
              Process = v96;
              LODWORD(Process) = v96 & 0xFFDFFFFF;
              v97 = v96;
              v96 = _InterlockedCompareExchange((volatile signed __int32 *)j, v96 & 0xFFDFFFFF, v96);
            }
            while ( v97 != v96 );
            if ( (v96 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v80);
          }
          _enable();
        }
      }
      goto LABEL_184;
    }
  }
LABEL_262:
  MiUnlockPageTableInternal(v62, v46);
  result = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  return result;
}
