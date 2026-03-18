/*
 * XREFs of MiPrivateFixup @ 0x140439BB4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
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
  unsigned __int64 *v26; // r15
  unsigned __int64 v27; // rcx
  volatile signed __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v35; // rbx
  PVOID v36; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  int v41; // r14d
  int v42; // ebx
  __int64 v44; // rdx
  int IsFaultPteIntact; // eax
  unsigned int v46; // edi
  __int64 *v47; // rax
  signed __int8 v48; // cf
  __int64 *v49; // rbx
  char v50; // [rsp+30h] [rbp-71h]
  _BYTE v51[4]; // [rsp+48h] [rbp-59h] BYREF
  int v52; // [rsp+4Ch] [rbp-55h]
  PVOID P; // [rsp+50h] [rbp-51h]
  unsigned __int64 *v54; // [rsp+58h] [rbp-49h]
  __int64 Page; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp-39h]
  __int64 v57; // [rsp+70h] [rbp-31h]
  __int64 v58; // [rsp+78h] [rbp-29h]
  ULONG_PTR v59; // [rsp+80h] [rbp-21h]
  __int64 v60; // [rsp+88h] [rbp-19h]
  unsigned __int64 v61; // [rsp+90h] [rbp-11h] BYREF
  unsigned __int64 v62[10]; // [rsp+98h] [rbp-9h] BYREF
  int v64; // [rsp+F8h] [rbp+57h]
  int v65; // [rsp+F8h] [rbp+57h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  v7 = *(_QWORD *)a1;
  v58 = a1 + 56;
  Process = CurrentThread->ApcState.Process;
  v11 = *(_DWORD *)(v5 + 184);
  v51[0] = 0;
  v56 = v7;
  v57 = (__int64)Process;
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
  v52 = 0;
  v16 = (void *)*((_QWORD *)qword_140E2FD48 + v14);
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
  v52 = 1;
LABEL_6:
  v54 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v61 = *v54;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  v59 = v18;
  MiObtainFaultCharges((ULONG *)v16, 1uLL, 2, (__int64)v16);
  if ( v52 || v56 < 0xFFFF800000000000uLL )
  {
    v19 = MI_PAGE_TO_FULL_COLOR(v18);
    v20 = P;
    Page = MiGetPage((__int64)P, v19, 1u);
    DriverPage = Page;
    v22 = Page;
    if ( Page == -1 )
    {
      v46 = -1073741670;
      goto LABEL_61;
    }
  }
  else
  {
    v60 = MiReleaseFaultState(a1 + 56, 1u, v51);
    if ( KiIrqlFlags )
    {
      LOBYTE(v44) = v51[0];
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
    }
    __writecr8(v51[0]);
    DriverPage = MiAllocateDriverPage(P, v15, 0LL);
    Page = DriverPage;
    MiRelockFaultState(a1 + 56, v60);
    IsFaultPteIntact = MiIsFaultPteIntact(a1, *(_QWORD *)a1, (__int64)v54, &v61);
    v22 = DriverPage;
    v46 = IsFaultPteIntact == 0 ? 0xC0000434 : 0;
    if ( !IsFaultPteIntact )
      goto LABEL_60;
  }
  v23 = 48 * v22 - 0x220000000000LL;
  v24 = MiGetInPageSupportBlock(2u, 0LL);
  if ( !v24 )
  {
    v46 = -1073741670;
LABEL_60:
    v20 = P;
LABEL_61:
    if ( DriverPage != -1 )
      MiReleaseFreshPageAtDpc(48 * DriverPage - 0x220000000000LL);
    MiReturnFaultCharges(v20, 1LL, 2LL);
    return v46;
  }
  LODWORD(P) = 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v26 = v54;
  v27 = v56;
  *((_QWORD *)&v24[15].Next + 1) = v23;
  LOBYTE(P) = EffectivePagePriorityThread & 7 | 0x48;
  LODWORD(v24[12].Next) |= 0x80u;
  v50 = (char)P;
  LODWORD(v24[5].Next) = 0;
  *((_QWORD *)&v24[5].Next + 1) = 0LL;
  MiInitializeReadInProgressPfn(v27, &Page, 1LL, v26, (__int64)v24, v50);
  if ( !v12 )
    _InterlockedIncrement64((volatile signed __int64 *)(v57 + 648));
  v62[0] = *v26;
  P = *a2;
  v28 = (volatile signed __int64 *)P;
  v24[13].Next = (_SLIST_ENTRY *)a2;
  _InterlockedAdd64(v28 + 14, 1uLL);
  v29 = MiReleaseFaultState(v58, 1u, v51);
  --CurrentThread->SpecialApcDisable;
  v57 = v29;
  if ( KiIrqlFlags )
  {
    LOBYTE(v30) = v51[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
  }
  __writecr8(v51[0]);
  v31 = Page;
  MiCopyPage(Page, v59, v52 != 0 ? 73 : 17);
  if ( v52 )
  {
    v32 = MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( !v32 )
    {
      --CurrentThread->SpecialApcDisable;
      v47 = KeAbPreAcquire((__int64)&qword_140E2D3D8, 0LL);
      v48 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3D8, 0LL);
      v49 = v47;
      if ( v48 )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D3D8, v47, (__int64)&qword_140E2D3D8);
      if ( v49 )
        *((_BYTE *)v49 + 10) = 1;
      v32 = qword_140E2D3E0;
      v31 = Page;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v23);
    ValidPte = MiMakeValidPte(v32, v31, ProtectionPfnCompatible | 0xA0000000);
    v35 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v32 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v32, ValidPte, 128);
    *(_QWORD *)v32 = v35;
    if ( (*(_QWORD *)(a4 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(a4 + 8) < 0 || !*(_QWORD *)(a4 + 8) )
      MiRelocateImagePfn(P, (__int64)(v32 << 25) >> 16, a3, Page);
    if ( v32 == qword_140E2D3E0 )
    {
      *(_QWORD *)v32 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v32 << 25) >> 16, 2, 1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3D8);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D3D8);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v32, 1u);
    }
    v26 = v54;
  }
  v36 = P;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteControlArea(v36);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiRelockFaultState(v58, v57);
  v41 = MiIsFaultPteIntact(a1, *(_QWORD *)a1, (__int64)v26, v62);
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v42 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  v64 = *(_DWORD *)(v23 + 32);
  BYTE2(v64) &= ~0x20u;
  *(_DWORD *)(v23 + 32) = v64;
  *(_QWORD *)v23 = 0LL;
  if ( (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) == 0 )
    MiSetPfnModified(v23, 1);
  if ( v41 )
  {
    MiAddLockedPageCharge(v23, 3, v39, v40);
    v38 = 0xC000000000000000uLL;
    *(_QWORD *)(v23 + 24) = (*(_QWORD *)(v23 + 24) + 1LL) ^ ((*(_QWORD *)(v23 + 24) + 1LL) ^ *(_QWORD *)(v23 + 24)) & 0xC000000000000000uLL;
    v65 = *(_DWORD *)(v23 + 32);
    BYTE2(v65) = BYTE2(v65) & 0xF8 | 6;
    *(_DWORD *)(v23 + 32) = v65;
    if ( !v52 && v56 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v23 + 35) |= 8u;
  }
  else
  {
    v6 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v23, v38, v39, v40);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v24[12].Next) &= ~0x80u;
  if ( SLODWORD(v24[11].Next) > 1 )
    KeSetEvent((PRKEVENT)(&v24[3].Next + 1), 0, 0);
  MiFreeInPageSupportBlock(v24);
  return v6;
}
