/*
 * XREFs of MiCompleteProtoPteFault @ 0x1402EBD20
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiUserPdeOrAbove @ 0x140238638 (MiUserPdeOrAbove.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PfSnLogPageFaultCommon @ 0x140276060 (PfSnLogPageFaultCommon.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E1B00 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiIsAddressGlobal @ 0x1402ECF00 (MiIsAddressGlobal.c)
 *     PfSnReferenceProcessTrace @ 0x1402ED090 (PfSnReferenceProcessTrace.c)
 *     MiGetSessionIdForVa @ 0x1402ED220 (MiGetSessionIdForVa.c)
 *     PfSnCheckLoggingForThread @ 0x1402EE230 (PfSnCheckLoggingForThread.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObFastReferenceObjectLocked @ 0x140397714 (ObFastReferenceObjectLocked.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403C6078 (MiCheckAndUpdateIoAttribution.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MiSetFaultPacketDirectives @ 0x1404374AC (MiSetFaultPacketDirectives.c)
 *     MiSystemImageHasPrivateFixups @ 0x140448F10 (MiSystemImageHasPrivateFixups.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  ULONG_PTR v12; // r13
  unsigned int v13; // ebx
  __int64 v14; // r11
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rsi
  signed __int64 TransitionPteValid; // rsi
  __int64 v30; // r9
  __int64 HasPrivateFixups; // r8
  int v32; // edi
  unsigned int v33; // r15d
  int v34; // edx
  int v35; // eax
  unsigned __int64 v36; // r14
  ULONG_PTR v37; // r8
  int v38; // r14d
  int v39; // eax
  _BYTE *v40; // rdx
  _BYTE *v41; // rcx
  char v42; // cl
  unsigned __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // edx
  __int16 v46; // ax
  int v47; // ebx
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // r15
  volatile signed __int64 *v54; // rdi
  signed __int64 v55; // rdx
  signed __int64 v56; // rax
  signed __int64 v57; // r12
  unsigned int v58; // edx
  unsigned __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rbx
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rbx
  struct _KTHREAD *CurrentThread; // r13
  BOOL v70; // esi
  __int64 v71; // rax
  struct _EX_RUNDOWN_REF *v72; // r15
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  _KPROCESS *v75; // rax
  __int64 v76; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  _KPROCESS *v80; // rcx
  _KPROCESS *Process; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  ULONG_PTR v83; // r15
  unsigned __int64 v84; // rdi
  unsigned int v85; // r15d
  unsigned __int8 v86; // dl
  __int64 v87; // rcx
  __int64 Address; // r12
  int v89; // eax
  __int64 v90; // rax
  signed __int64 v91; // rax
  signed __int64 v92; // rtt
  unsigned __int64 v93; // rax
  bool v94; // zf
  int v95; // eax
  char PagePrivilege; // dl
  __int64 v97; // r9
  unsigned __int64 v98; // rtt
  ULONG_PTR v99; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *v100; // [rsp+50h] [rbp-98h]
  int v101; // [rsp+58h] [rbp-90h] BYREF
  __int64 v102; // [rsp+60h] [rbp-88h]
  __int128 v103; // [rsp+68h] [rbp-80h] BYREF
  __int64 v104; // [rsp+78h] [rbp-70h]
  unsigned __int64 v105; // [rsp+80h] [rbp-68h] BYREF
  __int64 v106; // [rsp+88h] [rbp-60h]
  __int64 v107; // [rsp+90h] [rbp-58h]
  __int64 v110; // [rsp+F8h] [rbp+10h]
  _BYTE *v113; // [rsp+110h] [rbp+28h]

  v5 = *a1;
  v6 = a1[7];
  v101 = 0;
  v7 = 0;
  v106 = v6;
  *((_QWORD *)&v103 + 1) = v5;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v100 = (volatile signed __int64 *)v8;
  v9 = 48 * a2 - 0x220000000000LL;
  v99 = v9;
  v10 = *(_QWORD *)(v9 + 16);
  v107 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (v10 & 0x400) == 0 )
  {
    v11 = 0LL;
    v102 = 0LL;
    v104 = 0LL;
    goto LABEL_3;
  }
  v51 = v10;
  if ( qword_140E2DB80 && (v10 & 0x10) == 0 )
    v51 = v10 & ~qword_140E2DB80;
  v52 = v51 >> 16;
  v102 = v52;
  v53 = *(_QWORD *)v52;
  v104 = *(_QWORD *)v52;
  if ( !PfSnNumActiveTraces )
  {
    v11 = v52;
    v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_3;
  }
  v54 = (volatile signed __int64 *)(v53 + 64);
  _m_prefetchw((const void *)(v53 + 64));
  v55 = *(_QWORD *)(v53 + 64);
  if ( (v55 & 0xF) != 0 )
  {
    do
    {
      v56 = _InterlockedCompareExchange64(v54, v55 - 1, v55);
      if ( v55 == v56 )
        break;
      v55 = v56;
    }
    while ( (v56 & 0xF) != 0 );
  }
  v57 = v55;
  v58 = v55 & 0xF;
  v59 = v57 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v58 > 1 )
  {
LABEL_85:
    ObpTraceObjectReferenceIfActive(v59 - 48, 1LL, 1666411853LL);
    if ( v59 )
      goto LABEL_86;
    goto LABEL_206;
  }
  if ( v58 )
  {
    v90 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v59 - 48), 0xFuLL);
    if ( v90 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v59, 0x10uLL, v90 + 15);
    _m_prefetchw((const void *)v54);
    v91 = *v54;
    while ( (v91 & 0xF) == 0 && v59 == (v91 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v92 = v91;
      v91 = _InterlockedCompareExchange64(v54, v91 + 15, v91);
      if ( v92 == v91 )
        goto LABEL_85;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v59 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    goto LABEL_85;
  }
LABEL_206:
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v53 + 72));
  v59 = ObFastReferenceObjectLocked(v53 + 64, 1666411853LL);
  MiReleaseSpinLockShared((volatile signed __int32 *)(v53 + 72), 0x11u);
LABEL_86:
  v63 = *(_QWORD *)(v99 + 8) | 0x8000000000000000uLL;
  SessionIdForVa = MiGetSessionIdForVa(*((_QWORD *)&v103 + 1), v60, v61, v62);
  v65 = *(_QWORD *)(v52 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)v52 + 56LL) & 0x20) != 0 )
  {
    if ( v63 < v65 || v63 >= v65 + 8LL * *(unsigned int *)(v52 + 44) )
    {
      v66 = ((v63 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v52, SessionIdForVa, v52) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL;
      v67 = (unsigned __int64)*(unsigned int *)(v52 + 36) << 9;
    }
    else
    {
      v66 = ((v63 << 9) - (v65 << 9)) & 0xFFFFFFFFFFFFF000uLL;
      v67 = (unsigned __int64)*(unsigned int *)(v52 + 36) << 9;
    }
  }
  else
  {
    if ( v65 )
      v66 = (__int64)(v63 - v65) >> 3 << 12;
    else
      v66 = 0LL;
    v67 = (((unsigned __int64)(*(_DWORD *)(v52 + 32) & 0xFFC0) << 26) | *(unsigned int *)(v52 + 36)) << 12;
  }
  v68 = v67 + v66;
  CurrentThread = KeGetCurrentThread();
  v70 = (*(_DWORD *)(v53 + 56) & 0x20) != 0;
  v71 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
  v72 = (struct _EX_RUNDOWN_REF *)v71;
  if ( v71 )
  {
    if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v71, v70) )
      PfSnLogPageFaultCommon((__int64)v72, v59, *(_QWORD *)(v59 + 24), v68, v70);
    _m_prefetchw(&v72[45]);
    v98 = v72[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v98 != _InterlockedCompareExchange64((volatile signed __int64 *)&v72[45], v98 - 2, v98) )
      ExfReleaseRundownProtection(v72 + 45);
  }
  _m_prefetchw((const void *)v54);
  v73 = *v54;
  do
  {
    if ( (v59 ^ v73) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v59, 0x63536D4Du);
      v11 = v102;
      v9 = v99;
      v8 = (unsigned __int64)v100;
      goto LABEL_3;
    }
    v74 = v73;
    v73 = _InterlockedCompareExchange64(v54, v73 + 1, v73);
  }
  while ( v74 != v73 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v59 - 48);
  v11 = v102;
  v9 = v99;
  v8 = (unsigned __int64)v100;
LABEL_3:
  v12 = 48 * MiGetContainingPageTable(v8) - 0x220000000000LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v12 + 24) = ((*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (((*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL)
                                                                                 + 1) ^ *(_QWORD *)(v12 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (v15 & 1) != 0
    && ((v15 & 0x42) == 0 || (v15 & 0x20) == 0) )
  {
    v75 = MiPteHasShadow();
    if ( v75 )
    {
      KernelWaitTime = v75[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v78 = *(_QWORD *)(KernelWaitTime + 8 * (v76 & (v8 >> 3)));
        if ( (v78 & 0x20) != 0 )
          v15 |= 0x20uLL;
        v79 = v15;
        v15 |= 0x42uLL;
        if ( (v78 & 0x42) == 0 )
          v15 = v79;
      }
    }
  }
  if ( (v15 & 0x400) == 0 )
    goto LABEL_71;
  v16 = v15;
  if ( qword_140E2DB80 && (v15 & 0x10) == 0 )
    v16 = v15 & ~qword_140E2DB80;
  if ( HIDWORD(v16) == 0xFFFFFFFF )
  {
    v17 = (v15 >> 5) & 0x1F;
  }
  else
  {
LABEL_71:
    v7 = 1;
    v49 = (v10 >> 5) & 0x1F;
    if ( (v15 & 8) != 0 )
      LODWORD(v49) = 1;
    v50 = a3;
    LODWORD(v17) = v49;
    if ( a3 )
    {
      if ( (v49 & 4) == 0 )
        v50 = 0LL;
      a3 = v50;
    }
  }
  v18 = 2LL;
  if ( (MiFlags & 0x8000) != 0 )
  {
    if ( *((_QWORD *)&v103 + 1) < 0xFFFF800000000000uLL
      || *((_QWORD *)&v103 + 1) >= 0xFFFFF68000000000uLL && *((_QWORD *)&v103 + 1) <= 0xFFFFF6FFFFFFFFFFuLL
      || (v17 & 2) == 0 )
    {
      v14 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_16;
    }
    PagePrivilege = MiGetPagePrivilege(v9, 2, 0LL);
    if ( (PagePrivilege & 1) != 0 || (MiFlags & 0x10000) != 0 )
      goto LABEL_200;
    if ( *(__int64 *)(v9 + 40) >= 0 )
      goto LABEL_201;
    if ( (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
    {
LABEL_200:
      if ( (PagePrivilege & 1) == 0 )
      {
LABEL_201:
        if ( (PagePrivilege & 8) == 0 )
          goto LABEL_202;
        LODWORD(v17) = 1;
LABEL_222:
        a3 = 0LL;
LABEL_204:
        v14 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
    }
    else if ( !MiIsDriverPage(v8, 0) )
    {
LABEL_202:
      LODWORD(v17) = v17 & 0xFFFFFFFD;
      if ( !(_DWORD)v17 )
        LODWORD(v17) = 1;
      goto LABEL_204;
    }
    LODWORD(v17) = 3;
    goto LABEL_222;
  }
LABEL_16:
  v19 = (unsigned int)v17 & 0xFFFFFFE7;
  if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0x40 )
  {
    if ( BYTE2(*(_DWORD *)(v9 + 32)) < 0x40u )
    {
      v19 = (unsigned int)v19 | 8;
    }
    else if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) == 0x80 )
    {
      v19 = (unsigned int)v19 | 0x18;
    }
  }
  v20 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v19] & 0xFFF0000000000E7FuLL | 0x21;
  v21 = 0x7FFFFFFEFFFFLL;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v26 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v19] & 0xFFF0000000000E7FuLL | 0x121;
  }
  else
  {
    if ( v8 >= 0xFFFFF6FB40000000uLL
      && v8 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v8 == 0xFFFFF6FB7DBEDF68uLL
        ? (v20 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v19] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL)
        : (v20 &= v14),
          (unsigned int)MiUserPdeOrAbove(v8)) )
    {
      v20 |= 4uLL;
      v22 = v87 << 25;
    }
    else
    {
      v22 = v8 << 25;
    }
    v23 = v22 >> 16;
    if ( v23 <= 0x7FFFFFFEFFFFLL )
      v20 |= 4uLL;
    IsAddressGlobal = MiIsAddressGlobal(v23, v20, 0x7FFFFFFEFFFFLL, v18);
    v26 = v20 | 0x100;
    if ( !IsAddressGlobal )
      v26 = v25;
  }
  v27 = a4;
  v28 = v26 | 0x42;
  if ( (v19 & 5) != 4 || (int)v19 >= 0 )
    v28 = v26;
  TransitionPteValid = v28 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a4 && (v19 & 5) == 4 )
  {
    a3 = 1LL;
  }
  else if ( !a3 )
  {
    goto LABEL_29;
  }
  if ( *a1 <= v21 )
  {
    if ( (Process = KeGetCurrentThread()->ApcState.Process, TransitionPteValid >= 0)
      && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
      || (Trees = Process[4].AutoBoostState.Trees) != 0LL && (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1] )
    {
      v30 = 0LL;
      a3 = 0LL;
      goto LABEL_30;
    }
  }
  if ( (v17 & 5) != 5 )
  {
    v83 = v99;
    TransitionPteValid |= 0x42uLL;
    if ( (!_bittest64((const signed __int64 *)(v99 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(v99 + 34) >> 4)) != 0
      && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v99 + 16)) )
    {
      v84 = 0LL;
      v85 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v99 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v85 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v85);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v99 + 24) < 0 );
      }
      v86 = *(_BYTE *)(v99 + 34);
      v83 = v99;
      v11 = v102;
      if ( (!_bittest64((const signed __int64 *)(v99 + 16), 0xAu) & (unsigned __int8)~(v86 >> 4)) != 0 )
      {
        if ( (v86 & 8) == 0 )
        {
          v105 = *(_QWORD *)(v99 + 16);
          if ( (v105 & 4) != 0 )
          {
            *(_QWORD *)(v99 + 16) &= ~4uLL;
            MiClearPageFileReservation((__int64 *)&v105);
            v84 = v105;
          }
        }
        MiSetPfnModified(v99, 1);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v84 )
        MiReleasePageFileInfo(v107, v84, 1LL);
      v27 = a4;
    }
    if ( (v10 & 0x400) != 0 && (*(_DWORD *)(v106 + 184) & 0xF) != 1 )
    {
      MiCheckAndUpdateIoAttribution(v83, v27);
      LODWORD(v27) = a4;
    }
  }
LABEL_29:
  v30 = 0LL;
LABEL_30:
  v101 = 0;
  HasPrivateFixups = 0LL;
  v32 = 0;
  v33 = 0;
  if ( (_DWORD)v27 )
  {
LABEL_42:
    v37 = v99;
    goto LABEL_43;
  }
  *(_QWORD *)&v103 = 0LL;
  if ( (*(_QWORD *)(v99 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v99 + 8) >= 0 && *(_QWORD *)(v99 + 8) )
    goto LABEL_38;
  if ( *((_QWORD *)&v103 + 1) >= 0xFFFF800000000000uLL )
  {
    if ( !v104 || (*(_DWORD *)(v104 + 56) & 0x20) != 0 )
    {
      HasPrivateFixups = MiSystemImageHasPrivateFixups(*((_QWORD *)&v103 + 1), &v103, &v101, 0LL);
      if ( HasPrivateFixups )
      {
        v35 = v103;
        v34 = 1;
        v7 |= 2u;
        goto LABEL_40;
      }
    }
    goto LABEL_38;
  }
  if ( v11 )
  {
    if ( (*(_DWORD *)(v104 + 56) & 0x20) != 0 )
      v7 |= 4u;
  }
  else
  {
    v7 |= 4u;
    v80 = KeGetCurrentThread()->ApcState.Process;
    if ( v80[1].IdealProcessorAssignmentBlock
      && MiLocateCloneAddress(v80, *(_QWORD *)(v99 + 8) | 0x8000000000000000uLL, 0LL) )
    {
      v7 &= ~4u;
    }
  }
  if ( v7 < 4 )
  {
LABEL_38:
    v34 = 0;
LABEL_39:
    v35 = v102;
LABEL_40:
    LODWORD(v36) = v101;
    goto LABEL_41;
  }
  v34 = v30;
  *(_QWORD *)&v103 = v30;
  v110 = v30;
  if ( !KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[3] )
    goto LABEL_39;
  MiLockVadTree(1, (unsigned int)v30, HasPrivateFixups);
  Address = MiLocateAddress(*((_QWORD *)&v103 + 1));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address
    || (v89 = *(_DWORD *)(Address + 48), (v89 & 0x70) != 0x20)
    || (v89 & 0x200000) != 0
    || (v89 & 0x400000) == 0
    || (v97 = **(_QWORD **)(Address + 72),
        v36 = (*((_QWORD *)&v103 + 1) >> 12)
            + ((__int64)(*(_QWORD *)(Address + 80) - *(_QWORD *)(v97 + 136)) >> 3)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)),
        ((*(char *)(((unsigned __int64)((unsigned int)(*((_QWORD *)&v103 + 1) >> 12)
                                      + (unsigned int)((__int64)(*(_QWORD *)(Address + 80) - *(_QWORD *)(v97 + 136)) >> 3)
                                      - *(_DWORD *)(Address + 24)) >> 3)
                  + *(_QWORD *)(Address + 160)) >> (((*((_QWORD *)&v103 + 1) >> 12)
                                                   + ((__int64)(*(_QWORD *)(Address + 80) - *(_QWORD *)(v97 + 136)) >> 3)
                                                   - *(_DWORD *)(Address + 24)) & 7)) & 1) == 0) )
  {
    HasPrivateFixups = v110;
    v34 = 0;
    goto LABEL_39;
  }
  v35 = MiOffsetToProtos(**(_QWORD **)(Address + 72), v36 << 12, &v103);
  HasPrivateFixups = *(_QWORD *)(Address + 144);
  v7 |= 2u;
  v34 = *(_DWORD *)(Address + 136);
LABEL_41:
  if ( (v7 & 2) == 0 )
    goto LABEL_42;
  v33 = MiPrivateFixup((_DWORD)a1, v35, v36, v99, HasPrivateFixups, v34);
  MiLockAndDecrementShareCount(v99);
  if ( v33 == 297 || v33 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v12);
    if ( v33 == 297 )
      return (unsigned int)-1073740748;
    return v33;
  }
  if ( (v33 & 0x80000000) != 0 )
    return v33;
  TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v100);
  v37 = 48 * (((unsigned __int64)TransitionPteValid >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v99 = v37;
  if ( *((_QWORD *)&v103 + 1) >= 0xFFFF800000000000uLL && (*(_DWORD *)(v37 + 32) & 0x8000000) != 0 )
    v32 = 2;
  LODWORD(v17) = 0;
  v7 &= ~1u;
LABEL_43:
  v38 = 0;
  if ( (v7 & 1) == 0 )
    v38 = v17;
  v39 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v40 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    v113 = v40;
    if ( *v40 == 5 )
      goto LABEL_48;
  }
  else
  {
    v40 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v41 = v40;
  v40 = 0LL;
  v113 = 0LL;
  if ( v39 && *v41 == 3 )
    v32 |= 1u;
LABEL_48:
  if ( a3
    && (TransitionPteValid & 0x800) == 0
    && (TransitionPteValid & 0x200) != 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveGroupPadding[0] )
  {
    if ( !v40 && (MiFlags & 0x2000000) == 0 && (byte_140E2DAC9 & 1) != 0 )
    {
      TransitionPteValid &= ~0x20uLL;
      v7 |= 0x10u;
    }
    v7 |= 8u;
  }
  v42 = *((_BYTE *)a1 + 69);
  if ( (v42 & 0x10) == 0 )
    goto LABEL_50;
  v93 = a1[2];
  if ( (v93 & 1) == 0 || *(_BYTE *)(v93 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
  {
    TransitionPteValid &= ~0x20uLL;
LABEL_50:
    v43 = a1[2];
    if ( (v43 & 1) != 0 && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      TransitionPteValid &= ~0x20uLL;
  }
  if ( (v42 & 9) != 8 || (v42 & 4) != 0 )
    goto LABEL_61;
  v44 = *((unsigned __int16 *)a1 + 33);
  v45 = (unsigned int)v100;
  if ( (_WORD)v44 )
  {
    if ( v44 + *((unsigned __int16 *)a1 + 32) != (((unsigned int)v100 >> 3) & 0x1FF) )
      goto LABEL_57;
    if ( *(__int64 *)(v37 + 40) < 0 )
    {
      if ( (*((_BYTE *)a1 + 69) & 2) == 0 )
        goto LABEL_58;
      goto LABEL_57;
    }
    if ( (*((_BYTE *)a1 + 69) & 2) == 0 )
    {
LABEL_57:
      MiEmptyDeferredWorkingSetEntries((__int64)(a1 + 7));
      v45 = (unsigned int)v100;
    }
  }
LABEL_58:
  v46 = *((_WORD *)a1 + 33);
  v37 = v99;
  if ( v46 )
  {
    *((_WORD *)a1 + 33) = v46 + 1;
  }
  else
  {
    *((_WORD *)a1 + 33) = 1;
    *((_WORD *)a1 + 32) = (v45 >> 3) & 0x1FF;
    if ( *(__int64 *)(v99 + 40) >= 0 )
      *((_BYTE *)a1 + 69) |= 2u;
    else
      *((_BYTE *)a1 + 69) &= ~2u;
  }
  v40 = v113;
  v32 |= 4u;
LABEL_61:
  v47 = v32 | 0x10;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
    v47 = v32;
  if ( !(unsigned int)MiAllocateWsle(v106, (ULONG_PTR)v100, v37, v38, TransitionPteValid, v47, (__int64)v40) )
  {
    if ( (v47 & 4) != 0 )
      --*((_WORD *)a1 + 33);
    MiLockAndDecrementShareCount(v99);
    if ( (v7 & 2) == 0 )
      MiLockAndDecrementShareCount(v12);
    return (unsigned int)-1073741801;
  }
  if ( (v7 & 8) == 0 )
    return v33;
  v94 = a1[9] == 0;
  *(_QWORD *)&v103 = 0LL;
  if ( !v94 && (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    if ( *((_WORD *)a1 + 33) )
      MiEmptyDeferredWorkingSetEntries((__int64)(a1 + 7));
  }
  v95 = MiCopyOnWrite(*((ULONG_PTR *)&v103 + 1), v100, 0xFFFFFFFFFFFFFFFFuLL, (v7 >> 1) & 8, &v103);
  v33 = v95;
  if ( v95 >= 0 )
    return v33;
  MiSetFaultPacketDirectives(a1, (unsigned int)v95, v103);
  return 3221226548LL;
}
