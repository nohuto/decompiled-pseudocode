/*
 * XREFs of MiFinishHardFault @ 0x1402F0070
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x140397338 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     MiRelockProtoPoolPage @ 0x14023BCDC (MiRelockProtoPoolPage.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiInPageGapPage @ 0x1402E5A38 (MiInPageGapPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiInPageSkipPage @ 0x1402F0980 (MiInPageSkipPage.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     MiInvalidateCollidedIos @ 0x14036FA08 (MiInvalidateCollidedIos.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r9
  _DWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r15
  _DWORD *v10; // rax
  unsigned int v11; // r13d
  _QWORD *v12; // rsi
  __int64 v13; // rax
  ULONG_PTR v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r12d
  int v18; // ebx
  unsigned int v19; // r15d
  int v20; // r15d
  PSLIST_ENTRY DecayPfn; // rcx
  __int64 v22; // rbx
  _QWORD *v23; // r12
  _QWORD *v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  unsigned int v32; // esi
  __int64 v33; // r8
  NTSTATUS v34; // esi
  __int64 v35; // rax
  char v36; // r15
  int v37; // ebx
  __int64 v38; // rcx
  __int64 CurrentIrql; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int8 *v42; // rdx
  _DWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 *v45; // rbx
  unsigned __int8 v46; // r14
  unsigned __int64 v47; // rsi
  _QWORD *v48; // r12
  bool v49; // zf
  _QWORD *v50; // rdx
  __int64 v51; // rax
  ULONG_PTR v52; // r15
  ULONG_PTR v53; // rcx
  __int64 v54; // rbx
  int v55; // ebx
  int v56; // ebx
  __int64 v57; // rcx
  unsigned __int8 v58; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v59; // [rsp+28h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  _QWORD *v61; // [rsp+38h] [rbp-C8h]
  __int128 v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  _DWORD *v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+88h] [rbp-78h]
  _QWORD *v70; // [rsp+90h] [rbp-70h]
  unsigned __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  char v73; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v78; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v79[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v80; // [rsp+F0h] [rbp-10h]
  PSLIST_ENTRY v81; // [rsp+128h] [rbp+28h]
  int v82; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+1A8h] [rbp+A8h]
  int v88; // [rsp+1A8h] [rbp+A8h]

  v4 = a3;
  v63 = 0LL;
  v62 = 0LL;
  memset_0(v79, 0, 0x68uLL);
  memset_0(&v68, 0, 0x40uLL);
  v7 = (_DWORD *)(v4 + 272);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(v4 + 152);
  v77 = *(_QWORD *)(v4 + 232);
  v10 = *(_DWORD **)(v4 + 256);
  v66 = v8;
  if ( v10 )
    v7 = v10;
  v11 = 0;
  v64 = v7;
  v61 = 0LL;
  v12 = v7 + 12;
  v59 = (unsigned __int64)&v7[2 * ((((v7[8] + v7[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v7[10] + 4095) >> 12)
                            + 10];
  v13 = *(unsigned int *)(v4 + 188);
  if ( (_DWORD)v13 == -1 )
    v71 = -1LL;
  else
    v71 = (unsigned __int64)&v12[v13];
  v14 = *(_QWORD *)(v4 + 160);
  v15 = *(_DWORD *)(v4 + 192);
  v65 = *(_QWORD *)(v4 + 224);
  v16 = 1LL;
  v78 = v14;
  if ( (v15 & 0x200000) != 0 || !v8 || (v15 & 0x20) != 0 )
  {
    v69 = -1073740748;
    v58 = 17;
    if ( !v8 )
    {
      LOBYTE(v16) = 17;
      v60 = v16;
      goto LABEL_8;
    }
  }
  else
  {
    v69 = 0;
    v58 = 17;
  }
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    v8 = v66;
  }
  if ( (v15 & 0x2000000) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 )
    {
      v49 = (*(_WORD *)(v9 + 486))++ == 0xFFFF;
      if ( v49 && *(_QWORD *)(v9 + 152) != v9 + 152 )
        KiCheckForKernelApcDelivery(CurrentIrql, v8);
    }
    else
    {
      KeLeaveCriticalRegionThread();
    }
  }
  MiRelockFaultState(a1 + 56, a2);
  LOBYTE(v16) = v60;
  *(_BYTE *)(a1 + 68) = v60;
LABEL_8:
  if ( v14 )
  {
    v42 = &v58;
    if ( (_BYTE)v16 != 17 )
      v42 = 0LL;
    MiRelockProtoPoolPage(v14, v42);
  }
  if ( *(_DWORD *)(v4 + 180) )
  {
    *(_DWORD *)(v4 + 80) = -1073741670;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v17 = *(_DWORD *)(v4 + 80);
  if ( *(_QWORD *)(v4 + 16) != v4 + 16 && !(unsigned __int8)MiInvalidateCollidedIos(v4) )
  {
    *(_DWORD *)(v4 + 80) = -1073741801;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v18 = *(_DWORD *)(v4 + 192);
  if ( v14 )
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v14, v8, (__int64)v7);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v18 & 0x4000000) != 0 )
    v67 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(*(_QWORD *)(v4 + 248) + 40LL) >> 43) & 0x3FFLL));
  else
    v67 = 0LL;
  v20 = v69;
  if ( v69 >= 0 )
  {
    if ( !(unsigned int)MiIsFaultPteIntact(a1, v65, v77, v4 + 168) )
      v20 = -1073740748;
    v69 = v20;
  }
  if ( v17 >= 0
    && ((v18 & 0x20) != 0 || *(_QWORD *)(v4 + 256) || (_DWORD *)v59 != v64 + 12 && v71 > (unsigned __int64)(v64 + 14))
    && (v18 & 0x3800) != 0
    && (v18 & 0x120000) == 0x100000 )
  {
    DecayPfn = MiCreateDecayPfn();
    BugCheckParameter2 = (ULONG_PTR)DecayPfn;
  }
  else
  {
    DecayPfn = 0LL;
    BugCheckParameter2 = 0LL;
  }
  v22 = v63;
  v23 = (_QWORD *)v62;
  v68 = v4;
  v72 = *(_QWORD *)(a1 + 56);
  v75 = a4;
  v79[2] = 0x3FFFFFFFFFLL;
  v79[3] = 0x3FFFFFFFFFLL;
  v82 = 2;
  v80 = 0;
  v81 = DecayPfn;
  if ( (unsigned __int64)v12 <= v59 )
  {
    v24 = (_QWORD *)*((_QWORD *)&v62 + 1);
    v25 = v59;
    do
    {
      if ( (unsigned int)MiInPageSkipPage(48LL * *v12 - 0x220000000000LL, 48LL * *v12 - 0x220000000000LL, v7, v6) )
      {
        if ( MiInPageGapPage(v27) )
        {
          *v50 = v23;
          v23 = v50;
          *(_QWORD *)&v62 = v50;
          if ( !v24 )
            v24 = v50;
          v63 = ++v22;
          *((_QWORD *)&v62 + 1) = v24;
        }
      }
      else if ( v26 == *(_QWORD *)(v4 + 248) )
      {
        v61 = v12;
      }
      else
      {
        v28 = *v12;
        v70 = v12;
        MiAddPageToInsertList(v79, &v68, v28);
      }
      ++v12;
    }
    while ( (unsigned __int64)v12 <= v25 );
    v14 = v78;
    v11 = 0;
  }
  MiInsertPagesInList(v79, 0);
  if ( v22 )
  {
    while ( 1 )
    {
      v53 = (ULONG_PTR)v23;
      if ( !v23 )
        break;
      v23 = (_QWORD *)*v23;
      v49 = v63-- == 1;
      *(_QWORD *)&v62 = v23;
      if ( v49 )
        *((_QWORD *)&v62 + 1) = 0LL;
      MiReturnPfnReferenceCountAtDpc(v53, v29, v30);
    }
  }
  v31 = *(_QWORD *)(v4 + 248);
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v32 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v32);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v31 + 24) < 0 );
  }
  v87 = *(_DWORD *)(v31 + 32);
  BYTE2(v87) &= ~0x20u;
  *(_DWORD *)(v31 + 32) = v87;
  v70 = v61;
  *(_QWORD *)v31 = 0LL;
  MiHardFaultPageRelease(&v68, v31);
  v34 = *(_DWORD *)(v4 + 80);
  v35 = *(_QWORD *)(v4 + 248);
  LODWORD(v61) = v34;
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = v60;
  if ( v14 )
  {
    v41 = v58;
    if ( (_BYTE)v60 != 17 )
      v41 = 17LL;
    MiUnlockProtoPoolPage(v14, v41, v33);
  }
  if ( (*(_DWORD *)(v4 + 192) & 0x20000) != 0 )
  {
    v43 = v64;
    MmCheckCachedPageStates(v65 + (*(_DWORD *)(v4 + 96) & 0x3FFFF), (unsigned int)v64[10], 2u, 0LL);
    v45 = (__int64 *)(v43 + 12);
    v88 = 0;
    if ( v36 == 17 )
    {
      v46 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v46, 2LL);
    }
    else
    {
      v46 = 17;
    }
    if ( (unsigned __int64)v45 <= v59 )
    {
      v47 = v59;
      v48 = v45 + 1;
      do
      {
        if ( *v45 < 0 )
        {
          v51 = *v45 & 0x7FFFFFFFFFFFFFFFLL;
          *v45 = v51;
          v52 = 48 * v51 - 0x220000000000LL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v11);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v52 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v52, v44, v33);
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v88 & 0x3F) == 0 && (unsigned __int64)v48 <= v47 && v46 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v46);
            __writecr8(v46);
            v57 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v57, 2LL);
          }
          v11 = 0;
        }
        ++v45;
        ++v48;
      }
      while ( (unsigned __int64)v45 <= v47 );
      v4 = a3;
      v34 = (int)v61;
      v36 = v60;
    }
    if ( v46 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v46);
      __writecr8(v46);
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  v37 = *(_DWORD *)(v4 + 192);
  if ( v66 && (v37 & 0x2000000) != 0 )
  {
    MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
    v36 = 17;
  }
  if ( (v37 & 0x400000) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(v4 + 200), 0x63536D4Du);
  if ( *(int *)(v4 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v4 + 56), 0, 0);
  v38 = *(_QWORD *)(v4 + 104);
  if ( v38 )
  {
    v54 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v38 + 40) >> 43) & 0x3FFLL));
    if ( v36 == 17 )
      MiReleaseFreshPage(v38, (__int64)qword_140E2FF88, v33);
    else
      MiReleaseFreshPageAtDpc(v38);
    MiReleaseNonPagedResources(v54, 1uLL);
  }
  if ( v34 < 0 )
  {
    v55 = *(_DWORD *)(v4 + 112);
    if ( (v55 & 1) != 0 && MiIsRetryIoStatus(v34, 0x1000uLL) && (v55 & 2) == 0 )
      v34 = -1073740748;
  }
  else
  {
    v34 = v69;
    if ( !v73 )
      v34 = -1073740748;
  }
  if ( v67 )
  {
    v56 = *(_DWORD *)(v4 + 192);
    PsDereferencePartition(*(_QWORD *)(v67 + 184));
    *(_DWORD *)(v4 + 192) = v56 & 0xFBFFFFFF;
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v4);
  return (unsigned int)v34;
}
