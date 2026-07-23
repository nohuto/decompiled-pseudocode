/*
 * XREFs of MiCompleteProtoPteFault @ 0x14034D360
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     PfSnLogPageFaultCommon @ 0x14022B5F0 (PfSnLogPageFaultCommon.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140273B00 (MiCheckAndUpdateIoAttribution.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiIsAddressGlobal @ 0x14034E540 (MiIsAddressGlobal.c)
 *     PfSnReferenceProcessTrace @ 0x14034E6D0 (PfSnReferenceProcessTrace.c)
 *     MiGetSessionIdForVa @ 0x14034E860 (MiGetSessionIdForVa.c)
 *     PfSnCheckLoggingForThread @ 0x14034F870 (PfSnCheckLoggingForThread.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     ObFastReferenceObjectLocked @ 0x1403517CC (ObFastReferenceObjectLocked.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiSetFaultPacketDirectives @ 0x140429F2C (MiSetFaultPacketDirectives.c)
 *     MiSystemImageHasPrivateFixups @ 0x140441660 (MiSystemImageHasPrivateFixups.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // r11
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
  int v27; // edx
  __int64 v28; // rsi
  signed __int64 TransitionPteValid; // rsi
  __int64 v30; // r9
  __int64 HasPrivateFixups; // r8
  int v32; // edi
  unsigned int v33; // r15d
  int Blink; // edx
  int v35; // eax
  ULONG_PTR v36; // r14
  ULONG_PTR v37; // r8
  int v38; // r14d
  int v39; // eax
  _BYTE *v40; // rdx
  _BYTE *v41; // rcx
  char v42; // cl
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // edx
  __int16 v46; // ax
  int v47; // ebx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // r15
  volatile signed __int64 *v56; // rdi
  signed __int64 v57; // rdx
  signed __int64 v58; // rax
  signed __int64 v59; // r12
  unsigned int v60; // edx
  unsigned __int64 v61; // r12
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rbx
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rbx
  struct _KTHREAD *CurrentThread; // r13
  BOOL v72; // esi
  __int64 v73; // rax
  struct _EX_RUNDOWN_REF *v74; // r15
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  _KPROCESS *v77; // rax
  __int64 v78; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  _KPROCESS *v82; // rcx
  _KPROCESS *Process; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  __int64 v85; // r15
  __int64 v86; // r9
  unsigned __int64 v87; // rdi
  unsigned int v88; // r15d
  unsigned __int8 v89; // dl
  __int64 v90; // rcx
  struct _LIST_ENTRY *Address; // r12
  int Flink; // eax
  __int64 v93; // rax
  signed __int64 v94; // rax
  signed __int64 v95; // rtt
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  bool v101; // zf
  int v102; // eax
  char PagePrivilege; // dl
  __int64 v104; // r8
  __int64 v105; // r9
  struct _LIST_ENTRY *v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // rtt
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-A0h]
  volatile signed __int64 *v111; // [rsp+50h] [rbp-98h]
  int v112; // [rsp+58h] [rbp-90h] BYREF
  __int64 v113; // [rsp+60h] [rbp-88h]
  __int64 v114; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR v115; // [rsp+70h] [rbp-78h]
  __int64 v116; // [rsp+78h] [rbp-70h]
  unsigned __int64 v117; // [rsp+80h] [rbp-68h] BYREF
  int v118[2]; // [rsp+88h] [rbp-60h]
  __int64 v119; // [rsp+90h] [rbp-58h]
  __int64 v122; // [rsp+F8h] [rbp+10h]
  _BYTE *v125; // [rsp+110h] [rbp+28h]

  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 56);
  v112 = 0;
  v7 = 0;
  *(_QWORD *)v118 = v6;
  v115 = v5;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = (volatile signed __int64 *)v8;
  v9 = 48 * a2 - 0x220000000000LL;
  BugCheckParameter2 = v9;
  v10 = *(_QWORD *)(v9 + 16);
  v119 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (v10 & 0x400) == 0 )
  {
    v11 = 0LL;
    v113 = 0LL;
    v116 = 0LL;
    goto LABEL_3;
  }
  v53 = v10;
  if ( qword_140E2DCC0 && (v10 & 0x10) == 0 )
    v53 = v10 & ~qword_140E2DCC0;
  v54 = v53 >> 16;
  v113 = v54;
  v55 = *(_QWORD *)v54;
  v116 = *(_QWORD *)v54;
  if ( !PfSnNumActiveTraces )
  {
    v11 = v54;
    v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_3;
  }
  v56 = (volatile signed __int64 *)(v55 + 64);
  _m_prefetchw((const void *)(v55 + 64));
  v57 = *(_QWORD *)(v55 + 64);
  if ( (v57 & 0xF) != 0 )
  {
    do
    {
      v58 = _InterlockedCompareExchange64(v56, v57 - 1, v57);
      if ( v57 == v58 )
        break;
      v57 = v58;
    }
    while ( (v58 & 0xF) != 0 );
  }
  v59 = v57;
  v60 = v57 & 0xF;
  v61 = v59 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v60 > 1 )
  {
LABEL_85:
    ObpTraceObjectReferenceIfActive(v61 - 48);
    if ( v61 )
      goto LABEL_86;
    goto LABEL_206;
  }
  if ( v60 )
  {
    v93 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 - 48), 0xFuLL);
    if ( v93 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v61, 0x10uLL, v93 + 15);
    _m_prefetchw((const void *)v56);
    v94 = *v56;
    while ( (v94 & 0xF) == 0 && v61 == (v94 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v95 = v94;
      v94 = _InterlockedCompareExchange64(v56, v94 + 15, v94);
      if ( v95 == v94 )
        goto LABEL_85;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v61 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    goto LABEL_85;
  }
LABEL_206:
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v55 + 72));
  v61 = ObFastReferenceObjectLocked(v55 + 64, 1666411853LL);
  MiReleaseSpinLockShared((volatile signed __int32 *)(v55 + 72), 0x11u, v104, v105);
LABEL_86:
  v65 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  SessionIdForVa = MiGetSessionIdForVa(v115, v62, v63, v64);
  v67 = *(_QWORD *)(v54 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)v54 + 56LL) & 0x20) != 0 )
  {
    if ( v65 < v67 || v65 >= v67 + 8LL * *(unsigned int *)(v54 + 44) )
    {
      v68 = ((v65 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v54, SessionIdForVa, v54) + 72) << 9)) & 0xFFFFFFFFFFFFF000uLL;
      v69 = (unsigned __int64)*(unsigned int *)(v54 + 36) << 9;
    }
    else
    {
      v68 = ((v65 << 9) - (v67 << 9)) & 0xFFFFFFFFFFFFF000uLL;
      v69 = (unsigned __int64)*(unsigned int *)(v54 + 36) << 9;
    }
  }
  else
  {
    if ( v67 )
      v68 = (__int64)(v65 - v67) >> 3 << 12;
    else
      v68 = 0LL;
    v69 = (((unsigned __int64)(*(_DWORD *)(v54 + 32) & 0xFFC0) << 26) | *(unsigned int *)(v54 + 36)) << 12;
  }
  v70 = v69 + v68;
  CurrentThread = KeGetCurrentThread();
  v72 = (*(_DWORD *)(v55 + 56) & 0x20) != 0;
  v73 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
  v74 = (struct _EX_RUNDOWN_REF *)v73;
  if ( v73 )
  {
    if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v73, v72) )
      PfSnLogPageFaultCommon((__int64)v74, v61, *(_QWORD *)(v61 + 24), v70, v72);
    _m_prefetchw(&v74[45]);
    v109 = v74[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v109 != _InterlockedCompareExchange64((volatile signed __int64 *)&v74[45], v109 - 2, v109) )
      ExfReleaseRundownProtection(v74 + 45);
  }
  _m_prefetchw((const void *)v56);
  v75 = *v56;
  do
  {
    if ( (v61 ^ v75) >= 0xF )
    {
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v61, 0x63536D4Du);
      v11 = v113;
      v9 = BugCheckParameter2;
      v8 = (unsigned __int64)v111;
      goto LABEL_3;
    }
    v76 = v75;
    v75 = _InterlockedCompareExchange64(v56, v75 + 1, v75);
  }
  while ( v76 != v75 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v61 - 48, 0, 1u, 0x63536D4Du);
  v11 = v113;
  v9 = BugCheckParameter2;
  v8 = (unsigned __int64)v111;
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
    v77 = MiPteHasShadow();
    if ( v77 )
    {
      KernelWaitTime = v77[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v80 = *(_QWORD *)(KernelWaitTime + 8 * (v78 & (v8 >> 3)));
        if ( (v80 & 0x20) != 0 )
          v15 |= 0x20uLL;
        v81 = v15;
        v15 |= 0x42uLL;
        if ( (v80 & 0x42) == 0 )
          v15 = v81;
      }
    }
  }
  if ( (v15 & 0x400) == 0 )
    goto LABEL_71;
  v16 = v15;
  if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
    v16 = v15 & ~qword_140E2DCC0;
  if ( HIDWORD(v16) == 0xFFFFFFFF )
  {
    v17 = (v15 >> 5) & 0x1F;
  }
  else
  {
LABEL_71:
    v7 = 1;
    v51 = (v10 >> 5) & 0x1F;
    if ( (v15 & 8) != 0 )
      LODWORD(v51) = 1;
    v52 = a3;
    LODWORD(v17) = v51;
    if ( a3 )
    {
      if ( (v51 & 4) == 0 )
        v52 = 0LL;
      a3 = v52;
    }
  }
  v18 = 2LL;
  if ( (MiFlags & 0x8000) != 0 )
  {
    if ( v115 < 0xFFFF800000000000uLL
      || v115 >= 0xFFFFF68000000000uLL && v115 <= 0xFFFFF6FFFFFFFFFFuLL
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
      v22 = v90 << 25;
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
  if ( *(_QWORD *)a1 <= v21 )
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
    v85 = BugCheckParameter2;
    TransitionPteValid |= 0x42uLL;
    if ( (!_bittest64((const signed __int64 *)(BugCheckParameter2 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(BugCheckParameter2 + 34) >> 4)) != 0
      && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(BugCheckParameter2 + 16)) )
    {
      v87 = 0LL;
      v88 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v88 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v88);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      v89 = *(_BYTE *)(BugCheckParameter2 + 34);
      v85 = BugCheckParameter2;
      v11 = v113;
      if ( (!_bittest64((const signed __int64 *)(BugCheckParameter2 + 16), 0xAu) & (unsigned __int8)~(v89 >> 4)) != 0 )
      {
        if ( (v89 & 8) == 0 )
        {
          v117 = *(_QWORD *)(BugCheckParameter2 + 16);
          if ( (v117 & 4) != 0 )
          {
            *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
            MiClearPageFileReservation((__int64 *)&v117);
            v87 = v117;
          }
        }
        MiSetPfnModified(BugCheckParameter2, 1);
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v87 )
        MiReleasePageFileInfo(v119, v87, 1LL, v86);
      v27 = a4;
    }
    if ( (v10 & 0x400) != 0 && (*(_DWORD *)(*(_QWORD *)v118 + 184LL) & 0xF) != 1 )
    {
      MiCheckAndUpdateIoAttribution(v85);
      v27 = a4;
    }
  }
LABEL_29:
  v30 = 0LL;
LABEL_30:
  v112 = 0;
  HasPrivateFixups = 0LL;
  v32 = 0;
  v33 = 0;
  if ( v27 )
  {
LABEL_42:
    v37 = BugCheckParameter2;
    goto LABEL_43;
  }
  v114 = 0LL;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) == 0
    && *(__int64 *)(BugCheckParameter2 + 8) >= 0
    && *(_QWORD *)(BugCheckParameter2 + 8) )
  {
    goto LABEL_38;
  }
  if ( v115 >= 0xFFFF800000000000uLL )
  {
    if ( !v116 || (*(_DWORD *)(v116 + 56) & 0x20) != 0 )
    {
      HasPrivateFixups = MiSystemImageHasPrivateFixups(v115, &v114, &v112, 0LL);
      if ( HasPrivateFixups )
      {
        v35 = v114;
        Blink = 1;
        v7 |= 2u;
        goto LABEL_40;
      }
    }
    goto LABEL_38;
  }
  if ( v11 )
  {
    if ( (*(_DWORD *)(v116 + 56) & 0x20) != 0 )
      v7 |= 4u;
  }
  else
  {
    v7 |= 4u;
    v82 = KeGetCurrentThread()->ApcState.Process;
    if ( v82[1].IdealProcessorAssignmentBlock
      && MiLocateCloneAddress(v82, *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
    {
      v7 &= ~4u;
    }
  }
  if ( v7 < 4 )
  {
LABEL_38:
    Blink = 0;
LABEL_39:
    v35 = v113;
LABEL_40:
    LODWORD(v36) = v112;
    goto LABEL_41;
  }
  Blink = v30;
  v114 = v30;
  v122 = v30;
  if ( !KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[3] )
    goto LABEL_39;
  MiLockVadTree(1, (unsigned int)v30, HasPrivateFixups, v30);
  Address = MiLocateAddress(v115);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  if ( !Address
    || (Flink = (int)Address[3].Flink, (Flink & 0x70) != 0x20)
    || (Flink & 0x200000) != 0
    || (Flink & 0x400000) == 0
    || (v106 = Address[4].Blink->Flink,
        v36 = (v115 >> 12)
            + (((char *)Address[5].Flink - (char *)v106[8].Blink) >> 3)
            - (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)),
        ((*((char *)&Address[10].Flink->Flink
          + ((unsigned __int64)((unsigned int)(v115 >> 12)
                              + (unsigned int)(((char *)Address[5].Flink - (char *)v106[8].Blink) >> 3)
                              - LODWORD(Address[1].Blink)) >> 3)) >> (((v115 >> 12)
                                                                     + (((char *)Address[5].Flink - (char *)v106[8].Blink) >> 3)
                                                                     - LODWORD(Address[1].Blink)) & 7)) & 1) == 0) )
  {
    HasPrivateFixups = v122;
    Blink = 0;
    goto LABEL_39;
  }
  v35 = MiOffsetToProtos((__int64)Address[4].Blink->Flink, v36 << 12, (unsigned __int64 *)&v114);
  HasPrivateFixups = (__int64)Address[9].Flink;
  v7 |= 2u;
  Blink = (int)Address[8].Blink;
LABEL_41:
  if ( (v7 & 2) == 0 )
    goto LABEL_42;
  v33 = MiPrivateFixup(a1, v35, v36, BugCheckParameter2, HasPrivateFixups, Blink);
  MiLockAndDecrementShareCount(BugCheckParameter2, 2LL, v96, v97);
  if ( v33 == 297 || v33 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v12, 2LL, v98, v99);
    if ( v33 == 297 )
      return (unsigned int)-1073740748;
    return v33;
  }
  if ( (v33 & 0x80000000) != 0 )
    return v33;
  TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v111);
  v37 = 48 * (((unsigned __int64)TransitionPteValid >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  BugCheckParameter2 = v37;
  if ( v115 >= 0xFFFF800000000000uLL && (*(_DWORD *)(v37 + 32) & 0x8000000) != 0 )
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
    v125 = v40;
    if ( *v40 == 5 )
      goto LABEL_48;
  }
  else
  {
    v40 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v41 = v40;
  v40 = 0LL;
  v125 = 0LL;
  if ( v39 && *v41 == 3 )
    v32 |= 1u;
LABEL_48:
  if ( a3
    && (TransitionPteValid & 0x800) == 0
    && (TransitionPteValid & 0x200) != 0
    && !KeGetCurrentThread()->ApcState.Process[1].ActiveGroupPadding[0] )
  {
    if ( !v40 && (MiFlags & 0x2000000) == 0 && (byte_140E2DC09 & 1) != 0 )
    {
      TransitionPteValid &= ~0x20uLL;
      v7 |= 0x10u;
    }
    v7 |= 8u;
  }
  v42 = *(_BYTE *)(a1 + 69);
  if ( (v42 & 0x10) == 0 )
    goto LABEL_50;
  v100 = *(_QWORD *)(a1 + 16);
  if ( (v100 & 1) == 0 || *(_BYTE *)(v100 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
  {
    TransitionPteValid &= ~0x20uLL;
LABEL_50:
    v43 = *(_QWORD *)(a1 + 16);
    if ( (v43 & 1) != 0 && *(_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      TransitionPteValid &= ~0x20uLL;
  }
  if ( (v42 & 9) != 8 || (v42 & 4) != 0 )
    goto LABEL_61;
  v44 = *(unsigned __int16 *)(a1 + 66);
  v45 = (unsigned int)v111;
  if ( (_WORD)v44 )
  {
    if ( v44 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)v111 >> 3) & 0x1FF) )
      goto LABEL_57;
    if ( *(__int64 *)(v37 + 40) < 0 )
    {
      if ( (*(_BYTE *)(a1 + 69) & 2) == 0 )
        goto LABEL_58;
      goto LABEL_57;
    }
    if ( (*(_BYTE *)(a1 + 69) & 2) == 0 )
    {
LABEL_57:
      MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
      v45 = (unsigned int)v111;
    }
  }
LABEL_58:
  v46 = *(_WORD *)(a1 + 66);
  v37 = BugCheckParameter2;
  if ( v46 )
  {
    *(_WORD *)(a1 + 66) = v46 + 1;
  }
  else
  {
    *(_WORD *)(a1 + 66) = 1;
    *(_WORD *)(a1 + 64) = (v45 >> 3) & 0x1FF;
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      *(_BYTE *)(a1 + 69) |= 2u;
    else
      *(_BYTE *)(a1 + 69) &= ~2u;
  }
  v40 = v125;
  v32 |= 4u;
LABEL_61:
  v47 = v32 | 0x10;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
    v47 = v32;
  if ( !(unsigned int)MiAllocateWsle(*(__int64 *)v118, (ULONG_PTR)v111, v37, v38, TransitionPteValid, v47, (__int64)v40) )
  {
    if ( (v47 & 4) != 0 )
      --*(_WORD *)(a1 + 66);
    MiLockAndDecrementShareCount(BugCheckParameter2, 2LL, v48, v49);
    if ( (v7 & 2) == 0 )
      MiLockAndDecrementShareCount(v12, 2LL, v107, v108);
    return (unsigned int)-1073741801;
  }
  if ( (v7 & 8) == 0 )
    return v33;
  v101 = *(_QWORD *)(a1 + 72) == 0LL;
  v114 = 0LL;
  if ( !v101 && (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    if ( *(_WORD *)(a1 + 66) )
      MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
  }
  v102 = MiCopyOnWrite(v115, v111, 0xFFFFFFFFFFFFFFFFuLL, (v7 >> 1) & 8, &v114);
  v33 = v102;
  if ( v102 >= 0 )
    return v33;
  MiSetFaultPacketDirectives(a1, (unsigned int)v102, v114);
  return 3221226548LL;
}
