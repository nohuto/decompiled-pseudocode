/*
 * XREFs of MiDeleteVaDirect @ 0x1402B05C0
 * Callers:
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402B03EC (KxTryToAcquireQueuedSpinLock.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402B2120 (EtwTraceShouldYieldProcessor.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteEmptyPageTable @ 0x140475810 (MiDeleteEmptyPageTable.c)
 *     MiDeleteEmptyPageTableTail @ 0x140479EC0 (MiDeleteEmptyPageTableTail.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiDeleteVaDirect(int *a1)
{
  __int64 v1; // rbp
  bool v3; // zf
  unsigned int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  ULONG_PTR i; // rdx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 j; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  unsigned __int64 Process; // rdx
  int v19; // r12d
  unsigned __int64 v20; // rcx
  __int64 v21; // r10
  _QWORD *v22; // rcx
  __int64 v23; // r9
  unsigned __int64 v24; // r13
  _QWORD *v25; // r15
  _KPROCESS **v26; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  bool v32; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebp
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  unsigned int v37; // esi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // edi
  unsigned __int64 KernelWaitTime; // r8
  int v42; // eax
  int v43; // ecx
  unsigned __int64 v44; // r14
  char v45; // al
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int32 v51; // eax
  unsigned __int32 v52; // ett
  volatile unsigned __int64 v53; // rdx
  _KPROCESS *v54; // rcx
  __int64 v55; // rax
  volatile unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rbp
  struct _KPRCB *v60; // r8
  char v61; // al
  unsigned int v62; // ecx
  _DWORD *v63; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v64; // rcx
  int v65; // eax
  _KPROCESS *v66; // rdx
  unsigned __int64 v67; // r9
  __int64 v68; // rcx
  signed __int64 v69; // rax
  signed __int64 v70; // rdx
  char v71; // cl
  unsigned __int64 v72; // rcx
  volatile signed __int32 *v73; // rcx
  struct _KPRCB *v74; // rdx
  char v75; // al
  __int64 v76; // rcx
  volatile signed __int64 **v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  bool v80; // di
  __int64 v81; // r8
  __int64 v82; // rcx
  struct _KPRCB *v83; // rcx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdi
  __int64 v86; // rcx
  unsigned __int64 k; // rcx
  char result; // al
  signed __int32 v89; // eax
  signed __int32 v90; // ett
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // r14
  int v94; // eax
  volatile signed __int32 *v95; // rcx
  struct _KPRCB *v96; // rdx
  char v97; // al
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned __int64 v100; // rax
  unsigned __int32 v101; // r10d
  char v102; // cl
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rcx
  signed __int32 v106[8]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v107; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v108; // [rsp+38h] [rbp-E0h]
  __int64 v109; // [rsp+40h] [rbp-D8h]
  __int64 LeafVa; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v111; // [rsp+50h] [rbp-C8h]
  __int64 v112; // [rsp+58h] [rbp-C0h]
  __int64 v113; // [rsp+60h] [rbp-B8h]
  __int64 v114; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v115; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v116; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v117; // [rsp+80h] [rbp-98h]
  unsigned __int64 v118; // [rsp+88h] [rbp-90h]
  __int64 v119; // [rsp+90h] [rbp-88h]
  __int64 v120; // [rsp+98h] [rbp-80h]
  __int64 (__fastcall *v121)(); // [rsp+A0h] [rbp-78h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v123; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v124; // [rsp+B8h] [rbp-60h]
  __int64 v125; // [rsp+C0h] [rbp-58h]
  void *retaddr; // [rsp+118h] [rbp+0h]
  int v127; // [rsp+120h] [rbp+8h]
  unsigned int v128; // [rsp+128h] [rbp+10h]
  int v129; // [rsp+130h] [rbp+18h]
  __int64 v130; // [rsp+138h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v121 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 22);
  v3 = *((_QWORD *)a1 + 21) == (_QWORD)MiDeleteVa;
  v4 = 0;
  v107 = v1;
  if ( !v3 )
    v4 = 8;
  v128 = v4;
  v5 = (unsigned int)!v3 + 1;
  v6 = *((_QWORD *)a1 + 23);
  v114 = v5;
  v129 = *(_DWORD *)(*(_QWORD *)v6 + 160LL);
  v116 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v117 = ((v116 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v118 = ((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v119 = ((v118 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v122 = ((*((_QWORD *)a1 + 6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v123 = ((v122 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v124 = ((v123 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(&v116 + v5);
  v125 = ((v124 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(&v122 + v5);
  v115 = v8;
  v130 = -1LL;
  v111 = v7;
  v9 = 0LL;
  v112 = 0LL;
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
      v108 = v7;
      v16 = v7;
      v113 = v9;
      v17 = (__int64)((v7 << 25) - v9) >> 16;
      Process = 0xFFFFF68000000000uLL;
      if ( (int)v5 < v13 )
      {
        j = 0x7FFFFFFFF8LL;
        v105 = (unsigned int)(v13 - v5);
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v105;
        }
        while ( v105 );
        v108 = v16;
      }
      v19 = v13 - 1;
      if ( v13 == 1 )
      {
        v20 = v16 + 8;
        LeafVa = v16 + 8;
        if ( v16 + 8 >= 0xFFFFF68000000000uLL )
        {
          j = 0xFFFFF6FFFFFFFFFFuLL;
          do
          {
            if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v20 = (__int64)((v20 << 25) - v9) >> 16;
          }
          while ( v20 >= 0xFFFFF68000000000uLL );
          LeafVa = v20;
        }
        v21 = 0LL;
        v109 = 0LL;
      }
      else
      {
        v109 = v19;
        if ( v17 < *(&v116 + v19) )
          v17 = *(&v116 + v19);
        LeafVa = MiGetLeafVa(v17 + 8, 0xFFFFF68000000000uLL, j, v15);
      }
LABEL_17:
      *((_QWORD *)a1 + 7) = v16;
      v22 = (_QWORD *)*((_QWORD *)a1 + 23);
      v23 = *((_QWORD *)a1 + 21);
      if ( v17 < *(&v116 + v21) )
        v17 = *(&v116 + v21);
      v120 = *((_QWORD *)a1 + 21);
      v24 = v17;
      v25 = (_QWORD *)*v22;
      if ( !v19 )
      {
        v24 = v17 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
        if ( v24 > *(&v122 + v21) )
          v24 = *(&v122 + v21);
      }
      v127 = 0;
      while ( 1 )
      {
        if ( v17 > v24 )
          goto LABEL_128;
        if ( v19 )
        {
          v39 = *(_QWORD *)v17;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL && (v39 & 1) != 0 )
          {
            LOBYTE(Process) = (v39 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v39 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                j = *(_QWORD *)(Process + 1288);
                if ( j )
                {
                  v91 = *(_QWORD *)(j + 8 * ((v17 >> 3) & 0x1FF));
                  if ( (v91 & 0x20) != 0 )
                    v39 |= 0x20uLL;
                  Process = v39;
                  v39 |= 0x42uLL;
                  if ( (v91 & 0x42) == 0 )
                    v39 = Process;
                }
              }
            }
          }
          if ( v39 && (v39 & 1) == 0 )
          {
            v40 = 5;
            goto LABEL_76;
          }
        }
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v23 == MiDeleteVa )
        {
          MiDeleteVa(a1, v17, (unsigned int)v19);
        }
        else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v23 == MiDeleteEmptyPageTable )
        {
          MiDeleteEmptyPageTable(a1, v17, (unsigned int)v19);
        }
        else
        {
          guard_dispatch_icall_no_overrides(a1, v17);
        }
        Process = ++*((_QWORD *)a1 + 20);
        if ( (*a1 & 2) == 0 || ((unsigned __int8)Process & (_BYTE)a1[2]) != 0 )
          goto LABEL_37;
        v23 = *((_QWORD *)a1 + 4);
        if ( (*(_DWORD *)(v23 + 184) & 0xFu) <= 5 )
        {
          if ( (*(_DWORD *)(v23 + 184) & 0xF) == 1 )
            v26 = (_KPROCESS **)&unk_140E38500;
          else
            v26 = (_KPROCESS **)(v23 + 192);
          Process = (unsigned __int64)*v26;
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
          goto LABEL_55;
        j = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((v17 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          Process = (unsigned __int64)KeGetCurrentPrcb();
          v45 = *(_DWORD *)(v23 + 184) & 0xF;
          if ( v45 )
          {
            if ( v45 == 7 )
            {
              v32 = *(_QWORD *)(Process + 40024) == 0LL;
LABEL_54:
              if ( !v32 )
                goto LABEL_36;
              goto LABEL_55;
            }
            v46 = 72LL;
            if ( v45 == 5 )
              v46 = 0LL;
          }
          else
          {
            v46 = 48LL;
          }
          v32 = *(_QWORD *)(v46 + Process + 40000) == 0LL;
          goto LABEL_54;
        }
        if ( (*(_DWORD *)(v23 + 184) & 0xF) == 0 && j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v38 )
          {
            j = (((v17 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
            v31 = (*(_DWORD *)(v38 + 4 * j) >> 30) & 1;
LABEL_53:
            v32 = v31 == 0;
            goto LABEL_54;
          }
        }
        if ( (*(_DWORD *)(v23 + 184) & 0xF) == 0 || j < 0xFFFFF6FB7DBED000uLL || j > 0xFFFFF6FB7DBEDFFFuLL )
        {
          v30 = *(_QWORD *)j;
          if ( j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBED7F8uLL && (v30 & 1) != 0 )
          {
            LOBYTE(Process) = (v30 & 0x42) != 0;
            if ( ((unsigned __int8)Process & ((v30 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              if ( *(_BYTE *)(Process + 352) != 1 )
              {
                v48 = *(_QWORD *)(Process + 1288);
                if ( v48 )
                {
                  j = (j >> 3) & 0x1FF;
                  v49 = *(_QWORD *)(v48 + 8 * j);
                  if ( (v49 & 0x20) != 0 )
                    v30 |= 0x20uLL;
                  Process = v30;
                  v30 |= 0x42uLL;
                  if ( (v49 & 0x42) == 0 )
                    v30 = Process;
                }
              }
            }
          }
          v31 = (v30 >> 60) & 2;
          goto LABEL_53;
        }
        j = (__int64)(j + 0x90482413000LL) >> 3;
        Process = (unsigned int)dword_140E2EE6C[(unsigned __int64)(unsigned int)(2 * j) >> 5] >> ((2 * j) & 0x1F);
        if ( (Process & 2) != 0 )
          goto LABEL_36;
LABEL_55:
        if ( *((_BYTE *)a1 + 9) >= 2u )
          goto LABEL_37;
        CurrentPrcb = KeGetCurrentPrcb();
        j = 0LL;
        v23 = 0LL;
        Process = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (Process & 1) != 0 )
        {
          j = 1LL;
          if ( DpcTimeCount <= 7 )
            goto LABEL_61;
          if ( CurrentPrcb->QuantumEnd )
          {
            v37 = 1;
            goto LABEL_93;
          }
        }
        else
        {
          if ( !CurrentPrcb->NestingLevel )
          {
            if ( (Process & 0x1E) != 0 )
            {
              v37 = 2;
              goto LABEL_93;
            }
            if ( CurrentPrcb->QuantumEnd )
            {
              v37 = 3;
              goto LABEL_93;
            }
            NextThread = CurrentPrcb->NextThread;
            if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
            {
              v37 = 4;
              goto LABEL_93;
            }
LABEL_61:
            if ( DpcWatchdogCount <= 7 )
              goto LABEL_37;
            if ( !(_DWORD)j )
              goto LABEL_103;
            goto LABEL_63;
          }
          v23 = 1LL;
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_37;
          if ( CurrentPrcb->QuantumEnd )
          {
            v37 = 7;
            goto LABEL_93;
          }
        }
LABEL_63:
        if ( (Process & 0x1E) != 0 )
        {
          v37 = 5;
          goto LABEL_93;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v37 = 6;
          goto LABEL_93;
        }
LABEL_103:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        v47 = KeGetCurrentPrcb();
        j = (unsigned __int64)v47->SchedulerAssist;
        if ( j )
        {
          _m_prefetchw((const void *)j);
          v51 = *(_DWORD *)j;
          do
          {
            Process = v51;
            LODWORD(Process) = v51 & 0xFFDFFFFF;
            v52 = v51;
            v51 = _InterlockedCompareExchange((volatile signed __int32 *)j, v51 & 0xFFDFFFFF, v51);
          }
          while ( v52 != v51 );
          if ( (v51 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v47);
        }
        _enable();
        v37 = 0;
LABEL_93:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v37, DpcWatchdogCount, DpcTimeCount, v23);
        v3 = v37 == 0;
        v9 = v112;
        if ( !v3 )
LABEL_36:
          v127 = 2;
LABEL_37:
        v29 = (unsigned int)(a1[3] + 1);
        a1[3] = 0;
        v17 += 8 * v29;
        v25[9] = v17;
        v25[11] = v17;
        v25[7] = (__int64)((v17 << 25) - v9) >> 16;
        if ( v127 == 2 )
          break;
        v23 = v120;
      }
      if ( v17 <= *(&v122 + v109) )
      {
        if ( v130 == -1 )
        {
          v50 = v17;
          Process = 0xFFFFF68000000000uLL;
          v130 = v17;
          if ( v17 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v50 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              v50 = (__int64)((v50 << 25) - v9) >> 16;
            }
            while ( v50 >= 0xFFFFF68000000000uLL );
            v130 = v50;
          }
        }
LABEL_128:
        v40 = v127;
        goto LABEL_76;
      }
      v40 = 0;
LABEL_76:
      if ( v121 == MiDeleteVaTail )
      {
        MiDecommitPagesTail(**((_QWORD **)a1 + 23), Process, j, v23);
      }
      else if ( (char *)v121 == (char *)MiDeleteEmptyPageTableTail )
      {
        MiDeleteEmptyPageTableTail(a1, Process, j, v23);
      }
      else
      {
        guard_dispatch_icall_no_overrides(a1, Process);
      }
      if ( v40 == 5 )
      {
        v103 = *((_QWORD *)a1 + 7);
        if ( v103 )
        {
          MiUnlockPageTable(v107, v103);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        return 0;
      }
      v42 = a1[1];
      v43 = *a1;
      if ( (v42 & 1) != 0 )
      {
        v130 = -1LL;
        a1[1] = v42 & 0xFFFFFFFE;
        v3 = (v43 & 4) == 0;
        v84 = *((_QWORD *)a1 + 4);
        if ( v3 )
          MiLockWorkingSetExclusive(v84);
        else
          MiLockWorkingSetShared(v84);
        v10 = v113;
        v1 = v107;
        v7 = v111;
        LODWORD(v5) = v114;
        v4 = v128;
        v8 = v115;
        continue;
      }
      break;
    }
    v44 = v108;
    if ( (*a1 & 0x800) == 0 && (v129 & 0x80u) == 0 || v19 == 3 )
      goto LABEL_81;
    v53 = *(_QWORD *)v108;
    if ( v108 >= 0xFFFFF6FB7DBED000uLL
      && v108 <= 0xFFFFF6FB7DBED7F8uLL
      && (v53 & 1) != 0
      && ((v53 & 0x42) == 0 || (v53 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      v54 = KeGetCurrentThread()->ApcState.Process;
      if ( v54->AddressPolicy != 1 )
      {
        KernelWaitTime = v54[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v55 = *(_QWORD *)(KernelWaitTime + 8 * ((v108 >> 3) & 0x1FF));
          if ( (v55 & 0x20) != 0 )
            v53 |= 0x20uLL;
          v56 = v53;
          v53 |= 0x42uLL;
          if ( (v55 & 0x42) == 0 )
            v53 = v56;
        }
      }
    }
    v57 = 48 * ((v53 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v58 = (*(_DWORD *)(v57 + 36) & 0x4000000) != 0 ? HIDWORD(*(_QWORD *)v57) : *(_QWORD *)(v57 + 16) >> 16;
    if ( (v58 & 0x3FF) != 0 )
    {
LABEL_81:
      v1 = v107;
      if ( v108 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v107 + 184) & 0xF) != 0
          || v108 < 0xFFFFF6FB7DBED000uLL
          || v108 > 0xFFFFF6FB7DBEDFFFuLL
          || (v92 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v107 + 184) & 0xF) != 0 && v108 >= 0xFFFFF6FB7DBED000uLL && v108 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v108 + 0x90482413000LL) >> 3)) >> 5],
              ~(2 << ((2 * ((__int64)(v108 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                       * ((__int64)(v108
                                                                                                  + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v108, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v93 = (v108 >> 3) & 0x1FF;
          v94 = *(_DWORD *)(v92 + 4 * v93);
          v95 = (volatile signed __int32 *)(v92 + 4 * v93);
          if ( (v94 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v95, 0xBFFFFFFF);
              _InterlockedDecrement(v95);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v95, retaddr, KernelWaitTime);
            }
          }
          else
          {
            if ( v94 >= 0 )
              KeBugCheckEx(0x10u, (ULONG_PTR)v95, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v95 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v95, retaddr);
          }
        }
        goto LABEL_217;
      }
      v96 = KeGetCurrentPrcb();
      v97 = *(_DWORD *)(v107 + 184) & 0xF;
      if ( v97 )
      {
        if ( v97 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v96->SelfmapLockHandle[1]);
          goto LABEL_217;
        }
        v98 = 3LL;
        if ( v97 == 5 )
          v98 = 0LL;
      }
      else
      {
        v98 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v96->SelfmapLockHandle[v98]);
LABEL_217:
      *((_QWORD *)a1 + 7) = 0LL;
      if ( v40 == 2 )
      {
        MiReleaseWalkLocks(a1);
        a1[1] &= ~1u;
        v85 = v130;
        v86 = *((_QWORD *)a1 + 4);
        v130 = -1LL;
        if ( (*a1 & 4) != 0 )
          MiLockWorkingSetShared(v86);
        else
          MiLockWorkingSetExclusive(v86);
      }
      else
      {
        v85 = LeafVa;
      }
      LODWORD(v5) = v114;
      v7 = ((v85 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v111 = v7;
      if ( (unsigned int)v114 > 1 )
      {
        v104 = (unsigned int)(v114 - 1);
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v104;
        }
        while ( v104 );
        v111 = v7;
      }
      for ( k = v122; k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
      {
        if ( k > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      if ( v85 > k )
        return 1;
      v116 = ((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v117 = ((v116 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v118 = ((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v113;
      v4 = v128;
      v8 = v115;
      v119 = ((v118 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  j = ((v108 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = v107;
  if ( ((v108 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v60 = KeGetCurrentPrcb();
    v61 = *(_DWORD *)(v107 + 184) & 0xF;
    if ( v61 )
    {
      if ( v61 == 7 )
      {
        v62 = 1;
      }
      else
      {
        v62 = 3;
        if ( v61 == 5 )
          v62 = 0;
      }
      v63 = (_DWORD *)((char *)&unk_140E2FA80 + 8 * v62);
    }
    else
    {
      v62 = 2;
      v63 = (_DWORD *)(v107 + 176);
    }
    v64 = &v60->SelfmapLockHandle[0].LockQueue.Next + 2 * v62 + v62;
    *((_QWORD *)v64 + 1) = v63;
    *v64 = 0LL;
    v65 = KxTryToAcquireQueuedSpinLock((signed __int64)v64, v63);
    goto LABEL_168;
  }
  if ( (*(_DWORD *)(v107 + 184) & 0xF) == 0
    && j >= 0xFFFFF6FB7DBED000uLL
    && j <= 0xFFFFF6FB7DBEDFFFuLL
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7] )
  {
    v65 = ExTryAcquireSpinLockExclusiveAtDpcLevel();
    goto LABEL_168;
  }
  if ( (*(_DWORD *)(v107 + 184) & 0xF) != 0 && j >= 0xFFFFF6FB7DBED000uLL && j <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v99 = (__int64)(j + 0x90482413000LL) >> 3;
    v100 = (unsigned __int64)(unsigned int)(2 * v99) >> 5;
    v101 = dword_140E2EE6C[v100];
    v102 = (2 * v99) & 0x1F;
    if ( ((v101 >> v102) & 1) != 0 )
      goto LABEL_265;
    j = ~(2 << v102) & (v101 | (1 << v102));
    if ( v101 != _InterlockedCompareExchange(&dword_140E2EE6C[v100], j, v101) )
      goto LABEL_265;
LABEL_169:
    if ( v44 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v59 + 184) & 0xF) != 0
        || v44 < 0xFFFFF6FB7DBED000uLL
        || v44 > 0xFFFFF6FB7DBEDFFFuLL
        || (v72 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v59 + 184) & 0xF) != 0 && v44 >= 0xFFFFF6FB7DBED000uLL && v44 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          j = 2 * (unsigned int)((__int64)(v44 + 0x90482413000LL) >> 3);
          v71 = (2 * ((__int64)(v44 + 0x90482413000LL) >> 3)) & 0x1F;
          _InterlockedAnd(&dword_140E2EE6C[j >> 5], ~(2 << v71) & ~(1 << v71));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v44, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v73 = (volatile signed __int32 *)(v72 + 4 * ((v44 >> 3) & 0x1FF));
        if ( (*v73 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v73, 0xBFFFFFFF);
            _InterlockedDecrement(v73);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v73, retaddr, j);
          }
        }
        else
        {
          if ( *(int *)v73 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v73, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v73 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v73, retaddr);
        }
      }
      goto LABEL_176;
    }
    v74 = KeGetCurrentPrcb();
    v75 = *(_DWORD *)(v59 + 184) & 0xF;
    if ( v75 )
    {
      if ( v75 == 7 )
      {
        v76 = 1LL;
      }
      else
      {
        v76 = 3LL;
        if ( v75 == 5 )
          v76 = 0LL;
      }
    }
    else
    {
      v76 = 2LL;
    }
    v77 = (volatile signed __int64 **)&v74->SelfmapLockHandle[v76];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(v77, retaddr);
      goto LABEL_176;
    }
    _m_prefetchw(v77);
    v78 = (__int64)*v77;
    if ( !*v77 )
    {
      if ( v77 == (volatile signed __int64 **)_InterlockedCompareExchange64(v77[1], 0LL, (signed __int64)v77) )
      {
LABEL_176:
        v17 = v44;
        Process = 0xFFFFF68000000000uLL;
        v16 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v19;
        v108 = v16;
        v21 = ++v109;
        goto LABEL_17;
      }
      v78 = KxWaitForLockChainValid((__int64 *)v77);
    }
    j = v78 + 8;
    *v77 = 0LL;
    v79 = (__int64)v77[1];
    if ( (((unsigned __int8)v79 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v78 + 8), v79)) & 4) != 0 )
    {
      _InterlockedOr(v106, 0);
      v80 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v82, _InterlockedExchange64(&KiHaltOnAddressHashTable[v81], 0LL));
      if ( v80 )
      {
        v83 = KeGetCurrentPrcb();
        j = (unsigned __int64)v83->SchedulerAssist;
        if ( j )
        {
          _m_prefetchw((const void *)j);
          v89 = *(_DWORD *)j;
          do
          {
            v90 = v89;
            v89 = _InterlockedCompareExchange((volatile signed __int32 *)j, v89 & 0xFFDFFFFF, v89);
          }
          while ( v90 != v89 );
          if ( (v89 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v83);
        }
        _enable();
      }
    }
    goto LABEL_176;
  }
  v69 = *(_QWORD *)j;
  if ( j < 0xFFFFF6FB7DBED000uLL || j > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_163:
    if ( (v69 & 1) != 0 && (v69 & 0x1000000000000000LL) == 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v65 = v69 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)j,
                     v69 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                     v69);
      goto LABEL_168;
    }
  }
  else if ( (v69 & 1) != 0 )
  {
    if ( ((v69 & 0x42) == 0 || (v69 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      v66 = KeGetCurrentThread()->ApcState.Process;
      if ( v66->AddressPolicy != 1 )
      {
        v67 = v66[2].KernelWaitTime;
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 8 * ((j >> 3) & 0x1FF));
          if ( (v68 & 0x20) != 0 )
            v69 |= 0x20uLL;
          v70 = v69;
          v69 |= 0x42uLL;
          if ( (v68 & 0x42) == 0 )
            v69 = v70;
        }
      }
    }
    goto LABEL_163;
  }
  v65 = 0;
LABEL_168:
  if ( v65 )
    goto LABEL_169;
LABEL_265:
  MiUnlockPageTable(v59, v44);
  result = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  return result;
}
