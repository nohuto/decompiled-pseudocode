/*
 * XREFs of MiDeleteVaDirect @ 0x14023BBE0
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 * Callees:
 *     MiDeleteEmptyPageTable @ 0x1402005B0 (MiDeleteEmptyPageTable.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14023BA08 (KxTryToAcquireQueuedSpinLock.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiDeleteEmptyPageTableTail @ 0x1404734A0 (MiDeleteEmptyPageTableTail.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiDeleteVaDirect(__int64 a1)
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
  __int64 KernelWaitTime; // r8
  volatile signed __int32 *v45; // r9
  int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned __int64 k; // rcx
  char result; // al
  char v53; // al
  __int64 v54; // rcx
  struct _KPRCB *v55; // rcx
  __int64 v56; // rcx
  volatile unsigned __int64 v57; // rdx
  _KPROCESS *v58; // rcx
  __int64 v59; // rax
  volatile unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r14
  struct _KPRCB *v64; // r8
  char v65; // al
  unsigned int v66; // ecx
  _DWORD *v67; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  signed __int64 v71; // rax
  unsigned __int64 v72; // rcx
  char v73; // al
  __int64 v74; // rcx
  volatile signed __int64 **v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  char v78; // di
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // r9
  struct _KPRCB *v82; // rcx
  unsigned __int64 v83; // rcx
  volatile signed __int32 *v84; // rcx
  char v85; // cl
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  unsigned __int32 v88; // r10d
  char v89; // cl
  __int64 v90; // rcx
  struct _KPRCB *v91; // rdx
  char v92; // al
  __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  unsigned __int32 v95; // eax
  unsigned __int32 v96; // ett
  __int64 v97; // rdx
  unsigned __int32 v98; // eax
  unsigned __int32 v99; // ett
  __int64 v100; // rcx
  __int64 v101; // rcx
  signed __int32 v102[8]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v103; // [rsp+30h] [rbp-E8h]
  __int64 v104; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v105; // [rsp+40h] [rbp-D8h]
  __int64 LeafVa; // [rsp+48h] [rbp-D0h]
  __int64 v107; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v108; // [rsp+58h] [rbp-C0h]
  __int64 v109; // [rsp+60h] [rbp-B8h]
  __int64 v110; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v111; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+80h] [rbp-98h]
  unsigned __int64 v114; // [rsp+88h] [rbp-90h]
  __int64 v115; // [rsp+90h] [rbp-88h]
  __int64 v116; // [rsp+98h] [rbp-80h]
  __int64 (__fastcall *v117)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-78h]
  unsigned __int64 v118; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v119; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v120; // [rsp+B8h] [rbp-60h]
  __int64 v121; // [rsp+C0h] [rbp-58h]
  __int64 retaddr; // [rsp+118h] [rbp+0h]
  int v123; // [rsp+120h] [rbp+8h]
  unsigned int v124; // [rsp+128h] [rbp+10h]
  int v125; // [rsp+130h] [rbp+18h]
  __int64 v126; // [rsp+138h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v117 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 176);
  v3 = *(_QWORD *)(a1 + 168) == (_QWORD)MiDeleteVa;
  v4 = 0;
  v104 = v1;
  if ( !v3 )
    v4 = 8;
  v124 = v4;
  v5 = (unsigned int)!v3 + 1;
  v6 = *(_QWORD *)(a1 + 184);
  v110 = v5;
  v125 = *(_DWORD *)(*(_QWORD *)v6 + 160LL);
  v112 = ((*(_QWORD *)(a1 + 40) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = ((v112 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v114 = ((v113 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v115 = ((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v118 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v119 = ((v118 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v120 = ((v119 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(&v112 + v5);
  v121 = ((v120 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(&v118 + v5);
  v111 = v8;
  v126 = -1LL;
  v108 = v7;
  v9 = 0LL;
  v107 = 0LL;
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
      v105 = v7;
      v16 = v7;
      v109 = v9;
      v17 = (__int64)((v7 << 25) - v9) >> 16;
      if ( (int)v5 < v13 )
      {
        Process = 0x7FFFFFFFF8LL;
        v101 = (unsigned int)(v13 - v5);
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v101;
        }
        while ( v101 );
        v105 = v16;
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
        v103 = 0LL;
      }
      else
      {
        v20 = v18;
        v103 = v18;
        if ( v17 < *(&v112 + v18) )
          v17 = *(&v112 + v18);
        LeafVa = MiGetLeafVa(v17 + 8);
      }
LABEL_17:
      *(_QWORD *)(a1 + 56) = v16;
      v21 = *(_QWORD **)(a1 + 184);
      v22 = *(_QWORD *)(a1 + 168);
      if ( v17 < *(&v112 + v20) )
        v17 = *(&v112 + v20);
      v116 = *(_QWORD *)(a1 + 168);
      v23 = v17;
      v24 = (_QWORD *)*v21;
      if ( !v18 )
      {
        v23 = v17 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
        if ( v23 > *(&v118 + v20) )
          v23 = *(&v118 + v20);
      }
      v25 = 0;
      v123 = 0;
      while ( 1 )
      {
        if ( v17 > v23 )
        {
          v42 = v103;
LABEL_237:
          v43 = v123;
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
                  v56 = *(_QWORD *)(j + 8 * ((v17 >> 3) & 0x1FF));
                  if ( (v56 & 0x20) != 0 )
                    v41 |= 0x20uLL;
                  Process = v41;
                  v41 |= 0x42uLL;
                  if ( (v56 & 0x42) == 0 )
                    v41 = Process;
                }
              }
            }
          }
          if ( v41 && (v41 & 1) == 0 )
          {
            v42 = v103;
            v43 = 5;
            goto LABEL_95;
          }
        }
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v22 == MiDeleteVa )
        {
          MiDeleteVa(a1, v17, (unsigned int)v18);
        }
        else if ( (__int64 (*)())v22 == MiDeleteEmptyPageTable )
        {
          MiDeleteEmptyPageTable();
        }
        else
        {
          guard_dispatch_icall_no_overrides(a1, v17, (unsigned int)v18, v22);
        }
        Process = ++*(_QWORD *)(a1 + 160);
        if ( (*(_DWORD *)a1 & 2) == 0 || ((unsigned __int8)Process & *(_BYTE *)(a1 + 8)) != 0 )
          goto LABEL_38;
        v22 = *(_QWORD *)(a1 + 32);
        if ( (*(_DWORD *)(v22 + 184) & 0xFu) <= 5 )
        {
          if ( (*(_DWORD *)(v22 + 184) & 0xF) == 1 )
            v26 = (unsigned __int64 *)&unk_140E38880;
          else
            v26 = (unsigned __int64 *)(v22 + 192);
          Process = *v26;
          if ( (*(_DWORD *)a1 & 4) != 0 )
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
        if ( (*(_DWORD *)a1 & 4) == 0 )
          goto LABEL_58;
        j = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v17 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          Process = (unsigned __int64)KeGetCurrentPrcb();
          v53 = *(_DWORD *)(v22 + 184) & 0xF;
          if ( v53 )
          {
            if ( v53 == 7 )
            {
              v33 = *(_QWORD *)(Process + 40024) == 0LL;
LABEL_57:
              if ( !v33 )
                goto LABEL_36;
              goto LABEL_58;
            }
            v54 = 72LL;
            if ( v53 == 5 )
              v54 = 0LL;
          }
          else
          {
            v54 = 48LL;
          }
          v33 = *(_QWORD *)(v54 + Process + 40000) == 0LL;
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
        Process = (unsigned int)dword_140E2F1EC[(unsigned __int64)(unsigned int)(2 * j) >> 5] >> ((2 * j) & 0x1F);
        if ( (Process & 2) != 0 )
          goto LABEL_36;
LABEL_58:
        if ( *(_BYTE *)(a1 + 9) >= 2u )
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
            v55 = KeGetCurrentPrcb();
            j = (unsigned __int64)v55->SchedulerAssist;
            if ( j )
            {
              _m_prefetchw((const void *)j);
              v95 = *(_DWORD *)j;
              do
              {
                Process = v95;
                LODWORD(Process) = v95 & 0xFFDFFFFF;
                v96 = v95;
                v95 = _InterlockedCompareExchange((volatile signed __int32 *)j, v95 & 0xFFDFFFFF, v95);
              }
              while ( v96 != v95 );
              if ( (v95 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v55, Process, j, v22);
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
          v123 = 2;
          goto LABEL_38;
        }
        v25 = 0;
LABEL_38:
        v29 = v107;
        v30 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
        *(_DWORD *)(a1 + 12) = 0;
        v17 += 8 * v30;
        v24[9] = v17;
        v24[11] = v17;
        v24[7] = (__int64)((v17 << 25) - v29) >> 16;
        if ( v123 == 2 )
          break;
        v22 = v116;
      }
      v42 = v103;
      if ( v17 > *(&v118 + v103) )
      {
        v43 = 0;
        goto LABEL_95;
      }
      if ( v126 != -1 )
        goto LABEL_237;
      Process = v17;
      v126 = v17;
      if ( v17 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( Process > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          Process = (__int64)((Process << 25) - v29) >> 16;
        }
        while ( Process >= 0xFFFFF68000000000uLL );
        v42 = v103;
        v126 = Process;
      }
      v43 = 2;
LABEL_95:
      if ( v117 == MiDeleteVaTail )
      {
        MiDecommitPagesTail(**(_QWORD **)(a1 + 184), Process, j, v22);
      }
      else if ( v117 == MiDeleteEmptyPageTableTail )
      {
        MiDeleteEmptyPageTableTail(a1, Process, j, v22);
      }
      else
      {
        guard_dispatch_icall_no_overrides(a1, Process, j, v22);
      }
      if ( v43 == 5 )
      {
        v97 = *(_QWORD *)(a1 + 56);
        if ( v97 )
        {
          MiUnlockPageTableInternal(v104, v97);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        return 0;
      }
      v46 = *(_DWORD *)(a1 + 4);
      v47 = *(_DWORD *)a1;
      if ( (v46 & 1) != 0 )
      {
        v126 = -1LL;
        *(_DWORD *)(a1 + 4) = v46 & 0xFFFFFFFE;
        v3 = (v47 & 4) == 0;
        v90 = *(_QWORD *)(a1 + 32);
        if ( v3 )
          MiLockWorkingSetExclusive(v90);
        else
          MiLockWorkingSetShared(v90);
        v10 = v109;
        v9 = v107;
        v1 = v104;
        v7 = v108;
        LODWORD(v5) = v110;
        v4 = v124;
        v8 = v111;
        continue;
      }
      break;
    }
    v48 = v105;
    if ( (*(_DWORD *)a1 & 0x800) == 0 && (v125 & 0x80u) == 0 || v18 == 3 )
      goto LABEL_100;
    v57 = *(_QWORD *)v105;
    if ( v105 >= 0xFFFFF6FB7DBED000uLL
      && v105 <= 0xFFFFF6FB7DBED7F8uLL
      && (v57 & 1) != 0
      && ((v57 & 0x42) == 0 || (v57 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      v58 = KeGetCurrentThread()->ApcState.Process;
      if ( v58->AddressPolicy != 1 )
      {
        KernelWaitTime = v58[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v59 = *(_QWORD *)(KernelWaitTime + 8 * ((v105 >> 3) & 0x1FF));
          if ( (v59 & 0x20) != 0 )
            v57 |= 0x20uLL;
          v60 = v57;
          v57 |= 0x42uLL;
          if ( (v59 & 0x42) == 0 )
            v57 = v60;
        }
      }
    }
    Process = (v57 >> 12) & 0xFFFFFFFFFFLL;
    v61 = 48 * Process - 0x220000000000LL;
    v62 = (*(_DWORD *)(v61 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v61) : *(_QWORD *)(v61 + 16) >> 16;
    if ( (v62 & 0x3FF) != 0 )
    {
LABEL_100:
      v1 = v104;
      if ( v105 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v104 + 184) & 0xF) != 0
          || v105 < 0xFFFFF6FB7DBED000uLL
          || v105 > 0xFFFFF6FB7DBEDFFFuLL
          || (v94 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v104 + 184) & 0xF) != 0 && v105 >= 0xFFFFF6FB7DBED000uLL && v105 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              &dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v105 + 0x90482413000LL) >> 3)) >> 5],
              ~(2 << ((2 * ((__int64)(v105 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                       * ((__int64)(v105
                                                                                                  + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v105, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(
            (volatile signed __int32 *)(v94 + 4 * ((v105 >> 3) & 0x1FF)),
            Process,
            KernelWaitTime,
            (__int64)v45);
        }
        goto LABEL_104;
      }
      v91 = KeGetCurrentPrcb();
      v92 = *(_DWORD *)(v104 + 184) & 0xF;
      if ( v92 )
      {
        if ( v92 == 7 )
        {
          KxReleaseQueuedSpinLock(&v91->SelfmapLockHandle[1]);
          goto LABEL_104;
        }
        v93 = 3LL;
        if ( v92 == 5 )
          v93 = 0LL;
      }
      else
      {
        v93 = 2LL;
      }
      KxReleaseQueuedSpinLock(&v91->SelfmapLockHandle[v93]);
LABEL_104:
      *(_QWORD *)(a1 + 56) = 0LL;
      if ( v43 == 2 )
      {
        MiReleaseWalkLocks(a1);
        *(_DWORD *)(a1 + 4) &= ~1u;
        v49 = v126;
        v50 = *(_QWORD *)(a1 + 32);
        v126 = -1LL;
        if ( (*(_DWORD *)a1 & 4) != 0 )
          MiLockWorkingSetShared(v50);
        else
          MiLockWorkingSetExclusive(v50);
      }
      else
      {
        v49 = LeafVa;
      }
      LODWORD(v5) = v110;
      v7 = ((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v108 = v7;
      if ( (unsigned int)v110 > 1 )
      {
        v100 = (unsigned int)(v110 - 1);
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v100;
        }
        while ( v100 );
        v108 = v7;
      }
      for ( k = v118; k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
      {
        if ( k > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      if ( v49 > k )
        return 1;
      v112 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v113 = ((v112 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v114 = ((v113 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = v107;
      v10 = v109;
      v4 = v124;
      v8 = v111;
      v115 = ((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  j = ((v105 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = v104;
  if ( ((v105 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v64 = KeGetCurrentPrcb();
    v65 = *(_DWORD *)(v104 + 184) & 0xF;
    if ( v65 )
    {
      if ( v65 == 7 )
      {
        v66 = 1;
      }
      else
      {
        v66 = 3;
        if ( v65 == 5 )
          v66 = 0;
      }
      v67 = (_DWORD *)((char *)&unk_140E2FE00 + 8 * v66);
    }
    else
    {
      v66 = 2;
      v67 = (_DWORD *)(v104 + 176);
    }
    v68 = &v64->SelfmapLockHandle[0].LockQueue.Next + 2 * v66 + v66;
    *((_QWORD *)v68 + 1) = v67;
    *v68 = 0LL;
    v69 = KxTryToAcquireQueuedSpinLock((signed __int64)v68, v67);
    goto LABEL_179;
  }
  if ( (*(_DWORD *)(v104 + 184) & 0xF) == 0 && j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v72 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
    if ( v72 )
    {
      v69 = ExTryAcquireSpinLockExclusiveAtDpcLevel(
              v72 + 4 * ((((v105 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF),
              Process,
              (((v105 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF,
              v45);
LABEL_179:
      if ( v69 )
        goto LABEL_180;
      goto LABEL_262;
    }
  }
  if ( (*(_DWORD *)(v104 + 184) & 0xF) == 0 || j < 0xFFFFF6FB7DBED000uLL || j > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v71 = *(_QWORD *)j;
    if ( j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v71 & 1) == 0 )
      {
LABEL_235:
        v69 = 0;
        goto LABEL_179;
      }
      LOBYTE(Process) = (v71 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v71 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v45 = *(volatile signed __int32 **)(Process + 1288);
          if ( v45 )
          {
            v70 = *(_QWORD *)&v45[2 * ((j >> 3) & 0x1FF)];
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
      v69 = v71 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)j,
                     v71 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                     v71);
      goto LABEL_179;
    }
    goto LABEL_235;
  }
  v86 = (__int64)(j + 0x90482413000LL) >> 3;
  v87 = (unsigned __int64)(unsigned int)(2 * v86) >> 5;
  v88 = dword_140E2F1EC[v87];
  v45 = &dword_140E2F1EC[v87];
  v89 = (2 * v86) & 0x1F;
  if ( ((v88 >> v89) & 1) == 0 )
  {
    Process = (unsigned int)~(2 << v89);
    j = (unsigned int)Process & (v88 | (1 << v89));
    if ( v88 == _InterlockedCompareExchange(v45, j, v88) )
    {
LABEL_180:
      if ( v48 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v63 + 184) & 0xF) != 0
          || v48 < 0xFFFFF6FB7DBED000uLL
          || v48 > 0xFFFFF6FB7DBEDFFFuLL
          || (v83 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v63 + 184) & 0xF) != 0 && v48 >= 0xFFFFF6FB7DBED000uLL && v48 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            j = 2 * (unsigned int)((__int64)(v48 + 0x90482413000LL) >> 3);
            v85 = (2 * ((__int64)(v48 + 0x90482413000LL) >> 3)) & 0x1F;
            Process = (unsigned int)~(2 << v85);
            LODWORD(Process) = Process & ~(1 << v85);
            _InterlockedAnd(&dword_140E2F1EC[j >> 5], Process);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v48, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          v84 = (volatile signed __int32 *)(v83 + 4 * ((v48 >> 3) & 0x1FF));
          if ( (*v84 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v84, 0xBFFFFFFF);
              _InterlockedDecrement(v84);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v84, retaddr);
            }
          }
          else
          {
            if ( *(int *)v84 >= 0 )
              KeBugCheckEx(0x10u, (ULONG_PTR)v84, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v84 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v84, retaddr);
          }
        }
        goto LABEL_184;
      }
      Process = (unsigned __int64)KeGetCurrentPrcb();
      v73 = *(_DWORD *)(v63 + 184) & 0xF;
      if ( v73 )
      {
        if ( v73 == 7 )
        {
          v74 = 24LL;
        }
        else
        {
          v74 = 72LL;
          if ( v73 == 5 )
            v74 = 0LL;
        }
      }
      else
      {
        v74 = 48LL;
      }
      v75 = (volatile signed __int64 **)(v74 + Process + 40000);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v75, retaddr);
        goto LABEL_184;
      }
      _m_prefetchw(v75);
      v76 = (__int64)*v75;
      if ( !*v75 )
      {
        if ( v75 == (volatile signed __int64 **)_InterlockedCompareExchange64(v75[1], 0LL, (signed __int64)v75) )
        {
LABEL_184:
          v17 = v48;
          v16 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          ++v18;
          v20 = v42 + 1;
          v105 = v16;
          v103 = v20;
          goto LABEL_17;
        }
        v76 = KxWaitForLockChainValid(v75);
      }
      j = v76 + 8;
      *v75 = 0LL;
      v77 = (__int64)v75[1];
      if ( (((unsigned __int8)v77 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v76 + 8), v77)) & 4) != 0 )
      {
        _InterlockedOr(v102, 0);
        v78 = KeDisableInterrupts(v77, Process, (j >> 5) & 0x7F, v45);
        KiHaltOnAddressWakeEntireList(v80, _InterlockedExchange64(&KiHaltOnAddressHashTable[v79], 0LL));
        if ( v78 )
        {
          v82 = KeGetCurrentPrcb();
          j = (unsigned __int64)v82->SchedulerAssist;
          if ( j )
          {
            _m_prefetchw((const void *)j);
            v98 = *(_DWORD *)j;
            do
            {
              Process = v98;
              LODWORD(Process) = v98 & 0xFFDFFFFF;
              v99 = v98;
              v98 = _InterlockedCompareExchange((volatile signed __int32 *)j, v98 & 0xFFDFFFFF, v98);
            }
            while ( v99 != v98 );
            if ( (v98 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v82, Process, j, v81);
          }
          _enable();
        }
      }
      goto LABEL_184;
    }
  }
LABEL_262:
  MiUnlockPageTableInternal(v63, v48);
  result = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
