/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140C45E4C
 * Callers:
 *     MiInitializeBootKernelShadowStack @ 0x140674648 (MiInitializeBootKernelShadowStack.c)
 *     MiInitializeBootKernelShadowStacks @ 0x140C45D68 (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

void __fastcall MiInitializeBootShadowStackPage(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // r15
  int v5; // ebx
  unsigned __int8 v6; // si
  unsigned __int64 v7; // rcx
  struct _LIST_ENTRY **v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  struct _LIST_ENTRY **v12; // rsi
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  ULONG_PTR v18; // rbx
  int v19; // edi
  int v20; // eax
  ULONG_PTR v21; // rbx
  int v22; // edi
  unsigned __int64 v23; // [rsp+20h] [rbp-10h]
  unsigned __int8 v24; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int8 v25; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR v26; // [rsp+88h] [rbp+58h]

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
    MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0LL);
    _InterlockedAdd64(&qword_140E37398, 1uLL);
  }
  v7 = (__int64)(BugCheckParameter2 << 25) >> 16;
  if ( _bittest64(&MiFlags, 0x29u) )
  {
    v25 = 0;
    v12 = MiVaToFlushVm(v7);
    v14 = MiLockWorkingSetOptimal((__int64)v12, BugCheckParameter2, &v25, v13);
    v15 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v17 = v15;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        MiLockPageAndSetDirty(v4, 1LL, v16);
        v18 = v17 & 0xFFFFFFFFFFFFF7BDuLL;
        v26 = v18;
        v19 = 0;
        if ( MiPteInShadowRange(BugCheckParameter2) )
        {
          v20 = MiSanitizeShadowPxe();
          v18 = v26;
          v19 = v20;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v18 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v18, 128);
        *(_QWORD *)BugCheckParameter2 = v18;
        if ( v19 )
          MiWritePteShadow();
        MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 32);
      }
    }
    else
    {
      v21 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
      v23 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
      v22 = 0;
      if ( MiPteInShadowRange(BugCheckParameter2) )
      {
        v21 = v23;
        v22 = MiSanitizeShadowPxe();
      }
      if ( _bittest64(&MiFlags, 0x24u) && (v21 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v21, 128);
      *(_QWORD *)BugCheckParameter2 = v21;
      if ( v22 )
        MiWritePteShadow();
    }
    MiUnlockWorkingSetOptimal((__int64)v12, v14, v25);
  }
  else
  {
    v24 = 0;
    v8 = MiVaToFlushVm(v7);
    v10 = MiLockWorkingSetOptimal((__int64)v8, BugCheckParameter2, &v24, v9);
    v11 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL);
    *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v10, 1u);
    MiFlushSingleTbEntry((__int64)(BugCheckParameter2 << 25) >> 16, 2, 1);
    MiLockAndDecrementShareCount(v4, 1);
    MiLockAndDecrementShareCount(v11 - 0x220000000000LL, 0);
    MiUnlockWorkingSetOptimal((__int64)v8, v10, v24);
    MiReturnResident((__int64)&MiSystemPartition, 1uLL);
    MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
    _InterlockedDecrement64(&qword_140E37398);
  }
}
