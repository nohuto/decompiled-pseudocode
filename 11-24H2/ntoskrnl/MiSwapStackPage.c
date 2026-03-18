/*
 * XREFs of MiSwapStackPage @ 0x1404303C4
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiTryLockPageTableUnordered @ 0x1402D4830 (MiTryLockPageTableUnordered.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140430A58 (MiCanStealKernelStack.c)
 *     MiCheckSameSlabType @ 0x140430B10 (MiCheckSameSlabType.c)
 *     MiGetPfnKernelStack @ 0x1404474B8 (MiGetPfnKernelStack.c)
 *     KeTryToFreezeThreadStack @ 0x1404AB95C (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140675158 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140675564 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 *a5, _DWORD *a6)
{
  __int64 v8; // r13
  __int64 Pool; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  int SystemRegionType; // eax
  void *v15; // r14
  __int64 *v16; // r15
  __int64 v17; // r13
  unsigned int v18; // eax
  unsigned int v19; // r8d
  __int64 Page; // rax
  __int64 v21; // rbp
  unsigned int v22; // ebx
  int PfnSlabType; // eax
  int v24; // r9d
  int v25; // r11d
  __int64 v26; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 PfnKernelStack; // rax
  __int64 v31; // r15
  struct _KTHREAD *v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int8 v39; // bl
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int8 v42; // al
  unsigned __int8 v43; // [rsp+30h] [rbp-68h]
  int v44; // [rsp+34h] [rbp-64h]
  int v45; // [rsp+34h] [rbp-64h]
  int v46; // [rsp+34h] [rbp-64h]
  int v47; // [rsp+34h] [rbp-64h]
  unsigned int v48; // [rsp+38h] [rbp-60h] BYREF
  __int64 v49; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  __int64 v51; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v49 = 0LL;
  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1934321997);
  v11 = (_QWORD *)Pool;
  if ( !Pool )
    return 0LL;
  *(_QWORD *)(Pool + 24) = v8;
  v12 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v13 = (__int64)(v12 << 25) >> 16;
  *(_QWORD *)(Pool + 40) = v13;
  SystemRegionType = MiGetSystemRegionType(v13);
  v44 = SystemRegionType;
  if ( SystemRegionType == 13 )
  {
    v15 = &unk_140E38240;
  }
  else
  {
    if ( SystemRegionType != 11 )
      goto LABEL_36;
    v15 = &unk_140E37D40;
  }
  v11[7] = v15;
  if ( !byte_140E37514 )
  {
LABEL_36:
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  v16 = a5;
  v52 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( a5 )
  {
    v17 = *a5;
    if ( *a5 != -1 )
    {
      v21 = 48 * v17 - 0x220000000000LL;
      MiFinalizePageAttribute(v21, 1LL, 8LL);
      goto LABEL_13;
    }
    v8 = a1;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v19 = 12288;
    v18 = a3 ^ (unsigned __int8)(a3 ^ (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)
                                     % (unsigned int)dword_140E2DBCC
                                     % (unsigned int)dword_140E2DBC0[HIWORD(a3) & 3]));
  }
  else
  {
    v18 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    v19 = (a4 >> 9) & 0x8000;
    if ( (a4 & 0x2000000) != 0 )
      v19 |= 0x800u;
  }
  Page = MiGetPage(v8, v18, v19);
  v17 = Page;
  if ( Page == -1 )
    goto LABEL_36;
  v21 = 48 * Page - 0x220000000000LL;
LABEL_13:
  MiSetPfnTbFlushStamp(v21, 0LL, 0);
  v22 = 0;
  v11[6] = 0LL;
  v43 = MiLockWorkingSetShared((__int64)v15);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v22);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || v44 != (unsigned int)MiGetSystemRegionType(v11[5])
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0
    || (MiGetPfnSlabType(v21),
        PfnSlabType = MiGetPfnSlabType(a2),
        !(unsigned int)MiCheckSameSlabType(a2, PfnSlabType, v21, v24, v25))
    || (v26 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiTryLockPageTableUnordered((__int64)v15, v26)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockWorkingSetShared((__int64)v15, v43);
LABEL_35:
    if ( v21 && (!v16 || *v16 == -1) )
      MiReleaseFreshPage(v21, v28, v29);
    goto LABEL_36;
  }
  if ( (byte_140E2DAC9 & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a2, v21) )
  {
    PfnKernelStack = MiGetPfnKernelStack(a2, 1LL);
    v31 = PfnKernelStack;
    if ( ((PfnKernelStack + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      v32 = CurrentThread;
      if ( PfnKernelStack != -16 && (struct _KTHREAD *)PfnKernelStack != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(PfnKernelStack, &v49) )
        {
          v33 = MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000LL);
          MiCopyKstack(v21, a2, ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          MiUnmapPageInHyperSpaceWorker(v33, 0x11u, 0x80000000);
          v48 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v48);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiSwitchKstackPages(v21, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiClearPfnReuseFields(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v46) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v46) = 0;
          *(_DWORD *)(a2 + 32) = v46;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), v35);
          v51 = v49;
          if ( v49 )
            v36 = v49 & 0xFFFFFFFFFFFFFFFEuLL;
          else
            v36 = 0LL;
          KiReleaseThreadStateLock(v34, v36, &v51, 0LL, 0LL);
          *(_QWORD *)(v31 + 64) = 0LL;
          MiUnlockPageTableInternal((__int64)v15, v26);
          MiUnlockWorkingSetShared((__int64)v15, v43);
          *a6 = 1;
          goto LABEL_71;
        }
        goto LABEL_62;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v11[6] = a2;
LABEL_62:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)v15, v26);
        MiUnlockWorkingSetShared((__int64)v15, v43);
        *v11 = v52;
        v11[1] = v17;
        v11[2] = 0LL;
        *((_DWORD *)v11 + 8) = 0;
        if ( v31 == -16 || (struct _KTHREAD *)v31 == v32 )
        {
          v37 = KeExpandKernelStackAndCalloutInternal(
                  (EXPAND_STACK_CALLOUT *)MiJumpStack,
                  (ULONG_PTR)v11,
                  KeKernelStackSize,
                  1,
                  0LL);
          if ( v37 < 0 )
            *((_DWORD *)v11 + 8) = v37;
        }
        else
        {
          KeGenericCallDpcEx((__int64)MiDoStackCopy, (__int64)v11);
        }
        if ( *((int *)v11 + 8) >= 0 )
        {
          *a6 = 0;
          v42 = MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v47) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v47) = 0;
          *(_DWORD *)(a2 + 32) = v47;
          MiUnlockPage(a2, v42);
LABEL_71:
          v16 = a5;
          goto LABEL_25;
        }
        v38 = v11[6];
        if ( v38 )
        {
          v39 = MiLockPageInline(v38);
          MiRemoveLockedPageChargeAndDecRef(v11[6], v40, v41);
          MiUnlockPage(v11[6], v39);
        }
        goto LABEL_73;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal((__int64)v15, v26);
    MiUnlockWorkingSetShared((__int64)v15, v43);
LABEL_73:
    v16 = a5;
    goto LABEL_35;
  }
  HIWORD(v45) = HIWORD(*(_DWORD *)(a2 + 32));
  LOWORD(v45) = 0;
  *(_DWORD *)(a2 + 32) = v45;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal((__int64)v15, v26);
  MiUnlockWorkingSetShared((__int64)v15, v43);
  *a6 = 1;
LABEL_25:
  if ( v16 )
    *v16 = v17;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
