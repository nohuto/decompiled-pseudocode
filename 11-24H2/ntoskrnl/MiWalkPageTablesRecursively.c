/*
 * XREFs of MiWalkPageTablesRecursively @ 0x1402DC430
 * Callers:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiAgePte @ 0x14022F8D0 (MiAgePte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402DBE00 (EtwTraceShouldYieldProcessor.c)
 *     MiPeriodicGoodCitizen @ 0x1402DBFC0 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x1402DE580 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E3540 (MiYieldPageTableWalk.c)
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1402E39BC (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiDeleteVaTail @ 0x1402E3CF0 (MiDeleteVaTail.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiQueryLeafPte @ 0x1403E30B0 (MiQueryLeafPte.c)
 *     MiMarkResumptionPoint @ 0x14042F550 (MiMarkResumptionPoint.c)
 *     MiWalkGetResumptionPxe @ 0x14045C3D0 (MiWalkGetResumptionPxe.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned int *a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  int v4; // r15d
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // r13
  unsigned int *v7; // r14
  int v8; // ebx
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  __int64 v12; // r8
  int v13; // ecx
  int LeafPte; // esi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int64 *v20; // r8
  unsigned __int64 SchedulerAssist; // r8
  unsigned int *MmInternal; // rcx
  __int64 v23; // rax
  int v24; // edx
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 (__fastcall *v27)(); // rdx
  __int64 v28; // rbx
  BOOL v29; // r9d
  int v30; // ebx
  unsigned int v31; // edx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  int NextPageTablePte; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // r9
  unsigned int v40; // ebx
  char v41; // al
  unsigned __int64 v42; // rbx
  unsigned __int64 LeafVa; // rdi
  int v44; // ebp
  __int64 k; // rsi
  __int64 v46; // rcx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  __int64 v50; // r13
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  __int64 v55; // rax
  int v56; // r11d
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // rbx
  BOOL v59; // r9d
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // ebx
  unsigned int j; // edx
  unsigned __int64 v64; // rax
  int v65; // eax
  bool v66; // zf
  struct _KPRCB *v67; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v72; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned __int64 v78; // r11
  unsigned int v79; // eax
  __int64 v80; // rbp
  __int64 v81; // rbx
  _QWORD *v82; // rdi
  int v83; // edx
  __int64 v84; // rdx
  __int64 ResumptionPxe; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  unsigned __int64 v89; // r9
  __int64 v90; // r10
  unsigned __int64 v91; // rdx
  int v92; // r8d
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r8
  __int64 *v96; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v98; // al
  __int64 v99; // rax
  int v100; // edx
  __int64 i; // rcx
  unsigned __int64 v102; // rax
  struct _KPRCB *v103; // rcx
  unsigned int v104; // ecx
  unsigned int *v105; // rbx
  __int64 (__fastcall *v106)(); // rax
  __int64 v107; // rdi
  BOOL v108; // eax
  unsigned int v109; // ecx
  __int64 v111; // rbp
  _DWORD *v112; // rdi
  __int64 (__fastcall *v113)(); // rax
  __int64 v114; // rbx
  BOOL v115; // eax
  int v116; // esi
  char v117; // cl
  volatile signed __int64 *v118; // rsi
  unsigned __int64 v119; // r9
  struct _KPRCB *v120; // r8
  char v121; // al
  unsigned int v122; // ecx
  volatile __int64 *v123; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v124; // rcx
  _QWORD *v125; // rax
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rbx
  unsigned int v128; // ebp
  signed __int64 v129; // rax
  unsigned __int64 v130; // rbx
  int v131; // eax
  unsigned int v132; // edx
  unsigned __int64 v133; // rcx
  __int64 v134; // rcx
  _QWORD *v135; // rdx
  __int64 v136; // rax
  _KPROCESS *v137; // rcx
  unsigned __int64 v138; // rdx
  __int64 v139; // rax
  unsigned __int64 v140; // rcx
  struct _KPRCB *v141; // rcx
  char v142; // al
  __int64 v143; // rax
  volatile signed __int64 **v144; // rbx
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned __int64 v147; // rcx
  __int64 v148; // rsi
  int v149; // eax
  volatile signed __int32 *v150; // rcx
  signed __int64 v151; // rdi
  signed __int64 v152; // rax
  int v153; // eax
  int v154; // edx
  __int64 v155; // r8
  struct _KPRCB *v156; // rcx
  char v157; // al
  __int64 v158; // rdx
  unsigned __int64 v159; // rcx
  unsigned int v160; // r12d
  unsigned __int64 v161; // r15
  char v162; // bl
  volatile signed __int32 *v163; // r15
  unsigned __int32 v164; // eax
  signed __int32 v165; // eax
  signed __int32 v166; // ett
  int v167; // eax
  signed __int32 v168; // edx
  signed __int32 v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // eax
  unsigned __int64 v173; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v174; // [rsp+38h] [rbp-90h]
  __int64 v175; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v176; // [rsp+48h] [rbp-80h]
  __int64 v177; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall *v178)(__int64, __int64, int); // [rsp+58h] [rbp-70h]
  __int128 v179; // [rsp+60h] [rbp-68h]
  __int128 v180; // [rsp+70h] [rbp-58h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  int v183; // [rsp+D8h] [rbp+10h]
  int v185; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v4 = 0;
  v175 = *((_QWORD *)a1 + 4);
  v5 = (unsigned __int64 *)&a1[2 * a3 + 24];
  v6 = a2;
  v178 = (__int64 (__fastcall *)(__int64, __int64, int))*((_QWORD *)a1 + 21);
  v7 = a1;
  v8 = 1;
  v177 = a3;
  v9 = a3;
  v174 = v5;
  if ( a2 < *v5 )
    v6 = *v5;
  v10 = 0xFFFFF68000000000uLL;
  v11 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  v176 = (unsigned __int64 *)&a1[2 * a3 + 32];
  v12 = 2LL;
  v13 = 0;
  v185 = 0;
  if ( v11 > *v176 )
    v11 = *v176;
  v173 = v11;
  while ( 2 )
  {
    v183 = 0;
    LeafPte = 0;
LABEL_7:
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    while ( 1 )
    {
      if ( v6 > v11 )
        goto LABEL_263;
      if ( !v13 )
        goto LABEL_10;
      v88 = v7[1];
      if ( (v88 & 2) != 0 )
      {
        if ( v3 != 3 )
        {
LABEL_261:
          if ( (v88 & 0x1C) == 0 )
            MiMarkResumptionPoint(v7, v6, (unsigned int)v3, (unsigned int)(v3 != 0) + 2);
          goto LABEL_263;
        }
        v7[1] = v88 | 1;
        MiReacquireWalkLocks((__int64)v7, 0xFFFFF6FB7DBEDF68uLL, 1LL);
        v7[1] &= ~2u;
      }
      else
      {
        if ( LeafPte >= 4 )
          goto LABEL_263;
        if ( (v88 & 1) == 0 )
          goto LABEL_187;
        if ( v3 != 3 )
          goto LABEL_261;
        if ( (*v7 & 4) != 0 )
        {
          MiReacquireWalkLocks((__int64)v7, v10 + ((v6 >> 9) & 0x7FFFFFFFF8LL), 0LL);
        }
        else
        {
          MiLockWorkingSetExclusive(*((_QWORD *)v7 + 4));
          v7[1] &= ~1u;
        }
      }
      v11 = v173;
      v9 = 3LL;
      v10 = 0xFFFFF68000000000uLL;
LABEL_187:
      v185 = 0;
LABEL_10:
      v16 = *((_QWORD *)v7 + 9);
      v17 = (v3 != 0) + 2;
      if ( v16 )
      {
        v32 = v6;
        if ( v6 >= v10 )
        {
          do
          {
            if ( v32 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v32 = (__int64)((v32 << 25) - (v10 << 25)) >> 16;
          }
          while ( v32 >= v10 );
          v5 = (unsigned __int64 *)&v7[2 * v9 + 24];
        }
        if ( v16 >= v10 )
        {
          do
          {
            if ( v16 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v16 = (__int64)((v16 << 25) - (v10 << 25)) >> 16;
          }
          while ( v16 >= v10 );
          v5 = (unsigned __int64 *)&v7[2 * v9 + 24];
        }
        if ( v32 > v16 )
        {
          v7[1] &= 0xFFFFFFE3;
          *((_QWORD *)v7 + 9) = 0LL;
          goto LABEL_11;
        }
        v33 = *((_QWORD *)v7 + 9);
        v34 = v7[1];
        if ( v33 == v6 )
        {
          *((_QWORD *)v7 + 9) = 0LL;
          v7[1] = v34 & 0xFFFFFFE3;
          v17 = 2;
          goto LABEL_11;
        }
        v83 = (v34 >> 2) & 7;
        if ( v3 != v83 )
        {
          v84 = (unsigned int)(v3 - v83);
          do
          {
            v33 = v10 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
            --v84;
          }
          while ( v84 );
          v11 = v173;
        }
        if ( v6 < v33 )
          break;
      }
LABEL_11:
      v18 = *((_QWORD *)v7 + 10);
      if ( !v18 )
        goto LABEL_12;
      v89 = v6;
      v179 = 0LL;
      v180 = 0LL;
      if ( v3 )
      {
        if ( v17 != 3 )
          goto LABEL_12;
      }
      v90 = 4096LL;
      v91 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v92 = v3;
      if ( v3 )
      {
        do
        {
          v91 = ((v91 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v90 <<= 9;
          --v92;
        }
        while ( v92 );
        v11 = v173;
        v5 = v174;
      }
      if ( v6 == v91 )
      {
        *((_QWORD *)v7 + 10) = 0LL;
        v94 = v3;
      }
      else
      {
        if ( v6 > v91 )
        {
          *((_QWORD *)v7 + 10) = 0LL;
          goto LABEL_12;
        }
        if ( v91 <= v11 )
        {
          v89 = v91;
          if ( ((v90 - 1) & v18) == 0 )
            *((_QWORD *)v7 + 10) = 0LL;
        }
        else
        {
          v89 = v11 + 8;
          v18 = 0LL;
        }
        *v5 = v89;
        v93 = v89;
        v94 = v3;
        v95 = v3;
        if ( v3 )
        {
          v96 = (__int64 *)&v7[2 * v3 + 24];
          do
          {
            --v96;
            v93 = v93 << 25 >> 16;
            *v96 = v93;
            --v95;
          }
          while ( v95 );
        }
        if ( !v18 )
          goto LABEL_199;
      }
      *(_QWORD *)&v179 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v179 + 1) = (((unsigned __int64)v179 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v180 = ((*((_QWORD *)&v179 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v100 = v3;
      *((_QWORD *)&v180 + 1) = (((unsigned __int64)v180 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = v94; ; --i )
      {
        v102 = *((_QWORD *)&v179 + i);
        *(_QWORD *)&v7[2 * i + 24] = v102;
        if ( v100 != v3 )
          v102 = v89;
        v89 = v102;
        if ( !i )
          break;
        --v100;
      }
LABEL_199:
      if ( v6 != v89 )
      {
        v13 = v185;
        v6 = v89;
        v5 = v174;
        v9 = v3;
        goto LABEL_42;
      }
LABEL_12:
      v12 = ++*((_QWORD *)v7 + 20);
      v15 = *v7;
      if ( (v12 & 0xF) == 0 && (v15 & 8) != 0 )
      {
        v77 = *((_QWORD *)v7 + 11);
        v78 = *(_QWORD *)(v77 + 18688);
        if ( v78 < 0x420 )
        {
          v10 = 0LL;
          v79 = 0;
          v80 = *(_QWORD *)(v77 + 16) + 14944LL;
          while ( v79 < (unsigned __int16)KeNumberNodes )
          {
            v81 = 0LL;
            v82 = (_QWORD *)v80;
            while ( v81 <= 1 )
            {
              while ( (unsigned int)v10 < dword_140E2DBCC )
              {
                v78 += *(unsigned __int16 *)(*v82 + 16LL * (unsigned int)v10);
                if ( v78 >= 0x420 )
                {
                  v3 = a3;
                  v4 = 0;
                  v8 = 1;
                  goto LABEL_13;
                }
                LODWORD(v10) = v10 + 1;
              }
              ++v81;
              ++v82;
              v10 = 0LL;
            }
            v80 += 57216LL;
            ++v79;
          }
          v3 = a3;
          LeafPte = 5;
          v183 = 5;
          v4 = 0;
          goto LABEL_263;
        }
      }
LABEL_13:
      if ( (v15 & 2) == 0 || ((unsigned __int8)v12 & (_BYTE)v7[2]) != 0 )
        goto LABEL_54;
      v19 = *((_QWORD *)v7 + 4);
      if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5 )
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) == 1 )
          v20 = (unsigned __int64 *)&unk_140E38740;
        else
          v20 = (unsigned __int64 *)(v19 + 192);
        SchedulerAssist = *v20;
        if ( (*v7 & 4) != 0 )
        {
          MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
          if ( MmInternal )
            v23 = MmInternal[81];
          else
            v23 = 0LL;
          if ( (*(_DWORD *)(SchedulerAssist + (v23 << 6)) & 0x40000000) != 0 )
            goto LABEL_22;
        }
        else
        {
          for ( j = 0; j < 4; ++j )
          {
            if ( (*(_DWORD *)(((unsigned __int64)j << 6) + SchedulerAssist) & 0x40000000) != 0 )
              goto LABEL_22;
          }
        }
      }
      if ( (*v7 & 4) == 0 )
        goto LABEL_134;
      SchedulerAssist = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v98 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( !v98 )
        {
          v99 = 2LL;
          goto LABEL_216;
        }
        if ( v98 == 7 )
        {
          v66 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
        }
        else
        {
          if ( v98 == 5 )
            v99 = 0LL;
          else
            v99 = 3LL;
LABEL_216:
          v66 = CurrentPrcb->SelfmapLockHandle[v99].LockQueue.Next == 0LL;
        }
LABEL_133:
        if ( !v66 )
          goto LABEL_22;
        goto LABEL_134;
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        && SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
        && SchedulerAssist <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v72 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
        if ( v72 )
        {
          SchedulerAssist = (((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
          v65 = (*(_DWORD *)(v72 + 4 * SchedulerAssist) & 0x40000000) != 0;
LABEL_132:
          v66 = v65 == 0;
          goto LABEL_133;
        }
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        || SchedulerAssist < 0xFFFFF6FB7DBED000uLL
        || SchedulerAssist > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v64 = *(_QWORD *)SchedulerAssist;
        if ( SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
          && SchedulerAssist <= 0xFFFFF6FB7DBED7F8uLL
          && (v64 & 1) != 0
          && ((v64 & 0x42) == 0 || (v64 & 0x20) == 0)
          && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              SchedulerAssist = (SchedulerAssist >> 3) & 0x1FF;
              v75 = *(_QWORD *)(KernelWaitTime + 8 * SchedulerAssist);
              if ( (v75 & 0x20) != 0 )
                v64 |= 0x20uLL;
              v76 = v64;
              v64 |= 0x42uLL;
              if ( (v75 & 0x42) == 0 )
                v64 = v76;
            }
          }
        }
        v65 = (v64 >> 60) & 2;
        goto LABEL_132;
      }
      SchedulerAssist = (__int64)(SchedulerAssist + 0x90482413000LL) >> 3;
      if ( ((*(&MiState + ((unsigned __int64)(unsigned int)(2 * SchedulerAssist) >> 5) + 2459) >> ((2 * SchedulerAssist) & 0x1F)) & 2) != 0 )
        goto LABEL_22;
LABEL_134:
      if ( *((_BYTE *)v7 + 9) >= 2u )
        goto LABEL_54;
      v67 = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v19 = 0LL;
      DpcRequestSummary = v67->DpcRequestSummary;
      DpcWatchdogCount = v67->DpcWatchdogCount;
      DpcTimeCount = v67->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        SchedulerAssist = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_140;
        if ( v67->QuantumEnd )
          goto LABEL_229;
      }
      else
      {
        if ( !v67->NestingLevel )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v8 = 2;
            goto LABEL_229;
          }
          if ( v67->QuantumEnd )
          {
            v8 = 3;
            goto LABEL_229;
          }
          NextThread = v67->NextThread;
          if ( NextThread && NextThread != v67->CurrentThread )
          {
            v8 = 4;
            goto LABEL_229;
          }
LABEL_140:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_54;
          if ( !(_DWORD)SchedulerAssist )
            goto LABEL_239;
          goto LABEL_142;
        }
        v19 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_54;
        if ( v67->QuantumEnd )
        {
          v8 = 7;
          goto LABEL_229;
        }
      }
LABEL_142:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v8 = 5;
        goto LABEL_229;
      }
      if ( v67->CurrentThread != v67->IdleThread )
      {
        v8 = 6;
        goto LABEL_229;
      }
LABEL_239:
      _disable();
      v67->DpcWatchdogCount = 0;
      v67->DpcTimeCount = 0;
      v103 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int64)v103->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw((const void *)SchedulerAssist);
        v165 = *(_DWORD *)SchedulerAssist;
        do
        {
          v166 = v165;
          v165 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v165 & 0xFFDFFFFF, v165);
        }
        while ( v166 != v165 );
        if ( (v165 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v103);
      }
      _enable();
      v8 = 0;
LABEL_229:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v8, DpcWatchdogCount, DpcTimeCount);
      if ( v8 )
      {
LABEL_22:
        v24 = v7[1];
        v25 = v7 + 1;
        v26 = v24;
        if ( (v24 & 0x1C) == 0 )
        {
          if ( v3 )
          {
            v25 = v7 + 1;
            if ( v17 != 3 )
            {
              v25 = v7 + 1;
              *((_QWORD *)v7 + 9) = v6;
              v26 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(4 * v3)) & 0x1C;
            }
          }
        }
        v27 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
        v7[1] = v26 | 0x20;
        if ( v27 )
        {
          if ( v27 == MiAgeWorkingSetTail )
          {
            v28 = *((_QWORD *)v7 + 23);
            v29 = (*(_DWORD *)v28 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
            MiAgeTrimListsTail((_DWORD)v7, v28 + 56, 0, v29, (__int64)MiAgeWorkingSetVpabCallback);
            if ( (v7[1] & 0x20) != 0 )
              *(_BYTE *)(v28 + 6) = 1;
            v30 = 0;
          }
          else if ( v27 == MiUpdateOldWorkingSetPagesTail )
          {
            MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
            v30 = 0;
          }
          else
          {
            if ( (char *)v27 == (char *)MiDeleteVaTail )
              v170 = MiDeleteVaTail(v7, v27, SchedulerAssist, v19);
            else
              v170 = guard_dispatch_icall_no_overrides(v7, v27, SchedulerAssist, v19);
            v30 = v170;
          }
          v25 = v7 + 1;
        }
        else
        {
          v30 = 0;
        }
        *v25 &= ~0x20u;
        if ( (*v25 & 1) == 0 )
        {
          if ( v30 >= 4 )
            goto LABEL_39;
          v31 = *v7;
          if ( (*v7 & 2) != 0 )
          {
            MiReleaseWalkLocks(v7);
          }
          else
          {
            v155 = *((_QWORD *)v7 + 7);
            if ( v155 )
            {
              *v25 |= 2u;
              if ( (v31 & 0x1000) == 0 || v155 != 0xFFFFF6FB7DBEDF68uLL )
                MiUnlockPageTableInternal(*((_QWORD *)v7 + 4), v155);
              *((_QWORD *)v7 + 7) = 0LL;
            }
          }
        }
        if ( v30 < 4 )
        {
LABEL_40:
          LeafPte = v183;
          v5 = v174;
          v9 = v3;
LABEL_41:
          v11 = v173;
          v8 = 1;
          v13 = 1;
          v185 = 1;
LABEL_42:
          v12 = 2LL;
          v10 = 0xFFFFF68000000000uLL;
          goto LABEL_7;
        }
LABEL_39:
        v183 = v30;
        goto LABEL_40;
      }
LABEL_54:
      if ( (*v7 & 0x20) != 0 )
        NextPageTablePte = MiGetNextPageTablePte(v7, v6, (unsigned int)v3, v17);
      else
        NextPageTablePte = MiComputePxeWalkAction(v7, v6, (unsigned int)v3, v17);
      v38 = NextPageTablePte;
      if ( NextPageTablePte == 4 )
      {
        v5 = v174;
        LeafPte = 4;
        v183 = 4;
        v9 = v3;
        v6 = *v174;
        goto LABEL_41;
      }
      if ( !NextPageTablePte )
      {
        v5 = v174;
        LeafPte = 0;
        v183 = 0;
        v9 = v3;
        v6 = *v174;
        goto LABEL_41;
      }
      v39 = v7[1];
      if ( (v39 & 1) != 0 )
      {
        LeafPte = v183;
        v5 = v174;
        v9 = v3;
        goto LABEL_41;
      }
      v40 = v7[1];
      if ( v3 >= 1
        && NextPageTablePte != 3
        && (v39 & 0x1C) != 0
        && MiWalkGetResumptionPxe(v7, (unsigned int)v3, v37) == v6
        && v56 - 1 < v3 )
      {
        v40 &= 0xFFFFFFE3;
        *((_QWORD *)v7 + 9) = 0LL;
        v7[1] = v40;
      }
      if ( v38 == 1 )
        goto LABEL_88;
      if ( v38 != 2 )
      {
        if ( v3 <= (int)((v40 >> 6) & 7) )
          goto LABEL_204;
        v57 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
        v7[1] = v40 | 0x20;
        if ( v57 )
        {
          if ( v57 == MiAgeWorkingSetTail )
          {
            v58 = *((_QWORD *)v7 + 23);
            v59 = (*(_DWORD *)v58 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
            MiAgeTrimListsTail((_DWORD)v7, v58 + 56, 0, v59, (__int64)MiAgeWorkingSetVpabCallback);
            if ( (v7[1] & 0x20) != 0 )
              *(_BYTE *)(v58 + 6) = 1;
            goto LABEL_111;
          }
          if ( v57 == MiUpdateOldWorkingSetPagesTail )
          {
            MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
            goto LABEL_111;
          }
          if ( (char *)v57 == (char *)MiDeleteVaTail )
            v60 = MiDeleteVaTail(v7, v36, v37, v39);
          else
            v60 = guard_dispatch_icall_no_overrides(v7, v36, v37, v39);
        }
        else
        {
LABEL_111:
          v60 = 0;
        }
        v61 = v7[1] & 0xFFFFFFDF;
        v7[1] = v61;
        if ( (v61 & 1) != 0 )
        {
          if ( v60 >= 4 )
          {
LABEL_114:
            v62 = v183;
            if ( v60 == 5 )
              v62 = 5;
            v183 = v62;
          }
          LeafPte = v183;
          v5 = v174;
          v9 = v3;
          goto LABEL_41;
        }
        if ( v60 >= 4 )
          goto LABEL_114;
        if ( (*v7 & 4) != 0 )
        {
          v118 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v119 = 0xFFFFF6FB7DBEDF68uLL;
          if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v120 = KeGetCurrentPrcb();
            v121 = *(_DWORD *)(v175 + 184) & 0xF;
            if ( v121 )
            {
              if ( v121 == 7 )
              {
                v122 = 1;
              }
              else if ( v121 == 5 )
              {
                v122 = 0;
              }
              else
              {
                v122 = 3;
              }
              v123 = (volatile __int64 *)(&MiState + 2 * v122 + 3232);
            }
            else
            {
              v122 = 2;
              v123 = (volatile __int64 *)(v175 + 176);
            }
            v124 = &v120->SelfmapLockHandle[0].LockQueue.Next + 2 * v122 + v122;
            *((_QWORD *)v124 + 1) = v123;
            *v124 = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
            {
              KiAcquireQueuedSpinLockInstrumented((__int64)v124, v123);
              goto LABEL_325;
            }
            v125 = (_QWORD *)_InterlockedExchange64(v123, (__int64)v124);
            if ( v125 )
            {
              KxWaitForLockOwnerShip((__int64)v124, v125);
              goto LABEL_325;
            }
          }
          else
          {
            v120 = (struct _KPRCB *)v175;
            if ( (*(_DWORD *)(v175 + 184) & 0xF) == 0
              && v6 >= 0xFFFFF6FB7DBED000uLL
              && v6 <= 0xFFFFF6FB7DBEDFFFuLL
              && (v126 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v126 + 4LL * (((unsigned int)v6 >> 3) & 0x1FF)));
            }
            else
            {
              if ( (*(_DWORD *)(v175 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v160 = 0;
                v161 = (unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5;
                v162 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                LODWORD(v120) = *(&MiState + v161 + 2459);
                v163 = (volatile signed __int32 *)(&MiState + v161 + 2459);
                do
                {
                  while ( (((unsigned int)v120 >> v162) & 1) != 0 )
                  {
                    if ( (((unsigned int)v120 >> v162) & 2) != 0 )
                    {
                      do
                      {
                        if ( (++v160 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && KiCheckVpBackingLongSpinWaitHypercall() )
                        {
                          HvlNotifyLongSpinWait(v160);
                        }
                        else
                        {
                          _mm_pause();
                        }
                        LODWORD(v120) = *v163;
                      }
                      while ( (((unsigned __int32)*v163 >> v162) & 1) != 0 );
                    }
                    else
                    {
                      v168 = (unsigned int)v120 | (2 << v162);
                      v169 = _InterlockedCompareExchange(v163, v168, (signed __int32)v120);
                      v66 = (_DWORD)v120 == v169;
                      LODWORD(v120) = v169;
                      if ( v66 )
                        LODWORD(v120) = v168;
                    }
                  }
                  v164 = _InterlockedCompareExchange(
                           v163,
                           ~(2 << v162) & ((unsigned int)v120 | (1 << v162)),
                           (signed __int32)v120);
                  v66 = (_DWORD)v120 == v164;
                  v120 = (struct _KPRCB *)v164;
                }
                while ( !v66 );
              }
              else
              {
                v127 = *(_QWORD *)v6;
                v128 = 0;
                if ( v6 >= 0xFFFFF6FB7DBED000uLL
                  && v6 <= 0xFFFFF6FB7DBED7F8uLL
                  && (v127 & 1) != 0
                  && ((v127 & 0x42) == 0 || (v127 & 0x20) == 0)
                  && (MiFlags & 0x600000) != 0 )
                {
                  v137 = KeGetCurrentThread()->ApcState.Process;
                  if ( v137->AddressPolicy != 1 )
                  {
                    v138 = v137[2].KernelWaitTime;
                    if ( v138 )
                    {
                      v139 = *(_QWORD *)(v138 + 8 * ((v6 >> 3) & 0x1FF));
                      if ( (v139 & 0x20) != 0 )
                        v127 |= 0x20uLL;
                      v140 = v127;
                      v127 |= 0x42uLL;
                      if ( (v139 & 0x42) == 0 )
                        v127 = v140;
                    }
                  }
                }
                while ( (v127 & 1) != 0 )
                {
                  if ( (v127 & 0x1000000000000000LL) != 0 )
                  {
                    if ( ((v127 >> 60) & 2) != 0 )
                    {
                      do
                      {
                        if ( (++v128 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && KiCheckVpBackingLongSpinWaitHypercall() )
                        {
                          HvlNotifyLongSpinWait(v128);
                        }
                        else
                        {
                          _mm_pause();
                        }
                        v127 = *(_QWORD *)v6;
                      }
                      while ( (*(_QWORD *)v6 & 0x1000000000000000LL) != 0 );
                    }
                    else
                    {
                      v151 = v127 | 0x2000000000000000LL;
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      if ( _bittest64(&MiFlags, 0x24u) && (v127 & 0x21) == 1 && v6 >= 0xFFFFF6C000000000uLL )
                        MiCheckLinearProtectedPteAccessedBit(v6, v127 | 0x2000000000000000LL, 128);
                      v152 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v151, v127);
                      v66 = v127 == v152;
                      v127 = v152;
                      if ( v66 )
                        v127 = v151;
                    }
                  }
                  else
                  {
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    v129 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)v6,
                             v127 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                             v127);
                    v66 = v127 == v129;
                    v127 = v129;
                    if ( v66 )
                      break;
                  }
                }
                v118 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                v7 = a1;
              }
              v3 = a3;
            }
LABEL_325:
            v119 = 0xFFFFF6FB7DBEDF68uLL;
          }
          if ( (*v7 & 0x1000) != 0 )
          {
            if ( v118 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
              goto LABEL_328;
LABEL_355:
            if ( (*(_DWORD *)(v175 + 184) & 0xF) != 0
              || (unsigned __int64)v118 < 0xFFFFF6FB7DBED000uLL
              || (unsigned __int64)v118 > 0xFFFFF6FB7DBEDFFFuLL
              || (v147 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
            {
              if ( (*(_DWORD *)(v175 + 184) & 0xF) != 0
                && (unsigned __int64)v118 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)v118 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                _InterlockedAnd(
                  (volatile signed __int32 *)&MiState
                + ((unsigned __int64)(2 * (unsigned int)((__int64)(v118 + 0x12090482600LL) >> 3)) >> 5)
                + 2459,
                  ~(3 << ((2 * ((__int64)(v118 + 0x12090482600LL) >> 3)) & 0x1F)));
              }
              else
              {
                _InterlockedAnd64(v118, 0xCFFFFFFFFFFFFFFFuLL);
              }
            }
            else
            {
              v148 = ((unsigned int)v118 >> 3) & 0x1FF;
              v149 = *(_DWORD *)(v147 + 4 * v148);
              v150 = (volatile signed __int32 *)(v147 + 4 * v148);
              if ( (v149 & 0x3FFFFFFF) != 0 )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                {
                  _InterlockedAnd(v150, 0xBFFFFFFF);
                  _InterlockedDecrement(v150);
                }
                else
                {
                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v150, retaddr);
                }
              }
              else
              {
                if ( v149 >= 0 )
                  KeBugCheckEx(0x10u, (ULONG_PTR)v150, 0x100uLL, 0LL, 0LL);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                  *v150 = 0;
                else
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v150, retaddr);
              }
            }
          }
          else
          {
            if ( v118 != (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
              goto LABEL_355;
            v141 = KeGetCurrentPrcb();
            v142 = *(_DWORD *)(v175 + 184) & 0xF;
            if ( v142 )
            {
              if ( v142 == 7 )
              {
                v143 = 1LL;
              }
              else if ( v142 == 5 )
              {
                v143 = 0LL;
              }
              else
              {
                v143 = 3LL;
              }
            }
            else
            {
              v143 = 2LL;
            }
            v144 = (volatile signed __int64 **)&v141->SelfmapLockHandle[v143];
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _m_prefetchw(v144);
              v145 = (__int64)*v144;
              if ( !*v144 )
              {
                if ( v144 == (volatile signed __int64 **)_InterlockedCompareExchange64(
                                                           v144[1],
                                                           0LL,
                                                           (signed __int64)v144) )
                  goto LABEL_328;
                v145 = KxWaitForLockChainValid(v144);
              }
              *v144 = 0LL;
              v146 = (__int64)v144[1];
              if ( (((unsigned __int8)v146 ^ (unsigned __int8)_InterlockedExchange64(
                                                                (volatile __int64 *)(v145 + 8),
                                                                v146)) & 4) != 0 )
                KeWakeAddressAll(v145 + 8, v146, v120, v119);
            }
            else
            {
              KiReleaseQueuedSpinLockInstrumented(v144, retaddr);
            }
          }
LABEL_328:
          *((_QWORD *)v7 + 7) = v6;
        }
        v130 = v6 << 25;
        v131 = MiWalkPageTablesRecursively(v7, (__int64)(v6 << 25) >> 16, (unsigned int)(v3 - 1));
        v132 = v7[1];
        LeafPte = v131;
        v183 = v131;
        if ( (v132 & 3) != 0 )
        {
          if ( (v132 & 0x1C) == 0
            && *(_QWORD *)&v7[2 * v3 + 22] >= (unsigned __int64)((__int64)(v130 + 0x10000000) >> 16)
            && v3 )
          {
            *((_QWORD *)v7 + 9) = v6;
            v7[1] = v132 ^ ((unsigned __int8)v132 ^ (unsigned __int8)(4 * v3)) & 0x1C;
          }
          v4 = 0;
        }
        else
        {
          if ( v131 >= 4 )
          {
            v10 = 0xFFFFF68000000000uLL;
            v133 = *(_QWORD *)&v7[2 * v3 + 22];
            if ( v133 < (__int64)(v130 + 0x10000000) >> 16 )
            {
              v9 = v3;
            }
            else
            {
              v6 = ((v133 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v9 = v3;
              v134 = v3;
              *v174 = v6;
              if ( v3 )
              {
                v135 = v174;
                v136 = v6;
                do
                {
                  --v135;
                  v136 = v136 << 25 >> 16;
                  *v135 = v136;
                  --v134;
                }
                while ( v134 );
              }
            }
            v11 = v173;
            v8 = 1;
            v5 = (unsigned __int64 *)&v7[2 * v9 + 24];
            v13 = 1;
            v185 = 1;
            v4 = 0;
            v12 = 2LL;
            goto LABEL_7;
          }
          if ( (*v7 & 4) == 0 )
            goto LABEL_204;
          v167 = MiReacquireHigherPageTableLock(v7, v6, (unsigned int)v3);
          if ( !v167 )
            goto LABEL_204;
          v4 = 0;
          LeafPte = 0;
          if ( v167 != 2 )
            LeafPte = v167;
          v183 = LeafPte;
        }
        v11 = v173;
        v8 = 1;
        v5 = v174;
        v13 = 1;
        v185 = 1;
        v9 = v3;
        v12 = 2LL;
        v10 = 0xFFFFF68000000000uLL;
        goto LABEL_7;
      }
      if ( !v3 && (*v7 & 1) == 0 && (*(_QWORD *)v6 & 1) != 0 )
      {
        v41 = HIBYTE(*(_QWORD *)(((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL)) & 0xF;
        if ( v41 == 10 || v41 == 9 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v7 + 4) + 184LL) & 0xF) == 0 )
          {
            v42 = v6;
            if ( v6 >= 0xFFFFF68000000000uLL )
            {
              do
              {
                if ( v42 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
                v42 = (__int64)(v42 << 25) >> 16;
              }
              while ( v42 >= 0xFFFFF68000000000uLL );
              v7 = a1;
            }
            LeafVa = MiGetLeafVa(v6);
            v44 = 0;
            MiLockVadTree(1LL);
            for ( k = MiLocateAddress(LeafVa); k; k = MiGetNextVad(k) )
            {
              v154 = *(_DWORD *)(k + 48);
              if ( (*(_BYTE *)(k + 48) & 0x70) != 0x30
                && (v154 & 0x70) != 0x10
                && ((v154 & 0x200000) == 0 || (v154 & 0x800000) == 0 && (v154 & 0x180000u) < 0x100000)
                && (v154 & 0x70) != 0x50 )
              {
                break;
              }
              ++v44;
              LeafVa = ((*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12) | 0xFFF;
              if ( !(_BYTE)v44 && MiPeriodicGoodCitizen((int *)v7, v6) )
                break;
            }
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
            if ( v42 != LeafVa )
            {
              v46 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v47 = *v176;
              v48 = v46 + 8;
              if ( ((v6 ^ v46) & 0xFFFFFFFFF000LL) != 0 )
              {
                v49 = v46 + 8;
                if ( v48 >= 0xFFFFF68000000000uLL )
                {
                  do
                  {
                    if ( v49 > 0xFFFFF6FFFFFFFFFFuLL )
                      break;
                    v49 = (__int64)(v49 << 25) >> 16;
                  }
                  while ( v49 >= 0xFFFFF68000000000uLL );
                  v4 = 0;
                }
                *((_QWORD *)v7 + 10) = v49;
                v50 = (v6 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
              }
              else
              {
                v50 = v46 + 8;
              }
              v9 = v177;
              v5 = v174;
              v51 = v177;
              *v174 = v50;
              if ( v177 )
              {
                v52 = v174;
                do
                {
                  --v52;
                  v50 = v50 << 25 >> 16;
                  *v52 = v50;
                  --v51;
                }
                while ( v51 );
              }
              LeafPte = v183;
              v7[3] = 0;
              v6 = *v174;
              v3 = a3;
              if ( v48 > v47 )
                LeafPte = 4;
              v183 = LeafPte;
              goto LABEL_41;
            }
            v3 = a3;
          }
LABEL_212:
          LeafPte = v183;
          goto LABEL_208;
        }
        if ( v41 == 8 && (*v7 & 0x10000) == 0 )
          goto LABEL_212;
      }
LABEL_204:
      if ( (*v7 & 0x40) != 0 || v3 >= 1 && (*v7 & 1) == 0 && (*(_DWORD *)(v175 + 184) & 0xF) != 0 )
      {
        v4 = 0;
LABEL_88:
        v183 = 0;
        LeafPte = 0;
LABEL_89:
        v5 = v174;
        v9 = v3;
        v53 = v3;
        v6 += 8LL * (v7[3] + 1);
        *v174 = v6;
        if ( v3 )
        {
          v54 = v174;
          v55 = v6;
          do
          {
            --v54;
            v55 = v55 << 25 >> 16;
            *v54 = v55;
            --v53;
          }
          while ( v53 );
        }
        v7[3] = 0;
LABEL_93:
        v13 = v185;
        goto LABEL_94;
      }
      if ( (char *)v178 == (char *)MiQueryLeafPte )
      {
        LeafPte = MiQueryLeafPte(v7, v6, (unsigned int)v3);
        v183 = LeafPte;
      }
      else if ( v178 == MiAgePte )
      {
        LeafPte = MiAgePte((__int64)v7, v6, v3);
        v183 = LeafPte;
      }
      else
      {
        if ( (char *)v178 == (char *)MiOutSwapWorkingSetPte )
          v153 = MiOutSwapWorkingSetPte(v7, v6, (unsigned int)v3);
        else
          v153 = guard_dispatch_icall_no_overrides(v7, v6, (unsigned int)v3, v39);
        LeafPte = v153;
        v183 = v153;
      }
LABEL_208:
      v4 = 0;
      if ( LeafPte == 2 )
      {
        v5 = v174;
        LeafPte = 0;
        v183 = 0;
        v9 = v3;
        goto LABEL_93;
      }
      if ( LeafPte != 3 )
        goto LABEL_89;
      v183 = 0;
      LeafPte = 0;
      MiYieldPageTableWalk(v7, 1LL);
      MiWaitForFreePage(*((_QWORD *)v7 + 11), 0);
      v5 = v174;
      v13 = 1;
      v185 = 1;
      v9 = v3;
LABEL_94:
      if ( (v7[1] & 1) == 0 )
      {
        v11 = v173;
        v8 = 1;
        v10 = 0xFFFFF68000000000uLL;
        v15 = 0xFFFFF6FB7DBEDF68uLL;
        v12 = 2LL;
        if ( LeafPte < 4 )
          continue;
      }
      goto LABEL_41;
    }
    ResumptionPxe = MiWalkGetResumptionPxe(v7, (unsigned int)v3, 2LL);
    *v5 = ResumptionPxe;
    v6 = ResumptionPxe;
    v86 = v9;
    if ( v9 )
    {
      v87 = v5;
      do
      {
        --v87;
        ResumptionPxe = (__int64)((ResumptionPxe << 25) - (v10 << 25)) >> 16;
        *v87 = ResumptionPxe;
        --v86;
      }
      while ( v86 );
    }
    v13 = v185;
    v12 = 2LL;
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    if ( v6 <= v11 )
      continue;
    break;
  }
LABEL_263:
  v104 = v7[1];
  v105 = v7 + 1;
  if ( v3 != 3 )
  {
    if ( (v104 & 1) == 0 )
    {
      v106 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
      *v105 = v104 | 0x20;
      if ( v106 )
      {
        if ( v106 == MiAgeWorkingSetTail )
        {
          v107 = *((_QWORD *)v7 + 23);
          v108 = 1;
          if ( (*(_DWORD *)v107 & 3) == 0 )
          {
            v105 = v7 + 1;
            if ( *((__int64 (__fastcall **)())v7 + 21) != MiSimpleAgePte )
              v108 = 0;
          }
          MiAgeTrimListsTail((_DWORD)v7, v107 + 56, 0, v108, (__int64)MiAgeWorkingSetVpabCallback);
          if ( (*v105 & 0x20) != 0 )
            *(_BYTE *)(v107 + 6) = 1;
        }
        else if ( v106 == MiUpdateOldWorkingSetPagesTail )
        {
          MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
        }
        else
        {
          if ( (char *)v106 == (char *)MiDeleteVaTail )
            v171 = MiDeleteVaTail(v7, v15, v12, v10);
          else
            v171 = guard_dispatch_icall_no_overrides(v7, v15, v12, v10);
          v4 = v171;
        }
        v105 = v7 + 1;
      }
      v109 = *v105 & 0xFFFFFFDF;
      *v105 = v109;
      if ( ((v109 & 1) != 0 || v4 >= 4) && v4 == 5 )
        return 5;
    }
    return (unsigned int)LeafPte;
  }
  v111 = *((_QWORD *)v7 + 4);
  v112 = v7 + 1;
  if ( (v104 & 1) == 0 && ((*v7 & 0x40) == 0 || LeafPte != 4) )
  {
    v113 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
    *v105 = v104 | 0x20;
    if ( v113 )
    {
      if ( v113 == MiAgeWorkingSetTail )
      {
        v114 = *((_QWORD *)v7 + 23);
        v115 = (*(_DWORD *)v114 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
        MiAgeTrimListsTail((_DWORD)v7, v114 + 56, 0, v115, (__int64)MiAgeWorkingSetVpabCallback);
        if ( (v7[1] & 0x20) != 0 )
          *(_BYTE *)(v114 + 6) = 1;
        v116 = 0;
      }
      else if ( v113 == MiUpdateOldWorkingSetPagesTail )
      {
        MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
        v116 = 0;
      }
      else
      {
        if ( (char *)v113 == (char *)MiDeleteVaTail )
          v172 = MiDeleteVaTail(v7, v15, v12, v10);
        else
          v172 = guard_dispatch_icall_no_overrides(v7, v15, v12, v10);
        v116 = v172;
      }
      v112 = v7 + 1;
    }
    else
    {
      v116 = 0;
      v112 = v7 + 1;
    }
    *v112 &= ~0x20u;
    v15 = *((_QWORD *)v7 + 7);
    if ( !v15 )
      goto LABEL_291;
    if ( (*v7 & 0x1000) != 0 )
    {
      if ( v15 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_290;
    }
    else if ( v15 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v156 = KeGetCurrentPrcb();
      v157 = *(_DWORD *)(v111 + 184) & 0xF;
      if ( v157 )
      {
        if ( v157 == 7 )
        {
          KxReleaseQueuedSpinLock(&v156->SelfmapLockHandle[1]);
          goto LABEL_290;
        }
        v158 = 3LL;
        if ( v157 == 5 )
          v158 = 0LL;
      }
      else
      {
        v158 = 2LL;
      }
      KxReleaseQueuedSpinLock(&v156->SelfmapLockHandle[v158]);
LABEL_290:
      *((_QWORD *)v7 + 7) = 0LL;
      v112 = v7 + 1;
LABEL_291:
      v66 = v116 == 5;
      LeafPte = 5;
      if ( !v66 )
        LeafPte = v183;
      goto LABEL_293;
    }
    if ( (*(_DWORD *)(v111 + 184) & 0xF) != 0
      || v15 < 0xFFFFF6FB7DBED000uLL
      || v15 > 0xFFFFF6FB7DBEDFFFuLL
      || (v159 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v111 + 184) & 0xF) != 0 && v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v15 = 2 * (unsigned int)((__int64)(v15 + 0x90482413000LL) >> 3);
        v12 = (unsigned int)~(2 << (v15 & 0x1F));
        LODWORD(v12) = v12 & ~(1 << (v15 & 0x1F));
        _InterlockedAnd((volatile signed __int32 *)&MiState + ((unsigned __int64)(unsigned int)v15 >> 5) + 2459, v12);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v15, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel(v159 + 4 * ((v15 >> 3) & 0x1FF));
    }
    goto LABEL_290;
  }
LABEL_293:
  if ( (*v112 & 1) != 0 )
  {
    v117 = *((_BYTE *)v7 + 9);
    if ( (*v7 & 4) != 0 )
    {
      if ( v117 == 17 )
        MiLockWorkingSetSharedAtDpc(v111);
      else
        MiLockWorkingSetShared(v111);
      *v112 &= ~1u;
    }
    else
    {
      if ( v117 == 17 )
        MiLockWorkingSetExclusiveAtDpc(v111, v15, v12, v10);
      else
        MiLockWorkingSetExclusive(v111);
      *v112 &= ~1u;
    }
  }
  return (unsigned int)LeafPte;
}
