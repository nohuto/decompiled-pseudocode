/*
 * XREFs of MiIssueHardFault @ 0x1402085EC
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14031A990 (EtwGetKernelTraceTimestampSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1404345B0 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiIssueHardFault(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int SessionIdForVa; // eax
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // esi
  int v16; // r8d
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  ULONG_PTR v24; // rsi
  int v25; // r14d
  int v26; // eax
  unsigned __int64 v28; // r13
  ULONG_PTR v29; // rbx
  int v30; // edx
  unsigned __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rdx
  __int64 VmAccessLoggingPartition; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rcx
  int valid; // eax
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v41; // r8
  __int64 CurrentIrql; // rcx
  char v43; // al
  bool v44; // zf
  unsigned __int64 v45; // rcx
  _QWORD *v46; // rax
  __int128 v47; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-30h]
  __int64 v49; // [rsp+48h] [rbp-28h]
  __int64 v50; // [rsp+50h] [rbp-20h]
  int v51; // [rsp+58h] [rbp-18h]
  int v52; // [rsp+5Ch] [rbp-14h]
  __int64 v53; // [rsp+60h] [rbp-10h]
  _BYTE v54[8]; // [rsp+70h] [rbp+0h] BYREF
  unsigned __int64 TransitionPteValid; // [rsp+78h] [rbp+8h] BYREF
  __int64 v56; // [rsp+80h] [rbp+10h]
  __int64 v57; // [rsp+88h] [rbp+18h]
  __int128 *v58; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp+28h] BYREF
  __int64 v60; // [rsp+A0h] [rbp+30h]

  v54[0] = 0;
  v4 = 0;
  TransitionPteValid = 0LL;
  v5 = *(_DWORD *)(a2 + 192);
  v6 = *a1;
  v7 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 224) = v6;
  v59 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v10 = *(__int64 **)(a2 + 208);
  if ( v10 )
    v11 = *v10;
  else
    v11 = v9;
  v12 = MiReferenceInPageFile(a2, SessionIdForVa, 1LL);
  v57 = MiReleaseFaultState(a1 + 7, 1LL, v54);
  v56 = a1[2];
  if ( v12 )
  {
    *(_QWORD *)(a2 + 200) = v12;
    v4 = (*(_DWORD *)(v11 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 24LL);
  }
  v14 = a1[2];
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v7 + 1454);
  v15 = *(_DWORD *)(a1[7] + 184);
  if ( (v15 & 0xF) != 0 )
    --*(_WORD *)(v7 + 486);
  else
    --*(_WORD *)(v7 + 484);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = v54[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(v54[0]);
  if ( (v5 & 0x40000) != 0 )
  {
    v35 = *(_QWORD *)(a2
                    + 8LL * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                    + 312);
    MiZeroPhysicalPage(0LL, v35, 1LL, (unsigned __int8)BYTE2(*(_DWORD *)(48 * v35 - 0x21FFFFFFFFE0LL)) >> 6);
  }
  v16 = *(_DWORD *)(a2 + 312);
  v17 = 0LL;
  *(_DWORD *)(a2 + 184) = v16;
  v58 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v4 = 2;
  }
  else if ( (v5 & 0x400020) != 0x400020 || (v5 & 0x400) != 0 )
  {
    if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (BYTE4(xmmword_140F0DD48) & 1) != 0) && (v5 & 0x20) == 0 )
    {
      v58 = &v47;
      if ( (v5 & 0x400) != 0 )
        v18 = (unsigned __int64)*(unsigned int *)(a2 + 96) << 12;
      else
        v18 = *(_QWORD *)(a2 + 96);
      v19 = *(_QWORD *)(a2 + 200);
      v49 = *(_QWORD *)(a2 + 224);
      v48 = v18;
      v51 = *(_DWORD *)(v7 + 1296);
      v52 = v16;
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 24);
      else
        v20 = 0LL;
      v50 = v20;
      if ( (PerfGlobalGroupMask & 0x2000) != 0 )
      {
        EtwGetKernelTraceTimestampSilo(&v47, 0x2000LL, *(_QWORD *)(*(_QWORD *)(v7 + 544) + 1520LL));
        v17 = 0LL;
      }
      else
      {
        v47 = 0LL;
      }
      if ( (BYTE4(xmmword_140F0DD48) & 1) != 0 )
        v53 = MEMORY[0xFFFFF78000000320];
      else
        v53 = 0LL;
    }
    v15 = *(_DWORD *)(a1[7] + 184);
    if ( (HIBYTE(v15) & 0x30) == 0x30 )
    {
      v45 = a1[7];
      v46 = &unk_140E38520;
      if ( (*(_DWORD *)(v45 + 184) & 0xF) != 1 )
        v46 = (_QWORD *)(v45 + 224);
      if ( !*v46 )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
    }
    v4 |= 2u;
    MiIssueHardFaultIo(a2, v4 & 1, a1[2], v17);
    v17 = 0LL;
  }
  v21 = (_QWORD *)((2 * (unsigned __int8)v15) ^ (*(_DWORD *)(a2 + 192) ^ (2 * (unsigned __int8)v15)) & 0xFFFFFFE1);
  *(_DWORD *)(a2 + 192) = (_DWORD)v21;
  v22 = a1[2];
  if ( (v22 & 1) == 0 || (v36 = v22 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v36 != 1) )
  {
    v23 = *(_QWORD *)(a2 + 248);
    v24 = *(_QWORD *)(a2 + 232);
    if ( (*(_QWORD *)(v23 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v23 + 8) > 0 )
      v23 = 0LL;
    MiWaitForInPageComplete(a1, a2, &v58, 0LL);
    v25 = MiFinishHardFault(a1, v57, a2, &v59);
    v26 = (int)v58;
    --*(_BYTE *)(v7 + 1454);
    LODWORD(v57) = v26;
    if ( v25 )
      return (unsigned int)v25;
    if ( !v23 )
      v23 = 48 * ((v59 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v28 = a1[1] & 2;
    if ( *(__int64 *)(v23 + 40) < 0 )
    {
      v24 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v28) = 0;
      v25 = MiCompleteProtoPteFault((_DWORD)a1, v59 >> 12, a1[1] & 2, 0, v56);
      if ( v25 >= 0 )
      {
LABEL_44:
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(a1[7]);
        if ( *(_DWORD *)(VmAccessLoggingPartition + 17452) != (_DWORD)v28 && (_DWORD)v57 != 2 )
        {
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v7, v33, VmAccessLoggingPartition);
          if ( EffectivePagePriorityThread >= *(_DWORD *)(v41 + 17456) )
            MiLogPageAccess(a1[7], v24 | 1);
        }
        if ( !v25 )
          return 276;
      }
    }
    else
    {
      v60 = v56 & 1;
      if ( (v56 & 1) != 0 && *(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        TransitionPteValid = MI_READ_PTE_LOCK_FREE(v24) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        *(_QWORD *)v24 = TransitionPteValid;
      }
      TransitionPteValid = MiMakeTransitionPteValid(v24);
      v29 = TransitionPteValid;
      if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v23 + 16)) )
      {
        MI_READ_PTE_LOCK_FREE(&TransitionPteValid);
        MiWriteValidPteNewProtection((ULONG_PTR)&TransitionPteValid);
        v29 = TransitionPteValid;
      }
      if ( v28 )
      {
        valid = MiOkToSetPteDirtyForNotValidFault(v29, *a1);
        v29 = TransitionPteValid;
        v28 = 0LL;
        if ( valid )
        {
          if ( (TransitionPteValid & 0x800) != 0 )
          {
            v29 = TransitionPteValid | 0x42;
            TransitionPteValid |= 0x42uLL;
            if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 )
            {
              if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v23 + 16)) )
              {
                MiLockPageAndSetDirty(v23, 1LL);
                v29 = TransitionPteValid;
              }
            }
          }
        }
      }
      if ( v60 == v28 )
        goto LABEL_40;
      v31 = v56 & 0xFFFFFFFFFFFFFFFEuLL;
      v43 = *(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v43 == 4 )
      {
        if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x20) == 0 && v24 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v24, v29);
        *(_QWORD *)v24 = v29;
        return 276LL;
      }
      if ( v43 != 5 )
      {
LABEL_40:
        v30 = v28;
        v31 = v28;
        if ( (v56 & 1) != 0 && *(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          v30 = 1;
      }
      else
      {
        v30 = v28;
      }
      v32 = v30 | 0x10;
      if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
        v32 = v30;
      if ( (unsigned int)MiAllocateWsle(a1[7], v24, v23, 0, v29, v32, v31) )
        goto LABEL_44;
      MiLockAndDecrementShareCount(v23);
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v25;
  }
  if ( v4 < 2 )
  {
    v21 = *(_QWORD **)(v36 + 64);
    if ( *v21 != v36 + 56 )
LABEL_60:
      __fastfail(3u);
    *(_QWORD *)a2 = v36 + 56;
    *(_QWORD *)(a2 + 8) = v21;
    *v21 = a2;
    *(_QWORD *)(v36 + 64) = a2;
    *(_QWORD *)(v36 + 72) += *(unsigned int *)(a2 + 184);
  }
  else
  {
    v37 = *(_QWORD **)(v36 + 48);
    v38 = v36 + 40;
    if ( *v37 != v38 )
      goto LABEL_60;
    *(_QWORD *)a2 = v38;
    *(_QWORD *)(a2 + 8) = v37;
    *v37 = a2;
    *(_QWORD *)(v38 + 8) = a2;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (*(_DWORD *)(a1[7] + 184) & 0xF) != 0 )
  {
    v44 = (*(_WORD *)(v7 + 486))++ == 0xFFFF;
    if ( v44 && *(_QWORD *)(v7 + 152) != v7 + 152 )
      KiCheckForKernelApcDelivery(CurrentIrql, v21, 1LL, v17);
  }
  else
  {
    KeLeaveCriticalRegionThread(v7);
  }
  MiRelockFaultState(a1 + 7, v57);
  return 0LL;
}
