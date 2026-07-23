/*
 * XREFs of MiPrivateFixup @ 0x14034FB30
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(__int64 a1, PVOID *a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r10
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // rax
  int v11; // ebx
  char v12; // bl
  struct _KTHREAD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  struct _KPRCB *v16; // r9
  bool v17; // zf
  ULONG_PTR v18; // r15
  unsigned int v19; // eax
  PVOID v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 DriverPage; // r15
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r13
  char EffectivePagePriorityThread; // al
  unsigned __int64 *v28; // r15
  unsigned __int64 v29; // rcx
  volatile signed __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r15
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v39; // rbx
  PVOID v40; // rcx
  __int64 v41; // rdx
  __int64 CurrentIrql; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // r14d
  unsigned int v47; // ebx
  __int64 v49; // rdx
  int IsFaultPteIntact; // eax
  unsigned int v51; // edi
  char *v52; // rax
  signed __int8 v53; // cf
  char *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // [rsp+30h] [rbp-71h]
  _BYTE v58[4]; // [rsp+48h] [rbp-59h] BYREF
  int v59; // [rsp+4Ch] [rbp-55h]
  PVOID P; // [rsp+50h] [rbp-51h]
  unsigned __int64 *v61; // [rsp+58h] [rbp-49h]
  __int64 Page; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-39h]
  __int64 v64; // [rsp+70h] [rbp-31h]
  __int64 *v65; // [rsp+78h] [rbp-29h]
  ULONG_PTR v66; // [rsp+80h] [rbp-21h]
  __int64 v67; // [rsp+88h] [rbp-19h]
  unsigned __int64 v68; // [rsp+90h] [rbp-11h] BYREF
  unsigned __int64 v69[10]; // [rsp+98h] [rbp-9h] BYREF
  int v71; // [rsp+F8h] [rbp+57h]
  int v72; // [rsp+F8h] [rbp+57h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  v7 = *(_QWORD *)a1;
  v65 = (__int64 *)(a1 + 56);
  Process = CurrentThread->ApcState.Process;
  v11 = *(_DWORD *)(v5 + 184);
  v58[0] = 0;
  v63 = v7;
  v64 = (__int64)Process;
  v12 = v11 & 0xF;
  if ( !v12 )
  {
    v13 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
    if ( v13 )
    {
      if ( v13 != CurrentThread )
        *(_DWORD *)(a1 + 80) |= 2u;
      return 297LL;
    }
  }
  v14 = *(unsigned __int16 *)(v5 + 174);
  v15 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
  v59 = 0;
  v16 = (struct _KPRCB *)*((_QWORD *)qword_140E300C8 + v14);
  P = v16;
  if ( v7 < 0xFFFF800000000000uLL )
  {
    v17 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    goto LABEL_5;
  }
  if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x2000) != 0 )
  {
    v17 = (v15 & 2) == 0;
LABEL_5:
    if ( !v17 )
      goto LABEL_6;
  }
  v59 = 1;
LABEL_6:
  v61 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v68 = *v61;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  v66 = v18;
  MiObtainFaultCharges(&v16->MxCsr, 1uLL, 2, v16);
  if ( v59 || v63 < 0xFFFF800000000000uLL )
  {
    v19 = MI_PAGE_TO_FULL_COLOR(v18);
    v20 = P;
    Page = MiGetPage((__int64)P, v19, 1u);
    DriverPage = Page;
    v24 = Page;
    if ( Page == -1 )
    {
      v51 = -1073741670;
      goto LABEL_60;
    }
  }
  else
  {
    v67 = MiReleaseFaultState((__int64 *)(a1 + 56), 1u, v58);
    if ( KiIrqlFlags )
    {
      LOBYTE(v49) = v58[0];
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
    }
    __writecr8(v58[0]);
    DriverPage = MiAllocateDriverPage(P, v15, 0LL);
    Page = DriverPage;
    MiRelockFaultState(a1 + 56, v67);
    IsFaultPteIntact = MiIsFaultPteIntact(a1, *(_QWORD *)a1, (__int64)v61, &v68);
    v24 = DriverPage;
    v51 = IsFaultPteIntact == 0 ? 0xC0000434 : 0;
    if ( !IsFaultPteIntact )
      goto LABEL_59;
  }
  v25 = 48 * v24 - 0x220000000000LL;
  v26 = MiGetInPageSupportBlock(2LL, 0LL);
  if ( !v26 )
  {
    v51 = -1073741670;
LABEL_59:
    v20 = P;
LABEL_60:
    if ( DriverPage != -1 )
      MiReleaseFreshPageAtDpc(48 * DriverPage - 0x220000000000LL, v24, v21, v22);
    MiReturnFaultCharges(v20, 1LL, 2LL);
    return v51;
  }
  LODWORD(P) = 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
  v28 = v61;
  v29 = v63;
  *(_QWORD *)(v26 + 248) = v25;
  LOBYTE(P) = EffectivePagePriorityThread & 7 | 0x48;
  *(_DWORD *)(v26 + 192) |= 0x80u;
  v57 = (char)P;
  *(_DWORD *)(v26 + 80) = 0;
  *(_QWORD *)(v26 + 88) = 0LL;
  MiInitializeReadInProgressPfn(v29, &Page, 1LL, v28, v26, v57);
  if ( !v12 )
    _InterlockedIncrement64((volatile signed __int64 *)(v64 + 648));
  v69[0] = *v28;
  P = *a2;
  v30 = (volatile signed __int64 *)P;
  *(_QWORD *)(v26 + 208) = a2;
  _InterlockedAdd64(v30 + 14, 1uLL);
  v31 = MiReleaseFaultState(v65, 1u, v58);
  --CurrentThread->SpecialApcDisable;
  v64 = v31;
  if ( KiIrqlFlags )
  {
    LOBYTE(v32) = v58[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
  }
  __writecr8(v58[0]);
  v33 = Page;
  MiCopyPage(Page, v66, v59 != 0 ? 73 : 17);
  if ( v59 )
  {
    v36 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( !v36 )
    {
      --CurrentThread->SpecialApcDisable;
      v52 = (char *)KeAbPreAcquire((__int64)&qword_140E2D758, 0LL);
      v53 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D758, 0LL);
      v54 = v52;
      if ( v53 )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D758, v52, (__int64)&qword_140E2D758);
      if ( v54 )
        v54[10] = 1;
      v36 = qword_140E2D760;
      v33 = Page;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v25);
    ValidPte = MiMakeValidPte(v36, v33, ProtectionPfnCompatible | 0xA0000000);
    v39 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v36 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v36, ValidPte, 128LL);
    *(_QWORD *)v36 = v39;
    if ( (*(_QWORD *)(a4 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(a4 + 8) < 0 || !*(_QWORD *)(a4 + 8) )
      MiRelocateImagePfn(P, (__int64)(v36 << 25) >> 16, a3, Page);
    if ( v36 == qword_140E2D760 )
    {
      *(_QWORD *)v36 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v36 << 25) >> 16, 2, 1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D758, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D758);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D758);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v56, v55, v34, v35);
      }
    }
    else
    {
      MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v36, 1u);
    }
    v28 = v61;
  }
  v40 = P;
  v41 = -1LL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteControlArea(v40);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v41) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v41);
  }
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentIrql, v41, v34, v35);
  MiRelockFaultState(v65, v64);
  v46 = MiIsFaultPteIntact(a1, *(_QWORD *)a1, (__int64)v28, v69);
  v47 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v47 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v47);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  v71 = *(_DWORD *)(v25 + 32);
  BYTE2(v71) &= ~0x20u;
  *(_DWORD *)(v25 + 32) = v71;
  *(_QWORD *)v25 = 0LL;
  if ( (*(_QWORD *)(v25 + 24) & 0x4000000000000000LL) == 0 )
    MiSetPfnModified(v25, 1);
  if ( v46 )
  {
    MiAddLockedPageCharge(v25, 3);
    v43 = 0xC000000000000000uLL;
    *(_QWORD *)(v25 + 24) = (*(_QWORD *)(v25 + 24) + 1LL) ^ ((*(_QWORD *)(v25 + 24) + 1LL) ^ *(_QWORD *)(v25 + 24)) & 0xC000000000000000uLL;
    v72 = *(_DWORD *)(v25 + 32);
    BYTE2(v72) = BYTE2(v72) & 0xF8 | 6;
    *(_DWORD *)(v25 + 32) = v72;
    if ( !v59 && v63 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v25 + 35) |= 8u;
  }
  else
  {
    v6 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v25, v43, v44, v45);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_DWORD *)(v26 + 192) &= ~0x80u;
  if ( *(int *)(v26 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v26 + 56), 0, 0);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v26);
  return v6;
}
