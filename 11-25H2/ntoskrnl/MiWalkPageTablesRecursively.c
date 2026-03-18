/*
 * XREFs of MiWalkPageTablesRecursively @ 0x1402B2770
 * Callers:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402B2120 (EtwTraceShouldYieldProcessor.c)
 *     MiPeriodicGoodCitizen @ 0x1402B22F0 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x1402B48B0 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E8120 (MiYieldPageTableWalk.c)
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiQueryLeafPte @ 0x1403DE2A0 (MiQueryLeafPte.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14040B3D8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiWalkGetResumptionPxe @ 0x14045D420 (MiWalkGetResumptionPxe.c)
 *     MiDeleteVaTail @ 0x1404701A0 (MiDeleteVaTail.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 *v20; // rax
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
  unsigned __int64 v33; // rdx
  unsigned int v34; // ecx
  int NextPageTablePte; // eax
  _KPROCESS *v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // r9
  unsigned int v40; // ebx
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rbx
  BOOL v43; // r9d
  signed __int64 v44; // rcx
  unsigned int v45; // eax
  int v46; // ebx
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int j; // edx
  unsigned __int64 v51; // rax
  int v52; // eax
  bool v53; // zf
  struct _KPRCB *v54; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 LeafVa; // rdi
  int v63; // ebp
  __int64 k; // rsi
  __int64 v65; // rcx
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // r13
  __int64 v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rcx
  unsigned __int64 v73; // r11
  unsigned int v74; // eax
  __int64 v75; // rbp
  __int64 v76; // rbx
  _QWORD *v77; // rdi
  unsigned __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 ResumptionPxe; // rax
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  unsigned int v84; // eax
  unsigned __int64 v85; // r9
  __int64 v86; // r10
  unsigned __int64 v87; // rdx
  int v88; // r8d
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // r8
  __int64 *v92; // rdx
  int v93; // r11d
  struct _KPRCB *CurrentPrcb; // rdx
  char v95; // al
  __int64 v96; // rcx
  int v97; // edx
  __int64 i; // rcx
  unsigned __int64 v99; // rax
  struct _KPRCB *v100; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned int v105; // ecx
  unsigned int *v106; // rbx
  __int64 (__fastcall *v107)(); // rax
  __int64 v108; // rdi
  BOOL v109; // eax
  unsigned int v110; // ecx
  __int64 v112; // rbp
  _DWORD *v113; // rdi
  __int64 (__fastcall *v114)(); // rax
  __int64 v115; // rbx
  BOOL v116; // eax
  int v117; // esi
  char v118; // cl
  volatile signed __int64 *v119; // rsi
  struct _KPRCB *v120; // r8
  char v121; // al
  unsigned int v122; // ecx
  volatile __int64 *v123; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v124; // rcx
  __int64 v125; // rax
  unsigned __int64 v126; // rbx
  unsigned int v127; // ebp
  signed __int64 v128; // rax
  unsigned __int64 v129; // rbx
  int v130; // eax
  unsigned int v131; // edx
  unsigned __int64 v132; // rcx
  __int64 v133; // rcx
  _QWORD *v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // rcx
  __int64 v137; // rsi
  int v138; // eax
  volatile signed __int32 *v139; // rcx
  struct _KPRCB *v140; // rdx
  char v141; // al
  __int64 v142; // rcx
  volatile signed __int64 **v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rdx
  signed __int32 v146; // eax
  signed __int32 v147; // ett
  signed __int64 v148; // rdi
  signed __int64 v149; // rax
  unsigned __int64 v150; // rcx
  __int64 v151; // rcx
  int v152; // eax
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // rcx
  struct _KPRCB *v155; // rcx
  char v156; // al
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rax
  unsigned int v160; // r12d
  unsigned __int64 v161; // r15
  char v162; // bl
  unsigned __int32 v163; // r8d
  volatile signed __int32 *v164; // r15
  __int64 v165; // rcx
  signed __int32 v166; // eax
  int v167; // edx
  int v168; // eax
  signed __int32 v169; // edx
  signed __int32 v170; // eax
  int v171; // eax
  int v172; // eax
  int v173; // eax
  unsigned __int64 v174; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v175; // [rsp+38h] [rbp-90h]
  __int64 v176; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v177; // [rsp+48h] [rbp-80h]
  __int64 v178; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall *v179)(__int64, ULONG_PTR, int); // [rsp+58h] [rbp-70h]
  __int128 v180; // [rsp+60h] [rbp-68h]
  __int128 v181; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v184; // [rsp+D8h] [rbp+10h]
  int v186; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v4 = 0;
  v176 = *((_QWORD *)a1 + 4);
  v5 = (unsigned __int64 *)&a1[2 * a3 + 24];
  v6 = a2;
  v179 = (__int64 (__fastcall *)(__int64, ULONG_PTR, int))*((_QWORD *)a1 + 21);
  v7 = a1;
  v8 = 1;
  v178 = a3;
  v9 = a3;
  v175 = v5;
  if ( a2 < *v5 )
    v6 = *v5;
  v10 = 0xFFFFF68000000000uLL;
  v11 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  v177 = (unsigned __int64 *)&a1[2 * a3 + 32];
  v12 = 2LL;
  v13 = 0;
  v186 = 0;
  if ( v11 > *v177 )
    v11 = *v177;
  v174 = v11;
  while ( 2 )
  {
    v184 = 0;
    LeafPte = 0;
LABEL_7:
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    while ( 1 )
    {
      if ( v6 > v11 )
        goto LABEL_262;
      if ( !v13 )
        goto LABEL_10;
      v84 = v7[1];
      if ( (v84 & 2) != 0 )
      {
        if ( v3 != 3 )
          goto LABEL_262;
        v7[1] = v84 | 1;
        MiReacquireWalkLocks(v7, 0xFFFFF6FB7DBEDF68uLL, 1LL);
        v7[1] &= ~2u;
      }
      else
      {
        if ( LeafPte >= 4 )
          goto LABEL_262;
        if ( (v84 & 1) == 0 )
          goto LABEL_173;
        if ( v3 != 3 )
          goto LABEL_262;
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
      v11 = v174;
      v9 = 3LL;
      v10 = 0xFFFFF68000000000uLL;
LABEL_173:
      v186 = 0;
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
        v79 = (v34 >> 2) & 7;
        if ( v3 != v79 )
        {
          v80 = (unsigned int)(v3 - v79);
          do
          {
            v33 = v10 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
            --v80;
          }
          while ( v80 );
          v11 = v174;
        }
        if ( v6 < v33 )
          break;
      }
LABEL_11:
      v18 = *((_QWORD *)v7 + 10);
      if ( !v18 )
        goto LABEL_12;
      v85 = v6;
      v180 = 0LL;
      v181 = 0LL;
      if ( v3 )
      {
        if ( v17 != 3 )
          goto LABEL_12;
      }
      v86 = 4096LL;
      v87 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v88 = v3;
      if ( v3 )
      {
        do
        {
          v87 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v86 <<= 9;
          --v88;
        }
        while ( v88 );
        v11 = v174;
        v5 = v175;
      }
      if ( v6 == v87 )
      {
        *((_QWORD *)v7 + 10) = 0LL;
        v90 = v3;
      }
      else
      {
        if ( v6 > v87 )
        {
          *((_QWORD *)v7 + 10) = 0LL;
          goto LABEL_12;
        }
        if ( v87 <= v11 )
        {
          v85 = v87;
          if ( ((v86 - 1) & v18) == 0 )
            *((_QWORD *)v7 + 10) = 0LL;
        }
        else
        {
          v85 = v11 + 8;
          v18 = 0LL;
        }
        *v5 = v85;
        v89 = v85;
        v90 = v3;
        v91 = v3;
        if ( v3 )
        {
          v92 = (__int64 *)&v7[2 * v3 + 24];
          do
          {
            --v92;
            v89 = v89 << 25 >> 16;
            *v92 = v89;
            --v91;
          }
          while ( v91 );
        }
        if ( !v18 )
          goto LABEL_184;
      }
      *(_QWORD *)&v180 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v180 + 1) = (((unsigned __int64)v180 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v181 = ((*((_QWORD *)&v180 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v97 = v3;
      *((_QWORD *)&v181 + 1) = (((unsigned __int64)v181 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = v90; ; --i )
      {
        v99 = *((_QWORD *)&v180 + i);
        *(_QWORD *)&v7[2 * i + 24] = v99;
        if ( v97 != v3 )
          v99 = v85;
        v85 = v99;
        if ( !i )
          break;
        --v97;
      }
LABEL_184:
      if ( v6 != v85 )
      {
        v13 = v186;
        v6 = v85;
        v5 = v175;
        v9 = v3;
        goto LABEL_42;
      }
LABEL_12:
      v12 = ++*((_QWORD *)v7 + 20);
      v15 = *v7;
      if ( (v12 & 0xF) == 0 && (v15 & 8) != 0 )
      {
        v72 = *((_QWORD *)v7 + 11);
        v73 = *(_QWORD *)(v72 + 18688);
        if ( v73 < 0x420 )
        {
          v10 = 0LL;
          v74 = 0;
          v75 = *(_QWORD *)(v72 + 16) + 14944LL;
          while ( v74 < (unsigned __int16)KeNumberNodes )
          {
            v76 = 0LL;
            v77 = (_QWORD *)v75;
            while ( v76 <= 1 )
            {
              while ( (unsigned int)v10 < dword_140E2D98C )
              {
                v73 += *(unsigned __int16 *)(*v77 + 16LL * (unsigned int)v10);
                if ( v73 >= 0x420 )
                {
                  v3 = a3;
                  v4 = 0;
                  v8 = 1;
                  goto LABEL_13;
                }
                LODWORD(v10) = v10 + 1;
              }
              ++v76;
              ++v77;
              v10 = 0LL;
            }
            v75 += 57216LL;
            ++v74;
          }
          v3 = a3;
          LeafPte = 5;
          v184 = 5;
          v4 = 0;
          goto LABEL_262;
        }
      }
LABEL_13:
      if ( (v15 & 2) == 0 || ((unsigned __int8)v12 & (_BYTE)v7[2]) != 0 )
        goto LABEL_55;
      v19 = *((_QWORD *)v7 + 4);
      if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5 )
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) == 1 )
          v20 = (unsigned __int64 *)&unk_140E38500;
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
        goto LABEL_104;
      SchedulerAssist = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v95 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( !v95 )
        {
          v96 = 2LL;
          goto LABEL_197;
        }
        if ( v95 == 7 )
        {
          v53 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
        }
        else
        {
          v96 = 3LL;
          if ( v95 == 5 )
            v96 = 0LL;
LABEL_197:
          v53 = CurrentPrcb->SelfmapLockHandle[v96].LockQueue.Next == 0LL;
        }
LABEL_103:
        if ( !v53 )
          goto LABEL_22;
        goto LABEL_104;
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        && SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
        && SchedulerAssist <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v78 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
        if ( v78 )
        {
          SchedulerAssist = (((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
          v52 = (*(_DWORD *)(v78 + 4 * SchedulerAssist) >> 30) & 1;
LABEL_102:
          v53 = v52 == 0;
          goto LABEL_103;
        }
      }
      if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0
        || SchedulerAssist < 0xFFFFF6FB7DBED000uLL
        || SchedulerAssist > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v51 = *(_QWORD *)SchedulerAssist;
        if ( SchedulerAssist >= 0xFFFFF6FB7DBED000uLL
          && SchedulerAssist <= 0xFFFFF6FB7DBED7F8uLL
          && (v51 & 1) != 0
          && ((v51 & 0x42) == 0 || (v51 & 0x20) == 0)
          && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              SchedulerAssist = (SchedulerAssist >> 3) & 0x1FF;
              v103 = *(_QWORD *)(KernelWaitTime + 8 * SchedulerAssist);
              if ( (v103 & 0x20) != 0 )
                v51 |= 0x20uLL;
              v104 = v51;
              v51 |= 0x42uLL;
              if ( (v103 & 0x42) == 0 )
                v51 = v104;
            }
          }
        }
        v52 = (v51 >> 60) & 2;
        goto LABEL_102;
      }
      SchedulerAssist = (__int64)(SchedulerAssist + 0x90482413000LL) >> 3;
      if ( ((*(&MiState + ((unsigned __int64)(unsigned int)(2 * SchedulerAssist) >> 5) + 2459) >> ((2 * SchedulerAssist) & 0x1F)) & 2) != 0 )
        goto LABEL_22;
LABEL_104:
      if ( *((_BYTE *)v7 + 9) >= 2u )
        goto LABEL_55;
      v54 = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v19 = 0LL;
      DpcRequestSummary = v54->DpcRequestSummary;
      DpcWatchdogCount = v54->DpcWatchdogCount;
      DpcTimeCount = v54->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        SchedulerAssist = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_110;
        if ( v54->QuantumEnd )
          goto LABEL_212;
      }
      else
      {
        if ( !v54->NestingLevel )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v8 = 2;
            goto LABEL_212;
          }
          if ( v54->QuantumEnd )
          {
            v8 = 3;
            goto LABEL_212;
          }
          NextThread = v54->NextThread;
          if ( NextThread && NextThread != v54->CurrentThread )
          {
            v8 = 4;
            goto LABEL_212;
          }
LABEL_110:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_55;
          if ( !(_DWORD)SchedulerAssist )
            goto LABEL_228;
          goto LABEL_112;
        }
        v19 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_55;
        if ( v54->QuantumEnd )
        {
          v8 = 7;
          goto LABEL_212;
        }
      }
LABEL_112:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v8 = 5;
        goto LABEL_212;
      }
      if ( v54->CurrentThread != v54->IdleThread )
      {
        v8 = 6;
        goto LABEL_212;
      }
LABEL_228:
      _disable();
      v54->DpcWatchdogCount = 0;
      v54->DpcTimeCount = 0;
      v100 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int64)v100->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw((const void *)SchedulerAssist);
        v146 = *(_DWORD *)SchedulerAssist;
        do
        {
          v147 = v146;
          v146 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v146 & 0xFFDFFFFF, v146);
        }
        while ( v147 != v146 );
        if ( (v146 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v100);
      }
      _enable();
      v8 = 0;
LABEL_212:
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
              v171 = MiDeleteVaTail(v7, v27, SchedulerAssist, v19);
            else
              v171 = guard_dispatch_icall_no_overrides(v7, v27);
            v30 = v171;
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
            v153 = *((_QWORD *)v7 + 7);
            if ( v153 )
            {
              *v25 |= 2u;
              if ( (v31 & 0x1000) == 0 || v153 != 0xFFFFF6FB7DBEDF68uLL )
                MiUnlockPageTable(*((_QWORD *)v7 + 4), v153);
              *((_QWORD *)v7 + 7) = 0LL;
            }
          }
        }
        if ( v30 < 4 )
        {
LABEL_40:
          LeafPte = v184;
          v5 = v175;
          v9 = v3;
LABEL_41:
          v11 = v174;
          v8 = 1;
          v13 = 1;
          v186 = 1;
LABEL_42:
          v12 = 2LL;
          v10 = 0xFFFFF68000000000uLL;
          goto LABEL_7;
        }
LABEL_39:
        v184 = v30;
        goto LABEL_40;
      }
LABEL_55:
      if ( (*v7 & 0x20) != 0 )
        NextPageTablePte = MiGetNextPageTablePte(v7, v6, (unsigned int)v3, v17);
      else
        NextPageTablePte = MiComputePxeWalkAction(v7, v6, (unsigned int)v3, v17);
      v38 = NextPageTablePte;
      if ( NextPageTablePte == 4 )
      {
        v5 = v175;
        LeafPte = 4;
        v184 = 4;
        v9 = v3;
        v6 = *v175;
        goto LABEL_41;
      }
      if ( !NextPageTablePte )
      {
        v5 = v175;
        LeafPte = 0;
        v184 = 0;
        v9 = v3;
        v6 = *v175;
        goto LABEL_41;
      }
      v39 = v7[1];
      if ( (v39 & 1) != 0 )
      {
        LeafPte = v184;
        v5 = v175;
        v9 = v3;
        goto LABEL_41;
      }
      v40 = v7[1];
      if ( v3 >= 1
        && NextPageTablePte != 3
        && (v39 & 0x1C) != 0
        && MiWalkGetResumptionPxe(v7, (unsigned int)v3, v37) == v6
        && v93 - 1 < v3 )
      {
        v40 &= 0xFFFFFFE3;
        *((_QWORD *)v7 + 9) = 0LL;
        v7[1] = v40;
      }
      if ( v38 == 1 )
        goto LABEL_80;
      if ( v38 == 2 )
      {
        if ( !v3 && (*v7 & 1) == 0 && (*(_QWORD *)v6 & 1) != 0 )
        {
          v59 = ((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
          v60 = *(_QWORD *)v59;
          if ( v59 >= 0xFFFFF6FB7DBED000uLL && v59 <= 0xFFFFF6FB7DBED7F8uLL && (v60 & 1) != 0 )
          {
            LOBYTE(v36) = (v60 & 0x42) != 0;
            if ( ((unsigned __int8)v36 & ((v60 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
            {
              v36 = KeGetCurrentThread()->ApcState.Process;
              if ( v36->AddressPolicy != 1 )
              {
                v150 = v36[2].KernelWaitTime;
                if ( v150 )
                {
                  v59 = (v59 >> 3) & 0x1FF;
                  v151 = *(_QWORD *)(v150 + 8 * v59);
                  if ( (v151 & 0x20) != 0 )
                    v60 |= 0x20uLL;
                  v36 = (_KPROCESS *)v60;
                }
              }
            }
          }
          LOBYTE(v60) = HIBYTE(v60) & 0xF;
          if ( (HIBYTE(v60) & 0xF) == 0xA || (_BYTE)v60 == 9 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)v7 + 4) + 184LL) & 0xF) == 0 )
            {
              v61 = v6;
              if ( v6 >= 0xFFFFF68000000000uLL )
              {
                do
                {
                  if ( v61 > 0xFFFFF6FFFFFFFFFFuLL )
                    break;
                  v61 = (__int64)(v61 << 25) >> 16;
                }
                while ( v61 >= 0xFFFFF68000000000uLL );
                v7 = a1;
              }
              LeafVa = MiGetLeafVa(v6, v36, v59, v39);
              v63 = 0;
              MiLockVadTree(1LL);
              for ( k = MiLocateAddress(LeafVa); k; k = MiGetNextVad(k) )
              {
                v167 = *(_DWORD *)(k + 48);
                if ( (*(_BYTE *)(k + 48) & 0x70) != 0x30
                  && (v167 & 0x70) != 0x10
                  && ((v167 & 0x200000) == 0 || (v167 & 0x800000) == 0 && (v167 & 0x180000u) < 0x100000)
                  && (v167 & 0x70) != 0x50 )
                {
                  break;
                }
                ++v63;
                LeafVa = ((*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12) | 0xFFF;
                if ( !(_BYTE)v63 && MiPeriodicGoodCitizen((int *)v7, v6) )
                  break;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
              if ( v61 != LeafVa )
              {
                v65 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v66 = *v177;
                v67 = v65 + 8;
                if ( ((v6 ^ v65) & 0xFFFFFFFFF000LL) != 0 )
                {
                  v68 = v65 + 8;
                  if ( v67 >= 0xFFFFF68000000000uLL )
                  {
                    do
                    {
                      if ( v68 > 0xFFFFF6FFFFFFFFFFuLL )
                        break;
                      v68 = (__int64)(v68 << 25) >> 16;
                    }
                    while ( v68 >= 0xFFFFF68000000000uLL );
                    v4 = 0;
                  }
                  *((_QWORD *)v7 + 10) = v68;
                  v69 = (v6 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
                }
                else
                {
                  v69 = v65 + 8;
                }
                v9 = v178;
                v5 = v175;
                v70 = v178;
                *v175 = v69;
                if ( v178 )
                {
                  v71 = v175;
                  do
                  {
                    --v71;
                    v69 = v69 << 25 >> 16;
                    *v71 = v69;
                    --v70;
                  }
                  while ( v70 );
                }
                LeafPte = v184;
                v7[3] = 0;
                v6 = *v175;
                v3 = a3;
                if ( v67 > v66 )
                  LeafPte = 4;
                v184 = LeafPte;
                goto LABEL_41;
              }
              v3 = a3;
            }
LABEL_192:
            LeafPte = v184;
            goto LABEL_204;
          }
          if ( (_BYTE)v60 == 8 && (*v7 & 0x10000) == 0 )
            goto LABEL_192;
        }
      }
      else if ( v3 > (int)((v40 >> 6) & 7) )
      {
        v41 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
        v7[1] = v40 | 0x20;
        if ( v41 )
        {
          if ( v41 == MiAgeWorkingSetTail )
          {
            v42 = *((_QWORD *)v7 + 23);
            v43 = (*(_DWORD *)v42 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
            MiAgeTrimListsTail((_DWORD)v7, v42 + 56, 0, v43, (__int64)MiAgeWorkingSetVpabCallback);
            if ( (v7[1] & 0x20) != 0 )
              *(_BYTE *)(v42 + 6) = 1;
          }
          else
          {
            if ( v41 != MiUpdateOldWorkingSetPagesTail )
            {
              if ( (char *)v41 == (char *)MiDeleteVaTail )
                v44 = (unsigned int)MiDeleteVaTail(v7, v36, v37, v39);
              else
                v44 = (unsigned int)guard_dispatch_icall_no_overrides(v7, v36);
LABEL_73:
              v45 = v7[1] & 0xFFFFFFDF;
              v7[1] = v45;
              if ( (v45 & 1) != 0 )
              {
                if ( (int)v44 >= 4 )
                {
LABEL_75:
                  v46 = v184;
                  if ( (_DWORD)v44 == 5 )
                    v46 = 5;
                  v184 = v46;
                }
                LeafPte = v184;
                v5 = v175;
                v9 = v3;
                goto LABEL_41;
              }
              if ( (int)v44 >= 4 )
                goto LABEL_75;
              if ( (*v7 & 4) == 0 )
                goto LABEL_324;
              v119 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
              {
                v120 = KeGetCurrentPrcb();
                v121 = *(_DWORD *)(v176 + 184) & 0xF;
                if ( v121 )
                {
                  if ( v121 == 7 )
                  {
                    v122 = 1;
                  }
                  else
                  {
                    v122 = 3;
                    if ( v121 == 5 )
                      v122 = 0;
                  }
                  v123 = (volatile __int64 *)(&MiState + 2 * v122 + 3232);
                }
                else
                {
                  v122 = 2;
                  v123 = (volatile __int64 *)(v176 + 176);
                }
                v124 = &v120->SelfmapLockHandle[0].LockQueue.Next + 2 * v122 + v122;
                *((_QWORD *)v124 + 1) = v123;
                *v124 = 0LL;
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                {
                  v125 = _InterlockedExchange64(v123, (__int64)v124);
                  if ( v125 )
                    KxWaitForLockOwnerShip(v124, v125, v120, 0xFFFFF6FB7DBEDF68uLL);
                }
                else
                {
                  KiAcquireQueuedSpinLockInstrumented(v124, v123);
                }
              }
              else if ( (*(_DWORD *)(v176 + 184) & 0xF) == 0
                     && v6 >= 0xFFFFF6FB7DBED000uLL
                     && v6 <= 0xFFFFF6FB7DBEDFFFuLL
                     && (v44 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v44 + 4LL * (((unsigned int)v6 >> 3) & 0x1FF)));
              }
              else
              {
                if ( (*(_DWORD *)(v176 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  v160 = 0;
                  v161 = (unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5;
                  v162 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                  v163 = *(&MiState + v161 + 2459);
                  v164 = (volatile signed __int32 *)(&MiState + v161 + 2459);
                  do
                  {
                    while ( 1 )
                    {
                      v165 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                      if ( ((v163 >> v162) & 1) == 0 )
                        break;
                      if ( ((v163 >> v162) & 2) != 0 )
                      {
                        do
                        {
                          if ( (++v160 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v165) )
                          {
                            HvlNotifyLongSpinWait(v160);
                          }
                          else
                          {
                            _mm_pause();
                          }
                          v163 = *v164;
                          v165 = (2 * (unsigned __int8)((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
                        }
                        while ( (((unsigned __int32)*v164 >> v162) & 1) != 0 );
                      }
                      else
                      {
                        v169 = v163 | (2 << v165);
                        v170 = _InterlockedCompareExchange(v164, v169, v163);
                        v53 = v163 == v170;
                        v163 = v170;
                        if ( v53 )
                          v163 = v169;
                      }
                    }
                    v166 = _InterlockedCompareExchange(v164, ~(2 << v162) & (v163 | (1 << v162)), v163);
                    v53 = v163 == v166;
                    v163 = v166;
                  }
                  while ( !v53 );
                }
                else
                {
                  v126 = *(_QWORD *)v6;
                  v127 = 0;
                  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (v126 & 1) != 0 )
                  {
                    LOBYTE(v44) = (v126 & 0x42) != 0;
                    if ( ((unsigned __int8)v44 & ((v126 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
                    {
                      v44 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
                      if ( *(_BYTE *)(v44 + 352) != 1 )
                      {
                        v158 = *(_QWORD *)(v44 + 1288);
                        if ( v158 )
                        {
                          v159 = *(_QWORD *)(v158 + 8 * ((v6 >> 3) & 0x1FF));
                          if ( (v159 & 0x20) != 0 )
                            v126 |= 0x20uLL;
                          v44 = v126;
                          v126 |= 0x42uLL;
                          if ( (v159 & 0x42) == 0 )
                            v126 = v44;
                        }
                      }
                    }
                  }
                  while ( (v126 & 1) != 0 )
                  {
                    if ( (v126 & 0x1000000000000000LL) != 0 )
                    {
                      if ( ((v126 >> 60) & 2) != 0 )
                      {
                        do
                        {
                          if ( (++v127 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
                          {
                            HvlNotifyLongSpinWait(v127);
                          }
                          else
                          {
                            _mm_pause();
                          }
                          v126 = *(_QWORD *)v6;
                        }
                        while ( (*(_QWORD *)v6 & 0x1000000000000000LL) != 0 );
                      }
                      else
                      {
                        v148 = v126 | 0x2000000000000000LL;
                        if ( (MiFlags & 0x2000000) != 0 )
                          _mm_lfence();
                        if ( _bittest64(&MiFlags, 0x24u) )
                        {
                          if ( (v126 & 0x21) == 1 )
                          {
                            v44 = 0x4000000000LL;
                            if ( v6 >= 0xFFFFF6C000000000uLL )
                              MiCheckLinearProtectedPteAccessedBit(v6, v126 | 0x2000000000000000LL);
                          }
                        }
                        v149 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v148, v126);
                        v53 = v126 == v149;
                        v126 = v149;
                        if ( v53 )
                          v126 = v148;
                      }
                    }
                    else
                    {
                      v44 = v126 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      v128 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v44, v126);
                      v53 = v126 == v128;
                      v126 = v128;
                      if ( v53 )
                        break;
                    }
                  }
                  v119 = (volatile signed __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                  v7 = a1;
                }
                v3 = a3;
              }
              if ( (*v7 & 0x1000) != 0 )
              {
                if ( v119 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
                {
LABEL_323:
                  *((_QWORD *)v7 + 7) = v6;
LABEL_324:
                  v129 = v6 << 25;
                  v130 = MiWalkPageTablesRecursively(v7, (__int64)(v6 << 25) >> 16, (unsigned int)(v3 - 1));
                  v131 = v7[1];
                  LeafPte = v130;
                  v184 = v130;
                  if ( (v131 & 3) != 0 )
                  {
                    if ( (v131 & 0x1C) == 0
                      && *(_QWORD *)&v7[2 * v3 + 22] >= (unsigned __int64)((__int64)(v129 + 0x10000000) >> 16)
                      && v3 )
                    {
                      *((_QWORD *)v7 + 9) = v6;
                      v7[1] = v131 ^ ((unsigned __int8)v131 ^ (unsigned __int8)(4 * v3)) & 0x1C;
                    }
                    v4 = 0;
                    goto LABEL_340;
                  }
                  if ( v130 >= 4 )
                  {
                    v10 = 0xFFFFF68000000000uLL;
                    v132 = *(_QWORD *)&v7[2 * v3 + 22];
                    if ( v132 < (__int64)(v129 + 0x10000000) >> 16 )
                    {
                      v9 = v3;
                    }
                    else
                    {
                      v6 = ((v132 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      v9 = v3;
                      v133 = v3;
                      *v175 = v6;
                      if ( v3 )
                      {
                        v134 = v175;
                        v135 = v6;
                        do
                        {
                          --v134;
                          v135 = v135 << 25 >> 16;
                          *v134 = v135;
                          --v133;
                        }
                        while ( v133 );
                      }
                    }
                    v11 = v174;
                    v8 = 1;
                    v5 = (unsigned __int64 *)&v7[2 * v9 + 24];
                    v13 = 1;
                    v186 = 1;
                    v4 = 0;
                    v12 = 2LL;
                    goto LABEL_7;
                  }
                  if ( (*v7 & 4) != 0 )
                  {
                    v168 = MiReacquireHigherPageTableLock(v7, v6, (unsigned int)v3);
                    if ( v168 )
                    {
                      v4 = 0;
                      LeafPte = 0;
                      if ( v168 != 2 )
                        LeafPte = v168;
                      v184 = LeafPte;
LABEL_340:
                      v11 = v174;
                      v8 = 1;
                      v5 = v175;
                      v13 = 1;
                      v186 = 1;
                      v9 = v3;
                      v12 = 2LL;
                      v10 = 0xFFFFF68000000000uLL;
                      goto LABEL_7;
                    }
                  }
                  goto LABEL_200;
                }
              }
              else if ( v119 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
              {
                v140 = KeGetCurrentPrcb();
                v141 = *(_DWORD *)(v176 + 184) & 0xF;
                if ( v141 )
                {
                  if ( v141 == 7 )
                  {
                    v142 = 1LL;
                  }
                  else
                  {
                    v142 = 3LL;
                    if ( v141 == 5 )
                      v142 = 0LL;
                  }
                }
                else
                {
                  v142 = 2LL;
                }
                v143 = (volatile signed __int64 **)&v140->SelfmapLockHandle[v142];
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
                {
                  KiReleaseQueuedSpinLockInstrumented(v143, retaddr);
                  goto LABEL_323;
                }
                _m_prefetchw(v143);
                v144 = (__int64)*v143;
                if ( !*v143 )
                {
                  if ( v143 == (volatile signed __int64 **)_InterlockedCompareExchange64(
                                                             v143[1],
                                                             0LL,
                                                             (signed __int64)v143) )
                    goto LABEL_323;
                  v144 = KxWaitForLockChainValid((__int64 *)v143);
                }
                *v143 = 0LL;
                v145 = (__int64)v143[1];
                if ( (((unsigned __int8)v145 ^ (unsigned __int8)_InterlockedExchange64(
                                                                  (volatile __int64 *)(v144 + 8),
                                                                  v145)) & 4) != 0 )
                  KeWakeAddressAll(v144 + 8, v145);
                goto LABEL_323;
              }
              if ( (*(_DWORD *)(v176 + 184) & 0xF) != 0
                || (unsigned __int64)v119 < 0xFFFFF6FB7DBED000uLL
                || (unsigned __int64)v119 > 0xFFFFF6FB7DBEDFFFuLL
                || (v136 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
              {
                if ( (*(_DWORD *)(v176 + 184) & 0xF) != 0
                  && (unsigned __int64)v119 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)v119 <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)&MiState
                  + ((unsigned __int64)(2 * (unsigned int)((__int64)(v119 + 0x12090482600LL) >> 3)) >> 5)
                  + 2459,
                    ~(3 << ((2 * ((__int64)(v119 + 0x12090482600LL) >> 3)) & 0x1F)));
                }
                else
                {
                  _InterlockedAnd64(v119, 0xCFFFFFFFFFFFFFFFuLL);
                }
              }
              else
              {
                v137 = ((unsigned int)v119 >> 3) & 0x1FF;
                v138 = *(_DWORD *)(v136 + 4 * v137);
                v139 = (volatile signed __int32 *)(v136 + 4 * v137);
                if ( (v138 & 0x3FFFFFFF) != 0 )
                {
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                  {
                    _InterlockedAnd(v139, 0xBFFFFFFF);
                    _InterlockedDecrement(v139);
                  }
                  else
                  {
                    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v139, retaddr, v176);
                  }
                }
                else
                {
                  if ( v138 >= 0 )
                    KeBugCheckEx(0x10u, (ULONG_PTR)v139, 0x100uLL, 0LL, 0LL);
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                    *v139 = 0;
                  else
                    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v139, retaddr);
                }
              }
              goto LABEL_323;
            }
            MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
          }
        }
        v44 = 0LL;
        goto LABEL_73;
      }
LABEL_200:
      if ( (*v7 & 0x40) != 0 || v3 >= 1 && (*v7 & 1) == 0 && (*(_DWORD *)(v176 + 184) & 0xF) != 0 )
      {
        v4 = 0;
LABEL_80:
        v184 = 0;
        LeafPte = 0;
LABEL_81:
        v5 = v175;
        v9 = v3;
        v47 = v3;
        v6 += 8LL * (v7[3] + 1);
        *v175 = v6;
        if ( v3 )
        {
          v48 = v175;
          v49 = v6;
          do
          {
            --v48;
            v49 = v49 << 25 >> 16;
            *v48 = v49;
            --v47;
          }
          while ( v47 );
        }
        v7[3] = 0;
LABEL_85:
        v13 = v186;
        goto LABEL_86;
      }
      if ( (char *)v179 == (char *)MiQueryLeafPte )
      {
        LeafPte = MiQueryLeafPte(v7, v6, (unsigned int)v3);
        v184 = LeafPte;
      }
      else if ( (char *)v179 == (char *)MiAgePte )
      {
        LeafPte = MiAgePte((__int64)v7, v6, v3);
        v184 = LeafPte;
      }
      else
      {
        if ( v179 == MiOutSwapWorkingSetPte )
          v152 = MiOutSwapWorkingSetPte((__int64)v7, v6, v3);
        else
          v152 = guard_dispatch_icall_no_overrides(v7, v6);
        LeafPte = v152;
        v184 = v152;
      }
LABEL_204:
      v4 = 0;
      if ( LeafPte == 2 )
      {
        v5 = v175;
        LeafPte = 0;
        v184 = 0;
        v9 = v3;
        goto LABEL_85;
      }
      if ( LeafPte != 3 )
        goto LABEL_81;
      v184 = 0;
      LeafPte = 0;
      MiYieldPageTableWalk(v7, 1LL);
      MiWaitForFreePage(*((_QWORD *)v7 + 11), 0LL);
      v5 = v175;
      v13 = 1;
      v186 = 1;
      v9 = v3;
LABEL_86:
      if ( (v7[1] & 1) == 0 )
      {
        v11 = v174;
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
    v82 = v9;
    if ( v9 )
    {
      v83 = v5;
      do
      {
        --v83;
        ResumptionPxe = (__int64)((ResumptionPxe << 25) - (v10 << 25)) >> 16;
        *v83 = ResumptionPxe;
        --v82;
      }
      while ( v82 );
    }
    v13 = v186;
    v12 = 2LL;
    v15 = 0xFFFFF6FB7DBEDF68uLL;
    if ( v6 <= v11 )
      continue;
    break;
  }
LABEL_262:
  v105 = v7[1];
  v106 = v7 + 1;
  if ( v3 != 3 )
  {
    if ( (v105 & 1) == 0 )
    {
      v107 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
      *v106 = v105 | 0x20;
      if ( v107 )
      {
        if ( v107 == MiAgeWorkingSetTail )
        {
          v108 = *((_QWORD *)v7 + 23);
          v109 = 1;
          if ( (*(_DWORD *)v108 & 3) == 0 )
          {
            v106 = v7 + 1;
            if ( *((__int64 (__fastcall **)())v7 + 21) != MiSimpleAgePte )
              v109 = 0;
          }
          MiAgeTrimListsTail((_DWORD)v7, v108 + 56, 0, v109, (__int64)MiAgeWorkingSetVpabCallback);
          if ( (*v106 & 0x20) != 0 )
            *(_BYTE *)(v108 + 6) = 1;
        }
        else if ( v107 == MiUpdateOldWorkingSetPagesTail )
        {
          MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
        }
        else
        {
          if ( (char *)v107 == (char *)MiDeleteVaTail )
            v172 = MiDeleteVaTail(v7, v15, v12, v10);
          else
            v172 = guard_dispatch_icall_no_overrides(v7, v15);
          v4 = v172;
        }
        v106 = v7 + 1;
      }
      v110 = *v106 & 0xFFFFFFDF;
      *v106 = v110;
      if ( ((v110 & 1) != 0 || v4 >= 4) && v4 == 5 )
        return 5;
    }
    return (unsigned int)LeafPte;
  }
  v112 = *((_QWORD *)v7 + 4);
  v113 = v7 + 1;
  if ( (v105 & 1) == 0 && ((*v7 & 0x40) == 0 || LeafPte != 4) )
  {
    v114 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 22);
    *v106 = v105 | 0x20;
    if ( v114 )
    {
      if ( v114 == MiAgeWorkingSetTail )
      {
        v115 = *((_QWORD *)v7 + 23);
        v116 = (*(_DWORD *)v115 & 3) != 0 || *((__int64 (__fastcall **)())v7 + 21) == MiSimpleAgePte;
        MiAgeTrimListsTail((_DWORD)v7, v115 + 56, 0, v116, (__int64)MiAgeWorkingSetVpabCallback);
        if ( (v7[1] & 0x20) != 0 )
          *(_BYTE *)(v115 + 6) = 1;
        v117 = 0;
      }
      else if ( v114 == MiUpdateOldWorkingSetPagesTail )
      {
        MiAgeTrimListsTail((_DWORD)v7, v7[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
        v117 = 0;
      }
      else
      {
        if ( (char *)v114 == (char *)MiDeleteVaTail )
          v173 = MiDeleteVaTail(v7, v15, v12, v10);
        else
          v173 = guard_dispatch_icall_no_overrides(v7, v15);
        v117 = v173;
      }
      v113 = v7 + 1;
    }
    else
    {
      v117 = 0;
      v113 = v7 + 1;
    }
    *v113 &= ~0x20u;
    v15 = *((_QWORD *)v7 + 7);
    if ( !v15 )
      goto LABEL_290;
    if ( (*v7 & 0x1000) != 0 )
    {
      if ( v15 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_289;
    }
    else if ( v15 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v155 = KeGetCurrentPrcb();
      v156 = *(_DWORD *)(v112 + 184) & 0xF;
      if ( v156 )
      {
        if ( v156 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v155->SelfmapLockHandle[1]);
          goto LABEL_289;
        }
        v157 = 3LL;
        if ( v156 == 5 )
          v157 = 0LL;
      }
      else
      {
        v157 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v155->SelfmapLockHandle[v157]);
LABEL_289:
      *((_QWORD *)v7 + 7) = 0LL;
      v113 = v7 + 1;
LABEL_290:
      v53 = v117 == 5;
      LeafPte = 5;
      if ( !v53 )
        LeafPte = v184;
      goto LABEL_292;
    }
    if ( (*(_DWORD *)(v112 + 184) & 0xF) != 0
      || v15 < 0xFFFFF6FB7DBED000uLL
      || v15 > 0xFFFFF6FB7DBEDFFFuLL
      || (v154 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v112 + 184) & 0xF) != 0 && v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBEDFFFuLL )
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
      ExReleaseSpinLockRegardlessFromDpcLevel(v154 + 4 * ((v15 >> 3) & 0x1FF));
    }
    goto LABEL_289;
  }
LABEL_292:
  if ( (*v113 & 1) != 0 )
  {
    v118 = *((_BYTE *)v7 + 9);
    if ( (*v7 & 4) != 0 )
    {
      if ( v118 == 17 )
        MiLockWorkingSetSharedAtDpc(v112);
      else
        MiLockWorkingSetShared(v112);
      *v113 &= ~1u;
    }
    else
    {
      if ( v118 == 17 )
        MiLockWorkingSetExclusiveAtDpc(v112, v15, v12, v10);
      else
        MiLockWorkingSetExclusive(v112);
      *v113 &= ~1u;
    }
  }
  return (unsigned int)LeafPte;
}
