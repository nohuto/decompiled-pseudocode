/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140C592BC
 * Callers:
 *     MiInitializeBootKernelShadowStack @ 0x140681068 (MiInitializeBootKernelShadowStack.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C591D8 (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 */

void __fastcall MiInitializeBootShadowStackPage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // r15
  int v7; // ebx
  unsigned __int8 v8; // si
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  void *v12; // rsi
  __int64 v13; // r9
  ULONG_PTR v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rsi
  __int64 v21; // r9
  ULONG_PTR v22; // r13
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  unsigned __int64 v33; // rbx
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  unsigned __int64 v39; // [rsp+20h] [rbp-10h] BYREF
  char v40; // [rsp+70h] [rbp+40h] BYREF
  char v41; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp+58h] BYREF

  v5 = a2;
  v6 = 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  v8 = MiLockPageInline(v6, a2, a3, a4);
  if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) != 3 && _bittest64(&MiFlags, 0x29u) )
    MiMarkPfnVerified(v6, 4LL, v9, v10);
  if ( (unsigned int)MiGetPfnSlabType(v6) != 9 && !(unsigned int)MiIsPfnFromChargedSlabAllocation(v6) )
    v7 = 1;
  MiUnlockPage(v6, v8);
  if ( v7 )
  {
    MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0LL);
    _InterlockedAdd64(&qword_140E37718, 1uLL);
  }
  v11 = (__int64)(BugCheckParameter2 << 25) >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    v41 = 0;
    v20 = MiVaToFlushVm(v11);
    v22 = MiLockWorkingSetOptimal((__int64)v20, BugCheckParameter2, (unsigned __int8 *)&v41, v21);
    v23 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v26 = v23;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        MiLockPageAndSetDirty(v6, 1LL, v24, v25);
        v27 = v26 & 0xFFFFFFFFFFFFF7BDuLL;
        v42 = v27;
        v28 = 0;
        if ( MiPteInShadowRange(BugCheckParameter2) )
        {
          v32 = MiSanitizeShadowPxe(v29, (__int64)&v42, v30);
          v27 = v42;
          v28 = v32;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v27, 128LL);
        *(_QWORD *)BugCheckParameter2 = v27;
        if ( v28 )
          MiWritePteShadow(BugCheckParameter2, v27, v30, v31);
        MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 32);
      }
    }
    else
    {
      v33 = v23 & 0xFFFFFFFFFFFFF7FFuLL;
      v39 = v23 & 0xFFFFFFFFFFFFF7FFuLL;
      v34 = 0;
      if ( MiPteInShadowRange(BugCheckParameter2) )
      {
        v38 = MiSanitizeShadowPxe(v35, (__int64)&v39, v36);
        v33 = v39;
        v34 = v38;
      }
      if ( _bittest64(&MiFlags, 0x24u) && (v33 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v33, 128LL);
      *(_QWORD *)BugCheckParameter2 = v33;
      if ( v34 )
        MiWritePteShadow(BugCheckParameter2, v33, v36, v37);
    }
    MiUnlockWorkingSetOptimal((__int64)v20, v22, v41);
  }
  else
  {
    v40 = 0;
    v12 = MiVaToFlushVm(v11);
    v14 = MiLockWorkingSetOptimal((__int64)v12, BugCheckParameter2, (unsigned __int8 *)&v40, v13);
    v15 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL);
    *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v14, 1LL);
    MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 1);
    MiLockAndDecrementShareCount(v6, 1LL, v16, v17);
    MiLockAndDecrementShareCount(v15 - 0x220000000000LL, 0LL, v18, v19);
    MiUnlockWorkingSetOptimal((__int64)v12, v14, v40);
    MiReturnResident((__int64)&MiSystemPartition, 1uLL);
    MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
    _InterlockedDecrement64(&qword_140E37718);
  }
}
