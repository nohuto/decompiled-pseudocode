/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14023DD10
 * Callers:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x14020B840 (MiYieldPageTableWalk.c)
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14020BEF8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     MiPeriodicGoodCitizen @ 0x14023D8A0 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14023FE60 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiQueryLeafPte @ 0x1403C9790 (MiQueryLeafPte.c)
 *     MiMarkResumptionPoint @ 0x140421720 (MiMarkResumptionPoint.c)
 *     MiWalkGetResumptionPxe @ 0x140451770 (MiWalkGetResumptionPxe.c)
 *     MiDeleteVaTail @ 0x140462720 (MiDeleteVaTail.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned int *a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  int v4; // r15d
  ULONG_PTR *v5; // rdi
  ULONG_PTR v6; // r13
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
  _BOOL8 v29; // r9
  int v30; // ebx
  unsigned int v31; // edx
  unsigned __int64 v32; // rdx
  ULONG_PTR v33; // rcx
  unsigned int v34; // edx
  int NextPageTablePte; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // r9
  unsigned int v40; // ebx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  unsigned __int64 LeafVa; // rdi
  int v45; // ebp
  __int64 k; // rsi
  __int64 v47; // rcx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  __int64 v56; // rax
  int v57; // r11d
  __int64 (__fastcall *v58)(); // rax
  __int64 v59; // rbx
  _BOOL8 v60; // r9
  signed __int64 v61; // rcx
  unsigned int v62; // eax
  int v63; // ebx
  unsigned int j; // edx
  unsigned __int64 v65; // rax
  int v66; // eax
  bool v67; // zf
  struct _KPRCB *v68; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v73; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // r11
  unsigned int v80; // eax
  __int64 v81; // rbp
  __int64 v82; // rbx
  _QWORD *v83; // rdi
  int v84; // edx
  __int64 v85; // rdx
  __int64 ResumptionPxe; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rdx
  unsigned int v89; // eax
  unsigned __int64 v90; // r9
  __int64 v91; // r10
  unsigned __int64 v92; // rdx
  int v93; // r8d
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // r8
  __int64 *v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  char v101; // al
  __int64 v102; // rax
  _KPROCESS *v103; // rdx
  int v105; // edx
  __int64 i; // rcx
  unsigned __int64 v107; // rax
  struct _KPRCB *v108; // rcx
  unsigned int v109; // ecx
  unsigned int *v110; // rbx
  __int64 (__fastcall *v111)(); // rax
  __int64 v112; // rdi
  BOOL v113; // eax
  unsigned int v114; // ecx
  __int64 v116; // rbp
  _DWORD *v117; // rdi
  __int64 (__fastcall *v118)(); // rax
  __int64 v119; // rbx
  BOOL v120; // eax
  int v121; // esi
  unsigned __int64 v122; // rdx
  char v123; // cl
  unsigned __int64 v124; // rdx
  volatile signed __int64 *v125; // rsi
  unsigned __int64 v126; // r9
  unsigned __int64 v127; // r8
  char v128; // al
  unsigned int v129; // ecx
  volatile __int64 *v130; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v131; // rcx
  __int64 v132; // rax
  unsigned __int64 v133; // r9
  unsigned __int64 v134; // rbx
  unsigned int v135; // ebp
  signed __int64 v136; // rax
  ULONG_PTR v137; // rbx
  int v138; // eax
  unsigned int v139; // edx
  unsigned __int64 v140; // rcx
  __int64 v141; // rcx
  _QWORD *v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  struct _KPRCB *v146; // rcx
  char v147; // al
  __int64 v148; // rax
  volatile signed __int64 **v149; // rbx
  __int64 v150; // rax
  __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  __int64 v153; // rsi
  int v154; // eax
  volatile signed __int32 *v155; // rcx
  signed __int64 v156; // rdi
  signed __int64 v157; // rax
  int v158; // eax
  int v159; // edx
  __int64 v160; // r8
  struct _KPRCB *v161; // rcx
  char v162; // al
  __int64 v163; // rdx
  unsigned __int64 v164; // rcx
  unsigned int v165; // r12d
  unsigned __int64 v166; // r15
  char v167; // bl
  volatile signed __int32 *v168; // r15
  __int64 v169; // rcx
  unsigned __int32 v170; // eax
  unsigned __int32 v171; // eax
  __int64 v172; // rdx
  unsigned __int32 v173; // ett
  int v174; // eax
  unsigned __int32 v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // eax
  unsigned __int64 v179; // [rsp+30h] [rbp-98h]
  ULONG_PTR *v180; // [rsp+38h] [rbp-90h]
  unsigned __int64 v181; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v182; // [rsp+48h] [rbp-80h]
  __int64 v183; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall *v184)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-70h]
  __int128 v185; // [rsp+60h] [rbp-68h]
  __int128 v186; // [rsp+70h] [rbp-58h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  int v189; // [rsp+D8h] [rbp+10h]
  int v191; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v4 = 0;
  v181 = *((_QWORD *)a1 + 4);
  v5 = (ULONG_PTR *)&a1[2 * a3 + 24];
  v6 = a2;
  v184 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 21);
  v7 = a1;
  v8 = 1;
  v183 = a3;
  v9 = a3;
  v180 = v5;
  if ( a2 < *v5 )
    v6 = *v5;
  v10 = 0xFFFFF68000000000uLL;
  v11 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  v182 = (unsigned __int64 *)&a1[2 * a3 + 32];
  v12 = 2LL;
  v13 = 0;
  v191 = 0;
  if ( v11 > *v182 )
    v11 = *v182;
  v179 = v11;
  while ( 2 )
  {
    v189 = 0;
    LeafPte = 0;
LABEL_7:
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    while ( 1 )
    {
      if ( v6 > v11 )
        goto LABEL_271;
      if ( !v13 )
        goto LABEL_10;
      v89 = v7[1];
      if ( (v89 & 2) != 0 )
      {
        if ( v3 != 3 )
        {
LABEL_269:
          if ( (v89 & 0x1C) == 0 )
            MiMarkResumptionPoint(v7, v6, (unsigned int)v3, (unsigned int)(v3 != 0) + 2);
          goto LABEL_271;
        }
        v7[1] = v89 | 1;
        MiReacquireWalkLocks(v7, 0xFFFFF6FB7DBEDF68uLL, 1LL);
        v7[1] &= ~2u;
      }
      else
      {
        if ( LeafPte >= 4 )
          goto LABEL_271;
        if ( (v89 & 1) == 0 )
          goto LABEL_191;
        if ( v3 != 3 )
          goto LABEL_269;
        if ( (*v7 & 4) != 0 )
        {
          MiReacquireWalkLocks(v7, v10 + ((v6 >> 9) & 0x7FFFFFFFF8LL), 0LL);
        }
        else
        {
          MiLockWorkingSetExclusive(*((_QWORD *)v7 + 4));
          v7[1] &= ~1u;
        }
      }
      v11 = v179;
      v9 = 3LL;
      v10 = 0xFFFFF68000000000uLL;
LABEL_191:
      v191 = 0;
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
          v5 = (ULONG_PTR *)&v7[2 * v9 + 24];
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
          v5 = (ULONG_PTR *)&v7[2 * v9 + 24];
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
        v84 = (v34 >> 2) & 7;
        if ( v3 != v84 )
        {
          v85 = (unsigned int)(v3 - v84);
          do
          {
            v33 = v10 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
            --v85;
          }
          while ( v85 );
          v11 = v179;
        }
        if ( v6 < v33 )
          break;
      }
LABEL_11:
      v18 = *((_QWORD *)v7 + 10);
      if ( !v18 )
        goto LABEL_12;
      v90 = v6;
      v185 = 0LL;
      v186 = 0LL;
      if ( v3 )
      {
        if ( v17 != 3 )
          goto LABEL_12;
      }
      v91 = 4096LL;
      v92 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v93 = v3;
      if ( v3 )
      {
        do
        {
          v92 = ((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v91 <<= 9;
          --v93;
        }
        while ( v93 );
        v11 = v179;
        v5 = v180;
      }
      if ( v6 == v92 )
      {
        *((_QWORD *)v7 + 10) = 0LL;
        v95 = v3;
      }
      else
      {
        if ( v6 > v92 )
        {
          *((_QWORD *)v7 + 10) = 0LL;
          goto LABEL_12;
        }
        if ( v92 <= v11 )
        {
          v90 = v92;
          if ( ((v91 - 1) & v18) == 0 )
            *((_QWORD *)v7 + 10) = 0LL;
        }
        else
        {
          v90 = v11 + 8;
          v18 = 0LL;
        }
        *v5 = v90;
        v94 = v90;
        v95 = v3;
        v96 = v3;
        if ( v3 )
        {
          v97 = (__int64 *)&v7[2 * v3 + 24];
          do
          {
            --v97;
            v94 = v94 << 25 >> 16;
            *v97 = v94;
            --v96;
          }
          while ( v96 );
        }
        if ( !v18 )
          goto LABEL_203;
      }
      *(_QWORD *)&v185 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v185 + 1) = (((unsigned __int64)v185 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v186 = ((*((_QWORD *)&v185 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v105 = v3;
      *((_QWORD *)&v186 + 1) = (((unsigned __int64)v186 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = v95; ; --i )
      {
        v107 = *((_QWORD *)&v185 + i);
        *(_QWORD *)&v7[2 * i + 24] = v107;
        if ( v105 != v3 )
          v107 = v90;
        v90 = v107;
        if ( !i )
          break;
        --v105;
      }
LABEL_203:
      if ( v6 != v90 )
      {
        v13 = v191;
        v6 = v90;
        v5 = v180;
        v9 = v3;
        goto LABEL_42;
      }
LABEL_12:
      v12 = ++*((_QWORD *)v7 + 20);
      v15 = *v7;
      if ( (v12 & 0xF) == 0 && (v15 & 8) != 0 )
      {
        v78 = *((_QWORD *)v7 + 11);
        v79 = *(_QWORD *)(v78 + 18688);
        if ( v79 < 0x420 )
        {
          v10 = 0LL;
          v80 = 0;
          v81 = *(_QWORD *)(v78 + 16) + 14944LL;
          while ( v80 < (unsigned __int16)KeNumberNodes )
          {
            v82 = 0LL;
            v83 = (_QWORD *)v81;
            while ( v82 <= 1 )
            {
              while ( (unsigned int)v10 < dword_140E2DD0C )
              {
                v79 += *(unsigned __int16 *)(*v83 + 16LL * (unsigned int)v10);
                if ( v79 >= 0x420 )
                {
                  v3 = a3;
                  v4 = 0;
                  v8 = 1;
                  goto LABEL_13;
                }
                LODWORD(v10) = v10 + 1;
              }
              ++v82;
              ++v83;
              v10 = 0LL;
            }
            v81 += 57216LL;
            ++v80;
          }
          v3 = a3;
          LeafPte = 5;
          v189 = 5;
          v4 = 0;
          goto LABEL_271;
        }
      }
LABEL_13:
      if ( (v15 & 2) == 0 || ((unsigned __int8)v12 & (_BYTE)v7[2]) != 0 )
        goto LABEL_54;
      v19 = *((_QWORD *)v7 + 4);
      if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5 )
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) == 1 )
          v20 = (unsigned __int64 *)&unk_140E38880;
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
        goto LABEL_138;
      SchedulerAssist = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v101 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( !v101 )
        {
          v102 = 2LL;
          goto LABEL_220;
        }
        if ( v101 == 7 )
        {
          v67 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
        }
        else
        {
          if ( v101 == 5 )
            v102 = 0LL;
          else
            v102 = 3LL;
LABEL_220:
          v67 = CurrentPrcb->SelfmapLockHandle[v102].LockQueue.Next == 0LL;
        }
LABEL_137:
        if ( !v67 )
          goto LABEL_22;
        goto LABEL_138;
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        && SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
        && SchedulerAssist <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v73 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
        if ( v73 )
        {
          SchedulerAssist = (((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
          v66 = (*(_DWORD *)(v73 + 4 * SchedulerAssist) & 0x40000000) != 0;
LABEL_136:
          v67 = v66 == 0;
          goto LABEL_137;
        }
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        || SchedulerAssist < 0xFFFFF6FB7DBED000uLL
        || SchedulerAssist > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v65 = *(_QWORD *)SchedulerAssist;
        if ( SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
          && SchedulerAssist <= 0xFFFFF6FB7DBED7F8uLL
          && (v65 & 1) != 0
          && ((v65 & 0x42) == 0 || (v65 & 0x20) == 0)
          && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              SchedulerAssist = (SchedulerAssist >> 3) & 0x1FF;
              v76 = *(_QWORD *)(KernelWaitTime + 8 * SchedulerAssist);
              if ( (v76 & 0x20) != 0 )
                v65 |= 0x20uLL;
              v77 = v65;
              v65 |= 0x42uLL;
              if ( (v76 & 0x42) == 0 )
                v65 = v77;
            }
          }
        }
        v66 = (v65 >> 60) & 2;
        goto LABEL_136;
      }
      SchedulerAssist = (__int64)(SchedulerAssist + 0x90482413000LL) >> 3;
      if ( ((*(&MiState + ((unsigned __int64)(unsigned int)(2 * SchedulerAssist) >> 5) + 2459) >> ((2 * SchedulerAssist) & 0x1F)) & 2) != 0 )
        goto LABEL_22;
LABEL_138:
      if ( *((_BYTE *)v7 + 9) >= 2u )
        goto LABEL_54;
      v68 = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v19 = 0LL;
      DpcRequestSummary = v68->DpcRequestSummary;
      DpcWatchdogCount = v68->DpcWatchdogCount;
      DpcTimeCount = v68->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        SchedulerAssist = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_144;
        if ( v68->QuantumEnd )
          goto LABEL_237;
      }
      else
      {
        if ( !v68->NestingLevel )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v8 = 2;
            goto LABEL_237;
          }
          if ( v68->QuantumEnd )
          {
            v8 = 3;
            goto LABEL_237;
          }
          NextThread = v68->NextThread;
          if ( NextThread && NextThread != v68->CurrentThread )
          {
            v8 = 4;
            goto LABEL_237;
          }
LABEL_144:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_54;
          if ( !(_DWORD)SchedulerAssist )
            goto LABEL_247;
          goto LABEL_146;
        }
        v19 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_54;
        if ( v68->QuantumEnd )
        {
          v8 = 7;
          goto LABEL_237;
        }
      }
LABEL_146:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v8 = 5;
        goto LABEL_237;
      }
      if ( v68->CurrentThread != v68->IdleThread )
      {
        v8 = 6;
        goto LABEL_237;
      }
LABEL_247:
      _disable();
      v68->DpcWatchdogCount = 0;
      v68->DpcTimeCount = 0;
      v108 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int64)v108->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw((const void *)SchedulerAssist);
        v171 = *(_DWORD *)SchedulerAssist;
        do
        {
          v172 = v171;
          LODWORD(v172) = v171 & 0xFFDFFFFF;
          v173 = v171;
          v171 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v171 & 0xFFDFFFFF, v171);
        }
        while ( v173 != v171 );
        if ( (v171 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v108, v172, SchedulerAssist, v19);
      }
      _enable();
      v8 = 0;
