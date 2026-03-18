/*
 * XREFs of MiMigratePfn @ 0x140217D00
 * Callers:
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiCapturePfnPageFileInfoInline @ 0x1402CB93C (MiCapturePfnPageFileInfoInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiMigratePfn(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int8 v4; // cf
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned int v11; // r12d
  int v12; // esi
  unsigned int v13; // eax
  int v14; // ebx
  __int64 v15; // r10
  unsigned __int32 v16; // eax
  unsigned int v17; // r14d
  unsigned int *v18; // r8
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edi
  ULONG_PTR Page; // rax
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned int v28; // ebx
  unsigned int v29; // edi
  _QWORD *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // edi
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rbx
  unsigned int v36; // edi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // edi
  unsigned int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // r12
  unsigned int v45; // ebx
  int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rbx
  unsigned int v49; // r11d
  int v50; // eax
  unsigned int *i; // r8
  __int64 v52; // [rsp+20h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-40h]
  __int64 v54; // [rsp+30h] [rbp-38h]
  __int64 updated; // [rsp+38h] [rbp-30h] BYREF
  __int64 v56; // [rsp+40h] [rbp-28h] BYREF
  __int64 v57; // [rsp+48h] [rbp-20h]
  __int128 v58; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v59; // [rsp+B0h] [rbp+48h]
  int v60; // [rsp+B0h] [rbp+48h]
  int v61; // [rsp+B0h] [rbp+48h]
  int v62; // [rsp+B0h] [rbp+48h]
  int v63; // [rsp+B0h] [rbp+48h]
  __int64 v64; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v65; // [rsp+C0h] [rbp+58h]
  __int64 *v66; // [rsp+C8h] [rbp+60h]

  v66 = a4;
  v65 = a3;
  v4 = _bittest64((const signed __int64 *)(a2 + 40), 0x35u);
  v5 = *a1;
  v6 = a1[7];
  v7 = a1[2];
  v58 = 0LL;
  v64 = v5;
  if ( v4 )
    return a2;
  if ( (unsigned int)MiGetPfnSlabType(a2) != 9 )
    return a2;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    return a2;
  v11 = 0;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
    return a2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    return a2;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return a2;
  v56 = 0LL;
  v12 = MI_NODE_FROM_PFN(a2);
  v13 = MiComputeFaultNode(a1, 0LL, &v56);
  MiInitializePageColorBase(v6, 3LL, v13, &v58);
  v14 = (DWORD2(v58) >> 9) & 0x3F;
  if ( v14 == v12 )
    return a2;
  v15 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v54 = v15;
  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v58, 1u);
  v17 = DWORD2(v58) ^ (unsigned __int8)(BYTE8(v58) ^ (v16 % dword_140E2D980[(*((_QWORD *)&v58 + 1) >> 16) & 3LL]));
  v18 = (unsigned int *)(qword_140E2D890 + 4LL * v14 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v19 = &v18[(unsigned __int16)KeNumberNodes];
  v59 = (unsigned __int64)v19;
  while ( v18 < v19 )
  {
    v20 = *v18;
    if ( (_DWORD)v20 == v12 )
      return a2;
    v21 = *(_QWORD *)(v15 + 16);
    if ( *(_QWORD *)(57216 * v20 + v21 + 3848) || *(_QWORD *)(57216 * v20 + v21 + 3856) )
      break;
    v19 = (unsigned int *)v59;
    ++v18;
  }
  if ( *(__int64 *)(a2 + 40) < 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v11 = 1;
  }
  else if ( (unsigned int)MiIsPfnCommitNotCharged(a2) )
  {
    v11 = v49;
  }
  if ( !MiObtainFaultCharges(v15, 1LL, v11) )
    return a2;
  v22 = 2;
  if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v64) == 11 )
    v22 = 130;
  Page = MiGetPage(v54, v17, v22);
  BugCheckParameter2 = Page;
  if ( Page == -1LL )
  {
LABEL_94:
    MiReturnFaultCharges(v54, 1LL, v11);
    return a2;
  }
  v24 = 48 * Page - 0x220000000000LL;
  v57 = v24;
  v25 = MiPageToNode(Page);
  if ( v14 != v25 )
  {
    v26 = qword_140E2D890;
    for ( i = (unsigned int *)(qword_140E2D890 + 4LL * v14 * (unsigned int)(unsigned __int16)KeNumberNodes);
          (unsigned __int64)i < v59;
          ++i )
    {
      v26 = *i;
      if ( (_DWORD)v26 == v12 )
        goto LABEL_101;
      if ( (_DWORD)v26 == v25 )
        break;
    }
  }
  if ( v65 )
  {
    v52 = MiGetInPageSupportBlock(6LL, 0LL);
    v27 = v52;
    if ( v52 )
      goto LABEL_23;
LABEL_101:
    LODWORD(v64) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v64);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    MiReturnFreeZeroPage(v24, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_94;
  }
  v27 = 0LL;
  v52 = 0LL;
LABEL_23:
  v28 = 0;
  v29 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v28 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
      {
        HvlNotifyLongSpinWait(v28);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v24 + 24) < 0 );
  }
  MiFinalizePageAttribute(v24, v29, 1LL);
  MiCopyPfnEntryEx(v24, a2);
  *(_QWORD *)(v24 + 24) &= 0xC000000000000000uLL;
  HIWORD(v60) = HIWORD(*(_DWORD *)(v24 + 32));
  LOWORD(v60) = 1;
  *(_DWORD *)(v24 + 32) = v60;
  v61 = *(_DWORD *)(a2 + 32);
  BYTE2(v61) = BYTE2(v61) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = v61;
  if ( v27 )
  {
    *(_DWORD *)(v27 + 192) |= 0x80u;
    v62 = *(_DWORD *)(v24 + 32);
    BYTE2(v62) |= 0x20u;
    *(_DWORD *)(v24 + 32) = v62;
    *(_QWORD *)v24 = v27 + 32;
    *(_QWORD *)(v27 + 248) = v24;
  }
  v30 = (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL);
  v31 = MI_READ_PTE_LOCK_FREE(v30);
  updated = MiUpdateTransitionPteFrame(v31, BugCheckParameter2);
  v32 = updated;
  v33 = 0;
  if ( (unsigned int)MiPteInShadowRange(v30) )
  {
    v50 = MiSanitizeShadowPxe(v34, &updated);
    v32 = updated;
    v33 = v50;
  }
  *v30 = v32;
  if ( v33 )
    MiWritePteShadow(v30, v32);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = (volatile signed __int32 *)(v65 + 24);
  if ( v65 )
  {
    v36 = 0;
    while ( _interlockedbittestandset64(v35, 0x3FuLL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34) )
        {
          HvlNotifyLongSpinWait(v36);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v35 < 0 );
    }
    v37 = v65;
    MiAddLockedPageCharge(v65, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v38) = 17;
    MiUnlockProtoPoolPage(v37, v38);
    *v66 = v52;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v37 = v65;
  }
  MiCopyPage(BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), 258LL);
  if ( v37 )
  {
    MiLockProtoPoolPage(v30, 0LL);
    v41 = 0;
    while ( _interlockedbittestandset64(v35, 0x3FuLL) )
    {
      do
      {
        if ( (++v41 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40) )
        {
          HvlNotifyLongSpinWait(v41);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v35 < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v65);
    _InterlockedAnd64((volatile signed __int64 *)v35, 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v57;
  }
  v42 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v42 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39) )
      {
        HvlNotifyLongSpinWait(v42);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiSetPfnIdentity(a2, 0LL);
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v44 = v65;
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v45 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
      {
        HvlNotifyLongSpinWait(v45);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v24 + 24) < 0 );
  }
  v46 = *(_DWORD *)(v24 + 32);
  v63 = v46;
  BYTE2(v63) = BYTE2(v46) & 0xDF;
  *(_DWORD *)(v24 + 32) = v63;
  *(_QWORD *)v24 = 0LL;
  MiRemoveLockedPageCharge(v24);
  if ( !v52 )
    return v24;
  *(_DWORD *)(v52 + 192) &= ~0x80u;
  if ( (*(_QWORD *)(v24 + 24) & 0x4000000000000000LL) == 0 )
    return v24;
  v48 = 0LL;
  if ( (_WORD)v46 == 1 )
  {
    if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 )
      v48 = MiCapturePfnPageFileInfoInline(v24, 0LL, 1LL);
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v44 )
  {
    LOBYTE(v47) = 17;
    MiUnlockProtoPoolPage(v44, v47);
  }
  if ( v48 )
    MiReleasePageFileInfo(v54, v48, 1LL);
  return 0LL;
}
