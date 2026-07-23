/*
 * XREFs of MiAllocateKernelStackPages @ 0x14021639C
 * Callers:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140474350 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMarkKernelStack @ 0x140216A40 (MiMarkKernelStack.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiInitializeMdlSinglePage @ 0x140393930 (MiInitializeMdlSinglePage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VslAllocateKernelShadowStack @ 0x140A39874 (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // r13
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  unsigned int v6; // r9d
  ULONG *v7; // rbx
  char v8; // r14
  char v9; // al
  char v10; // r9
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 Page; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 DemandZeroPte; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r13d
  ULONG_PTR v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  volatile signed __int32 *v28; // rbx
  unsigned __int64 v29; // rdx
  ULONG_PTR v30; // rcx
  unsigned int v31; // esi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  ULONG_PTR v36; // rbx
  ULONG_PTR v38; // rbx
  int v39; // r9d
  __int64 SlabPage; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // ecx
  _QWORD *v44; // rcx
  int KernelShadowStack; // eax
  int v46; // edx
  BOOL v47; // [rsp+30h] [rbp-39h]
  ULONG *v48; // [rsp+38h] [rbp-31h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-29h] BYREF
  __int64 v50; // [rsp+48h] [rbp-21h]
  unsigned __int64 v51; // [rsp+50h] [rbp-19h]
  __int64 v52; // [rsp+58h] [rbp-11h]
  unsigned __int64 v53; // [rsp+60h] [rbp-9h]
  volatile signed __int32 *v54; // [rsp+68h] [rbp-1h]
  unsigned __int64 v55; // [rsp+70h] [rbp+7h]
  char v57; // [rsp+D8h] [rbp+6Fh]
  char v58; // [rsp+D8h] [rbp+6Fh]
  int v59; // [rsp+E0h] [rbp+77h]
  __int64 v60; // [rsp+E0h] [rbp+77h]
  int v61; // [rsp+E8h] [rbp+7Fh]
  __int64 v62; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  BugCheckParameter3 = 0LL;
  HIDWORD(v55) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(ULONG **)a1;
  v8 = *(_BYTE *)(a1 + 36);
  v50 = *(_QWORD *)(a1 + 56);
  v52 = *(_QWORD *)(a1 + 40);
  v53 = v4 + 8 * v1;
  v48 = v7;
  v57 = v8;
  if ( v6 == -1 )
    v6 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v9 = MiAssignDefaultChannel(v6, 0x140000000uLL);
  v61 = 0;
  v59 = 0;
  v54 = (volatile signed __int32 *)(v11 + 34640);
  LODWORD(v55) = ((2 * (v10 & 0x3F | 0x380)) | v9 & 1) << 8;
  if ( v50 && (v7[1] & 8) != 0 )
  {
    v43 = *(_DWORD *)(a1 + 32) & 2;
    v59 = 1;
    v2 = (v43 != 0) - 1LL;
    v61 = v43 == 0 ? 0x20000 : 0;
  }
  v47 = v8 == 2;
  if ( (int)MiAcquireNonPagedResources(v7, v1, 0LL, *(_DWORD *)(a1 + 32) & 2) < 0 )
    return 0LL;
  v15 = 0LL;
  v16 = 0LL;
LABEL_7:
  v51 = v16;
  if ( v16 < v1 )
  {
    v17 = (unsigned int)v55 & 0xFFFFFF00;
    v18 = v17 | (unsigned __int8)(_InterlockedExchangeAdd(v54, 1u) % (unsigned int)dword_140E2DD00[(v55 >> 16) & 3]);
    while ( 1 )
    {
      if ( v59 )
      {
        v39 = 16;
        if ( v57 != 2 )
          v39 = 0;
        SlabPage = MiGetSlabPage((_DWORD)v48, 3, v18, v39, v2, v61);
        v17 = SlabPage;
        if ( SlabPage != -1 )
        {
          if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL, v41, v42, SlabPage) )
            ++v15;
LABEL_11:
          v16 = v51 + 1;
          *(_QWORD *)(48 * Page - 0x220000000000LL) = v5;
          v5 = (_QWORD *)(48 * Page - 0x220000000000LL);
          goto LABEL_7;
        }
      }
      Page = MiGetPage(v48, v18, v47, v17);
      if ( Page != -1 )
        goto LABEL_11;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
        break;
      MiWaitForFreePage(v48, 0LL, v13, -1LL);
    }
    MiReleaseNonPagedResources(v48, v1);
    while ( 1 )
    {
      v44 = v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)*v5;
      MiReleaseFreshPage(v44);
    }
    return 0LL;
  }
  if ( v15 )
    MiReleaseNonPagedResources(v48, v15);
  if ( v48 == &MiSystemPartition )
    _InterlockedAdd64(&qword_140E37728, v1 - v15);
  DemandZeroPte = MiMakeDemandZeroPte(4LL, v12, v13, Page);
  BugCheckParameter3 = MiMakeValidPte(v4, 0LL, v50 != 0 ? 536870913 : -1610612732);
  if ( v50 )
  {
    MI_READ_PTE_LOCK_FREE(&BugCheckParameter3, v20, v21);
    MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3);
  }
  v60 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = MiVaToFlushVm(v4);
  v62 = v24;
  if ( v57 == 2 )
  {
    v58 = 17;
    MiLockWorkingSetSharedAtDpc(v24);
  }
  else
  {
    v58 = MiLockWorkingSetShared(v24);
  }
  v27 = v62;
  do
  {
    v28 = (volatile signed __int32 *)v5;
    if ( v5 )
      v5 = (_QWORD *)*v5;
    v29 = 0xFFF0000000000FFFuLL;
    v51 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v28 + 0x88000000000LL) >> 4);
    v30 = BugCheckParameter3 & 0xFFF0000000000FFFuLL | ((v51 & 0xFFFFFFFFFFLL) << 12);
    BugCheckParameter3 = v30;
    if ( !v23 )
      goto LABEL_46;
    if ( (v4 & 0xFFF) == 0 )
    {
      if ( v22 )
      {
        MiIncreaseUsedPtes(v30, v23, v22);
        v22 = 0;
      }
      MiUnlockPageTableInternal(v27, v23);
LABEL_46:
      v23 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v27, v23);
    }
    v31 = 0;
    while ( _interlockedbittestandset64(v28 + 6, 0x3FuLL) )
    {
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v25, v26) )
        {
          HvlNotifyLongSpinWait(v31);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((__int64 *)v28 + 3) < 0 );
    }
    v32 = v50;
    if ( v50 )
    {
      MiFinalizePageAttribute(v28, 1LL, 1LL);
      MiInitializeMdlSinglePage((_DWORD)v28, (_DWORD)v28, v52, CLFS_LSN_NULL_EXT, 0);
      *((_QWORD *)v28 + 1) = v4;
      MiSetPfnIdentity(v28, 3LL);
      v35 = v60;
      *(_QWORD *)(v32 + 8 * v60) = v51;
    }
    else
    {
      *(_QWORD *)v4 = DemandZeroPte;
      MiInitializePfn(v28, v4, 4LL, 5LL);
      MiMarkKernelStack(v33, v28, v52);
    }
    _InterlockedAnd64((volatile signed __int64 *)v28 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v36 = BugCheckParameter3;
    ++v22;
    v27 = v62;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (BugCheckParameter3 & 0x20) == 0 )
      {
        v35 = 0x4000000000LL;
        if ( v4 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v4, BugCheckParameter3, 128LL);
      }
    }
    ++v60;
    *(_QWORD *)v4 = v36;
    v4 += 8LL;
  }
  while ( v4 < v53 );
  if ( v23 )
  {
    if ( v22 )
      MiIncreaseUsedPtes(v35, v23, v22);
    MiUnlockPageTableInternal(v62, v23);
  }
  LOBYTE(v34) = v58;
  MiUnlockWorkingSetShared(v62, v34);
  if ( !v50 )
    return 1LL;
  v38 = (*(_QWORD *)(a1 + 8) - 8LL) << 25 >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    KernelShadowStack = VslAllocateKernelShadowStack(
                          v38,
                          (unsigned int)(*(_DWORD *)(a1 + 16) << 12),
                          *(unsigned int *)(a1 + 52),
                          v50,
                          v60,
                          a1 + 64);
    if ( KernelShadowStack >= 0 )
      return 1LL;
    if ( (unsigned int)(KernelShadowStack + 1073741811) <= 0x15
      && (v46 = 2099201, _bittest(&v46, KernelShadowStack + 1073741811))
      || KernelShadowStack == -1073741757 )
    {
      KeBugCheckEx(0x1Au, 0x51540uLL, v38, *(int *)(a1 + 52), KernelShadowStack);
    }
  }
  MiDeleteKernelStackPages((_DWORD)v48, *(_QWORD *)(a1 + 8) - 8, v60, *(_DWORD *)(a1 + 52), 0LL);
  return 0LL;
}
