/*
 * XREFs of MiAllocateKernelStackPages @ 0x14039F96C
 * Callers:
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140477D50 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiMarkKernelStack @ 0x1403A0010 (MiMarkKernelStack.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiInitializeMdlSinglePage @ 0x1404132BC (MiInitializeMdlSinglePage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VslAllocateKernelShadowStack @ 0x140A43FE4 (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 *v2; // r13
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  unsigned int v6; // r9d
  ULONG *v7; // rbx
  char v8; // r14
  unsigned __int8 v9; // al
  char v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 Page; // r9
  __int64 DemandZeroPte; // rdi
  unsigned int v17; // r13d
  unsigned __int64 v18; // r14
  void *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbx
  ULONG_PTR v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  ULONG_PTR v27; // rbx
  ULONG_PTR v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 SlabPage; // rax
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int KernelShadowStack; // eax
  int v38; // edx
  unsigned int v39; // [rsp+30h] [rbp-39h]
  ULONG *v40; // [rsp+38h] [rbp-31h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-21h]
  unsigned __int64 v43; // [rsp+50h] [rbp-19h]
  __int64 v44; // [rsp+58h] [rbp-11h]
  unsigned __int64 v45; // [rsp+60h] [rbp-9h]
  volatile signed __int32 *v46; // [rsp+68h] [rbp-1h]
  unsigned __int64 v47; // [rsp+70h] [rbp+7h]
  char v49; // [rsp+D8h] [rbp+6Fh]
  unsigned __int8 v50; // [rsp+D8h] [rbp+6Fh]
  int v51; // [rsp+E0h] [rbp+77h]
  __int64 v52; // [rsp+E0h] [rbp+77h]
  unsigned int v53; // [rsp+E8h] [rbp+7Fh]
  __int64 v54; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  BugCheckParameter3 = 0LL;
  HIDWORD(v47) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(ULONG **)a1;
  v8 = *(_BYTE *)(a1 + 36);
  v42 = *(_QWORD *)(a1 + 56);
  v44 = *(_QWORD *)(a1 + 40);
  v45 = v4 + 8 * v1;
  v40 = v7;
  v49 = v8;
  if ( v6 == -1 )
    v6 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v9 = MiAssignDefaultChannel(v6);
  v53 = 0;
  v51 = 0;
  v46 = (volatile signed __int32 *)(v11 + 34640);
  LODWORD(v47) = ((2 * (v10 & 0x3F | 0x380)) | v9 & 1) << 8;
  if ( v42 && (v7[1] & 8) != 0 )
  {
    v33 = *(_DWORD *)(a1 + 32) & 2;
    v51 = 1;
    v2 = (__int64 *)((v33 != 0) - 1LL);
    v53 = v33 == 0 ? 0x20000 : 0;
  }
  v39 = v8 == 2;
  if ( (int)MiAcquireNonPagedResources(v7, v1, 0LL, *(_DWORD *)(a1 + 32) & 2) < 0 )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
LABEL_7:
  v43 = v13;
  if ( v13 < v1 )
  {
    v14 = v47 & 0xFFFFFF00 | (unsigned __int8)(_InterlockedExchangeAdd(v46, 1u)
                                             % (unsigned int)dword_140E2DBC0[(v47 >> 16) & 3]);
    while ( 1 )
    {
      if ( v51 )
      {
        v31 = 16;
        if ( v49 != 2 )
          v31 = 0;
        SlabPage = MiGetSlabPage((__int64)v40, 3, v14, v31, v2, v53);
        if ( SlabPage != -1 )
        {
          if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
            ++v12;
LABEL_11:
          v13 = v43 + 1;
          *(_QWORD *)(48 * Page - 0x220000000000LL) = v5;
          v5 = (_QWORD *)(48 * Page - 0x220000000000LL);
          goto LABEL_7;
        }
      }
      Page = MiGetPage((__int64)v40, v14, v39);
      if ( Page != -1 )
        goto LABEL_11;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
        break;
      MiWaitForFreePage((__int64)v40, 0);
    }
    MiReleaseNonPagedResources((__int64)v40, v1);
    while ( 1 )
    {
      v36 = (__int64)v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)*v5;
      MiReleaseFreshPage(v36, v34, v35);
    }
    return 0LL;
  }
  if ( v12 )
    MiReleaseNonPagedResources((__int64)v40, v12);
  if ( v40 == &MiSystemPartition )
    _InterlockedAdd64(&qword_140E375E8, v1 - v12);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  BugCheckParameter3 = MiMakeValidPte(v4, 0LL, v42 != 0 ? 536870913 : -1610612732);
  if ( v42 )
  {
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter3);
    MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3, v30 | 0x40);
  }
  v52 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = MiVaToFlushVm(v4);
  v54 = (__int64)v19;
  if ( v49 == 2 )
  {
    v50 = 17;
    MiLockWorkingSetSharedAtDpc((__int64)v19);
  }
  else
  {
    v50 = MiLockWorkingSetShared((__int64)v19);
  }
  v20 = v54;
  do
  {
    v21 = (__int64)v5;
    if ( v5 )
      v5 = (_QWORD *)*v5;
    v43 = 0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4);
    v22 = BugCheckParameter3 & 0xFFF0000000000FFFuLL | ((v43 & 0xFFFFFFFFFFLL) << 12);
    BugCheckParameter3 = v22;
    if ( !v18 )
      goto LABEL_46;
    if ( (v4 & 0xFFF) == 0 )
    {
      if ( v17 )
      {
        MiIncreaseUsedPtes(v22, v18, v17, 2);
        v17 = 0;
      }
      MiUnlockPageTableInternal(v20, v18);
LABEL_46:
      v18 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v20, v18);
    }
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v21 + 24) < 0 );
    }
    v24 = v42;
    if ( v42 )
    {
      MiFinalizePageAttribute(v21, 1LL, 1LL);
      MiInitializeMdlSinglePage(v21, v21, v44, CLFS_LSN_NULL_EXT, 0);
      *(_QWORD *)(v21 + 8) = v4;
      MiSetPfnIdentity(v21, 3LL);
      v26 = v52;
      *(_QWORD *)(v24 + 8 * v52) = v43;
    }
    else
    {
      *(_QWORD *)v4 = DemandZeroPte;
      MiInitializePfn(v21, (__int64 *)v4, 4u, 5);
      MiMarkKernelStack(v25, v21, v44);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v27 = BugCheckParameter3;
    ++v17;
    v20 = v54;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (BugCheckParameter3 & 0x20) == 0 )
      {
        v26 = 0x4000000000LL;
        if ( v4 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v4, BugCheckParameter3, 128);
      }
    }
    ++v52;
    *(_QWORD *)v4 = v27;
    v4 += 8LL;
  }
  while ( v4 < v45 );
  if ( v18 )
  {
    if ( v17 )
      MiIncreaseUsedPtes(v26, v18, v17, 2);
    MiUnlockPageTableInternal(v54, v18);
  }
  MiUnlockWorkingSetShared(v54, v50);
  if ( !v42 )
    return 1LL;
  v29 = (*(_QWORD *)(a1 + 8) - 8LL) << 25 >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    KernelShadowStack = VslAllocateKernelShadowStack(
                          v29,
                          (unsigned int)(*(_DWORD *)(a1 + 16) << 12),
                          *(unsigned int *)(a1 + 52),
                          v42,
                          v52,
                          a1 + 64);
    if ( KernelShadowStack >= 0 )
      return 1LL;
    if ( (unsigned int)(KernelShadowStack + 1073741811) <= 0x15
      && (v38 = 2099201, _bittest(&v38, KernelShadowStack + 1073741811))
      || KernelShadowStack == -1073741757 )
    {
      KeBugCheckEx(0x1Au, 0x51540uLL, v29, *(int *)(a1 + 52), KernelShadowStack);
    }
  }
  MiDeleteKernelStackPages(v40, *(_QWORD *)(a1 + 8) - 8LL, v52, *(_DWORD *)(a1 + 52), 0LL);
  return 0LL;
}
