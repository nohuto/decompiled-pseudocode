/*
 * XREFs of MiAllocateWsle @ 0x14024C6D0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A0B1C (MiInitializeWorkingSetList.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiProcessWsInSwapFault @ 0x140215CA4 (MiProcessWsInSwapFault.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetVirtualFaultPageInfo @ 0x1404285F0 (MiGetVirtualFaultPageInfo.c)
 *     MiFillVirtualFaultInfo @ 0x140428624 (MiFillVirtualFaultInfo.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     VslSetPrivilegedPte @ 0x140492280 (VslSetPrivilegedPte.c)
 *     MiLogAllocateWsleEvent @ 0x1404AC4F8 (MiLogAllocateWsleEvent.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KdpSetOwedBreakpoints @ 0x140B7C7DC (KdpSetOwedBreakpoints.c)
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
  unsigned __int64 v7; // r11
  int v8; // esi
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  char v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // dl
  unsigned int Queue; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // r9
  unsigned int v20; // eax
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // r15
  ULONG_PTR v23; // rdx
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // rdx
  char v26; // bl
  int v27; // edx
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  ULONG_PTR v31; // rbx
  int v32; // ecx
  ULONG_PTR v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned int v37; // r14d
  int v38; // eax
  int v39; // edi
  unsigned __int64 v40; // rcx
  ULONG_PTR v41; // r14
  unsigned int v42; // r15d
  ULONG_PTR v43; // r15
  int PagePrivilege; // eax
  ULONG_PTR v45; // rbx
  unsigned int v46; // r15d
  ULONG_PTR v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned int v49; // ecx
  int v50; // eax
  __int64 v51; // r10
  int v52; // eax
  char v53; // r15
  char v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+34h] [rbp-84h]
  char v56; // [rsp+37h] [rbp-81h]
  int v57; // [rsp+3Ch] [rbp-7Ch]
  __int64 VirtualFaultPageInfo; // [rsp+40h] [rbp-78h]
  ULONG_PTR v59; // [rsp+48h] [rbp-70h] BYREF
  __int128 v60; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v61; // [rsp+60h] [rbp-58h]
  unsigned __int64 v62[10]; // [rsp+68h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+18h] BYREF
  int v66; // [rsp+D8h] [rbp+20h]

  v66 = a4;
  BugCheckParameter2 = a3;
  v7 = 0xFFFFF68000000000uLL;
  v61 = 0LL;
  v60 = 0LL;
  v8 = *(_DWORD *)(a1 + 184);
  v57 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v57 = 1;
  }
  else
  {
    v10 = 0LL;
    if ( (v8 & 0xF) == 0 && ((*(_QWORD *)BugCheckParameter2 >> 42) & 7) != 0 )
      *(_QWORD *)BugCheckParameter2 &= 0xFFFFE3FFFFFFFFFFuLL;
  }
  v11 = a6;
  if ( (a6 & 1) != 0 )
  {
    MiProcessWsInSwapFault(a1, BugCheckParameter2, v9, (ULONG_PTR)&BugCheckParameter3);
    a4 = v66;
    v7 = 0xFFFFF68000000000uLL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v54 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v15 = Queue >> 9;
  }
  else
  {
    v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v48 = CurrentThread->Process[1].Padding[3];
    if ( v48 )
    {
      v49 = *(_DWORD *)(v48 + 1092);
      if ( v15 >= v49 )
        LOBYTE(v15) = v49;
    }
  }
  v16 = v15 & 7;
  v17 = 5LL;
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
        v66 = a4;
        goto LABEL_15;
      }
      v13 = (BugCheckParameter3 & 0x20) == 0;
    }
    v54 = v13;
    goto LABEL_14;
  }
  LOBYTE(v66) = 0;
  v39 = 5;
  if ( v16 > 5 )
    v39 = v16;
  v18 = 8 * v39;
LABEL_15:
  v19 = 0xFFFFDE0000000000uLL;
  v20 = *(_DWORD *)(BugCheckParameter2 + 32);
  v21 = BugCheckParameter2;
  v56 = HIBYTE(v20);
  v22 = BugCheckParameter2;
  v23 = HIBYTE(v20);
  if ( (v20 & 0x8000000) == 0
    || (v21 = 0xFFFFDE0000000000uLL, BugCheckParameter2 >= 0xFFFFDE0000000000uLL)
    && (v21 = 0xFFFFDE0000000030uLL, v23 = 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL, BugCheckParameter2 < v23)
    && ((v21 = qword_140E35C40,
         v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
         v23 < qword_140E35C40)
     || (v21 = qword_140E35C40 + 2048, v23 >= qword_140E35C40 + 2048))
    && ((BYTE2(v20) & 7) == 6 || (unsigned int)MiGetPfnSlabType(BugCheckParameter2) != 9) )
  {
    v17 = v56 & 7;
  }
  if ( (unsigned int)v17 < v18 >> 3 )
  {
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v23, v17, v19) )
        {
          HvlNotifyLongSpinWait(v37);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v23 = 0x7FFFFFFFFFFFFFFFLL;
    v55 = *(_DWORD *)(BugCheckParameter2 + 32);
    HIBYTE(v55) = (v18 >> 3) | HIBYTE(v55) & 0xF8;
    v21 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 32) = v55;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = BugCheckParameter2;
    v11 = a6;
    v7 = 0xFFFFF68000000000uLL;
  }
  if ( (*(_QWORD *)v22 & 1) == 0 )
  {
    v45 = BugCheckParameter2;
    v46 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v46 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v23, v17, v19) )
        {
          HvlNotifyLongSpinWait(v46);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v45 + 24) < 0 );
    }
    v47 = BugCheckParameter2;
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 0xFFFFF68000000000uLL;
  }
  v24 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 1) != 0 )
  {
    v25 = 0x8000000000000000uLL;
    v26 = v8 & 0xF;
    if ( (v8 & 0xF) == 1 )
    {
      BugCheckParameter3 |= 0x8000000000000000uLL;
    }
    else if ( (MiFlags & 0x8000) != 0 )
    {
      v40 = v7;
      if ( v9 < v7 || (v40 = 0xFFFFF6FFFFFFFFFFuLL, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        if ( (BugCheckParameter3 & 0x8000000000000000uLL) == 0 && (MiFlags & 0x20000) != 0 )
        {
          v41 = BugCheckParameter2;
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v42 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40, v25, v24, v19) )
              {
                HvlNotifyLongSpinWait(v42);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v41 + 24) < 0 );
          }
          v43 = BugCheckParameter2;
          PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, 0LL);
          v11 = a6;
          if ( !PagePrivilege )
            MiMarkPfnVerified(v43, 7LL);
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 && v26 == 3 )
    {
      *(_OWORD *)v62 = 0LL;
      if ( (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 2, v62) )
      {
        if ( (BugCheckParameter3 & 0x20) == 0 && _bittest64(&MiFlags, 0x24u) && (v8 & 0x800) != 0 )
          BugCheckParameter3 |= 0x20uLL;
        v38 = VslSetPrivilegedPte(
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                v9,
                v62,
                0LL);
        if ( v38 == -2147483595 )
        {
          if ( v9 < qword_140E2D9E8 || v9 >= qword_140E2D9F0 )
            KeBugCheckEx(0x1Au, 0x51517uLL, v9, 0LL, 0LL);
        }
        else if ( v38 < 0 )
        {
          KeBugCheckEx(0x1Au, 0x51510uLL, BugCheckParameter2, v38, 0LL);
        }
      }
    }
    if ( a7
      && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v9, v24, v19)) != 0
      && ((*(_DWORD *)(v51 + 56) & 0x20) == 0
       || (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0
       || *(__int64 *)(BugCheckParameter2 + 8) <= 0) )
    {
      v27 = v66;
      if ( (*(_DWORD *)(v51 + 56) & 0x10) != 0 && (unsigned __int8)v54 < 6u )
      {
        LOBYTE(v27) = v66 & 0xF0 | 6;
        v66 = v27;
      }
    }
    else
    {
      LOBYTE(v27) = v66;
      VirtualFaultPageInfo = 0LL;
    }
    if ( v10 )
    {
      v24 = 0xF0FFFFFFFFFFFFFFuLL;
      BugCheckParameter3 = ((unsigned __int64)(unsigned __int8)v27 << 56) ^ ((BugCheckParameter3 & 0xF0FFFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned __int8)v27 << 56)) ^ ((unsigned __int64)(unsigned __int8)v27 << 56)) & 0x8FFFFFFFFFFFFFFFuLL;
      LOBYTE(v18) = v18 | 2;
    }
    if ( v26 )
    {
      if ( v26 != 3 )
      {
        CurrentPrcb = 0LL;
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)&v60 = KeGetCurrentThread()->ApcState.Process;
    }
    *((_QWORD *)&v60 + 1) = a2;
    v61 = (BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL;
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->MmFaultCompletionInfo = &v60;
    if ( !KdPitchDebugger && KdpOweBreakpoint )
      KdpSetOwedBreakpoints(v9, 0xFFFFFFFFFFLL, v24, v19);
LABEL_30:
    v29 = 0xFFFFF6FB7DBED000uLL;
    v30 = a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL && v26 )
      {
        LOBYTE(v18) = v18 | 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
        v31 = BugCheckParameter3;
        v32 = 0;
        a6 = 0;
        v59 = BugCheckParameter3;
        goto LABEL_32;
      }
      v30 = a2;
    }
    v31 = BugCheckParameter3;
    v32 = 0;
    v59 = BugCheckParameter3;
    a6 = 0;
    if ( v30 < 0xFFFFF6FB7DBED000uLL )
    {
LABEL_35:
      if ( _bittest64(&MiFlags, 0x24u) )
      {
        if ( (v31 & 0x20) == 0 )
        {
          v29 = 0x4000000000LL;
          if ( v30 >= 0xFFFFF6C000000000uLL )
          {
            MiCheckLinearProtectedPteAccessedBit(a2, v31, 128LL);
            v32 = a6;
          }
        }
      }
      v33 = a2;
      *(_QWORD *)a2 = v31;
      if ( v32 )
      {
        MiWritePteShadow(a2, v31, v29, v19);
        v33 = a2;
      }
      if ( (v18 & 1) != 0 )
      {
        MiReplicatePteChange(v33, 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
      }
      if ( CurrentPrcb )
        CurrentPrcb->MmFaultCompletionInfo = 0LL;
      if ( VirtualFaultPageInfo )
      {
        v52 = *(_DWORD *)(a7 + 56);
        if ( ((v52 & 1) == 0 || (BugCheckParameter3 & 0x42) != 0)
          && ((v52 & 2) == 0 || (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL) )
        {
          LOBYTE(v18) = v18 | 4;
          v53 = v18;
          if ( (v52 & 0x20) != 0 )
          {
            LOBYTE(v18) = v18 & 0xFB;
            if ( !*(_QWORD *)(a7 + 48) )
              LOBYTE(v18) = v53 ^ (v53 ^ (4
                                        * MiCompleteSecureProcessFault(
                                            &BugCheckParameter2,
                                            &BugCheckParameter3,
                                            a7,
                                            v19))) & 4;
          }
          if ( (v18 & 4) != 0 )
            MiFillVirtualFaultInfo(VirtualFaultPageInfo, (BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL);
        }
      }
      goto LABEL_43;
    }
LABEL_32:
    if ( a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v50 = MiSanitizeShadowPxe(0LL, (__int64)&v59, v29);
      v31 = v59;
      v32 = v50;
      a6 = v50;
    }
    v30 = a2;
    goto LABEL_35;
  }
LABEL_43:
  if ( v10 && (v18 & 2) == 0 )
    *(_BYTE *)v10 = v66;
  if ( (v11 & 2) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      _InterlockedIncrement(&dword_140E38900);
    if ( !dword_140E37558 )
      dword_140E37558 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
    __incgsdword(0x2E90u);
  }
  else if ( (v11 & 4) == 0 )
  {
    v34 = v57;
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      v34 = v57 | 2;
    if ( v10 || (v8 & 0xF) == 0 )
      v34 |= 4u;
    v35 = v34 | 8;
    if ( (v11 & 0x20) == 0 )
      v35 = v34;
    MiAddWorkingSetEntries(a1, v9, 1uLL, v35);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(BugCheckParameter2, v8 & 0xF, v9, v19);
  return 1LL;
}
