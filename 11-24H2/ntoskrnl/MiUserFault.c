/*
 * XREFs of MiUserFault @ 0x1402FD560
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCanFlushMakeProgress @ 0x1402D0318 (MiCanFlushMakeProgress.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403E932C (MiCheckHoldFaultForHotPatch.c)
 *     MiCheckFatalAccessViolation @ 0x1403F37E0 (MiCheckFatalAccessViolation.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     MiAllowGuardFault @ 0x140465770 (MiAllowGuardFault.c)
 *     MiDelayFaultingThread @ 0x14048F028 (MiDelayFaultingThread.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F9FF8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckForUserStackOverflow @ 0x140A27F74 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(unsigned __int64 *a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // r12
  struct _LIST_ENTRY *v4; // r13
  unsigned int v6; // ebx
  _KPROCESS *Process; // rsi
  __int64 v8; // r11
  int v9; // edi
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r10
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rax
  unsigned int v14; // ebx
  _KSCHEDULING_GROUP_POLICY *v15; // rdi
  unsigned __int8 v16; // r14
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl
  _KPROCESS *v19; // rcx
  unsigned int *p_FreezeCount; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  _KPROCESS *v23; // rbx
  _KAB_UM_PROCESS_TREE *Trees; // rcx
  int v25; // eax
  unsigned int valid; // ebx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  struct _LIST_ENTRY *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rbx
  unsigned int v40; // eax
  char v41; // bl
  unsigned int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rbx
  char v46; // r13
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  _KPROCESS *v50; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdi
  unsigned __int8 v55; // dl
  __int64 v56; // rbx
  _KPROCESS *v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // r12
  __int64 *v63; // r14
  __int64 *v64; // rdi
  __int64 v65; // r11
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  struct _LIST_ENTRY *Address; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  unsigned __int64 v74; // [rsp+20h] [rbp-28h]
  char v75; // [rsp+90h] [rbp+48h] BYREF
  int v76; // [rsp+98h] [rbp+50h] BYREF
  int v77; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v78; // [rsp+A8h] [rbp+60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (__int64)(a1 + 7);
  v4 = 0LL;
  v76 = 0;
  v6 = 0;
  Process = CurrentThread->ApcState.Process;
  a1[7] = (unsigned __int64)&Process[2].ReadyListHead.Blink;
  v78 = 0LL;
  if ( dword_140E37318 )
  {
    v6 = 10;
LABEL_124:
    MiDelayFaultingThread(v6);
    goto LABEL_19;
  }
  if ( LODWORD(Process[2].AvailableCpuState) > 0x10 && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
  {
    a2 = *((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
    if ( *(_DWORD *)(a2 + 1204) == -1 || *(_KPROCESS **)(a2 + 1696) != Process )
    {
      v8 = *((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        goto LABEL_168;
      v61 = *(_QWORD *)(v8 + 16) + 57216LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      a2 = *(_QWORD *)(v61 + 3848) + *(_QWORD *)(v61 + 3856);
      v74 = a2;
      if ( a2 < 0x420 )
      {
        v62 = 0LL;
        v63 = MiPageSizes;
        v64 = (__int64 *)(v61 + 16);
        v65 = 3LL;
        do
        {
          v66 = *(v64 - 1);
          v67 = *v64;
          v64 += 160;
          v68 = *v63++;
          a2 = v68 * (v66 + v67);
          v62 += a2;
          --v65;
        }
        while ( v65 );
        v8 = *((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
        v69 = v62 + v74;
        v3 = (__int64)(a1 + 7);
        if ( v69 < 0x420 )
        {
LABEL_168:
          a2 = *(_QWORD *)(v8 + 18688);
          if ( a2 < 0x420 )
          {
            v9 = 0;
            if ( (unsigned __int8)MiGetCurrentSlabIdentity(CurrentThread) != 0xFF )
            {
              a2 += *(_QWORD *)(v11 + 18304);
              if ( a2 >= v10 )
                goto LABEL_19;
              v9 = 2;
            }
            v12 = v10 - a2;
            if ( *(_QWORD *)(v11 + 19392) >= v12 && (unsigned int)MiCanFlushMakeProgress(v11, 0, v12) )
            {
              LODWORD(Process[2].AvailableCpuState) = 0;
              if ( Process->BasePriority >= 9 || Process[3].ProcessListEntry.Blink )
                v6 = 65566;
              else
                v6 = 66036;
              if ( v9 )
                v6 |= 0x20000u;
            }
            if ( (_WORD)v6 )
              goto LABEL_124;
          }
        }
      }
    }
  }
LABEL_19:
  if ( (Process[2].ContextSwitches & 0xF) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
  }
  else
  {
    if ( (Process[2].ContextSwitches & 0xF) == 1 )
      p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38740;
    else
      p_SchedulingGroup = &Process[2].SchedulingGroup;
    v14 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v15 = &(*p_SchedulingGroup)->Policy + 8 * (unsigned __int64)v14;
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v16, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v15);
      v48 = v15->Value & 0x7FFFFFFF;
      while ( 1 )
      {
        v49 = v48;
        v48 = _InterlockedCompareExchange((volatile signed __int32 *)v15, v48 + 1, v48);
        if ( v49 == v48 )
          break;
        if ( v48 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v15, v16);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15, v16);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v14;
    CurrentIrql = v16;
  }
  *(_BYTE *)(v3 + 12) = CurrentIrql;
  v19 = KeGetCurrentThread()->ApcState.Process;
  if ( (v19[2].ContextSwitches & 0xF) == 1 )
    p_FreezeCount = (unsigned int *)&unk_140E38760;
  else
    p_FreezeCount = &v19[2].FreezeCount;
  v21 = 0xFFFF800000000000uLL;
  if ( (HIBYTE(LODWORD(v19[2].ContextSwitches)) & 0x30) == 0x30
    && *(_QWORD *)p_FreezeCount
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1, (__int64)p_FreezeCount, 0xFFFF800000000000uLL);
    Address = MiLocateAddress((unsigned __int64)a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      MiUnlockVadTree(1, 0x11u);
      valid = -1073741819;
      goto LABEL_86;
    }
    MiUnlockVadTree(1, 0x11u);
    v21 = 0xFFFF800000000000uLL;
  }
  v22 = *a1;
  if ( *a1 < 0xFFFF800000000000uLL && v22 > 0x7FFFFFFEFFFFLL )
  {
    valid = -1073741819;
    goto LABEL_86;
  }
  v23 = KeGetCurrentThread()->ApcState.Process;
  if ( v23[1].ActiveGroupsMask.Masks[1] && (unsigned int)MiWaitForRotateToComplete(v22, v3, 0xFFFF800000000000uLL)
    || (Trees = v23[4].AutoBoostState.Trees) != 0LL && (unsigned int)MiCheckHoldFaultForHotPatch(Trees, a1, v21)
    || (v25 = MiResolvePageTablePage((__int64)a1), valid = v25, v25 == -1073740748) )
  {
    valid = 0;
  }
  else if ( v25 >= 0 )
  {
    v27 = a1[3];
    v28 = *(_QWORD *)v27;
    if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v28 & 1) == 0 )
        goto LABEL_43;
      if ( ((v28 & 0x42) == 0 || (v28 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v50 = KeGetCurrentThread()->ApcState.Process;
        if ( v50->AddressPolicy != 1 )
        {
          KernelWaitTime = v50[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v52 = *(_QWORD *)(KernelWaitTime + 8 * ((v27 >> 3) & 0x1FF));
            if ( (v52 & 0x20) != 0 )
              v28 |= 0x20uLL;
            v53 = v28;
            v28 |= 0x42uLL;
            if ( (v52 & 0x42) == 0 )
              v28 = v53;
          }
        }
      }
    }
    if ( (v28 & 1) != 0 )
    {
      valid = MiValidFault(a1, v28);
      goto LABEL_86;
    }
LABEL_43:
    v29 = a1[1];
    if ( (v29 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
      a1[1] = v29 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( !v28 )
    {
      v75 = 0;
      v40 = MiZeroFault(a1, &v75, &v76, &v78);
      v41 = v75;
      v42 = v40;
      if ( v75 )
      {
        MiReleaseFaultState(v3, 0x11u, 0LL);
        if ( v41 == 2 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
        return v42;
      }
      LODWORD(v30) = v76;
      goto LABEL_59;
    }
    v30 = (v28 >> 5) & 0x1F;
    v76 = (v28 >> 5) & 0x1F;
    if ( (v28 & 0x400) == 0 )
      goto LABEL_59;
    v31 = MI_READ_PTE_LOCK_FREE(v27);
    v33 = (v31 >> 5) & 0x1F;
    if ( (v31 & 0x400) == 0 )
      goto LABEL_92;
    v34 = v31;
    if ( qword_140E2DB80 )
    {
      if ( (v31 & 0x10) != 0 )
        v34 = v31 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v34 = v31 & ~qword_140E2DB80;
    }
    if ( HIDWORD(v34) == 0xFFFFFFFF )
    {
      v77 = 0;
      v35 = (__int64)(v27 << 25) >> 16;
      if ( v35 > 0x7FFFFFFEFFFFLL )
      {
        if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v77 = 4;
          goto LABEL_114;
        }
LABEL_113:
        v77 = 24;
LABEL_114:
        valid = -1073741819;
        goto LABEL_86;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
      {
LABEL_55:
        MiLockVadTree(1, 0xFFFFFFFFLL, v32);
        v37 = MiLocateAddress((__int64)(v27 << 25) >> 16);
        if ( v37 )
        {
          v39 = MiCheckUserVirtualAddress((__int64)(v27 << 25) >> 16, v37, v38, &v77);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          goto LABEL_97;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
        goto LABEL_113;
      }
      v36 = v35 & 0x7FFFFFFFF000LL;
      if ( (v35 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 )
      {
        if ( v36 == qword_140E2DA78 && v36 )
        {
          v39 = qword_140E2DA70;
          v77 = 1;
          goto LABEL_97;
        }
        goto LABEL_55;
      }
      v39 = qword_140E2DA68;
      v77 = 1;
    }
    else
    {
LABEL_92:
      v56 = v31;
      if ( qword_140E2DB80 )
      {
        if ( (v31 & 0x10) != 0 )
          v56 = v31 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v56 = v31 & ~qword_140E2DB80;
      }
      v39 = v56 >> 16;
      LODWORD(v33) = 256;
      if ( (v31 & 8) != 0 )
        LODWORD(v33) = 1;
    }
LABEL_97:
    v78 = v39;
    LODWORD(v30) = v33;
    v76 = v33;
    if ( !v39 )
      goto LABEL_114;
LABEL_59:
    if ( (_DWORD)v30 == 256 )
    {
LABEL_68:
      a1[13] = v78;
      return 3221225494LL;
    }
    v43 = a1[1] & 2;
    v44 = a1[2];
    if ( (a1[10] & 0x100) != 0 && (v27 > 0xFFFFF6BFFFFFFF78uLL || v27 < 0xFFFFF68000000000uLL) )
      goto LABEL_143;
    v45 = *(_QWORD *)v27;
    if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v45 & 1) == 0 )
        goto LABEL_66;
      if ( (v45 & 0x42) == 0 || (v45 & 0x20) == 0 )
      {
        v57 = MiPteHasShadow();
        if ( v57 )
        {
          v58 = v57[2].KernelWaitTime;
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 8 * ((v27 >> 3) & 0x1FF));
            if ( (v59 & 0x20) != 0 )
              v45 |= 0x20uLL;
            v60 = v45;
            v45 |= 0x42uLL;
            if ( (v59 & 0x42) == 0 )
              v45 = v60;
          }
        }
      }
    }
    if ( (v45 & 1) != 0 )
    {
      if ( !v43 || (v45 & 0xA00) != 0 )
        goto LABEL_68;
      goto LABEL_143;
    }
LABEL_66:
    v46 = v76;
    v43 = v43 != 0;
    if ( *((char *)MiReadWrite + (v76 & 7)) - (int)v43 >= 10 )
    {
      if ( (v76 & 0xFFFFFFF8) != 0x10 || (v44 & 1) != 0 && *(_BYTE *)(v44 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        goto LABEL_68;
      if ( (unsigned int)MiAllowGuardFault(v44) )
      {
        if ( (v45 & 0xC00) == 0x800 )
        {
          v72 = MiLockTransitionLeafPageEx(v27);
          v73 = MI_READ_PTE_LOCK_FREE(v27);
          if ( v72 )
          {
            v46 = v76;
            *(_QWORD *)(v72 + 16) = *(_QWORD *)(v72 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v76 & 0xF));
          }
          *(_QWORD *)v27 = v73 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v46 & 0xF));
          if ( v72 )
            _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          *(_QWORD *)v27 = v45 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v46 & 0xF));
        }
        valid = -2147483647;
        v70 = MI_READ_PTE_LOCK_FREE(v27);
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v70) )
        {
          MiResolveDemandZeroFault((__int64)a1, v27, 0LL, a1[1] & 2);
          MiReleaseFaultState(v3, 0x11u, 0LL);
          return MiCheckForUserStackOverflow(*a1, 0LL);
        }
LABEL_146:
        MiReleaseFaultState(v3, 0x11u, 0LL);
        if ( valid != -2147483647 )
          return valid;
        return MiCheckForUserStackOverflow(*a1, 0LL);
      }
    }
    v4 = 0LL;
LABEL_143:
    valid = -1073741819;
    if ( *a1 < 0xFFFF800000000000uLL )
    {
      MiLockVadTree(1, v43, v44);
      v4 = MiLocateAddress(*a1);
      MiUnlockVadTree(1, 0x11u);
    }
    MiCheckFatalAccessViolation(*a1);
    a1[11] = (unsigned __int64)v4;
    goto LABEL_146;
  }
LABEL_86:
  v54 = *(_QWORD *)v3;
  MiUnlockFaultPageTable((__int64 *)v3);
  v55 = *(_BYTE *)(v3 + 12);
  if ( (*(_BYTE *)(v3 + 13) & 1) == 0 )
  {
    MiUnlockWorkingSetShared(v54, v55);
    return valid;
  }
  MiUnlockWorkingSetExclusive(v54, v55);
  return valid;
}
