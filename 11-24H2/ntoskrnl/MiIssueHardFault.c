/*
 * XREFs of MiIssueHardFault @ 0x140350280
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiGetSessionIdForVa @ 0x14034E860 (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1403517B0 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14036E4E0 (EtwGetKernelTraceTimestampSilo.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140422570 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiIssueHardFault(unsigned __int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int SessionIdForVa; // eax
  unsigned int v9; // edx
  __int64 *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  int v16; // edi
  int v17; // r8d
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  int v26; // r14d
  int v27; // eax
  unsigned __int64 v29; // r13
  ULONG_PTR BugCheckParameter3; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  unsigned __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 *v40; // rax
  unsigned __int64 v41; // rcx
  int valid; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v46; // r8
  char v47; // al
  __int64 CurrentIrql; // rcx
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int128 v53; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+40h] [rbp-30h]
  __int64 v55; // [rsp+48h] [rbp-28h]
  __int64 v56; // [rsp+50h] [rbp-20h]
  int v57; // [rsp+58h] [rbp-18h]
  int v58; // [rsp+5Ch] [rbp-14h]
  __int64 v59; // [rsp+60h] [rbp-10h]
  _BYTE v60[8]; // [rsp+70h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+8h] BYREF
  __int64 v62; // [rsp+80h] [rbp+10h]
  __int64 v63; // [rsp+88h] [rbp+18h]
  __int128 *v64; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 v65; // [rsp+98h] [rbp+28h] BYREF
  __int64 v66; // [rsp+A0h] [rbp+30h]

  v60[0] = 0;
  v4 = 0;
  BugCheckParameter2 = 0LL;
  v5 = *(_DWORD *)(a2 + 192);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 224) = v6;
  v65 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v10 = *(__int64 **)(a2 + 208);
  if ( v10 )
    v11 = *v10;
  else
    v11 = v9;
  v12 = MiReferenceInPageFile(a2, SessionIdForVa, 1LL);
  v63 = MiReleaseFaultState((__int64 *)(a1 + 56), 1u, v60);
  v62 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a2 + 200) = v12;
    v4 = (*(_DWORD *)(v11 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 24LL);
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v7 + 1454);
  v15 = a1 + 56;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  if ( (v16 & 0xF) != 0 )
    --*(_WORD *)(v7 + 486);
  else
    --*(_WORD *)(v7 + 484);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = v60[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(v60[0]);
  if ( (v5 & 0x40000) != 0 )
  {
    v38 = *(_QWORD *)(a2
                    + 8LL * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                    + 312);
    MiZeroPhysicalPage(0LL, v38, 1, (unsigned __int8)BYTE2(*(_DWORD *)(48 * v38 - 0x21FFFFFFFFE0LL)) >> 6);
  }
  v17 = *(_DWORD *)(a2 + 312);
  v18 = 0LL;
  *(_DWORD *)(a2 + 184) = v17;
  v64 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v4 = 2;
  }
  else if ( (v5 & 0x400420) != 0x400020 )
  {
    if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (BYTE4(xmmword_140F0E6E8) & 1) != 0) && (v5 & 0x20) == 0 )
    {
      v64 = &v53;
      if ( (v5 & 0x400) != 0 )
        v19 = (unsigned __int64)*(unsigned int *)(a2 + 96) << 12;
      else
        v19 = *(_QWORD *)(a2 + 96);
      v20 = *(_QWORD *)(a2 + 200);
      v55 = *(_QWORD *)(a2 + 224);
      v54 = v19;
      v57 = *(_DWORD *)(v7 + 1296);
      v58 = v17;
      if ( v20 )
        v21 = *(_QWORD *)(v20 + 24);
      else
        v21 = 0LL;
      v56 = v21;
      if ( (PerfGlobalGroupMask & 0x2000) != 0 )
      {
        EtwGetKernelTraceTimestampSilo(&v53, 0x2000LL, *(_QWORD *)(*(_QWORD *)(v7 + 544) + 1520LL));
        v18 = 0LL;
      }
      else
      {
        v53 = 0LL;
      }
      if ( (BYTE4(xmmword_140F0E6E8) & 1) != 0 )
        v59 = MEMORY[0xFFFFF78000000320];
      else
        v59 = 0LL;
    }
    v16 = *(_DWORD *)(*(_QWORD *)v15 + 184LL);
    if ( (HIBYTE(v16) & 0x30) == 0x30 )
    {
      v52 = &unk_140E388A0;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 184LL) & 0xF) != 1 )
        v52 = (_QWORD *)(*(_QWORD *)v15 + 224LL);
      if ( !*v52 )
        KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
    }
    v4 |= 2u;
    MiIssueHardFaultIo(a2, v4 & 1, *(_QWORD *)(a1 + 16), v18);
    v18 = 0LL;
  }
  v22 = (__int64 *)((2 * (unsigned __int8)v16) ^ (*(_DWORD *)(a2 + 192) ^ (2 * (unsigned __int8)v16)) & 0xFFFFFFE1);
  *(_DWORD *)(a2 + 192) = (_DWORD)v22;
  v23 = *(_QWORD *)(a1 + 16);
  if ( (v23 & 1) == 0 || (v39 = v23 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v39 != 1) )
  {
    v24 = *(_QWORD *)(a2 + 248);
    v25 = *(_QWORD *)(a2 + 232);
    if ( (*(_QWORD *)(v24 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0 )
      v24 = 0LL;
    MiWaitForInPageComplete(a1, a2, &v64);
    v26 = MiFinishHardFault(a1, v63, a2, (__int64)&v65);
    v27 = (int)v64;
    --*(_BYTE *)(v7 + 1454);
    LODWORD(v63) = v27;
    if ( v26 )
      return (unsigned int)v26;
    if ( !v24 )
      v24 = 48 * ((v65 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v29 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v24 + 40) < 0 )
    {
      v25 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v29) = 0;
      v26 = MiCompleteProtoPteFault(a1, (v65 >> 12) & 0xFFFFFFFFFFLL, *(_DWORD *)(a1 + 8) & 2, 0, v62);
      if ( v26 >= 0 )
      {
LABEL_45:
        if ( *(_DWORD *)(MiGetVmAccessLoggingPartition(*(_QWORD *)(a1 + 56)) + 17452) != (_DWORD)v29 && (_DWORD)v63 != 2 )
        {
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v7);
          if ( EffectivePagePriorityThread >= *(_DWORD *)(v46 + 17456) )
            MiLogPageAccess(*(_QWORD *)(a1 + 56), v25 | 1);
        }
        if ( !v26 )
          return 276;
      }
    }
    else
    {
      v66 = v62 & 1;
      if ( (v62 & 1) != 0 && *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        BugCheckParameter2 = MI_READ_PTE_LOCK_FREE(v25) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        *(_QWORD *)v25 = BugCheckParameter2;
      }
      BugCheckParameter2 = MiMakeTransitionPteValid(v25);
      BugCheckParameter3 = BugCheckParameter2;
      if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v24 + 16)) )
      {
        v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter2);
        MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter2, v50 | 0x40, v51);
        BugCheckParameter3 = BugCheckParameter2;
      }
      if ( v29 )
      {
        valid = MiOkToSetPteDirtyForNotValidFault(BugCheckParameter3, *(_QWORD *)a1, v31, v32);
        BugCheckParameter3 = BugCheckParameter2;
        v29 = 0LL;
        if ( valid )
        {
          if ( (BugCheckParameter2 & 0x800) != 0 )
          {
            BugCheckParameter3 = BugCheckParameter2 | 0x42;
            BugCheckParameter2 |= 0x42uLL;
            if ( (*(_BYTE *)(v24 + 34) & 0x10) == 0 )
            {
              if ( (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v24 + 16)) )
              {
                MiLockPageAndSetDirty(v24, 1LL, v43, v44);
                BugCheckParameter3 = BugCheckParameter2;
              }
            }
          }
        }
      }
      if ( v66 == v29 )
        goto LABEL_41;
      v34 = v62 & 0xFFFFFFFFFFFFFFFEuLL;
      v47 = *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v47 == 4 )
      {
        if ( _bittest64(&MiFlags, 0x24u) && (BugCheckParameter3 & 0x20) == 0 && v25 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v25, BugCheckParameter3, 128LL);
        *(_QWORD *)v25 = BugCheckParameter3;
        return 276LL;
      }
      if ( v47 != 5 )
      {
LABEL_41:
        v33 = v29;
        v34 = v29;
        if ( (v62 & 1) != 0 && *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          v33 = 1;
      }
      else
      {
        v33 = v29;
      }
      v35 = v33 | 0x10;
      if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
        v35 = v33;
      if ( (unsigned int)MiAllocateWsle(*(_QWORD *)(a1 + 56), v25, v24, 0, BugCheckParameter3, v35, v34) )
        goto LABEL_45;
      MiLockAndDecrementShareCount(v24, 2LL, v36, v37);
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v26;
  }
  if ( v4 < 2 )
  {
    v22 = *(__int64 **)(v39 + 64);
    if ( *v22 != v39 + 56 )
LABEL_58:
      __fastfail(3u);
    *(_QWORD *)a2 = v39 + 56;
    *(_QWORD *)(a2 + 8) = v22;
    *v22 = a2;
    *(_QWORD *)(v39 + 64) = a2;
    *(_QWORD *)(v39 + 72) += *(unsigned int *)(a2 + 184);
  }
  else
  {
    v40 = *(__int64 **)(v39 + 48);
    v41 = v39 + 40;
    if ( *v40 != v41 )
      goto LABEL_58;
    *(_QWORD *)a2 = v41;
    *(_QWORD *)(a2 + 8) = v40;
    *v40 = a2;
    *(_QWORD *)(v41 + 8) = a2;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v22) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL) & 0xF) != 0 )
  {
    v49 = (*(_WORD *)(v7 + 486))++ == 0xFFFF;
    if ( v49 && *(_QWORD *)(v7 + 152) != v7 + 152 )
      KiCheckForKernelApcDelivery(CurrentIrql, v22, 1LL, v18);
  }
  else
  {
    KeLeaveCriticalRegionThread();
  }
  MiRelockFaultState(a1 + 56, v63);
  return 0LL;
}
