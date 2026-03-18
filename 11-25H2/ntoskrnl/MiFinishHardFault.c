/*
 * XREFs of MiFinishHardFault @ 0x14023BBC0
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1403795D8 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MiInPageGapPage @ 0x1402267E0 (MiInPageGapPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiInPageSkipPage @ 0x14023C4E0 (MiInPageSkipPage.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     MiInvalidateCollidedIos @ 0x1404192CC (MiInvalidateCollidedIos.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rax
  _QWORD *v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  ULONG_PTR v16; // r13
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // r14d
  char v21; // al
  int v22; // ebx
  unsigned int v23; // esi
  int v24; // esi
  _DWORD *v25; // r15
  PSLIST_ENTRY DecayPfn; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rbx
  _QWORD *v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rcx
  unsigned int v35; // r12d
  __int64 v36; // rbx
  unsigned int v37; // esi
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  int v41; // esi
  __int64 v42; // rax
  char v43; // r14
  int v44; // ebx
  __int64 v45; // rcx
  __int64 CurrentIrql; // rcx
  unsigned __int8 v48; // dl
  int IsFaultPteIntact; // eax
  __int64 *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // r9
  __int64 *v54; // r15
  unsigned __int8 v55; // bl
  _QWORD *v56; // r13
  bool v57; // zf
  _QWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  ULONG_PTR v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rbx
  int v64; // ebx
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v68; // [rsp+30h] [rbp-D8h]
  _DWORD *v69; // [rsp+38h] [rbp-D0h]
  __int64 v70; // [rsp+40h] [rbp-C8h]
  __int128 v71; // [rsp+48h] [rbp-C0h]
  __int64 v72; // [rsp+58h] [rbp-B0h]
  _QWORD *v73; // [rsp+60h] [rbp-A8h]
  __int64 v74; // [rsp+68h] [rbp-A0h]
  __int64 v75; // [rsp+70h] [rbp-98h]
  __int64 v76; // [rsp+78h] [rbp-90h]
  __int64 v77; // [rsp+88h] [rbp-80h] BYREF
  int v78; // [rsp+90h] [rbp-78h]
  _QWORD *v79; // [rsp+98h] [rbp-70h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-68h]
  __int64 v81; // [rsp+A8h] [rbp-60h]
  char v82; // [rsp+B0h] [rbp-58h]
  char v83; // [rsp+B1h] [rbp-57h]
  __int64 v84; // [rsp+B8h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h]
  ULONG_PTR v87; // [rsp+D0h] [rbp-38h]
  _BYTE v88[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v89; // [rsp+E8h] [rbp-20h]
  __int64 v90; // [rsp+F0h] [rbp-18h]
  int v91; // [rsp+F8h] [rbp-10h]
  PSLIST_ENTRY v92; // [rsp+130h] [rbp+28h]
  int v93; // [rsp+138h] [rbp+30h]
  int v97; // [rsp+1A0h] [rbp+98h]
  int v98; // [rsp+1A0h] [rbp+98h]

  v4 = a3;
  v72 = 0LL;
  v71 = 0LL;
  memset_0(v88, 0, 0x68uLL);
  memset_0(&v77, 0, 0x40uLL);
  v7 = (_DWORD *)(v4 + 272);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = 0LL;
  v10 = *(_QWORD *)(v4 + 152);
  v86 = *(_QWORD *)(v4 + 232);
  v11 = *(_DWORD **)(v4 + 256);
  v75 = v8;
  v73 = 0LL;
  if ( v11 )
    v7 = v11;
  v69 = v7;
  v12 = v7 + 12;
  v13 = (v7[8] + v7[11]) & 0xFFF;
  v68 = (unsigned __int64)&v7[2 * ((v13 + (unsigned int)v7[10] + 4095LL) >> 12) + 10];
  v14 = *(unsigned int *)(v4 + 188);
  if ( (_DWORD)v14 == -1 )
  {
    v80 = -1LL;
  }
  else
  {
    v13 = (unsigned __int64)&v12[v14];
    v80 = v13;
  }
  v15 = 1LL;
  v16 = *(_QWORD *)(v4 + 160);
  v17 = *(_DWORD *)(v4 + 192);
  v74 = *(_QWORD *)(v4 + 224);
  v18 = 3221226548LL;
  v87 = v16;
  if ( (v17 & 0x200000) != 0 || !v8 || (v17 & 0x20) != 0 )
  {
    v78 = -1073740748;
    LOBYTE(v67) = 17;
    if ( !v8 )
    {
      v19 = a1;
      LOBYTE(v18) = 17;
      v70 = v18;
      goto LABEL_8;
    }
  }
  else
  {
    v78 = 0;
    LOBYTE(v67) = 17;
  }
  CurrentIrql = KeGetCurrentIrql();
  v70 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v8 = v75;
  }
  if ( (v17 & 0x2000000) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 )
    {
      v57 = (*(_WORD *)(v10 + 486))++ == 0xFFFF;
      if ( v57 && *(_QWORD *)(v10 + 152) != v10 + 152 )
        KiCheckForKernelApcDelivery(CurrentIrql, 1LL, v8, v9);
    }
    else
    {
      KeLeaveCriticalRegionThread(v10);
    }
  }
  MiRelockFaultState(a1 + 56, a2);
  v19 = a1;
  v9 = 0LL;
  LOBYTE(v18) = v70;
  *(_BYTE *)(a1 + 68) = v70;
LABEL_8:
  if ( v16 )
  {
    v50 = &v67;
    if ( (_BYTE)v18 != 17 )
      v50 = 0LL;
    MiRelockProtoPoolPage(v16, v50);
    v9 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 180) )
  {
    *(_DWORD *)(v4 + 80) = -1073741670;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v20 = *(_DWORD *)(v4 + 80);
  if ( *(_QWORD *)(v4 + 16) != v4 + 16 )
  {
    v21 = MiInvalidateCollidedIos(v4, v15);
    v9 = 0LL;
    v83 = v21;
    if ( !v21 )
    {
      *(_DWORD *)(v4 + 80) = -1073741801;
      *(_QWORD *)(v4 + 88) = 0LL;
    }
  }
  v22 = *(_DWORD *)(v4 + 192);
  if ( v16 )
  {
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v16, v15, v8, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 0LL;
  }
  if ( (v22 & 0x4000000) != 0 )
    v76 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(*(_QWORD *)(v4 + 248) + 40LL) >> 43) & 0x3FFLL));
  else
    v76 = 0LL;
  v24 = v78;
  if ( v78 >= 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(v19, v74, v86, v4 + 168);
    v9 = 0LL;
    if ( !IsFaultPteIntact )
      v24 = -1073740748;
    v78 = v24;
  }
  v25 = v69;
  if ( v20 >= 0
    && ((v22 & 0x20) != 0 || *(_QWORD *)(v4 + 256) || (_DWORD *)v68 != v69 + 12 && v80 > (unsigned __int64)(v69 + 14))
    && (v22 & 0x3800) != 0
    && (v22 & 0x120000) == 0x100000 )
  {
    DecayPfn = MiCreateDecayPfn();
    BugCheckParameter2 = (ULONG_PTR)DecayPfn;
    v9 = 0LL;
  }
  else
  {
    DecayPfn = 0LL;
    BugCheckParameter2 = 0LL;
  }
  v27 = v72;
  v28 = (_QWORD *)v71;
  v77 = v4;
  v81 = *(_QWORD *)(a1 + 56);
  v84 = a4;
  v89 = 0x3FFFFFFFFFLL;
  v90 = 0x3FFFFFFFFFLL;
  v93 = 2;
  v91 = 0;
  v92 = DecayPfn;
  if ( (unsigned __int64)v12 <= v68 )
  {
    v29 = (_QWORD *)*((_QWORD *)&v71 + 1);
    v30 = v68;
    do
    {
      if ( (unsigned int)MiInPageSkipPage(48LL * *v12 - 0x220000000000LL, 48LL * *v12 - 0x220000000000LL, v8, v9) )
      {
        if ( MiInPageGapPage(v32) )
        {
          *v58 = v28;
          v28 = v58;
          *(_QWORD *)&v71 = v58;
          if ( !v29 )
            v29 = v58;
          v72 = ++v27;
          *((_QWORD *)&v71 + 1) = v29;
        }
      }
      else if ( v31 == *(_QWORD *)(v4 + 248) )
      {
        v73 = v12;
      }
      else
      {
        v33 = *v12;
        v79 = v12;
        MiAddPageToInsertList(v88, &v77, v33);
        v9 = 0LL;
      }
      ++v12;
    }
    while ( (unsigned __int64)v12 <= v30 );
    v16 = v87;
    v25 = v69;
  }
  MiInsertPagesInList(v88, 0LL);
  v35 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      v34 = v28;
      if ( !v28 )
        break;
      v28 = (_QWORD *)*v28;
      *(_QWORD *)&v71 = v28;
      *((_QWORD *)&v71 + 1) &= -(__int64)(--v72 != 0);
      MiReturnPfnReferenceCountAtDpc(v34);
    }
  }
  v36 = *(_QWORD *)(v4 + 248);
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v37 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34) )
      {
        HvlNotifyLongSpinWait(v37);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v36 + 24) < 0 );
  }
  v97 = *(_DWORD *)(v36 + 32);
  BYTE2(v97) &= ~0x20u;
  *(_DWORD *)(v36 + 32) = v97;
  v79 = v73;
  *(_QWORD *)v36 = 0LL;
  MiHardFaultPageRelease(&v77, v36);
  v41 = *(_DWORD *)(v4 + 80);
  v42 = *(_QWORD *)(v4 + 248);
  LODWORD(v69) = v41;
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v43 = v70;
  if ( v16 )
  {
    v48 = v67;
    if ( (_BYTE)v70 != 17 )
      v48 = 17;
    MiUnlockProtoPoolPage(v16, v48, v39, v40);
  }
  if ( (*(_DWORD *)(v4 + 192) & 0x20000) != 0 )
  {
    MmCheckCachedPageStates(v74 + (*(_DWORD *)(v4 + 96) & 0x3FFFF), (unsigned int)v25[10], 2LL);
    v54 = (__int64 *)(v25 + 12);
    v98 = 0;
    if ( v43 == 17 )
    {
      v55 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v51) = v55;
        KiRaiseIrqlProcessIrqlFlags(v51);
      }
    }
    else
    {
      v55 = 17;
    }
    if ( (unsigned __int64)v54 <= v68 )
    {
      v38 = v68;
      v56 = v54 + 1;
      do
      {
        if ( *v54 < 0 )
        {
          v59 = 0x7FFFFFFFFFFFFFFFLL;
          v60 = *v54 & 0x7FFFFFFFFFFFFFFFLL;
          *v54 = v60;
          v61 = 48 * v60 - 0x220000000000LL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v35 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v59) )
              {
                HvlNotifyLongSpinWait(v35);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v61 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v61, v38, v52, v53);
          _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = 0;
          if ( (++v98 & 0x3F) == 0 && (unsigned __int64)v56 <= v68 && v55 != 17 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v62) = v55;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v62);
            }
            __writecr8(v55);
            v66 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v66);
          }
          v38 = v68;
        }
        ++v54;
        ++v56;
      }
      while ( (unsigned __int64)v54 <= v38 );
      v4 = a3;
      v41 = (int)v69;
      v43 = v70;
    }
    if ( v55 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v38) = v55;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
      }
      __writecr8(v55);
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  v44 = *(_DWORD *)(v4 + 192);
  if ( v75 && (v44 & 0x2000000) != 0 )
  {
    LOBYTE(v38) = 17;
    MiReleaseFaultState(a1 + 56, v38, 0LL);
    v43 = 17;
  }
  if ( (v44 & 0x400000) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(v4 + 200), 0x63536D4Du);
  if ( *(int *)(v4 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v4 + 56), 0, 0);
  v45 = *(_QWORD *)(v4 + 104);
  if ( v45 )
  {
    v63 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v45 + 40) >> 43) & 0x3FFLL));
    if ( v43 == 17 )
      MiReleaseFreshPage(v45);
    else
      MiReleaseFreshPageAtDpc(v45);
    MiReleaseNonPagedResources(v63, 1uLL);
  }
  if ( v41 < 0 )
  {
    v64 = *(_DWORD *)(v4 + 112);
    if ( (v64 & 1) != 0 && (unsigned int)MiIsRetryIoStatus((unsigned int)v41, 4096LL) && (v64 & 2) == 0 )
      v41 = -1073740748;
  }
  else
  {
    v41 = v78;
    if ( !v82 )
      v41 = -1073740748;
  }
  if ( v76 )
  {
    v65 = *(_DWORD *)(v4 + 192);
    PsDereferencePartition(*(_QWORD *)(v76 + 184), 1883860301LL);
    *(_DWORD *)(v4 + 192) = v65 & 0xFBFFFFFF;
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v4);
  return (unsigned int)v41;
}
