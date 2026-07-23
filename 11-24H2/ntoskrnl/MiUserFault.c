/*
 * XREFs of MiUserFault @ 0x140307CE0
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 *     MiCanFlushMakeProgress @ 0x140261320 (MiCanFlushMakeProgress.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiCheckFatalAccessViolation @ 0x140393220 (MiCheckFatalAccessViolation.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403D6FD8 (MiCheckHoldFaultForHotPatch.c)
 *     MiAllowGuardFault @ 0x14045D6F0 (MiAllowGuardFault.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F78D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckForUserStackOverflow @ 0x140A1C9F4 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(ULONG_PTR *a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r9
  ULONG_PTR *v3; // r12
  __int64 v4; // r13
  unsigned int v6; // ebx
  __int64 v7; // r8
  _KPROCESS *Process; // rsi
  __int64 v9; // r11
  int v10; // edi
  unsigned __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // r10
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rax
  unsigned int v15; // ebx
  _KSCHEDULING_GROUP_POLICY *v16; // rdi
  unsigned __int8 v17; // r14
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl
  _KPROCESS *v20; // rcx
  unsigned int *p_FreezeCount; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  _KPROCESS *v24; // rbx
  _KAB_UM_PROCESS_TREE *Trees; // rcx
  int v26; // eax
  unsigned int valid; // ebx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  ULONG_PTR v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rbx
  unsigned int v42; // eax
  char v43; // bl
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rbx
  char v48; // r13
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  _KPROCESS *v52; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rdi
  unsigned __int8 v57; // dl
  __int64 v58; // rbx
  _KPROCESS *v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 *v65; // r14
  __int64 *v66; // rdi
  __int64 v67; // r11
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 Address; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  unsigned __int64 v75; // [rsp+20h] [rbp-28h]
  char v76; // [rsp+90h] [rbp+48h] BYREF
  int v77; // [rsp+98h] [rbp+50h] BYREF
  int v78; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v79; // [rsp+A8h] [rbp+60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 7;
  v4 = 0LL;
  v77 = 0;
  v6 = 0;
  v7 = 0xFFFFFFFFLL;
  Process = CurrentThread->ApcState.Process;
  a1[7] = (ULONG_PTR)&Process[2].ReadyListHead.Blink;
  v79 = 0LL;
  if ( dword_140E37458 )
  {
    v6 = 10;
LABEL_125:
    MiDelayFaultingThread(v6);
    goto LABEL_19;
  }
  if ( LODWORD(Process[2].AvailableCpuState) > 0x10 && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
  {
    a2 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
    if ( *(_DWORD *)(a2 + 1204) == -1 || *(_KPROCESS **)(a2 + 1696) != Process )
    {
      v9 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        goto LABEL_169;
      v63 = *(_QWORD *)(v9 + 16) + 57216LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      a2 = *(_QWORD *)(v63 + 3848) + *(_QWORD *)(v63 + 3856);
      v75 = a2;
      if ( a2 < 0x420 )
      {
        v64 = 0LL;
        v65 = MiPageSizes;
        v66 = (__int64 *)(v63 + 16);
        v67 = 3LL;
        do
        {
          v68 = *(v66 - 1);
          v69 = *v66;
          v66 += 160;
          v7 = *v65++;
          a2 = v7 * (v68 + v69);
          v64 += a2;
          --v67;
        }
        while ( v67 );
        v9 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
        v70 = v64 + v75;
        v3 = a1 + 7;
        if ( v70 < 0x420 )
        {
LABEL_169:
          a2 = *(_QWORD *)(v9 + 18688);
          if ( a2 < 0x420 )
          {
            v10 = 0;
            if ( (unsigned __int8)MiGetCurrentSlabIdentity((__int64)CurrentThread) != 0xFF )
            {
              a2 += *(_QWORD *)(v12 + 18304);
              if ( a2 >= v11 )
                goto LABEL_19;
              v10 = 2;
            }
            v13 = v11 - a2;
            if ( *(_QWORD *)(v12 + 19392) >= v13 && (unsigned int)MiCanFlushMakeProgress(v12, 0, v13) )
            {
              LODWORD(Process[2].AvailableCpuState) = 0;
              if ( Process->BasePriority >= 9 || Process[3].ProcessListEntry.Blink )
                v6 = 65566;
              else
                v6 = 66036;
              if ( v10 )
                v6 |= 0x20000u;
            }
            if ( (_WORD)v6 )
              goto LABEL_125;
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
      p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38880;
    else
      p_SchedulingGroup = &Process[2].SchedulingGroup;
    v15 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v16 = &(*p_SchedulingGroup)->Policy + 8 * (unsigned __int64)v15;
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v17, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v16);
      v50 = v16->Value & 0x7FFFFFFF;
      while ( 1 )
      {
        v51 = v50;
        v50 = _InterlockedCompareExchange((volatile signed __int32 *)v16, v50 + 1, v50);
        if ( v51 == v50 )
          break;
        if ( v50 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v16, v17, v7, (__int64)CurrentThread);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, v17);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v15;
    CurrentIrql = v17;
  }
  *((_BYTE *)v3 + 12) = CurrentIrql;
  v20 = KeGetCurrentThread()->ApcState.Process;
  if ( (v20[2].ContextSwitches & 0xF) == 1 )
    p_FreezeCount = (unsigned int *)&unk_140E388A0;
  else
    p_FreezeCount = &v20[2].FreezeCount;
  v22 = 0xFFFF800000000000uLL;
  if ( (HIBYTE(LODWORD(v20[2].ContextSwitches)) & 0x30) == 0x30
    && *(_QWORD *)p_FreezeCount
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1, (__int64)p_FreezeCount, 0xFFFF800000000000uLL, (__int64)CurrentThread);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      MiUnlockVadTree(1, 0x11u);
      valid = -1073741819;
      goto LABEL_86;
    }
    MiUnlockVadTree(1, 0x11u);
    v22 = 0xFFFF800000000000uLL;
  }
  v23 = *a1;
  if ( *a1 < 0xFFFF800000000000uLL && v23 > 0x7FFFFFFEFFFFLL )
  {
    valid = -1073741819;
    goto LABEL_86;
  }
  v24 = KeGetCurrentThread()->ApcState.Process;
  if ( v24[1].ActiveGroupsMask.Masks[1] && (unsigned int)MiWaitForRotateToComplete(v23, v3, 0xFFFF800000000000uLL)
    || (Trees = v24[4].AutoBoostState.Trees) != 0LL && (unsigned int)MiCheckHoldFaultForHotPatch(Trees, a1, v22)
    || (v26 = MiResolvePageTablePage((__int64)a1, (unsigned __int64)p_FreezeCount, v22), valid = v26, v26 == -1073740748) )
  {
    valid = 0;
  }
  else if ( v26 >= 0 )
  {
    v28 = a1[3];
    v29 = *(_QWORD *)v28;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v29 & 1) == 0 )
        goto LABEL_43;
      if ( ((v29 & 0x42) == 0 || (v29 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        v52 = KeGetCurrentThread()->ApcState.Process;
        if ( v52->AddressPolicy != 1 )
        {
          KernelWaitTime = v52[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v54 = *(_QWORD *)(KernelWaitTime + 8 * ((v28 >> 3) & 0x1FF));
            if ( (v54 & 0x20) != 0 )
              v29 |= 0x20uLL;
            v55 = v29;
            v29 |= 0x42uLL;
            if ( (v54 & 0x42) == 0 )
              v29 = v55;
          }
        }
      }
    }
    if ( (v29 & 1) != 0 )
    {
      valid = MiValidFault(a1, v29);
      goto LABEL_86;
    }
LABEL_43:
    v30 = a1[1];
    if ( (v30 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
      a1[1] = v30 & 0xFFFFFFFFFFFFFFFDuLL;
    v31 = 0xFFFFF68000000000uLL;
    if ( !v29 )
    {
      v76 = 0;
      v42 = MiZeroFault(a1, &v76, &v77, &v79);
      v43 = v76;
      v44 = v42;
      if ( v76 )
      {
        MiReleaseFaultState((__int64 *)v3, 0x11u, 0LL);
        if ( v43 == 2 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
        return v44;
      }
      LODWORD(v32) = v77;
      v31 = 0xFFFFF68000000000uLL;
      goto LABEL_59;
    }
    v32 = (v29 >> 5) & 0x1F;
    v77 = (v29 >> 5) & 0x1F;
    if ( (v29 & 0x400) == 0 )
      goto LABEL_59;
    v33 = MI_READ_PTE_LOCK_FREE(v28);
    v35 = (v33 >> 5) & 0x1F;
    if ( (v33 & 0x400) == 0 )
      goto LABEL_92;
    v36 = v33;
    if ( qword_140E2DCC0 )
    {
      if ( (v33 & 0x10) != 0 )
        v36 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v36 = v33 & ~qword_140E2DCC0;
    }
    if ( HIDWORD(v36) != 0xFFFFFFFF )
    {
LABEL_92:
      v58 = v33;
      if ( qword_140E2DCC0 )
      {
        if ( (v33 & 0x10) != 0 )
          v58 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v58 = v33 & ~qword_140E2DCC0;
      }
      v41 = v58 >> 16;
      LODWORD(v35) = 256;
      if ( (v33 & 8) != 0 )
        LODWORD(v35) = 1;
      goto LABEL_97;
    }
    v78 = 0;
    v31 = 0xFFFFF68000000000uLL;
    v37 = (__int64)(v28 << 25) >> 16;
    if ( v37 > 0x7FFFFFFEFFFFLL )
    {
      if ( v37 >= 0xFFFFF68000000000uLL && v37 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v78 = 4;
        goto LABEL_115;
      }
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
      {
        v38 = v37 & 0x7FFFFFFFF000LL;
        if ( (v37 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        {
          v41 = qword_140E2DBA8;
          v78 = 1;
LABEL_98:
          v79 = v41;
          LODWORD(v32) = v35;
          v77 = v35;
          if ( !v41 )
            goto LABEL_115;
LABEL_59:
          if ( (_DWORD)v32 == 256 )
          {
LABEL_68:
            a1[13] = v79;
            return 3221225494LL;
          }
          v45 = a1[1] & 2;
          v46 = a1[2];
          if ( (a1[10] & 0x100) != 0 && (v28 > 0xFFFFF6BFFFFFFF78uLL || v28 < 0xFFFFF68000000000uLL) )
            goto LABEL_144;
          v47 = *(_QWORD *)v28;
          if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (v47 & 1) == 0 )
              goto LABEL_66;
            if ( (v47 & 0x42) == 0 || (v47 & 0x20) == 0 )
            {
              v59 = MiPteHasShadow();
              if ( v59 )
              {
                v60 = v59[2].KernelWaitTime;
                if ( v60 )
                {
                  v61 = *(_QWORD *)(v60 + 8 * ((v28 >> 3) & 0x1FF));
                  if ( (v61 & 0x20) != 0 )
                    v47 |= 0x20uLL;
                  v62 = v47;
                  v47 |= 0x42uLL;
                  if ( (v61 & 0x42) == 0 )
                    v47 = v62;
                }
              }
            }
          }
          if ( (v47 & 1) != 0 )
          {
            if ( !v45 || (v47 & 0xA00) != 0 )
              goto LABEL_68;
            goto LABEL_144;
          }
LABEL_66:
          v48 = v77;
          v45 = v45 != 0;
          if ( *((char *)MiReadWrite + (v77 & 7)) - (int)v45 >= 10 )
          {
            if ( (v77 & 0xFFFFFFF8) != 0x10 || (v46 & 1) != 0 && *(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
              goto LABEL_68;
            if ( (unsigned int)MiAllowGuardFault(v46) )
            {
              if ( (v47 & 0xC00) == 0x800 )
              {
                v73 = MiLockTransitionLeafPageEx(v28, 0LL, 0);
                v74 = MI_READ_PTE_LOCK_FREE(v28);
                if ( v73 )
                {
                  v48 = v77;
                  *(_QWORD *)(v73 + 16) = *(_QWORD *)(v73 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v77 & 0xF));
                }
                *(_QWORD *)v28 = v74 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v48 & 0xF));
                if ( v73 )
                  _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              else
              {
                *(_QWORD *)v28 = v47 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v48 & 0xF));
              }
              valid = -2147483647;
              v71 = MI_READ_PTE_LOCK_FREE(v28);
              if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v71) )
              {
                MiResolveDemandZeroFault(a1, v28, 0LL, a1[1] & 2);
                MiReleaseFaultState((__int64 *)v3, 0x11u, 0LL);
                return MiCheckForUserStackOverflow(*a1, 0LL);
              }
LABEL_147:
              MiReleaseFaultState((__int64 *)v3, 0x11u, 0LL);
              if ( valid != -2147483647 )
                return valid;
              return MiCheckForUserStackOverflow(*a1, 0LL);
            }
          }
          v4 = 0LL;
LABEL_144:
          valid = -1073741819;
          if ( *a1 < 0xFFFF800000000000uLL )
          {
            MiLockVadTree(1, v45, v46, v31);
            v4 = MiLocateAddress(*a1);
            MiUnlockVadTree(1, 0x11u);
          }
          MiCheckFatalAccessViolation(*a1);
          a1[11] = v4;
          goto LABEL_147;
        }
        if ( v38 == qword_140E2DBB8 && v38 )
        {
          v41 = qword_140E2DBB0;
          v78 = 1;
          goto LABEL_98;
        }
      }
      MiLockVadTree(1, 0xFFFFFFFFLL, v34, 0xFFFFF68000000000uLL);
      v39 = MiLocateAddress((__int64)(v28 << 25) >> 16);
      if ( v39 )
      {
        v41 = MiCheckUserVirtualAddress((__int64)(v28 << 25) >> 16, v39, v40, &v78);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
LABEL_97:
        v31 = 0xFFFFF68000000000uLL;
        goto LABEL_98;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    }
    v78 = 24;
LABEL_115:
    valid = -1073741819;
  }
LABEL_86:
  v56 = *v3;
  MiUnlockFaultPageTable((__int64 *)v3);
  v57 = *((_BYTE *)v3 + 12);
  if ( (*((_BYTE *)v3 + 13) & 1) == 0 )
  {
    MiUnlockWorkingSetShared(v56, v57);
    return valid;
  }
  MiUnlockWorkingSetExclusive(v56, v57);
  return valid;
}