LABEL_237:
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
            MiAgeTrimListsTail((__int64)v7, (__int64 *)(v28 + 56), 0LL, v29, (__int64)MiAgeWorkingSetVpabCallback);
            if ( (v7[1] & 0x20) != 0 )
              *(_BYTE *)(v28 + 6) = 1;
            v30 = 0;
          }
          else if ( v27 == MiUpdateOldWorkingSetPagesTail )
          {
            MiAgeTrimListsTail(
              (__int64)v7,
              (__int64 *)(*((_QWORD *)v7 + 23) + 24LL),
              0LL,
              0LL,
              (__int64)MiUpdateOldPagesVpabCallback);
            v30 = 0;
          }
          else
          {
            if ( (char *)v27 == (char *)MiDeleteVaTail )
              v176 = MiDeleteVaTail(v7, v27, SchedulerAssist, v19);
            else
              v176 = guard_dispatch_icall_no_overrides(v7, v27, SchedulerAssist, v19);
            v30 = v176;
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
            MiReleaseWalkLocks((__int64)v7);
          }
          else
          {
            v160 = *((_QWORD *)v7 + 7);
            if ( v160 )
            {
              *v25 |= 2u;
              if ( (v31 & 0x1000) == 0 || v160 != 0xFFFFF6FB7DBEDF68uLL )
                MiUnlockPageTableInternal(*((_QWORD *)v7 + 4), v160);
              *((_QWORD *)v7 + 7) = 0LL;
            }
          }
        }
        if ( v30 < 4 )
        {
LABEL_40:
          LeafPte = v189;
          v5 = v180;
          v9 = v3;
LABEL_41:
          v11 = v179;
          v8 = 1;
          v13 = 1;
          v191 = 1;
LABEL_42:
          v12 = 2LL;
          v10 = 0xFFFFF68000000000uLL;
          goto LABEL_7;
        }
