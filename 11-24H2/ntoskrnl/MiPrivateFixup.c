/*
 * XREFs of MiPrivateFixup @ 0x1402EE4F0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, PVOID *a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r10
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // rax
  int v11; // ebx
  char v12; // bl
  struct _KTHREAD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  void *v16; // r9
  bool v17; // zf
  ULONG_PTR v18; // r15
  unsigned int v19; // eax
  PVOID v20; // r13
  __int64 DriverPage; // r15
  ULONG_PTR v22; // rdx
  __int64 v23; // rdi
  PSLIST_ENTRY v24; // r13
  char EffectivePagePriorityThread; // al
  __int64 *v26; // r15
  int v27; // ecx
  volatile signed __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v35; // rbx
  PVOID v36; // rcx
  __int64 v37; // rdx
  __int64 CurrentIrql; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // r14d
  unsigned int v42; // ebx
  __int64 v44; // rdx
  int IsFaultPteIntact; // eax
  unsigned int v46; // edi
  __int64 v47; // rax
  signed __int8 v48; // cf
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // [rsp+30h] [rbp-71h]
  _BYTE v53[4]; // [rsp+48h] [rbp-59h] BYREF
  int v54; // [rsp+4Ch] [rbp-55h]
  PVOID P; // [rsp+50h] [rbp-51h]
  __int64 *v56; // [rsp+58h] [rbp-49h]
  __int64 Page; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-39h]
  __int64 v59; // [rsp+70h] [rbp-31h]
  _QWORD *v60; // [rsp+78h] [rbp-29h]
  ULONG_PTR v61; // [rsp+80h] [rbp-21h]
  __int64 v62; // [rsp+88h] [rbp-19h]
  __int64 v63; // [rsp+90h] [rbp-11h] BYREF
  __int64 v64[10]; // [rsp+98h] [rbp-9h] BYREF
  int v66; // [rsp+F8h] [rbp+57h]
  int v67; // [rsp+F8h] [rbp+57h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1[7];
  v6 = 0;
  v7 = *a1;
  v60 = a1 + 7;
  Process = CurrentThread->ApcState.Process;
  v11 = *(_DWORD *)(v5 + 184);
  v53[0] = 0;
  v58 = v7;
  v59 = (__int64)Process;
  v12 = v11 & 0xF;
  if ( !v12 )
  {
    v13 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
    if ( v13 )
    {
      if ( v13 != CurrentThread )
        *((_DWORD *)a1 + 20) |= 2u;
      return 297LL;
    }
  }
  v14 = *(unsigned __int16 *)(v5 + 174);
  v15 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
  v54 = 0;
  v16 = (void *)*((_QWORD *)qword_140E2FF88 + v14);
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
  v54 = 1;
LABEL_6:
  v56 = (__int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v63 = *v56;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  v61 = v18;
  MiObtainFaultCharges(v16, 1LL, 2LL);
  if ( v54 || v58 < 0xFFFF800000000000uLL )
  {
    v19 = MI_PAGE_TO_FULL_COLOR(v18);
    v20 = P;
    Page = MiGetPage(P, v19, 1LL);
    DriverPage = Page;
    v22 = Page;
    if ( Page == -1 )
    {
      v46 = -1073741670;
      goto LABEL_60;
    }
  }
  else
  {
    v62 = MiReleaseFaultState((__int64)(a1 + 7), 1u, v53);
    if ( KiIrqlFlags )
    {
      LOBYTE(v44) = v53[0];
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
    }
    __writecr8(v53[0]);
    DriverPage = MiAllocateDriverPage(P, v15, 0LL);
    Page = DriverPage;
    MiRelockFaultState(a1 + 7, v62);
    IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v56, &v63);
    v22 = DriverPage;
    v46 = IsFaultPteIntact == 0 ? 0xC0000434 : 0;
    if ( !IsFaultPteIntact )
      goto LABEL_59;
  }
  v23 = 48 * v22 - 0x220000000000LL;
  v24 = MiGetInPageSupportBlock(2u, 0LL);
  if ( !v24 )
  {
    v46 = -1073741670;
LABEL_59:
    v20 = P;
LABEL_60:
    if ( DriverPage != -1 )
      MiReleaseFreshPageAtDpc(48 * DriverPage - 0x220000000000LL);
    MiReturnFaultCharges(v20, 1LL, 2LL);
    return v46;
  }
  LODWORD(P) = 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v26 = v56;
  v27 = v58;
  *((_QWORD *)&v24[15].Next + 1) = v23;
  LOBYTE(P) = EffectivePagePriorityThread & 7 | 0x48;
  LODWORD(v24[12].Next) |= 0x80u;
  v52 = (int)P;
  LODWORD(v24[5].Next) = 0;
  *((_QWORD *)&v24[5].Next + 1) = 0LL;
  MiInitializeReadInProgressPfn(v27, (unsigned int)&Page, 1, (_DWORD)v26, (__int64)v24, v52);
  if ( !v12 )
    _InterlockedIncrement64((volatile signed __int64 *)(v59 + 648));
  v64[0] = *v26;
  P = *a2;
  v28 = (volatile signed __int64 *)P;
  v24[13].Next = (_SLIST_ENTRY *)a2;
  _InterlockedAdd64(v28 + 14, 1uLL);
  v29 = MiReleaseFaultState((__int64)v60, 1u, v53);
  --CurrentThread->SpecialApcDisable;
  v59 = v29;
  if ( KiIrqlFlags )
  {
    LOBYTE(v30) = v53[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
  }
  __writecr8(v53[0]);
  v31 = Page;
  MiCopyPage(Page, v61, v54 != 0 ? 73 : 17);
  if ( v54 )
  {
    v32 = MiReservePtes((__int64)&qword_140E37568, 1u);
    if ( !v32 )
    {
      --CurrentThread->SpecialApcDisable;
      v47 = KeAbPreAcquire(&qword_140E2D618, 0LL, 0LL);
      v48 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D618, 0LL);
      v49 = v47;
      if ( v48 )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D618, v47, &qword_140E2D618);
      if ( v49 )
        *(_BYTE *)(v49 + 10) = 1;
      v32 = qword_140E2D620;
      v31 = Page;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v23);
    ValidPte = MiMakeValidPte(v32, v31, ProtectionPfnCompatible | 0xA0000000);
    v35 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v32 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v32, ValidPte, 128);
    *(_QWORD *)v32 = v35;
    if ( (*(_QWORD *)(a4 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(a4 + 8) < 0 || !*(_QWORD *)(a4 + 8) )
      MiRelocateImagePfn(P, (__int64)(v32 << 25) >> 16, a3, Page);
    if ( v32 == qword_140E2D620 )
    {
      *(_QWORD *)v32 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v32 << 25) >> 16, 2, 1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D618);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D618);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v51, v50);
      }
    }
    else
    {
      MiReleasePtes((__int64)&qword_140E37568, (_QWORD *)v32, 1u);
    }
    v26 = v56;
  }
  v36 = P;
  v37 = -1LL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteControlArea(v36);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v37) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v37);
  }
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentIrql, v37);
  MiRelockFaultState(v60, v59);
  v41 = MiIsFaultPteIntact(a1, *a1, v26, v64);
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v42 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v42);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  v66 = *(_DWORD *)(v23 + 32);
  BYTE2(v66) &= ~0x20u;
  *(_DWORD *)(v23 + 32) = v66;
  *(_QWORD *)v23 = 0LL;
  if ( (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) == 0 )
    MiSetPfnModified(v23, 1);
  if ( v41 )
  {
    MiAddLockedPageCharge(v23, 3LL);
    v39 = 0xC000000000000000uLL;
    *(_QWORD *)(v23 + 24) = (*(_QWORD *)(v23 + 24) + 1LL) ^ ((*(_QWORD *)(v23 + 24) + 1LL) ^ *(_QWORD *)(v23 + 24)) & 0xC000000000000000uLL;
    v67 = *(_DWORD *)(v23 + 32);
    BYTE2(v67) = BYTE2(v67) & 0xF8 | 6;
    *(_DWORD *)(v23 + 32) = v67;
    if ( !v54 && v58 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v23 + 35) |= 8u;
  }
  else
  {
    v6 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v23, v39, v40);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v24[12].Next) &= ~0x80u;
  if ( SLODWORD(v24[11].Next) > 1 )
    KeSetEvent((PRKEVENT)(&v24[3].Next + 1), 0, 0);
  MiFreeInPageSupportBlock(v24);
  return v6;
}
