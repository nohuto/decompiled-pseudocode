/*
 * XREFs of MiAllocateWsle @ 0x14021F980
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A5D8C (MiInitializeWorkingSetList.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     VslSetPrivilegedPte @ 0x14036C358 (VslSetPrivilegedPte.c)
 *     MiGetVirtualFaultPageInfo @ 0x140435B70 (MiGetVirtualFaultPageInfo.c)
 *     MiFillVirtualFaultInfo @ 0x140435BA4 (MiFillVirtualFaultInfo.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 *     MiLogAllocateWsleEvent @ 0x1404B1C68 (MiLogAllocateWsleEvent.c)
 *     MiReplicatePteChange @ 0x1404F761C (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KdpSetOwedBreakpoints @ 0x140B7A7DC (KdpSetOwedBreakpoints.c)
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
  ULONG_PTR v9; // r13
  __int64 v10; // r12
  char v11; // r14
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // dl
  unsigned int Queue; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // edi
  unsigned __int64 v19; // r9
  int v20; // eax
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // r15
  ULONG_PTR v23; // r8
  char v24; // bl
  int v25; // edx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v27; // rdx
  ULONG_PTR v28; // rbx
  int v29; // ecx
  ULONG_PTR v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r9
  unsigned int v34; // r14d
  int v35; // eax
  int v36; // edi
  unsigned __int64 v37; // rcx
  ULONG_PTR v38; // r14
  unsigned int v39; // r15d
  ULONG_PTR v40; // r15
  int PagePrivilege; // eax
  ULONG_PTR v42; // rdx
  ULONG_PTR v43; // rbx
  unsigned int v44; // r15d
  ULONG_PTR v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned int v47; // ecx
  int v48; // eax
  __int64 v49; // r10
  int v50; // eax
  char v51; // r15
  char v52; // [rsp+30h] [rbp-88h]
  int v53; // [rsp+34h] [rbp-84h]
  char v54; // [rsp+37h] [rbp-81h]
  int v55; // [rsp+3Ch] [rbp-7Ch]
  __int64 VirtualFaultPageInfo; // [rsp+40h] [rbp-78h]
  ULONG_PTR v57; // [rsp+48h] [rbp-70h] BYREF
  __int128 v58; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v59; // [rsp+60h] [rbp-58h]
  unsigned __int64 v60[10]; // [rsp+68h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+18h] BYREF
  int v64; // [rsp+D8h] [rbp+20h]

  v64 = a4;
  BugCheckParameter2 = a3;
  v7 = 0xFFFFF68000000000uLL;
  v59 = 0LL;
  v58 = 0LL;
  v8 = *(_DWORD *)(a1 + 184);
  v55 = 0;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v55 = 1;
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
    MiProcessWsInSwapFault(a1, BugCheckParameter2, v9, &BugCheckParameter3);
    a4 = v64;
    v7 = 0xFFFFF68000000000uLL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v52 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v15 = Queue >> 9;
  }
  else
  {
    v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v46 = CurrentThread->Process[1].Padding[3];
    if ( v46 )
    {
      v47 = *(_DWORD *)(v46 + 1092);
      if ( v15 >= v47 )
        LOBYTE(v15) = v47;
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
        v64 = a4;
        goto LABEL_15;
      }
      v13 = (BugCheckParameter3 & 0x20) == 0;
    }
    v52 = v13;
    goto LABEL_14;
  }
  LOBYTE(v64) = 0;
  v36 = 5;
  if ( v16 > 5 )
    v36 = v16;
  v18 = 8 * v36;
LABEL_15:
  v19 = 0xFFFFDE0000000000uLL;
  v20 = *(_DWORD *)(BugCheckParameter2 + 32);
  v21 = BugCheckParameter2;
  v54 = HIBYTE(v20);
  v22 = BugCheckParameter2;
  if ( (v20 & 0x8000000) == 0
    || (v21 = 0xFFFFDE0000000000uLL, BugCheckParameter2 >= 0xFFFFDE0000000000uLL)
    && (v21 = 0xFFFFDE0000000030uLL, BugCheckParameter2 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL)
    && ((v21 = qword_140E35B00,
         v42 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
         v42 < qword_140E35B00)
     || (v21 = qword_140E35B00 + 2048, v42 >= qword_140E35B00 + 2048))
    && ((BYTE2(v20) & 7) == 6 || (unsigned int)MiGetPfnSlabType(BugCheckParameter2) != 9) )
  {
    v17 = v54 & 7;
  }
  if ( v17 < v18 >> 3 )
  {
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v34 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
        {
          HvlNotifyLongSpinWait(v34);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v53 = *(_DWORD *)(BugCheckParameter2 + 32);
    HIBYTE(v53) = (v18 >> 3) | HIBYTE(v53) & 0xF8;
    v21 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 32) = v53;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = BugCheckParameter2;
    v11 = a6;
    v7 = 0xFFFFF68000000000uLL;
  }
  if ( (*(_QWORD *)v22 & 1) == 0 )
  {
    v43 = BugCheckParameter2;
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v44 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
        {
          HvlNotifyLongSpinWait(v44);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v43 + 24) < 0 );
    }
    v45 = BugCheckParameter2;
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = 0xFFFFF68000000000uLL;
  }
  v23 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 1) != 0 )
  {
    v24 = v8 & 0xF;
    if ( (v8 & 0xF) == 1 )
    {
      BugCheckParameter3 |= 0x8000000000000000uLL;
    }
    else if ( (MiFlags & 0x8000) != 0 )
    {
      v37 = v7;
      if ( v9 < v7 || (v37 = 0xFFFFF6FFFFFFFFFFuLL, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        if ( (BugCheckParameter3 & 0x8000000000000000uLL) == 0 && (MiFlags & 0x20000) != 0 )
        {
          v38 = BugCheckParameter2;
          v39 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v39 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37) )
              {
                HvlNotifyLongSpinWait(v39);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v38 + 24) < 0 );
          }
          v40 = BugCheckParameter2;
          PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, 0LL);
          v11 = a6;
          if ( !PagePrivilege )
            MiMarkPfnVerified(v40, 7LL);
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 && v24 == 3 )
    {
      *(_OWORD *)v60 = 0LL;
      if ( (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 2, v60) )
      {
        if ( (BugCheckParameter3 & 0x20) == 0 && _bittest64(&MiFlags, 0x24u) && (v8 & 0x800) != 0 )
          BugCheckParameter3 |= 0x20uLL;
        v35 = VslSetPrivilegedPte(
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                v9,
                v60,
                0LL);
        if ( v35 == -2147483595 )
        {
          if ( v9 < qword_140E2D8A8 || v9 >= qword_140E2D8B0 )
            KeBugCheckEx(0x1Au, 0x51517uLL, v9, 0LL, 0LL);
        }
        else if ( v35 < 0 )
        {
          KeBugCheckEx(0x1Au, 0x51510uLL, BugCheckParameter2, v35, 0LL);
        }
      }
    }
    if ( a7
      && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v9, v23, v19)) != 0
      && ((*(_DWORD *)(v49 + 56) & 0x20) == 0
       || (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0
       || *(__int64 *)(BugCheckParameter2 + 8) <= 0) )
    {
      v25 = v64;
      if ( (*(_DWORD *)(v49 + 56) & 0x10) != 0 && (unsigned __int8)v52 < 6u )
      {
        LOBYTE(v25) = v64 & 0xF0 | 6;
        v64 = v25;
      }
    }
    else
    {
      LOBYTE(v25) = v64;
      VirtualFaultPageInfo = 0LL;
    }
    if ( v10 )
    {
      v23 = 0xF0FFFFFFFFFFFFFFuLL;
      BugCheckParameter3 = ((unsigned __int64)(unsigned __int8)v25 << 56) ^ ((BugCheckParameter3 & 0xF0FFFFFFFFFFFFFFuLL | ((unsigned __int64)(unsigned __int8)v25 << 56)) ^ ((unsigned __int64)(unsigned __int8)v25 << 56)) & 0x8FFFFFFFFFFFFFFFuLL;
      LOBYTE(v18) = v18 | 2;
    }
    if ( v24 )
    {
      if ( v24 != 3 )
      {
        CurrentPrcb = 0LL;
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)&v58 = KeGetCurrentThread()->ApcState.Process;
    }
    *((_QWORD *)&v58 + 1) = a2;
    v59 = (BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL;
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->MmFaultCompletionInfo = &v58;
    if ( !KdPitchDebugger && KdpOweBreakpoint )
      KdpSetOwedBreakpoints(v9, 0xFFFFFFFFFFLL, v23, v19);
LABEL_30:
    v27 = a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL && v24 )
      {
        LOBYTE(v18) = v18 | 1;
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
        v28 = BugCheckParameter3;
        v29 = 0;
        a6 = 0;
        v57 = BugCheckParameter3;
        goto LABEL_32;
      }
      v27 = a2;
    }
    v28 = BugCheckParameter3;
    v29 = 0;
    v57 = BugCheckParameter3;
    a6 = 0;
    if ( v27 < 0xFFFFF6FB7DBED000uLL )
    {
LABEL_35:
      if ( _bittest64(&MiFlags, 0x24u) && (v28 & 0x20) == 0 && v27 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(a2, v28);
        v29 = a6;
      }
      v30 = a2;
      *(_QWORD *)a2 = v28;
      if ( v29 )
      {
        MiWritePteShadow(a2, v28);
        v30 = a2;
      }
      if ( (v18 & 1) != 0 )
      {
        MiReplicatePteChange(v30, 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
      }
      if ( CurrentPrcb )
        CurrentPrcb->MmFaultCompletionInfo = 0LL;
      if ( VirtualFaultPageInfo )
      {
        v50 = *(_DWORD *)(a7 + 56);
        if ( ((v50 & 1) == 0 || (BugCheckParameter3 & 0x42) != 0)
          && ((v50 & 2) == 0 || (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL) )
        {
          LOBYTE(v18) = v18 | 4;
          v51 = v18;
          if ( (v50 & 0x20) != 0 )
          {
            LOBYTE(v18) = v18 & 0xFB;
            if ( !*(_QWORD *)(a7 + 48) )
              LOBYTE(v18) = v51 ^ (v51 ^ (4
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
      v48 = MiSanitizeShadowPxe(0LL, &v57);
      v28 = v57;
      v29 = v48;
      a6 = v48;
    }
    v27 = a2;
    goto LABEL_35;
  }
LABEL_43:
  if ( v10 && (v18 & 2) == 0 )
    *(_BYTE *)v10 = v64;
  if ( (v11 & 2) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      _InterlockedIncrement(&dword_140E387C0);
    if ( !dword_140E37418 )
      dword_140E37418 = (unsigned __int8)((*(_DWORD *)(a1 + 184) & 0xF) - 1) <= 3u;
    __incgsdword(0x2E90u);
  }
  else if ( (v11 & 4) == 0 )
  {
    v31 = v55;
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      v31 = v55 | 2;
    if ( v10 || (v8 & 0xF) == 0 )
      v31 |= 4u;
    v32 = v31 | 8;
    if ( (v11 & 0x20) == 0 )
      v32 = v31;
    MiAddWorkingSetEntries(a1, v9, 1LL, v32);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(BugCheckParameter2, v8 & 0xF, v9, v19);
  return 1LL;
}
