/*
 * XREFs of MiFinishHardFault @ 0x140255E80
 * Callers:
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiInPageSkipPage @ 0x140256790 (MiInPageSkipPage.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiInPageGapPage @ 0x140341BD8 (MiInPageGapPage.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 *     MiInvalidateCollidedIos @ 0x14049B72C (MiInvalidateCollidedIos.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFinishHardFault(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r9
  _DWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r15
  _DWORD *v10; // rax
  unsigned int v11; // r13d
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  int v18; // r12d
  int v19; // ebx
  unsigned int v20; // r15d
  int v21; // r15d
  ULONG_PTR DecayPfn; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // r12
  _QWORD *v25; // r15
  unsigned __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  unsigned int v34; // esi
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // esi
  __int64 v38; // rax
  char v39; // r15
  int v40; // ebx
  __int64 v41; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v44; // rdx
  unsigned __int8 *v45; // rdx
  _DWORD *v46; // rbx
  __int64 v47; // rdx
  __int64 *v48; // rbx
  unsigned __int8 v49; // r14
  unsigned __int64 v50; // rsi
  _QWORD *v51; // r12
  bool v52; // zf
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rbx
  int v58; // ebx
  int v59; // ebx
  __int64 v60; // rcx
  unsigned __int8 v61; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v62; // [rsp+28h] [rbp-D8h]
  __int64 v63; // [rsp+30h] [rbp-D0h]
  _QWORD *v64; // [rsp+38h] [rbp-C8h]
  __int128 v65; // [rsp+40h] [rbp-C0h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  _DWORD *v67; // [rsp+58h] [rbp-A8h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+88h] [rbp-78h]
  _QWORD *v73; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  char v76; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v82[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v83; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+130h] [rbp+30h]
  int v90; // [rsp+1A8h] [rbp+A8h]
  int v91; // [rsp+1A8h] [rbp+A8h]

  v4 = a3;
  v66 = 0LL;
  v65 = 0LL;
  memset_0(v82, 0, 0x68uLL);
  memset_0(&v71, 0, 0x40uLL);
  v7 = (_DWORD *)(v4 + 272);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(v4 + 152);
  v80 = *(_QWORD *)(v4 + 232);
  v10 = *(_DWORD **)(v4 + 256);
  v69 = v8;
  if ( v10 )
    v7 = v10;
  v11 = 0;
  v67 = v7;
  v64 = 0LL;
  v12 = v7 + 12;
  v13 = (v7[8] + v7[11]) & 0xFFF;
  v62 = (unsigned __int64)&v7[2 * ((v13 + (unsigned int)v7[10] + 4095LL) >> 12) + 10];
  v14 = *(unsigned int *)(v4 + 188);
  if ( (_DWORD)v14 == -1 )
  {
    v74 = -1LL;
  }
  else
  {
    v13 = (unsigned __int64)&v12[v14];
    v74 = v13;
  }
  v15 = *(_QWORD *)(v4 + 160);
  v16 = *(_DWORD *)(v4 + 192);
  v68 = *(_QWORD *)(v4 + 224);
  v17 = 1LL;
  v81 = v15;
  if ( (v16 & 0x200000) != 0 || !v8 || (v16 & 0x20) != 0 )
  {
    v72 = -1073740748;
    v61 = 17;
    if ( !v8 )
    {
      LOBYTE(v17) = 17;
      v63 = v17;
      goto LABEL_8;
    }
  }
  else
  {
    v72 = 0;
    v61 = 17;
  }
  CurrentIrql = KeGetCurrentIrql();
  v63 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    v8 = v69;
  }
  if ( (v16 & 0x2000000) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 )
    {
      v52 = (*(_WORD *)(v9 + 486))++ == 0xFFFF;
      if ( v52 && *(_QWORD *)(v9 + 152) != v9 + 152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      KeLeaveCriticalRegionThread(v9);
    }
  }
  MiRelockFaultState(a1 + 56, a2);
  v13 = a1;
  LOBYTE(v17) = v63;
  *(_BYTE *)(a1 + 68) = v63;
LABEL_8:
  if ( v15 )
  {
    v45 = &v61;
    if ( (_BYTE)v17 != 17 )
      v45 = 0LL;
    MiRelockProtoPoolPage(v15, v45);
  }
  if ( *(_DWORD *)(v4 + 180) )
  {
    *(_DWORD *)(v4 + 80) = -1073741670;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v18 = *(_DWORD *)(v4 + 80);
  if ( *(_QWORD *)(v4 + 16) != v4 + 16 && !(unsigned __int8)MiInvalidateCollidedIos(v4) )
  {
    *(_DWORD *)(v4 + 80) = -1073741801;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v19 = *(_DWORD *)(v4 + 192);
  if ( v15 )
  {
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v8, v7, v6) )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v15);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v19 & 0x4000000) != 0 )
    v70 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(*(_QWORD *)(v4 + 248) + 40LL) >> 43) & 0x3FFLL));
  else
    v70 = 0LL;
  v21 = v72;
  if ( v72 >= 0 )
  {
    if ( !(unsigned int)MiIsFaultPteIntact(a1, v68, v80, v4 + 168) )
      v21 = -1073740748;
    v72 = v21;
  }
  if ( v18 >= 0
    && ((v19 & 0x20) != 0 || *(_QWORD *)(v4 + 256) || (_DWORD *)v62 != v67 + 12 && v74 > (unsigned __int64)(v67 + 14))
    && (v19 & 0x3800) != 0
    && (v19 & 0x120000) == 0x100000 )
  {
    DecayPfn = MiCreateDecayPfn();
    BugCheckParameter2 = DecayPfn;
  }
  else
  {
    DecayPfn = 0LL;
    BugCheckParameter2 = 0LL;
  }
  v23 = v66;
  v24 = (_QWORD *)v65;
  v71 = v4;
  v75 = *(_QWORD *)(a1 + 56);
  v78 = a4;
  v82[2] = 0x3FFFFFFFFFLL;
  v82[3] = 0x3FFFFFFFFFLL;
  v85 = 2;
  v83 = 0;
  v84 = DecayPfn;
  if ( (unsigned __int64)v12 <= v62 )
  {
    v25 = (_QWORD *)*((_QWORD *)&v65 + 1);
    v26 = v62;
    do
    {
      if ( (unsigned int)MiInPageSkipPage(48LL * *v12 - 0x220000000000LL, 48LL * *v12 - 0x220000000000LL, v7, v6) )
      {
        if ( (unsigned int)MiInPageGapPage() )
        {
          *v53 = v24;
          v24 = v53;
          *(_QWORD *)&v65 = v53;
          if ( !v25 )
            v25 = v53;
          v66 = ++v23;
          *((_QWORD *)&v65 + 1) = v25;
        }
      }
      else if ( v27 == *(_QWORD *)(v4 + 248) )
      {
        v64 = v12;
      }
      else
      {
        v28 = *v12;
        v73 = v12;
        MiAddPageToInsertList(v82, &v71, v28);
      }
      ++v12;
    }
    while ( (unsigned __int64)v12 <= v26 );
    v15 = v81;
    v11 = 0;
  }
  MiInsertPagesInList(v82, 0);
  if ( v23 )
  {
    while ( 1 )
    {
      v30 = v24;
      if ( !v24 )
        break;
      v24 = (_QWORD *)*v24;
      v52 = v66-- == 1;
      *(_QWORD *)&v65 = v24;
      if ( v52 )
        *((_QWORD *)&v65 + 1) = 0LL;
      MiReturnPfnReferenceCountAtDpc(v30);
    }
  }
  v33 = *(_QWORD *)(v4 + 248);
  v34 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v31, v32) )
      {
        HvlNotifyLongSpinWait(v34);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v33 + 24) < 0 );
  }
  v90 = *(_DWORD *)(v33 + 32);
  BYTE2(v90) &= ~0x20u;
  *(_DWORD *)(v33 + 32) = v90;
  v73 = v64;
  *(_QWORD *)v33 = 0LL;
  MiHardFaultPageRelease(&v71, v33);
  v37 = *(_DWORD *)(v4 + 80);
  v38 = *(_QWORD *)(v4 + 248);
  LODWORD(v64) = v37;
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v39 = v63;
  if ( v15 )
  {
    v44 = v61;
    if ( (_BYTE)v63 != 17 )
      v44 = 17LL;
    MiUnlockProtoPoolPage(v15, v44);
  }
  if ( (*(_DWORD *)(v4 + 192) & 0x20000) != 0 )
  {
    v46 = v67;
    MmCheckCachedPageStates(v68 + (*(_DWORD *)(v4 + 96) & 0x3FFFF), (unsigned int)v67[10], 2u, 0LL);
    v48 = (__int64 *)(v46 + 12);
    v91 = 0;
    if ( v39 == 17 )
    {
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v49, 2LL);
    }
    else
    {
      v49 = 17;
    }
    if ( (unsigned __int64)v48 <= v62 )
    {
      v50 = v62;
      v51 = v48 + 1;
      do
      {
        if ( *v48 < 0 )
        {
          v54 = 0x7FFFFFFFFFFFFFFFLL;
          v55 = *v48 & 0x7FFFFFFFFFFFFFFFLL;
          *v48 = v55;
          v56 = 48 * v55 - 0x220000000000LL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v54, v47, v35, v36) )
              {
                HvlNotifyLongSpinWait(v11);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v56 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v56);
          _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v91 & 0x3F) == 0 && (unsigned __int64)v51 <= v50 && v49 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
            __writecr8(v49);
            v60 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v60, 2LL);
          }
          v11 = 0;
        }
        ++v48;
        ++v51;
      }
      while ( (unsigned __int64)v48 <= v50 );
      v4 = a3;
      v37 = (int)v64;
      v39 = v63;
    }
    if ( v49 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
      __writecr8(v49);
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  v40 = *(_DWORD *)(v4 + 192);
  if ( v69 && (v40 & 0x2000000) != 0 )
  {
    MiReleaseFaultState((__int64 *)(a1 + 56), 0x11u, 0LL);
    v39 = 17;
  }
  if ( (v40 & 0x400000) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(v4 + 200), 0x63536D4Du);
  if ( *(int *)(v4 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v4 + 56), 0, 0);
  v41 = *(_QWORD *)(v4 + 104);
  if ( v41 )
  {
    v57 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v41 + 40) >> 43) & 0x3FFLL));
    if ( v39 == 17 )
      MiReleaseFreshPage(v41);
    else
      MiReleaseFreshPageAtDpc(v41, (__int64)qword_140E300C8, v35, v36);
    MiReleaseNonPagedResources(v57, 1LL);
  }
  if ( v37 < 0 )
  {
    v58 = *(_DWORD *)(v4 + 112);
    if ( (v58 & 1) != 0 && (unsigned int)MiIsRetryIoStatus((unsigned int)v37, 4096LL) && (v58 & 2) == 0 )
      v37 = -1073740748;
  }
  else
  {
    v37 = v72;
    if ( !v76 )
      v37 = -1073740748;
  }
  if ( v70 )
  {
    v59 = *(_DWORD *)(v4 + 192);
    PsDereferencePartition(*(_QWORD *)(v70 + 184));
    *(_DWORD *)(v4 + 192) = v59 & 0xFBFFFFFF;
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v4);
  return (unsigned int)v37;
}
