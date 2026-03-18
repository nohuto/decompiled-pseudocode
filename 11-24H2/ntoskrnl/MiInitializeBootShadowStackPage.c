/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140C5712C
 * Callers:
 *     MiInitializeBootKernelShadowStack @ 0x14067FE68 (MiInitializeBootKernelShadowStack.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C57048 (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 */

void __fastcall MiInitializeBootShadowStackPage(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // r15
  int v5; // ebx
  unsigned __int8 v6; // si
  __int64 v7; // rcx
  void *v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  void *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  ULONG_PTR v16; // rbx
  int v17; // edi
  int v18; // eax
  ULONG_PTR v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // [rsp+20h] [rbp-10h]
  char v22; // [rsp+70h] [rbp+40h] BYREF
  char v23; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v24; // [rsp+88h] [rbp+58h]

  v4 = 48 * ((*(_QWORD *)BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v5 = 0;
  v6 = MiLockPageInline(v4);
  if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) != 3 && _bittest64(&MiFlags, 0x29u) )
    MiMarkPfnVerified(v4, 4);
  if ( (unsigned int)MiGetPfnSlabType(v4) != 9 && !(unsigned int)MiIsPfnFromChargedSlabAllocation(v4) )
    v5 = 1;
  MiUnlockPage(v4, v6);
  if ( v5 )
  {
    MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0);
    _InterlockedAdd64(&qword_140E375D8, 1uLL);
  }
  v7 = (__int64)(BugCheckParameter2 << 25) >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    v23 = 0;
    v11 = MiVaToFlushVm(v7);
    v12 = MiLockWorkingSetOptimal((__int64)v11, BugCheckParameter2, (unsigned __int8 *)&v23);
    v13 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v15 = v13;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        MiLockPageAndSetDirty(v4, 1LL, v14);
        v16 = v15 & 0xFFFFFFFFFFFFF7BDuLL;
        v24 = v16;
        v17 = 0;
        if ( MiPteInShadowRange(BugCheckParameter2) )
        {
          v18 = MiSanitizeShadowPxe();
          v16 = v24;
          v17 = v18;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v16 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v16, 128);
        *(_QWORD *)BugCheckParameter2 = v16;
        if ( v17 )
          MiWritePteShadow();
        MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 32);
      }
    }
    else
    {
      v19 = v13 & 0xFFFFFFFFFFFFF7FFuLL;
      v21 = v13 & 0xFFFFFFFFFFFFF7FFuLL;
      v20 = 0;
      if ( MiPteInShadowRange(BugCheckParameter2) )
      {
        v19 = v21;
        v20 = MiSanitizeShadowPxe();
      }
      if ( _bittest64(&MiFlags, 0x24u) && (v19 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v19, 128);
      *(_QWORD *)BugCheckParameter2 = v19;
      if ( v20 )
        MiWritePteShadow();
    }
    MiUnlockWorkingSetOptimal((__int64)v11, v12, v23);
  }
  else
  {
    v22 = 0;
    v8 = MiVaToFlushVm(v7);
    v9 = MiLockWorkingSetOptimal((__int64)v8, BugCheckParameter2, (unsigned __int8 *)&v22);
    v10 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL);
    *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v9, 1u);
    MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 1);
    MiLockAndDecrementShareCount(v4, 1);
    MiLockAndDecrementShareCount(v10 - 0x220000000000LL, 0);
    MiUnlockWorkingSetOptimal((__int64)v8, v9, v22);
    MiReturnResident((__int64)&MiSystemPartition, 1uLL);
    MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
    _InterlockedDecrement64(&qword_140E375D8);
  }
}
