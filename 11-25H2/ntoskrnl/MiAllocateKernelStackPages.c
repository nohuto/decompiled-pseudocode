/*
 * XREFs of MiAllocateKernelStackPages @ 0x1402282B8
 * Callers:
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140477F70 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiMarkKernelStack @ 0x140228934 (MiMarkKernelStack.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiInitializeMdlSinglePage @ 0x140416814 (MiInitializeMdlSinglePage.c)
 *     MiFreePageChain @ 0x14045B26C (MiFreePageChain.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VslAllocateKernelShadowStack @ 0x140A417FC (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v2; // r13d
  unsigned __int64 v4; // r15
  ULONG *v5; // rbx
  __int64 v6; // r8
  char v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 i; // rax
  unsigned __int32 v11; // eax
  unsigned int v12; // ebx
  __int64 Page; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 DemandZeroPte; // rdi
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbx
  ULONG_PTR v23; // rcx
  unsigned int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG_PTR v28; // rbx
  ULONG_PTR v30; // rbx
  int v31; // r9d
  __int64 SlabPage; // rax
  int v33; // ecx
  int KernelShadowStack; // eax
  int v35; // edx
  ULONG *v36; // [rsp+30h] [rbp-49h]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-41h] BYREF
  __int64 v38; // [rsp+40h] [rbp-39h]
  unsigned __int64 v39; // [rsp+48h] [rbp-31h]
  __int128 v40; // [rsp+50h] [rbp-29h] BYREF
  __int64 v41; // [rsp+60h] [rbp-19h]
  __int64 v42; // [rsp+68h] [rbp-11h]
  __int128 v43; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp+7h]
  char v46; // [rsp+E8h] [rbp+6Fh]
  char v47; // [rsp+E8h] [rbp+6Fh]
  int v48; // [rsp+F0h] [rbp+77h]
  int v49; // [rsp+F0h] [rbp+77h]
  BOOL v50; // [rsp+F8h] [rbp+7Fh]
  __int64 v51; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  BugCheckParameter3 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v43 = 0LL;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(ULONG **)a1;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
  v7 = *(_BYTE *)(a1 + 36);
  v38 = *(_QWORD *)(a1 + 56);
  v42 = *(_QWORD *)(a1 + 40);
  v41 = 0LL;
  v44 = v4 + 8 * v1;
  v36 = v5;
  v46 = v7;
  v40 = 0LL;
  MiInitializePageColorBase(0LL, 3LL, v6, &v43);
  v48 = 0;
  v8 = 0LL;
  DWORD2(v43) = DWORD2(v43) & 0xFFF3FFFF | 0x40000;
  if ( v38 && (v5[1] & 8) != 0 )
  {
    v33 = *(_DWORD *)(a1 + 32) & 2;
    v48 = 1;
    v8 = (v33 != 0) - 1LL;
    v2 = v33 == 0 ? 0x20000 : 0;
  }
  v50 = v7 == 2;
  if ( (int)MiAcquireNonPagedResources(v5, v1, 0LL, *(_DWORD *)(a1 + 32) & 2) < 0 )
    return 0LL;
  v9 = 0LL;
  for ( i = 0LL; ; i = v39 + 1 )
  {
    v39 = i;
    if ( i >= v1 )
      break;
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 1u);
    v12 = DWORD2(v43) ^ (unsigned __int8)(BYTE8(v43) ^ (v11 % *(&MiState + ((*((_QWORD *)&v43 + 1) >> 16) & 3LL) + 1120)));
    while ( 1 )
    {
      if ( v48 )
      {
        v31 = 16;
        if ( v46 != 2 )
          v31 = 0;
        SlabPage = MiGetSlabPage((_DWORD)v36, 3, v12, v31, v8, v2);
        if ( SlabPage != -1 )
          break;
      }
      Page = MiGetPage(v36, v12, v50);
      if ( Page != -1 )
        goto LABEL_9;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
      {
        MiReleaseNonPagedResources((__int64)v36, v1);
        MiFreePageChain(&v40);
        return 0LL;
      }
      MiWaitForFreePage(v36, 0LL);
    }
    if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
      ++v9;
LABEL_9:
    v14 = v40;
    *(_QWORD *)&v40 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)v40 = v14;
    v15 = *((_QWORD *)&v40 + 1);
    if ( !*((_QWORD *)&v40 + 1) )
      v15 = 48 * Page - 0x220000000000LL;
    ++v41;
    *((_QWORD *)&v40 + 1) = v15;
  }
  if ( v9 )
    MiReleaseNonPagedResources((__int64)v36, v9);
  if ( v36 == &MiSystemPartition )
    _InterlockedAdd64(&qword_140E373A8, v1 - v9);
  v16 = v38;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v18 = 0LL;
  BugCheckParameter3 = MiMakeValidPte(v4, 0LL, v38 != 0 ? 536870913 : -1610612732);
  if ( v38 )
  {
    MI_READ_PTE_LOCK_FREE(&BugCheckParameter3);
    MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3);
  }
  v51 = 0LL;
  v19 = 0;
  v49 = 0;
  v20 = MiVaToFlushVm(v4);
  if ( v46 == 2 )
  {
    v47 = 17;
    MiLockWorkingSetSharedAtDpc(v20);
  }
  else
  {
    v47 = MiLockWorkingSetShared(v20);
  }
  v21 = v16;
  do
  {
    v22 = v40;
    if ( (_QWORD)v40 )
    {
      *(_QWORD *)&v40 = *(_QWORD *)v40;
      *((_QWORD *)&v40 + 1) &= -(__int64)(--v41 != 0);
    }
    v39 = 0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4);
    v23 = BugCheckParameter3 & 0xFFF0000000000FFFuLL | ((v39 & 0xFFFFFFFFFFLL) << 12);
    BugCheckParameter3 = v23;
    if ( !v18 )
      goto LABEL_47;
    if ( (v4 & 0xFFF) == 0 )
    {
      if ( v19 )
      {
        MiIncreaseUsedPtes(v23, v18, v19, 2LL);
        v49 = 0;
      }
      MiUnlockPageTable(v20, v18);
LABEL_47:
      v18 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v20, v18);
    }
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v24 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
        {
          HvlNotifyLongSpinWait(v24);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    if ( v21 )
    {
      MiFinalizePageAttribute(v22, 1LL, 1LL);
      MiInitializeMdlSinglePage(v22, v22, v42, CLFS_LSN_NULL_EXT, 0);
      *(_QWORD *)(v22 + 8) = v4;
      MiSetPfnIdentity(v22, 3LL);
      *(_QWORD *)(v21 + 8 * v51) = v39;
    }
    else
    {
      *(_QWORD *)v4 = DemandZeroPte;
      MiInitializePfn(v22, v4, 4LL, 5LL);
      MiMarkKernelStack(v25, v22, v42);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = BugCheckParameter3;
    v19 = ++v49;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (BugCheckParameter3 & 0x20) == 0 )
      {
        v27 = 0x4000000000LL;
        if ( v4 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v4, BugCheckParameter3);
      }
    }
    ++v51;
    *(_QWORD *)v4 = v28;
    v4 += 8LL;
  }
  while ( v4 < v44 );
  if ( v18 )
  {
    if ( v19 )
      MiIncreaseUsedPtes(v27, v18, v19, 2LL);
    MiUnlockPageTable(v20, v18);
  }
  LOBYTE(v26) = v47;
  MiUnlockWorkingSetShared(v20, v26);
  if ( !v38 )
    return 1LL;
  v30 = (*(_QWORD *)(a1 + 8) - 8LL) << 25 >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    KernelShadowStack = VslAllocateKernelShadowStack(
                          v30,
                          (unsigned int)(*(_DWORD *)(a1 + 16) << 12),
                          *(unsigned int *)(a1 + 52),
                          v38,
                          v51,
                          a1 + 64);
    if ( KernelShadowStack >= 0 )
      return 1LL;
    if ( (unsigned int)(KernelShadowStack + 1073741811) <= 0x15
      && (v35 = 2099201, _bittest(&v35, KernelShadowStack + 1073741811))
      || KernelShadowStack == -1073741757 )
    {
      KeBugCheckEx(0x1Au, 0x51540uLL, v30, *(int *)(a1 + 52), KernelShadowStack);
    }
  }
  MiDeleteKernelStackPages((_DWORD)v36, *(_QWORD *)(a1 + 8) - 8, v51, *(_DWORD *)(a1 + 52), 0LL);
  return 0LL;
}
