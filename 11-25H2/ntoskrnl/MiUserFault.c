/*
 * XREFs of MiUserFault @ 0x14024A660
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140243150 (MiCheckProtoAccess.c)
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 *     MiCanFlushMakeProgress @ 0x1403C11C8 (MiCanFlushMakeProgress.c)
 *     MiAllowGuardFault @ 0x1403E1AB0 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x1403EC470 (MiCheckFatalAccessViolation.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiCheckForUserStackOverflow @ 0x140A296B4 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // r9
  _QWORD *v2; // r12
  __int64 v3; // r14
  unsigned int v5; // ebx
  _KPROCESS *Process; // rbp
  __int64 p_Blink; // rdi
  __int64 v8; // rdx
  __int64 v9; // r11
  int v10; // r15d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rdx
  char v28; // bl
  unsigned int v29; // edi
  ULONG_PTR v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int valid; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 HasShadow; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // r12
  __int64 *v44; // r13
  __int64 *v45; // r15
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 Address; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rax
  ULONG_PTR v58; // [rsp+20h] [rbp-68h]
  char v59; // [rsp+90h] [rbp+8h] BYREF
  int v60; // [rsp+98h] [rbp+10h] BYREF
  __int64 v61; // [rsp+A0h] [rbp+18h] BYREF
  _BOOL8 v62; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 7;
  v3 = 0LL;
  v5 = 0;
  v60 = 0;
  Process = CurrentThread->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  a1[7] = (ULONG_PTR)&Process[2].ReadyListHead.Blink;
  v61 = 0LL;
  if ( dword_140E370D8 )
  {
    v5 = 10;
LABEL_63:
    MiDelayFaultingThread(v5);
    goto LABEL_19;
  }
  if ( LODWORD(Process[2].AvailableCpuState) > 0x10 && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
  {
    v8 = *((_QWORD *)qword_140E2FD48 + HIWORD(Process[2].ProcessListEntry.Blink));
    if ( *(_DWORD *)(v8 + 1204) == -1 || *(_KPROCESS **)(v8 + 1696) != Process )
    {
      v9 = *((_QWORD *)qword_140E2FD48 + HIWORD(Process[2].ProcessListEntry.Blink));
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        goto LABEL_7;
      v41 = *(_QWORD *)(v9 + 16) + 57216LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      v42 = *(_QWORD *)(v41 + 3848) + *(_QWORD *)(v41 + 3856);
      if ( v42 < 0x420 )
      {
        v43 = 0LL;
        v44 = MiPageSizes;
        v45 = (__int64 *)(v41 + 16);
        v46 = 3LL;
        do
        {
          v47 = *(v45 - 1);
          v48 = *v45;
          v45 += 160;
          v49 = *v44++;
          v43 += (v47 + v48) * v49;
          --v46;
        }
        while ( v46 );
        p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
        v50 = v43 + v42;
        v2 = a1 + 7;
        if ( v50 < 0x420 )
        {
LABEL_7:
          if ( *(_QWORD *)(v9 + 18688) < 0x420uLL )
          {
            v10 = 0;
            if ( (unsigned __int8)MiGetCurrentSlabIdentity(CurrentThread) != 0xFF )
            {
              v11 += *(_QWORD *)(v13 + 18304);
              if ( v11 >= v12 )
                goto LABEL_19;
              v10 = 2;
            }
            v14 = v12 - v11;
            if ( *(_QWORD *)(v13 + 19392) >= v14 && (unsigned int)MiCanFlushMakeProgress(v13, 0LL, v14) )
            {
              LODWORD(Process[2].AvailableCpuState) = 0;
              if ( Process->BasePriority >= 9 || Process[3].ProcessListEntry.Blink )
                v5 = 65566;
              else
                v5 = 66036;
              if ( v10 )
                v5 |= 0x20000u;
            }
            if ( (_WORD)v5 )
              goto LABEL_63;
          }
        }
      }
    }
  }
LABEL_19:
  *((_BYTE *)v2 + 12) = MiLockWorkingSetShared(p_Blink);
  v15 = MiUserFaultAllowed(a1);
  if ( v15 < 0 )
  {
    if ( v15 != -1073740748 )
      LODWORD(v3) = v15;
    goto LABEL_45;
  }
  v17 = MiResolvePageTablePage(a1);
  v21 = v17;
  if ( v17 == -1073740748 )
  {
LABEL_45:
    v21 = v3;
    goto LABEL_46;
  }
  if ( v17 < 0 )
  {
LABEL_46:
    LOBYTE(v16) = 17;
    MiReleaseFaultState(v2, v16, 0LL);
    return v21;
  }
  v22 = a1[3];
  v23 = *(_QWORD *)v22;
  if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v23 & 1) == 0 )
      goto LABEL_24;
    LOBYTE(v18) = (v23 & 0x42) != 0;
    if ( ((unsigned __int8)v18 & ((v23 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(v18, v23, v19, v20);
      if ( HasShadow )
      {
        v38 = *(_QWORD *)(HasShadow + 1288);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v22 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v23 |= 0x20uLL;
          v40 = v23;
          v23 |= 0x42uLL;
          if ( (v39 & 0x42) == 0 )
            v23 = v40;
        }
      }
    }
  }
  if ( (v23 & 1) != 0 )
  {
    valid = MiValidFault(a1);
    LOBYTE(v35) = 17;
    v36 = valid;
    MiReleaseFaultState(v2, v35, 0LL);
    return v36;
  }
LABEL_24:
  v24 = a1[1];
  if ( (v24 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    a1[1] = v24 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v23 )
  {
    v25 = (v23 >> 5) & 0x1F;
    v60 = (v23 >> 5) & 0x1F;
    if ( (v23 & 0x400) == 0 )
      goto LABEL_31;
    v61 = MiCheckProtoAccess(v22, &v60);
    if ( !v61 )
    {
      v21 = -1073741819;
      goto LABEL_46;
    }
  }
  else
  {
    v59 = 0;
    v26 = MiZeroFault((__int64)a1, &v59, &v60, &v61);
    v28 = v59;
    v29 = v26;
    if ( v59 )
    {
      LOBYTE(v27) = 17;
      MiReleaseFaultState(v2, v27, 0LL);
      if ( v28 == 2 )
        return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
      return v29;
    }
  }
  LODWORD(v25) = v60;
LABEL_31:
  if ( (_DWORD)v25 == 256 )
  {
LABEL_36:
    a1[13] = v61;
    return 3221225494LL;
  }
  v58 = a1[2];
  v30 = a1[1] & 2;
  if ( (a1[10] & 0x100) != 0 && (v22 > 0xFFFFF6BFFFFFFF78uLL || v22 < 0xFFFFF68000000000uLL) )
    goto LABEL_75;
  v31 = MI_READ_PTE_LOCK_FREE(v22);
  v32 = v31;
  if ( (v31 & 1) != 0 )
  {
    if ( !v30 || (v31 & 0xA00) != 0 )
      goto LABEL_36;
  }
  else
  {
    v62 = v30 != 0;
    if ( *((char *)&MiReadWrite + (v25 & 7)) - (int)v62 >= 10 )
    {
      if ( (v25 & 0xFFFFFFF8) != 0x10 || (v58 & 1) != 0 && *(_BYTE *)(v58 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        goto LABEL_36;
      if ( (unsigned int)MiAllowGuardFault(v58) )
      {
        if ( (v32 & 0xC00) == 0x800 )
        {
          v56 = MiLockTransitionLeafPageEx(v22);
          v57 = MI_READ_PTE_LOCK_FREE(v22);
          if ( v56 )
          {
            LOBYTE(v25) = v60;
            *(_QWORD *)(v56 + 16) = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v60 & 0xF));
          }
          *(_QWORD *)v22 = v57 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v25 & 0xF));
          if ( v56 )
            _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          *(_QWORD *)v22 = v32 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v25 & 0xF));
        }
        v21 = -2147483647;
        v51 = MI_READ_PTE_LOCK_FREE(v22);
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v51) )
        {
          MiResolveDemandZeroFault(a1, v22, 0LL, a1[1] & 2);
          LOBYTE(v53) = 17;
          MiReleaseFaultState(v2, v53, 0LL);
          return MiCheckForUserStackOverflow(*a1, 0LL);
        }
        goto LABEL_78;
      }
    }
  }
LABEL_75:
  v21 = -1073741819;
  if ( *a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(*a1);
    LOBYTE(v55) = 17;
    v3 = Address;
    MiUnlockVadTree(1LL, v55);
  }
  MiCheckFatalAccessViolation(*a1);
  a1[11] = v3;
LABEL_78:
  LOBYTE(v52) = 17;
  MiReleaseFaultState(v2, v52, 0LL);
  if ( v21 != -2147483647 )
    return v21;
  return MiCheckForUserStackOverflow(*a1, 0LL);
}
