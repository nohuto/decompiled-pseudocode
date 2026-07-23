/*
 * XREFs of MiMigratePfn @ 0x1402FF9B0
 * Callers:
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReturnFreeZeroPage @ 0x14024EE00 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiCapturePfnPageFileInfoInline @ 0x140269E70 (MiCapturePfnPageFileInfoInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
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
  __int64 v15; // r9
  unsigned int v16; // eax
  int v17; // ebx
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int32 v20; // eax
  unsigned int v21; // ebp
  unsigned int *v22; // r8
  unsigned int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // r14d
  __int64 v29; // r12
  ULONG_PTR Page; // rax
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rbp
  unsigned int v34; // ebx
  unsigned int v35; // esi
  _QWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  unsigned int v43; // ebx
  volatile signed __int32 *v44; // rbx
  unsigned __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // esi
  unsigned int v52; // esi
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned int v55; // ebx
  int v56; // ebx
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  int IsPfnCommitNotCharged; // eax
  _DWORD *i; // r8
  ULONG_PTR v62; // [rsp+20h] [rbp-78h]
  unsigned __int64 v63; // [rsp+28h] [rbp-70h]
  __int64 updated; // [rsp+30h] [rbp-68h] BYREF
  __int64 v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h] BYREF
  __int128 v67; // [rsp+48h] [rbp-50h] BYREF
  unsigned int BugCheckParameter2; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2b; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2c; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2d; // [rsp+A0h] [rbp+8h]
  __int64 BugCheckParameter2a; // [rsp+A0h] [rbp+8h]
  int BugCheckParameter2e; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v74; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v75; // [rsp+B8h] [rbp+20h]

  v75 = a4;
  v4 = _bittest64((const signed __int64 *)(a2 + 40), 0x35u);
  v5 = *a1;
  v6 = a1[7];
  v7 = a1[2];
  v67 = 0LL;
  v74 = v5;
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
  v66 = 0LL;
  v14 = MI_NODE_FROM_PFN(a2);
  v16 = MiComputeFaultNode(a1, 0LL, &v66, v15);
  MiInitializePageColorBase(v6, 3LL, v16, &v67);
  v17 = (DWORD2(v67) >> 9) & 0x3F;
  if ( v17 == v14 )
    return a2;
  v18 = 1LL;
  v19 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v65 = v19;
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v67, 1u);
  v21 = DWORD2(v67) ^ (unsigned __int8)(BYTE8(v67) ^ (v20 % dword_140E2DD00[(*((_QWORD *)&v67 + 1) >> 16) & 3LL]));
  v22 = (unsigned int *)(qword_140E2DC10 + 4LL * v17 * (unsigned int)(unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  v63 = (unsigned __int64)v23;
  while ( v22 < v23 )
  {
    v24 = *v22;
    if ( (_DWORD)v24 == v14 )
      return a2;
    v25 = *(_QWORD *)(v19 + 16) + 57216 * v24;
    if ( *(_QWORD *)(v25 + 3848) || *(_QWORD *)(v25 + 3856) )
      break;
    v23 = (unsigned int *)v63;
    ++v22;
  }
  if ( *(__int64 *)(a2 + 40) < 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v26 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(a2);
    v26 = 0;
    if ( IsPfnCommitNotCharged )
      v26 = 5;
  }
  BugCheckParameter2 = v26;
  if ( !MiObtainFaultCharges(v19, v18, v26) )
    return a2;
  v28 = 2;
  if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v74) == 11 )
    v28 = 130;
  v29 = v65;
  Page = MiGetPage(v65, v21, v28, v27);
  v62 = Page;
  if ( Page == -1LL )
    goto LABEL_94;
  v31 = 48 * Page - 0x220000000000LL;
  v32 = MiPageToNode(Page);
  if ( v17 != v32 )
  {
    for ( i = (_DWORD *)(qword_140E2DC10 + 4LL * v17 * (unsigned int)(unsigned __int16)KeNumberNodes);
          (unsigned __int64)i < v63;
          ++i )
    {
      if ( *i == v14 )
        goto LABEL_93;
      if ( *i == v32 )
        break;
    }
  }
  if ( a3 )
  {
    v33 = MiGetInPageSupportBlock(6LL, 0LL);
    if ( v33 )
      goto LABEL_23;
LABEL_93:
    LODWORD(v74) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *(__int64 *)(v31 + 24) < 0 );
    }
    MiReturnFreeZeroPage(v31);
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_94:
    MiReturnFaultCharges(v65, 1LL, BugCheckParameter2);
    return a2;
  }
  v33 = 0LL;
LABEL_23:
  v34 = 0;
  v35 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v34);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v31 + 24) < 0 );
  }
  MiFinalizePageAttribute(v31, v35, 1LL);
  MiCopyPfnEntryEx(v31, a2);
  *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
  HIWORD(BugCheckParameter2b) = HIWORD(*(_DWORD *)(v31 + 32));
  LOWORD(BugCheckParameter2b) = 1;
  *(_DWORD *)(v31 + 32) = BugCheckParameter2b;
  BugCheckParameter2c = *(_DWORD *)(a2 + 32);
  BYTE2(BugCheckParameter2c) = BYTE2(BugCheckParameter2c) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = BugCheckParameter2c;
  if ( v33 )
  {
    *(_DWORD *)(v33 + 192) |= 0x80u;
    BugCheckParameter2d = *(_DWORD *)(v31 + 32);
    BYTE2(BugCheckParameter2d) |= 0x20u;
    *(_DWORD *)(v31 + 32) = BugCheckParameter2d;
    *(_QWORD *)v31 = v33 + 32;
    *(_QWORD *)(v33 + 248) = v31;
  }
  v36 = (_QWORD *)(*(_QWORD *)(v31 + 8) | 0x8000000000000000uLL);
  v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v36);
  updated = MiUpdateTransitionPteFrame(v37, v62);
  v38 = updated;
  if ( MiPteInShadowRange((unsigned __int64)v36) )
  {
    v42 = MiSanitizeShadowPxe(v39, (__int64)&updated, v40);
    v38 = updated;
  }
  else
  {
    v42 = 0;
  }
  *v36 = v38;
  if ( v42 )
    MiWritePteShadow((__int64)v36, v38, v40, v41);
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    v43 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v43 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v43);
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
    v44 = (volatile signed __int32 *)(a2 + 24);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v45) = 17;
    MiUnlockProtoPoolPage(a3, v45, v46, v47);
    *v75 = v33;
    BugCheckParameter2a = (a2 + 0x220000000000LL) / 48;
    MiCopyPage(v62, BugCheckParameter2a, 258);
    MiLockProtoPoolPage(v36, 0LL);
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v51 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v51);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3, v48, v49, v50);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v44 = (volatile signed __int32 *)(a2 + 24);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    BugCheckParameter2a = (a2 + 0x220000000000LL) / 48;
    MiCopyPage(v62, BugCheckParameter2a, 258);
  }
  v52 = 0;
  while ( _interlockedbittestandset64(v44, 0x3FuLL) )
  {
    do
    {
      if ( (++v52 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v52);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  MiSetPfnIdentity(a2, 0);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2a, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)v44, 0x7FFFFFFFFFFFFFFFuLL);
  v55 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v55 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v55);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v31 + 24) < 0 );
  }
  v56 = *(_DWORD *)(v31 + 32);
  BugCheckParameter2e = v56;
  BYTE2(BugCheckParameter2e) = BYTE2(v56) & 0xDF;
  *(_DWORD *)(v31 + 32) = BugCheckParameter2e;
  *(_QWORD *)v31 = 0LL;
  MiRemoveLockedPageCharge(v31, v53, v54);
  if ( !v33 )
    return v31;
  *(_DWORD *)(v33 + 192) &= ~0x80u;
  if ( (*(_QWORD *)(v31 + 24) & 0x4000000000000000LL) == 0 )
    return v31;
  if ( (_WORD)v56 == 1 )
  {
    if ( (*(_DWORD *)(v31 + 16) & 0x400LL) == 0 )
      v13 = MiCapturePfnPageFileInfoInline(v31, 0, 1);
    MiInsertPageInFreeOrZeroedList(v62, 2LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v57) = 17;
    MiUnlockProtoPoolPage(a3, v57, v58, v59);
  }
  if ( v13 )
    MiReleasePageFileInfo(v29, v13, 1LL, v59);
  return 0LL;
}