LABEL_39:
        v189 = v30;
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
        v5 = v180;
        LeafPte = 4;
        v189 = 4;
        v9 = v3;
        v6 = *v180;
        goto LABEL_41;
      }
      if ( !NextPageTablePte )
      {
        v5 = v180;
        LeafPte = 0;
        v189 = 0;
        v9 = v3;
        v6 = *v180;
        goto LABEL_41;
      }
      v39 = v7[1];
      if ( (v39 & 1) != 0 )
      {
        LeafPte = v189;
        v5 = v180;
        v9 = v3;
        goto LABEL_41;
      }
      v40 = v7[1];
      if ( v3 >= 1
        && NextPageTablePte != 3
        && (v39 & 0x1C) != 0
        && MiWalkGetResumptionPxe(v7, (unsigned int)v3, v37) == v6
        && v57 - 1 < v3 )
      {
        v40 &= 0xFFFFFFE3;
        *((_QWORD *)v7 + 9) = 0LL;
        v7[1] = v40;
      }
      if ( v38 == 1 )
        goto LABEL_92;
      if ( v38 != 2 )
      {
        if ( v3 <= (int)((v40 >> 6) & 7) )
          goto LABEL_208;
        v58 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
        v7[1] = v40 | 0x20;
        if ( v58 )
        {
          if ( v58 == MiAgeWorkingSetTail )
          {
            v59 = *((_QWORD *)v7 + 23);
            v60 = (*(_DWORD *)v59 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
            MiAgeTrimListsTail((__int64)v7, (__int64 *)(v59 + 56), 0LL, v60, (__int64)MiAgeWorkingSetVpabCallback);
            if ( (v7[1] & 0x20) != 0 )
              *(_BYTE *)(v59 + 6) = 1;
            goto LABEL_115;
          }
          if ( v58 == MiUpdateOldWorkingSetPagesTail )
          {
            MiAgeTrimListsTail(
              (__int64)v7,
              (__int64 *)(*((_QWORD *)v7 + 23) + 24LL),
              0LL,
              0LL,
              (__int64)MiUpdateOldPagesVpabCallback);
            goto LABEL_115;
          }
          if ( (char *)v58 == (char *)MiDeleteVaTail )
            v61 = (unsigned int)MiDeleteVaTail(v7, v36, v37, v39);
          else
            v61 = (unsigned int)guard_dispatch_icall_no_overrides(v7, v36, v37, v39);
        }
        else
        {
LABEL_115:
          v61 = 0LL;
        }
        v62 = v7[1] & 0xFFFFFFDF;
        v7[1] = v62;
        if ( (v62 & 1) != 0 )
        {
          if ( (int)v61 >= 4 )
          {
LABEL_118:
            v63 = v189;
            if ( (_DWORD)v61 == 5 )
              v63 = 5;
            v189 = v63;
          }
          LeafPte = v189;
          v5 = v180;
          v9 = v3;
          goto LABEL_41;
        }
        if ( (int)v61 >= 4 )
          goto LABEL_118;
        if ( (*v7 & 4) != 0 )
        {
          v124 = 0xFFFFF68000000000uLL;
          v125 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v126 = 0xFFFFF6FB7DBEDF68uLL;
          if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v127 = (unsigned __int64)KeGetCurrentPrcb();
            v128 = *(_DWORD *)(v181 + 184) & 0xF;
            if ( v128 )
            {
              if ( v128 == 7 )
              {
                v129 = 1;
              }
              else if ( v128 == 5 )
              {
                v129 = 0;
              }
              else
              {
                v129 = 3;
              }
              v130 = (volatile __int64 *)(&MiState + 2 * v129 + 3232);
            }
            else
            {
              v129 = 2;
              v130 = (volatile __int64 *)(v181 + 176);
            }
            v131 = (_KSPIN_LOCK_QUEUE *volatile *)(v127 + 8 * (v129 + 2 * (v129 + 2500LL)));
            *((_QWORD *)v131 + 1) = v130;
            *v131 = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
            {
              KiAcquireQueuedSpinLockInstrumented(v131, v130);
              goto LABEL_333;
            }
            v132 = _InterlockedExchange64(v130, (__int64)v131);
            if ( v132 )
            {
              KxWaitForLockOwnerShip(v131, v132);
              goto LABEL_333;
            }
          }
          else
          {
            v127 = v181;
            v133 = 0xFFFFF6FB7DBED000uLL;
            if ( (*(_DWORD *)(v181 + 184) & 0xF) == 0
              && v6 >= 0xFFFFF6FB7DBED000uLL
              && v6 <= 0xFFFFF6FB7DBEDFFFuLL
              && (v61 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v61 + 4LL * (((unsigned int)v6 >> 3) & 0x1FF)));
            }
            else
            {
              if ( (*(_DWORD *)(v181 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v165 = 0;
                v166 = (unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5;
                v167 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                v127 = *(&MiState + v166 + 2459);
                v168 = (volatile signed __int32 *)(&MiState + v166 + 2459);
                do
                {
                  while ( 1 )
                  {
                    v169 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                    if ( (((unsigned int)v127 >> v167) & 1) == 0 )
                      break;
                    if ( (((unsigned int)v127 >> v167) & 2) != 0 )
                    {
                      do
                      {
                        if ( (++v165 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v169, v124, v127, v133) )
                        {
                          HvlNotifyLongSpinWait(v165);
                        }
                        else
                        {
                          _mm_pause();
                        }
                        v127 = *(unsigned int *)v168;
                        v169 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                      }
                      while ( (((unsigned __int32)*v168 >> v167) & 1) != 0 );
                    }
                    else
                    {
                      v124 = (unsigned int)v127 | (2 << v169);
                      v175 = _InterlockedCompareExchange(v168, v124, v127);
                      v67 = (_DWORD)v127 == v175;
                      v127 = v175;
                      if ( v67 )
                        v127 = (unsigned int)v124;
                    }
                  }
                  v170 = _InterlockedCompareExchange(v168, ~(2 << v167) & (v127 | (1 << v167)), v127);
                  v67 = (_DWORD)v127 == v170;
                  v127 = v170;
                }
                while ( !v67 );
              }
              else
              {
                v134 = *(_QWORD *)v6;
                v135 = 0;
                if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (v134 & 1) != 0 )
                {
                  LOBYTE(v61) = (v134 & 0x42) != 0;
                  if ( ((unsigned __int8)v61 & ((v134 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
                  {
                    v61 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
                    if ( *(_BYTE *)(v61 + 352) != 1 )
                    {
                      v144 = *(_QWORD *)(v61 + 1288);
                      if ( v144 )
                      {
                        v145 = *(_QWORD *)(v144 + 8 * ((v6 >> 3) & 0x1FF));
                        if ( (v145 & 0x20) != 0 )
                          v134 |= 0x20uLL;
                        v61 = v134;
                        v134 |= 0x42uLL;
                        if ( (v145 & 0x42) == 0 )
                          v134 = v61;
                      }
                      v124 = 0xFFFFF68000000000uLL;
                    }
                  }
                }
                while ( (v134 & 1) != 0 )
                {
                  if ( (v134 & 0x1000000000000000LL) != 0 )
                  {
                    if ( ((v134 >> 60) & 2) != 0 )
                    {
                      do
                      {
                        if ( (++v135 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v61, v124, v127, v133) )
                        {
                          HvlNotifyLongSpinWait(v135);
                        }
                        else
                        {
                          _mm_pause();
                        }
                        v134 = *(_QWORD *)v6;
                      }
                      while ( (*(_QWORD *)v6 & 0x1000000000000000LL) != 0 );
                      v124 = 0xFFFFF68000000000uLL;
                    }
                    else
                    {
                      v156 = v134 | 0x2000000000000000LL;
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      if ( _bittest64(&MiFlags, 0x24u) )
                      {
                        if ( (v134 & 0x21) == 1 )
                        {
                          v61 = 0x4000000000LL;
                          if ( v6 >= 0xFFFFF6C000000000uLL )
                            MiCheckLinearProtectedPteAccessedBit(v6, v134 | 0x2000000000000000LL, 128LL);
                        }
                      }
                      v157 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v156, v134);
                      v67 = v134 == v157;
                      v134 = v157;
                      v124 = 0xFFFFF68000000000uLL;
                      if ( v67 )
                        v134 = v156;
                    }
                  }
                  else
                  {
                    v61 = v134 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    v136 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v61, v134);
                    v67 = v134 == v136;
                    v134 = v136;
                    if ( v67 )
                      break;
                  }
                }
                v125 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                v7 = a1;
              }
              v3 = a3;
            }
LABEL_333:
            v126 = 0xFFFFF6FB7DBEDF68uLL;
          }
          if ( (*v7 & 0x1000) != 0 )
          {
            if ( v125 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
              goto LABEL_336;
LABEL_363:
            if ( (*(_DWORD *)(v181 + 184) & 0xF) != 0
              || (unsigned __int64)v125 < 0xFFFFF6FB7DBED000uLL
              || (unsigned __int64)v125 > 0xFFFFF6FB7DBEDFFFuLL
              || (v152 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
            {
              if ( (*(_DWORD *)(v181 + 184) & 0xF) != 0
                && (unsigned __int64)v125 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)v125 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                _InterlockedAnd(
                  (volatile signed __int32 *)&MiState
                + ((unsigned __int64)(2 * (unsigned int)((__int64)(v125 + 0x12090482600LL) >> 3)) >> 5)
                + 2459,
                  ~(3 << ((2 * ((__int64)(v125 + 0x12090482600LL) >> 3)) & 0x1F)));
              }
              else
              {
                _InterlockedAnd64(v125, 0xCFFFFFFFFFFFFFFFuLL);
              }
            }
            else
            {
              v153 = ((unsigned int)v125 >> 3) & 0x1FF;
              v154 = *(_DWORD *)(v152 + 4 * v153);
              v155 = (volatile signed __int32 *)(v152 + 4 * v153);
              if ( (v154 & 0x3FFFFFFF) != 0 )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                {
                  _InterlockedAnd(v155, 0xBFFFFFFF);
                  _InterlockedDecrement(v155);
                }
                else
                {
                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v155, retaddr);
                }
              }
              else
              {
                if ( v154 >= 0 )
                  KeBugCheckEx(0x10u, (ULONG_PTR)v155, 0x100uLL, 0LL, 0LL);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                  *v155 = 0;
                else
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v155, retaddr);
              }
            }
          }
          else
          {
            if ( v125 != (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
              goto LABEL_363;
            v146 = KeGetCurrentPrcb();
            v147 = *(_DWORD *)(v181 + 184) & 0xF;
            if ( v147 )
            {
              if ( v147 == 7 )
              {
                v148 = 1LL;
              }
              else if ( v147 == 5 )
              {
                v148 = 0LL;
              }
              else
              {
                v148 = 3LL;
              }
            }
            else
            {
              v148 = 2LL;
            }
            v149 = (volatile signed __int64 **)&v146->SelfmapLockHandle[v148];
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _m_prefetchw(v149);
              v150 = (__int64)*v149;
              if ( !*v149 )
              {
                if ( v149 == (volatile signed __int64 **)_InterlockedCompareExchange64(
                                                           v149[1],
                                                           0LL,
                                                           (signed __int64)v149) )
                  goto LABEL_336;
                v150 = KxWaitForLockChainValid(v149);
              }
              *v149 = 0LL;
              v151 = (__int64)v149[1];
              if ( (((unsigned __int8)v151 ^ (unsigned __int8)_InterlockedExchange64(
                                                                (volatile __int64 *)(v150 + 8),
                                                                v151)) & 4) != 0 )
                KeWakeAddressAll(v150 + 8, v151, v127, v126);
            }
            else
            {
              KiReleaseQueuedSpinLockInstrumented(v149, retaddr);
            }
          }
LABEL_336:
          *((_QWORD *)v7 + 7) = v6;
        }
        v137 = v6 << 25;
        v138 = MiWalkPageTablesRecursively(v7, (__int64)(v6 << 25) >> 16, (unsigned int)(v3 - 1));
        v139 = v7[1];
        LeafPte = v138;
        v189 = v138;
        if ( (v139 & 3) != 0 )
        {
          if ( (v139 & 0x1C) == 0
            && *(_QWORD *)&v7[2 * v3 + 22] >= (unsigned __int64)((__int64)(v137 + 0x10000000) >> 16)
            && v3 )
          {
            *((_QWORD *)v7 + 9) = v6;
            v7[1] = v139 ^ ((unsigned __int8)v139 ^ (unsigned __int8)(4 * v3)) & 0x1C;
          }
          v4 = 0;
        }
        else
        {
          if ( v138 >= 4 )
          {
            v10 = 0xFFFFF68000000000uLL;
            v140 = *(_QWORD *)&v7[2 * v3 + 22];
            if ( v140 < (__int64)(v137 + 0x10000000) >> 16 )
            {
              v9 = v3;
            }
            else
            {
              v6 = ((v140 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v9 = v3;
              v141 = v3;
              *v180 = v6;
              if ( v3 )
              {
                v142 = v180;
                v143 = v6;
                do
                {
                  --v142;
                  v143 = v143 << 25 >> 16;
                  *v142 = v143;
                  --v141;
                }
                while ( v141 );
              }
            }
            v11 = v179;
            v8 = 1;
            v5 = (ULONG_PTR *)&v7[2 * v9 + 24];
            v13 = 1;
            v191 = 1;
            v4 = 0;
            v12 = 2LL;
            goto LABEL_7;
          }
          if ( (*v7 & 4) == 0 )
            goto LABEL_208;
          v174 = MiReacquireHigherPageTableLock((int *)v7, v6, v3);
          if ( !v174 )
            goto LABEL_208;
          v4 = 0;
          LeafPte = 0;
          if ( v174 != 2 )
            LeafPte = v174;
          v189 = LeafPte;
        }
        v11 = v179;
        v8 = 1;
        v5 = v180;
        v13 = 1;
        v191 = 1;
        v9 = v3;
        v12 = 2LL;
        v10 = 0xFFFFF68000000000uLL;
        goto LABEL_7;
      }
      if ( !v3 && (*v7 & 1) == 0 && (*(_QWORD *)v6 & 1) != 0 )
      {
        v41 = ((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
        v42 = *(_QWORD *)v41;
        if ( v41 >= 0xFFFFF6FB7DBED000uLL
          && v41 <= 0xFFFFF6FB7DBED7F8uLL
          && (v42 & 1) != 0
          && ((v42 & 0x42) == 0 || (v42 & 0x20) == 0)
          && (MiFlags & 0x600000) != 0 )
        {
          v103 = KeGetCurrentThread()->ApcState.Process;
          if ( v103->AddressPolicy != 1 )
          {
            if ( v103[2].KernelWaitTime )
              v41 = (v41 >> 3) & 0x1FF;
          }
        }
        LOBYTE(v42) = HIBYTE(v42) & 0xF;
        if ( (HIBYTE(v42) & 0xF) == 0xA || (_BYTE)v42 == 9 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v7 + 4) + 184LL) & 0xF) == 0 )
          {
            v43 = v6;
            if ( v6 >= 0xFFFFF68000000000uLL )
            {
              do
              {
                if ( v43 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
                v43 = (__int64)(v43 << 25) >> 16;
              }
              while ( v43 >= 0xFFFFF68000000000uLL );
              v7 = a1;
            }
            LeafVa = MiGetLeafVa(v6);
            v45 = 0;
            MiLockVadTree(1LL);
            for ( k = MiLocateAddress(LeafVa); k; k = MiGetNextVad(k) )
            {
              v159 = *(_DWORD *)(k + 48);
              if ( (*(_BYTE *)(k + 48) & 0x70) != 0x30
                && (v159 & 0x70) != 0x10
                && ((v159 & 0x200000) == 0 || (v159 & 0x800000) == 0 && (v159 & 0x180000u) < 0x100000)
                && (v159 & 0x70) != 0x50 )
              {
                break;
              }
              ++v45;
              LeafVa = ((*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12) | 0xFFF;
              if ( !(_BYTE)v45 && MiPeriodicGoodCitizen((int *)v7, v6) )
                break;
            }
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
            if ( v43 != LeafVa )
            {
              v47 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v48 = *v182;
              v49 = v47 + 8;
              if ( ((v6 ^ v47) & 0xFFFFFFFFF000LL) != 0 )
              {
                v50 = v47 + 8;
                if ( v49 >= 0xFFFFF68000000000uLL )
                {
                  do
                  {
                    if ( v50 > 0xFFFFF6FFFFFFFFFFuLL )
                      break;
                    v50 = (__int64)(v50 << 25) >> 16;
                  }
                  while ( v50 >= 0xFFFFF68000000000uLL );
                  v4 = 0;
                }
                *((_QWORD *)v7 + 10) = v50;
                v51 = (v6 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
              }
              else
              {
                v51 = v47 + 8;
              }
              v9 = v183;
              v5 = v180;
              v52 = v183;
              *v180 = v51;
              if ( v183 )
              {
                v53 = v180;
                do
                {
                  --v53;
                  v51 = v51 << 25 >> 16;
                  *v53 = v51;
                  --v52;
                }
                while ( v52 );
              }
              LeafPte = v189;
              v7[3] = 0;
              v6 = *v180;
              v3 = a3;
              if ( v49 > v48 )
                LeafPte = 4;
              v189 = LeafPte;
              goto LABEL_41;
            }
            v3 = a3;
          }
LABEL_216:
          LeafPte = v189;
          goto LABEL_212;
        }
        if ( (_BYTE)v42 == 8 && (*v7 & 0x10000) == 0 )
          goto LABEL_216;
      }
LABEL_208:
      if ( (*v7 & 0x40) != 0 || v3 >= 1 && (*v7 & 1) == 0 && (*(_DWORD *)(v181 + 184) & 0xF) != 0 )
      {
        v4 = 0;
LABEL_92:
        v189 = 0;
        LeafPte = 0;
LABEL_93:
        v5 = v180;
        v9 = v3;
        v54 = v3;
        v6 += 8LL * (v7[3] + 1);
        *v180 = v6;
        if ( v3 )
        {
          v55 = v180;
          v56 = v6;
          do
          {
            --v55;
            v56 = v56 << 25 >> 16;
            *v55 = v56;
            --v54;
          }
          while ( v54 );
        }
        v7[3] = 0;
LABEL_97:
        v13 = v191;
        goto LABEL_98;
      }
      if ( v184 == MiQueryLeafPte )
      {
        LeafPte = MiQueryLeafPte(v7, v6, (unsigned int)v3);
        v189 = LeafPte;
      }
      else if ( v184 == MiAgePte )
      {
        LeafPte = MiAgePte(v7, v6, (unsigned int)v3);
        v189 = LeafPte;
      }
      else
      {
        if ( v184 == MiOutSwapWorkingSetPte )
          v158 = MiOutSwapWorkingSetPte(v7, v6, (unsigned int)v3);
        else
          v158 = guard_dispatch_icall_no_overrides(v7, v6, (unsigned int)v3, v39);
        LeafPte = v158;
        v189 = v158;
      }
LABEL_212:
      v4 = 0;
      if ( LeafPte == 2 )
      {
        v5 = v180;
        LeafPte = 0;
        v189 = 0;
        v9 = v3;
        goto LABEL_97;
      }
      if ( LeafPte != 3 )
        goto LABEL_93;
      v189 = 0;
      LeafPte = 0;
      MiYieldPageTableWalk((int *)v7, 1LL, v41, v39);
      MiWaitForFreePage(*((_QWORD *)v7 + 11), 0LL, v98, v99);
      v5 = v180;
      v13 = 1;
      v191 = 1;
      v9 = v3;
LABEL_98:
      if ( (v7[1] & 1) == 0 )
      {
        v11 = v179;
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
    v87 = v9;
    if ( v9 )
    {
      v88 = v5;
      do
      {
        --v88;
        ResumptionPxe = (__int64)((ResumptionPxe << 25) - (v10 << 25)) >> 16;
        *v88 = ResumptionPxe;
        --v87;
      }
      while ( v87 );
    }
    v13 = v191;
    v12 = 2LL;
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    if ( v6 <= v11 )
      continue;
    break;
  }
LABEL_271:
  v109 = v7[1];
  v110 = v7 + 1;
  if ( v3 != 3 )
  {
    if ( (v109 & 1) == 0 )
    {
      v111 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
      *v110 = v109 | 0x20;
      if ( v111 )
      {
        if ( v111 == MiAgeWorkingSetTail )
        {
          v112 = *((_QWORD *)v7 + 23);
          v113 = 1;
          if ( (*(_DWORD *)v112 & 3) == 0 )
          {
            v110 = v7 + 1;
            if ( *((__int64 (__fastcall **)())v7 + 21) != MiSimpleAgePte )
              v113 = 0;
          }
          MiAgeTrimListsTail((__int64)v7, (__int64 *)(v112 + 56), 0LL, v113, (__int64)MiAgeWorkingSetVpabCallback);
          if ( (*v110 & 0x20) != 0 )
            *(_BYTE *)(v112 + 6) = 1;
        }
        else if ( v111 == MiUpdateOldWorkingSetPagesTail )
        {
          MiAgeTrimListsTail(
            (__int64)v7,
            (__int64 *)(*((_QWORD *)v7 + 23) + 24LL),
            0LL,
            0LL,
            (__int64)MiUpdateOldPagesVpabCallback);
        }
        else
        {
          if ( (char *)v111 == (char *)MiDeleteVaTail )
            v177 = MiDeleteVaTail(v7, v15, v12, v10);
          else
            v177 = guard_dispatch_icall_no_overrides(v7, v15, v12, v10);
          v4 = v177;
        }
        v110 = v7 + 1;
      }
      v114 = *v110 & 0xFFFFFFDF;
      *v110 = v114;
      if ( ((v114 & 1) != 0 || v4 >= 4) && v4 == 5 )
        return 5;
    }
    return (unsigned int)LeafPte;
  }
  v116 = *((_QWORD *)v7 + 4);
  v117 = v7 + 1;
  if ( (v109 & 1) == 0 && ((*v7 & 0x40) == 0 || LeafPte != 4) )
  {
    v118 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
    *v110 = v109 | 0x20;
    if ( v118 )
    {
      if ( v118 == MiAgeWorkingSetTail )
      {
        v119 = *((_QWORD *)v7 + 23);
        v120 = (*(_DWORD *)v119 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
        MiAgeTrimListsTail((__int64)v7, (__int64 *)(v119 + 56), 0LL, v120, (__int64)MiAgeWorkingSetVpabCallback);
        if ( (v7[1] & 0x20) != 0 )
          *(_BYTE *)(v119 + 6) = 1;
        v121 = 0;
      }
      else if ( v118 == MiUpdateOldWorkingSetPagesTail )
      {
        MiAgeTrimListsTail(
          (__int64)v7,
          (__int64 *)(*((_QWORD *)v7 + 23) + 24LL),
          0LL,
          0LL,
          (__int64)MiUpdateOldPagesVpabCallback);
        v121 = 0;
      }
      else
      {
        if ( (char *)v118 == (char *)MiDeleteVaTail )
          v178 = MiDeleteVaTail(v7, v15, v12, v10);
        else
          v178 = guard_dispatch_icall_no_overrides(v7, v15, v12, v10);
        v121 = v178;
      }
      v117 = v7 + 1;
    }
    else
    {
      v121 = 0;
      v117 = v7 + 1;
    }
    *v117 &= ~0x20u;
    v122 = *((_QWORD *)v7 + 7);
    if ( !v122 )
      goto LABEL_299;
    if ( (*v7 & 0x1000) != 0 )
    {
      if ( v122 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_298;
    }
    else if ( v122 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v161 = KeGetCurrentPrcb();
      v162 = *(_DWORD *)(v116 + 184) & 0xF;
      if ( v162 )
      {
        if ( v162 == 7 )
        {
          KxReleaseQueuedSpinLock(&v161->SelfmapLockHandle[1]);
          goto LABEL_298;
        }
        v163 = 3LL;
        if ( v162 == 5 )
          v163 = 0LL;
      }
      else
      {
        v163 = 2LL;
      }
      KxReleaseQueuedSpinLock(&v161->SelfmapLockHandle[v163]);
LABEL_298:
      *((_QWORD *)v7 + 7) = 0LL;
      v117 = v7 + 1;
LABEL_299:
      v67 = v121 == 5;
      LeafPte = 5;
      if ( !v67 )
        LeafPte = v189;
      goto LABEL_301;
    }
    if ( (*(_DWORD *)(v116 + 184) & 0xF) != 0
      || v122 < 0xFFFFF6FB7DBED000uLL
      || v122 > 0xFFFFF6FB7DBEDFFFuLL
      || (v164 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v116 + 184) & 0xF) != 0 && v122 >= 0xFFFFF6FB7DBED000uLL && v122 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&MiState
        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v122 + 0x90482413000LL) >> 3)) >> 5)
        + 2459,
          ~(2 << ((2 * ((__int64)(v122 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                   * ((__int64)(v122 + 0x90482413000LL) >> 3)) & 0x1F)));
      else
        _InterlockedAnd64((volatile signed __int64 *)v122, 0xCFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel(
        (volatile signed __int32 *)(v164 + 4 * ((v122 >> 3) & 0x1FF)),
        (v122 >> 3) & 0x1FF,
        v12,
        v10);
    }
    goto LABEL_298;
  }
LABEL_301:
  if ( (*v117 & 1) != 0 )
  {
    v123 = *((_BYTE *)v7 + 9);
    if ( (*v7 & 4) != 0 )
    {
      if ( v123 == 17 )
        MiLockWorkingSetSharedAtDpc(v116);
      else
        MiLockWorkingSetShared(v116);
      *v117 &= ~1u;
    }
    else
    {
      if ( v123 == 17 )
        MiLockWorkingSetExclusiveAtDpc(v116);
      else
        MiLockWorkingSetExclusive(v116);
      *v117 &= ~1u;
    }
  }
  return (unsigned int)LeafPte;
}
