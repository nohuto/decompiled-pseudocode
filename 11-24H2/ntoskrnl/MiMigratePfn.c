/*
 * XREFs of MiMigratePfn @ 0x14022C0A0
 * Callers:
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiCanPageMove @ 0x1402F7730 (MiCanPageMove.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiCapturePfnPageFileInfoInline @ 0x14036D370 (MiCapturePfnPageFileInfoInline.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiMigratePfn(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int8 v4; // cf
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  int PfnSlabType; // eax
  unsigned __int64 v13; // rdi
  int v14; // esi
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned __int32 v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ebp
  unsigned int *v22; // r8
  unsigned int *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // r14d
  __int64 v27; // r12
  ULONG_PTR Page; // rax
  __int64 v29; // r14
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rbp
  unsigned int v33; // ebx
  unsigned int v34; // esi
  _QWORD *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  volatile signed __int32 *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rcx
  unsigned int v48; // ebx
  int v49; // ebx
  __int64 v50; // rdx
  int IsPfnCommitNotCharged; // eax
  _DWORD *v52; // r8
  ULONG_PTR v53; // [rsp+20h] [rbp-78h]
  unsigned __int64 v54; // [rsp+28h] [rbp-70h]
  __int64 updated; // [rsp+30h] [rbp-68h] BYREF
  __int64 v56; // [rsp+38h] [rbp-60h]
  __int64 v57; // [rsp+40h] [rbp-58h] BYREF
  __int128 v58; // [rsp+48h] [rbp-50h] BYREF
  unsigned int BugCheckParameter2; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2b; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2c; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2d; // [rsp+A0h] [rbp+8h]
  __int64 BugCheckParameter2a; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2e; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v65; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v66; // [rsp+B8h] [rbp+20h]

  v66 = a4;
  v4 = _bittest64((const signed __int64 *)(a2 + 40), 0x35u);
  v5 = *a1;
  v6 = a1[7];
  v7 = a1[2];
  v58 = 0LL;
  v65 = v5;
  if ( v4 )
    return a2;
  PfnSlabType = MiGetPfnSlabType(a2);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    return a2;
  if ( PfnSlabType != 9 )
    return a2;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) )
    return a2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    return a2;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return a2;
  v13 = 0LL;
  v57 = 0LL;
  v14 = MI_NODE_FROM_PFN(a2);
  v15 = MiComputeFaultNode(a1, 0LL, &v57);
  MiInitializePageColorBase(v6, 3LL, v15, &v58);
  v16 = (DWORD2(v58) >> 9) & 0x3F;
  if ( v16 == v14 )
    return a2;
  v17 = 1LL;
  v18 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v56 = v18;
  v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v58, 1u);
  v20 = (unsigned __int16)KeNumberNodes;
  v21 = DWORD2(v58) ^ (unsigned __int8)(BYTE8(v58) ^ (v19 % dword_140E2DBC0[(*((_QWORD *)&v58 + 1) >> 16) & 3LL]));
  v22 = (unsigned int *)(qword_140E2DAD0 + 4LL * v16 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  v54 = (unsigned __int64)v23;
  while ( v22 < v23 )
  {
    v24 = *v22;
    if ( (_DWORD)v24 == v14 )
      return a2;
    v20 = *(_QWORD *)(v18 + 16) + 57216 * v24;
    if ( *(_QWORD *)(v20 + 3848) || *(_QWORD *)(v20 + 3856) )
      break;
    v23 = (unsigned int *)v54;
    ++v22;
  }
  if ( *(__int64 *)(a2 + 40) < 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v25 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(a2, v20, v22);
    v25 = 0;
    if ( IsPfnCommitNotCharged )
      v25 = 5;
  }
  BugCheckParameter2 = v25;
  if ( !MiObtainFaultCharges(v18, v17, v25) )
    return a2;
  v26 = 2;
  if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v65) == 11 )
    v26 = 130;
  v27 = v56;
  Page = MiGetPage(v56, v21, v26);
  v53 = Page;
  if ( Page == -1LL )
    goto LABEL_94;
  v29 = 48 * Page - 0x220000000000LL;
  v30 = MiPageToNode(Page);
  if ( v16 != v30 )
  {
    v52 = (_DWORD *)(qword_140E2DAD0 + 4LL * v16 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v31 = v54;
    while ( (unsigned __int64)v52 < v54 )
    {
      if ( *v52 == v14 )
        goto LABEL_93;
      if ( *v52 == v30 )
        break;
      ++v52;
    }
  }
  if ( a3 )
  {
    v32 = MiGetInPageSupportBlock(6LL);
    if ( v32 )
      goto LABEL_23;
LABEL_93:
    LODWORD(v65) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v65);
      while ( *(__int64 *)(v29 + 24) < 0 );
    }
    MiReturnFreeZeroPage(v29);
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_94:
    MiReturnFaultCharges(v56, 1LL, BugCheckParameter2);
    return a2;
  }
  v32 = 0LL;
LABEL_23:
  v33 = 0;
  v34 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
      {
        HvlNotifyLongSpinWait(v33);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  MiFinalizePageAttribute(v29, v34, 1LL);
  MiCopyPfnEntryEx(v29, a2);
  *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
  HIWORD(BugCheckParameter2b) = HIWORD(*(_DWORD *)(v29 + 32));
  LOWORD(BugCheckParameter2b) = 1;
  *(_DWORD *)(v29 + 32) = BugCheckParameter2b;
  BugCheckParameter2c = *(_DWORD *)(a2 + 32);
  BYTE2(BugCheckParameter2c) = BYTE2(BugCheckParameter2c) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = BugCheckParameter2c;
  if ( v32 )
  {
    *(_DWORD *)(v32 + 192) |= 0x80u;
    BugCheckParameter2d = *(_DWORD *)(v29 + 32);
    BYTE2(BugCheckParameter2d) |= 0x20u;
    *(_DWORD *)(v29 + 32) = BugCheckParameter2d;
    *(_QWORD *)v29 = v32 + 32;
    *(_QWORD *)(v32 + 248) = v29;
  }
  v35 = (_QWORD *)(*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL);
  v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v35);
  updated = MiUpdateTransitionPteFrame(v36, v53);
  v37 = updated;
  if ( (unsigned int)MiPteInShadowRange(v35) )
  {
    v39 = MiSanitizeShadowPxe(v38, &updated);
    v37 = updated;
  }
  else
  {
    v39 = 0;
  }
  *v35 = v37;
  if ( v39 )
    MiWritePteShadow(v35, v37);
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v40 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38) )
        {
          HvlNotifyLongSpinWait(v40);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiAddLockedPageCharge(a3, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v41 = (volatile signed __int32 *)(a2 + 24);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v42) = 17;
    MiUnlockProtoPoolPage(a3, v42);
    *v66 = v32;
    BugCheckParameter2a = (a2 + 0x220000000000LL) / 48;
    MiCopyPage(v53, BugCheckParameter2a, 258);
    MiLockProtoPoolPage(v35, 0LL);
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v44 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
        {
          HvlNotifyLongSpinWait(v44);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v41 = (volatile signed __int32 *)(a2 + 24);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    BugCheckParameter2a = (a2 + 0x220000000000LL) / 48;
    MiCopyPage(v53, BugCheckParameter2a, 258);
  }
  v46 = 0;
  while ( _interlockedbittestandset64(v41, 0x3FuLL) )
  {
    do
    {
      if ( (++v46 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v45) )
      {
        HvlNotifyLongSpinWait(v46);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiSetPfnIdentity(a2, 0LL);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2a, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v48 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v47) )
      {
        HvlNotifyLongSpinWait(v48);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  v49 = *(_DWORD *)(v29 + 32);
  BugCheckParameter2e = v49;
  BYTE2(BugCheckParameter2e) = BYTE2(v49) & 0xDF;
  *(_DWORD *)(v29 + 32) = BugCheckParameter2e;
  *(_QWORD *)v29 = 0LL;
  MiRemoveLockedPageCharge(v29);
  if ( !v32 )
    return v29;
  *(_DWORD *)(v32 + 192) &= ~0x80u;
  if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) == 0 )
    return v29;
  if ( (_WORD)v49 == 1 )
  {
    if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
      v13 = MiCapturePfnPageFileInfoInline(v29, 0LL, 1LL);
    MiInsertPageInFreeOrZeroedList(v53, 2LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v50) = 17;
    MiUnlockProtoPoolPage(a3, v50);
  }
  if ( v13 )
    MiReleasePageFileInfo(v27, v13, 1LL);
  return 0LL;
}
