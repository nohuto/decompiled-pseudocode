/*
 * XREFs of MiIssueHardFault @ 0x140397B2C
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiGetSessionIdForVa @ 0x1402ED220 (MiGetSessionIdForVa.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140350000 (EtwGetKernelTraceTimestampSilo.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140396740 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiReferenceInPageFile @ 0x140398340 (MiReferenceInPageFile.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140398DC4 (MiIssueHardFaultIo.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
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
  __int64 v15; // r13
  int v16; // edi
  int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  int v25; // r14d
  int v26; // eax
  unsigned __int64 v28; // r13
  __int64 v29; // rbx
  int v30; // edx
  unsigned __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 *v35; // rax
  unsigned __int64 v36; // rcx
  BOOL valid; // eax
  __int64 v38; // r8
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v40; // r8
  char v41; // al
  __int64 CurrentIrql; // rcx
  bool v43; // zf
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int128 v46; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-30h]
  __int64 v48; // [rsp+48h] [rbp-28h]
  __int64 v49; // [rsp+50h] [rbp-20h]
  int v50; // [rsp+58h] [rbp-18h]
  int v51; // [rsp+5Ch] [rbp-14h]
  __int64 v52; // [rsp+60h] [rbp-10h]
  _BYTE v53[8]; // [rsp+70h] [rbp+0h] BYREF
  unsigned __int64 TransitionPteValid; // [rsp+78h] [rbp+8h] BYREF
  __int64 v55; // [rsp+80h] [rbp+10h]
  __int64 v56; // [rsp+88h] [rbp+18h]
  __int128 *v57; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp+28h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+30h]

  v53[0] = 0;
  v4 = 0;
  TransitionPteValid = 0LL;
  v5 = *(_DWORD *)(a2 + 192);
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 224) = v6;
  v58 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v10 = *(__int64 **)(a2 + 208);
  if ( v10 )
    v11 = *v10;
  else
    v11 = v9;
  v12 = MiReferenceInPageFile(a2, SessionIdForVa, 1LL);
  v56 = MiReleaseFaultState(a1 + 56, 1u, v53);
  v55 = *(_QWORD *)(a1 + 16);
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
    LOBYTE(v13) = v53[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(v53[0]);
  if ( (v5 & 0x40000) != 0 )
  {
    v33 = *(_QWORD *)(a2
                    + 8LL * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                    + 312);
    MiZeroPhysicalPage(0LL, v33, 1, (unsigned __int8)BYTE2(*(_DWORD *)(48 * v33 - 0x21FFFFFFFFE0LL)) >> 6);
  }
  v17 = *(_DWORD *)(a2 + 312);
  *(_DWORD *)(a2 + 184) = v17;
  v57 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v4 = 2;
  }
  else if ( (v5 & 0x400420) != 0x400020 )
  {
    if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (BYTE4(xmmword_140F0E408) & 1) != 0) && (v5 & 0x20) == 0 )
    {
      v57 = &v46;
      if ( (v5 & 0x400) != 0 )
        v18 = (unsigned __int64)*(unsigned int *)(a2 + 96) << 12;
      else
        v18 = *(_QWORD *)(a2 + 96);
      v19 = *(_QWORD *)(a2 + 200);
      v48 = *(_QWORD *)(a2 + 224);
      v47 = v18;
      v50 = *(_DWORD *)(v7 + 1296);
      v51 = v17;
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 24);
      else
        v20 = 0LL;
      v49 = v20;
      if ( (PerfGlobalGroupMask & 0x2000) != 0 )
        EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)&v46, 0x2000u, *(_QWORD *)(*(_QWORD *)(v7 + 544) + 1520LL));
      else
        v46 = 0LL;
      if ( (BYTE4(xmmword_140F0E408) & 1) != 0 )
        v52 = MEMORY[0xFFFFF78000000320];
      else
        v52 = 0LL;
    }
    v16 = *(_DWORD *)(*(_QWORD *)v15 + 184LL);
    if ( (HIBYTE(v16) & 0x30) == 0x30 )
    {
      v45 = &unk_140E38760;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 184LL) & 0xF) != 1 )
        v45 = (_QWORD *)(*(_QWORD *)v15 + 224LL);
      if ( !*v45 )
        KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
    }
    v4 |= 2u;
    MiIssueHardFaultIo(a2, v4 & 1, *(_QWORD *)(a1 + 16));
  }
  v21 = (2 * (unsigned __int8)v16) ^ (*(_DWORD *)(a2 + 192) ^ (2 * (unsigned __int8)v16)) & 0xFFFFFFE1;
  *(_DWORD *)(a2 + 192) = v21;
  v22 = *(_QWORD *)(a1 + 16);
  if ( (v22 & 1) == 0 || (v34 = v22 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v34 != 1) )
  {
    v23 = *(_QWORD *)(a2 + 248);
    v24 = *(_QWORD *)(a2 + 232);
    if ( (*(_QWORD *)(v23 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v23 + 8) > 0 )
      v23 = 0LL;
    MiWaitForInPageComplete(a1, a2, &v57);
    v25 = MiFinishHardFault(a1, v56, a2, (__int64)&v58);
    v26 = (int)v57;
    --*(_BYTE *)(v7 + 1454);
    LODWORD(v56) = v26;
    if ( v25 )
      return (unsigned int)v25;
    if ( !v23 )
      v23 = 48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v28 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v23 + 40) < 0 )
    {
      v24 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v28) = 0;
      v25 = MiCompleteProtoPteFault(
              (unsigned __int64 *)a1,
              (v58 >> 12) & 0xFFFFFFFFFFLL,
              *(_DWORD *)(a1 + 8) & 2,
              0,
              v55);
      if ( v25 >= 0 )
      {
LABEL_45:
        if ( *(_DWORD *)(MiGetVmAccessLoggingPartition(*(_QWORD *)(a1 + 56)) + 17452) != (_DWORD)v28 && (_DWORD)v56 != 2 )
        {
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v7);
          if ( EffectivePagePriorityThread >= *(_DWORD *)(v40 + 17456) )
            MiLogPageAccess(*(_QWORD *)(a1 + 56), v24 | 1);
        }
        if ( !v25 )
          return 276;
      }
    }
    else
    {
      v59 = v55 & 1;
      if ( (v55 & 1) != 0 && *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        TransitionPteValid = MI_READ_PTE_LOCK_FREE(v24) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        *(_QWORD *)v24 = TransitionPteValid;
      }
      TransitionPteValid = MiMakeTransitionPteValid(v24);
      v29 = TransitionPteValid;
      if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v23 + 16)) )
      {
        v44 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPteValid);
        MiWriteValidPteNewProtection((ULONG_PTR)&TransitionPteValid, v44 | 0x40);
        v29 = TransitionPteValid;
      }
      if ( v28 )
      {
        valid = MiOkToSetPteDirtyForNotValidFault(v29, *(_QWORD *)a1);
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
                MiLockPageAndSetDirty(v23, 1LL, v38);
                v29 = TransitionPteValid;
              }
            }
          }
        }
      }
      if ( v59 == v28 )
        goto LABEL_41;
      v31 = v55 & 0xFFFFFFFFFFFFFFFEuLL;
      v41 = *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v41 == 4 )
      {
        if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x20) == 0 && v24 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v24, v29, 128);
        *(_QWORD *)v24 = v29;
        return 276LL;
      }
      if ( v41 != 5 )
      {
LABEL_41:
        v30 = v28;
        v31 = v28;
        if ( (v55 & 1) != 0 && *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          v30 = 1;
      }
      else
      {
        v30 = v28;
      }
      v32 = v30 | 0x10;
      if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
        v32 = v30;
      if ( (unsigned int)MiAllocateWsle(*(_QWORD *)(a1 + 56), v24, v23, 0, v29, v32, v31) )
        goto LABEL_45;
      MiLockAndDecrementShareCount(v23);
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v25;
  }
  if ( v4 < 2 )
  {
    v21 = *(_QWORD *)(v34 + 64);
    if ( *(_QWORD *)v21 != v34 + 56 )
LABEL_58:
      __fastfail(3u);
    *(_QWORD *)a2 = v34 + 56;
    *(_QWORD *)(a2 + 8) = v21;
    *(_QWORD *)v21 = a2;
    *(_QWORD *)(v34 + 64) = a2;
    *(_QWORD *)(v34 + 72) += *(unsigned int *)(a2 + 184);
  }
  else
  {
    v35 = *(__int64 **)(v34 + 48);
    v36 = v34 + 40;
    if ( *v35 != v36 )
      goto LABEL_58;
    *(_QWORD *)a2 = v36;
    *(_QWORD *)(a2 + 8) = v35;
    *v35 = a2;
    *(_QWORD *)(v36 + 8) = a2;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v21) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v21);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL) & 0xF) != 0 )
  {
    v43 = (*(_WORD *)(v7 + 486))++ == 0xFFFF;
    if ( v43 && *(_QWORD *)(v7 + 152) != v7 + 152 )
      KiCheckForKernelApcDelivery(CurrentIrql, v21);
  }
  else
  {
    KeLeaveCriticalRegionThread();
  }
  MiRelockFaultState(a1 + 56, v56);
  return 0LL;
}
