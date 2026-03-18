/*
 * XREFs of MiAllocateWsle @ 0x14024B590
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     VslSetPrivilegedPte @ 0x1402CF254 (VslSetPrivilegedPte.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     MiGetVirtualFaultPageInfo @ 0x1403F30B4 (MiGetVirtualFaultPageInfo.c)
 *     MiFillVirtualFaultInfo @ 0x1403F30E8 (MiFillVirtualFaultInfo.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiLogAllocateWsleEvent @ 0x1404B0D94 (MiLogAllocateWsleEvent.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KdpSetOwedBreakpoints @ 0x140B6A7DC (KdpSetOwedBreakpoints.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        int a4,
        ULONG_PTR BugCheckParameter3,
        int a6,
        __int64 a7)
{
  int v8; // esi
  ULONG_PTR v9; // r13
  __int64 v10; // r15
  char v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // dl
  unsigned int Queue; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // ebx
  ULONG_PTR v19; // r12
  unsigned __int64 v20; // rcx
  char v21; // di
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int64 v23; // rdx
  ULONG_PTR v24; // rdi
  int v25; // ecx
  ULONG_PTR v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r9
  int v30; // ebx
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // r14
  unsigned int v33; // r12d
  ULONG_PTR v34; // r12
  int PagePrivilege; // eax
  char v36; // r9d^2
  ULONG_PTR v37; // rdi
  unsigned int v38; // r12d
  ULONG_PTR v39; // rcx
  unsigned int v40; // r14d
  unsigned __int64 v41; // rcx
  unsigned int v42; // ecx
  int v43; // eax
  __int64 v44; // r10
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char v48; // r12
  char v49; // [rsp+30h] [rbp-51h]
  unsigned int v50; // [rsp+34h] [rbp-4Dh]
  int v51; // [rsp+34h] [rbp-4Dh]
  int v52; // [rsp+3Ch] [rbp-45h]
  __int64 VirtualFaultPageInfo; // [rsp+40h] [rbp-41h]
  ULONG_PTR v54; // [rsp+48h] [rbp-39h] BYREF
  __int128 v55; // [rsp+50h] [rbp-31h] BYREF
  ULONG_PTR v56; // [rsp+60h] [rbp-21h]
  unsigned __int64 v57[11]; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp+5Fh] BYREF
  int v61; // [rsp+E8h] [rbp+67h]

  BugCheckParameter2 = a3;
  v56 = 0LL;
  v55 = 0LL;
  v8 = *(_DWORD *)(a1 + 184);
  v52 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v52 = 1;
  }
  else
  {
    v10 = 0LL;
    if ( (v8 & 0xF) == 0 && ((*(_QWORD *)BugCheckParameter2 >> 42) & 7) != 0 )
      *(_QWORD *)BugCheckParameter2 &= 0xFFFFE3FFFFFFFFFFuLL;
  }
  v11 = a6;
  if ( (a6 & 1) != 0 )
    MiProcessWsInSwapFault(a1, BugCheckParameter2, v9, &BugCheckParameter3);
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v49 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v15 = Queue >> 9;
  }
  else
  {
    v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v41 = CurrentThread->Process[1].Padding[3];
    if ( v41 )
    {
      v42 = *(_DWORD *)(v41 + 1092);
      if ( v15 >= v42 )
        LOBYTE(v15) = v42;
    }
  }
  v16 = v15 & 7;
  v17 = 5;
  v18 = 8 * v16;
  if ( v10 )
  {
    if ( (v11 & 2) != 0 )
    {
      v13 = 9;
    }
    else if ( v16 < 5 )
    {
      v13 = 7;
    }
    else if ( (v11 & 8) != 0 )
    {
      v13 = 6;
    }
    else
    {
      if ( (BugCheckParameter3 & 1) == 0 )
      {
LABEL_14:
        LOBYTE(a4) = v13 | (16 * (a4 & 7));
        v61 = a4;
        goto LABEL_15;
      }
      v13 = (BugCheckParameter3 & 0x20) == 0;
    }
    v49 = v13;
    goto LABEL_14;
  }
  v30 = 5;
  LOBYTE(v61) = 0;
  if ( v16 > 5 )
    v30 = v16;
  v18 = 8 * v30;
LABEL_15:
  v50 = *(_DWORD *)(BugCheckParameter2 + 32);
  v19 = BugCheckParameter2;
  v20 = HIBYTE(v50);
  if ( (v50 & 0x8000000) == 0
    || BugCheckParameter2 >= 0xFFFFDE0000000000uLL
    && (v20 = 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL, BugCheckParameter2 < v20)
    && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
    && ((v36 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v19) != 9) )
  {
    v17 = HIBYTE(v50) & 7;
  }
  if ( v17 < v18 >> 3 )
  {
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v40 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
        {
          HvlNotifyLongSpinWait(v40);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    v51 = *(_DWORD *)(BugCheckParameter2 + 32);
    HIBYTE(v51) = (v18 >> 3) | HIBYTE(v51) & 0xF8;
    v20 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 32) = v51;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = BugCheckParameter2;
    v11 = a6;
  }
  if ( (*(_QWORD *)v19 & 1) == 0 )
  {
    v37 = BugCheckParameter2;
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v38 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
        {
          HvlNotifyLongSpinWait(v38);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v37 + 24) < 0 );
    }
    v39 = BugCheckParameter2;
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (BugCheckParameter3 & 1) != 0 )
  {
    v21 = v8 & 0xF;
    if ( (v8 & 0xF) == 1 )
    {
      BugCheckParameter3 |= 0x8000000000000000uLL;
    }
    else if ( (MiFlags & 0x8000) != 0 )
    {
      v31 = 0xFFFFF68000000000uLL;
      if ( v9 < 0xFFFFF68000000000uLL || (v31 = 0xFFFFF6FFFFFFFFFFuLL, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        if ( (BugCheckParameter3 & 0x8000000000000000uLL) == 0 && (MiFlags & 0x20000) != 0 )
        {
          v32 = BugCheckParameter2;
          v33 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          v34 = BugCheckParameter2;
          PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, 0LL);
          v11 = a6;
          if ( !PagePrivilege )
            MiMarkPfnVerified(v34, 7LL);
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 && v21 == 3 )
    {
      *(_OWORD *)v57 = 0LL;
      if ( (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 2, v57) )
      {
        if ( (BugCheckParameter3 & 0x20) == 0 && _bittest64(&MiFlags, 0x24u) && (v8 & 0x800) != 0 )
          BugCheckParameter3 |= 0x20uLL;
        v43 = VslSetPrivilegedPte(
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                v9,
                v57,
                0LL);
        if ( v43 == -2147483595 )
        {
          if ( v9 < qword_140E2D668 || v9 >= qword_140E2D670 )
            KeBugCheckEx(0x1Au, 0x51517uLL, v9, 0LL, 0LL);
        }
        else if ( v43 < 0 )
        {
          KeBugCheckEx(0x1Au, 0x51510uLL, BugCheckParameter2, v43, 0LL);
        }
      }
    }
    if ( a7
      && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v9)) != 0
      && ((*(_DWORD *)(v44 + 56) & 0x20) == 0
       || (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0
       || *(__int64 *)(BugCheckParameter2 + 8) <= 0) )
    {
      if ( (*(_DWORD *)(v44 + 56) & 0x10) != 0 && (unsigned __int8)v49 < 6u )
      {
        v45 = v61;
        LOBYTE(v45) = v61 & 0xF0 | 6;
        v61 = v45;
      }
    }
    else
    {
      VirtualFaultPageInfo = 0LL;
    }
    if ( v10 )
    {
      BugCheckParameter3 = ((unsigned __int64)(unsigned __int8)v61 << 56) ^ ((BugCheckParameter3 & 0xF0FFFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned __int8)v61 << 56)) ^ ((unsigned __int64)(unsigned __int8)v61 << 56)) & 0x8FFFFFFFFFFFFFFFuLL;
      LOBYTE(v18) = v18 | 2;
    }
    if ( v21 )
    {
      if ( v21 != 3 )
      {
        CurrentPrcb = 0LL;
        goto LABEL_31;
      }
    }
    else
    {
      *(_QWORD *)&v55 = KeGetCurrentThread()->ApcState.Process;
    }
    *((_QWORD *)&v55 + 1) = a2;
    v56 = (BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL;
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->MmFaultCompletionInfo = &v55;
    if ( !KdPitchDebugger && KdpOweBreakpoint )
      KdpSetOwedBreakpoints(v9);
LABEL_31:
    v23 = a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL && v21 )
      {
        LOBYTE(v18) = v18 | 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
        v24 = BugCheckParameter3;
        v25 = 0;
        a6 = 0;
        v54 = BugCheckParameter3;
        goto LABEL_127;
      }
      v23 = a2;
    }
    v24 = BugCheckParameter3;
    v25 = 0;
    v54 = BugCheckParameter3;
    a6 = 0;
    if ( v23 < 0xFFFFF6FB7DBED000uLL )
    {
LABEL_33:
      if ( _bittest64(&MiFlags, 0x24u) && (v24 & 0x20) == 0 && v23 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(a2, v24);
        v25 = a6;
      }
      v26 = a2;
      *(_QWORD *)a2 = v24;
      if ( v25 )
      {
        MiWritePteShadow(a2, v24);
        v26 = a2;
      }
      if ( (v18 & 1) != 0 )
      {
        MiReplicatePteChange(v26, 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
      }
      if ( CurrentPrcb )
        CurrentPrcb->MmFaultCompletionInfo = 0LL;
      if ( VirtualFaultPageInfo )
      {
        v47 = *(_DWORD *)(a7 + 56);
        if ( ((v47 & 1) == 0 || (BugCheckParameter3 & 0x42) != 0)
          && ((v47 & 2) == 0 || (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL) )
        {
          LOBYTE(v18) = v18 | 4;
          v48 = v18;
          if ( (v47 & 0x20) != 0 )
          {
            LOBYTE(v18) = v18 & 0xFB;
            if ( !*(_QWORD *)(a7 + 48) )
              LOBYTE(v18) = v48 ^ (v48 ^ (4 * MiCompleteSecureProcessFault(&BugCheckParameter2, &BugCheckParameter3))) & 4;
          }
          if ( (v18 & 4) != 0 )
            MiFillVirtualFaultInfo(VirtualFaultPageInfo, (BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL);
        }
      }
      goto LABEL_41;
    }
LABEL_127:
    if ( a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v46 = MiSanitizeShadowPxe(0LL, &v54);
      v24 = v54;
      v25 = v46;
      a6 = v46;
    }
    v23 = a2;
    goto LABEL_33;
  }
LABEL_41:
  if ( v10 && (v18 & 2) == 0 )
    *(_BYTE *)v10 = v61;
  if ( (v11 & 2) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      _InterlockedIncrement(&dword_140E38580);
    if ( !dword_140E371D8 )
      dword_140E371D8 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
    __incgsdword(0x2E90u);
  }
  else if ( (v11 & 4) == 0 )
  {
    v27 = v52;
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      v27 = v52 | 2;
    if ( v10 || (v8 & 0xF) == 0 )
      v27 |= 4u;
    v28 = v27 | 8;
    if ( (v11 & 0x20) == 0 )
      v28 = v27;
    MiAddWorkingSetEntries(a1, v9, 1LL, v28);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(BugCheckParameter2, v8 & 0xF, v9);
  return 1LL;
}
