/*
 * XREFs of MiSwapStackPage @ 0x140421D74
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiTryLockPageTableUnordered @ 0x140355AB0 (MiTryLockPageTableUnordered.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140422408 (MiCanStealKernelStack.c)
 *     MiCheckSameSlabType @ 0x1404224C0 (MiCheckSameSlabType.c)
 *     MiGetPfnKernelStack @ 0x14043FBD8 (MiGetPfnKernelStack.c)
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140676328 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140676734 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int PfnSlabType; // eax
  int v27; // r9d
  int v28; // r11d
  __int64 v29; // r12
  __int64 PfnKernelStack; // rax
  __int64 v32; // r15
  struct _KTHREAD *v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int8 v43; // bl
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int8 v47; // al
  unsigned __int8 v48; // [rsp+30h] [rbp-68h]
  int v49; // [rsp+34h] [rbp-64h]
  int v50; // [rsp+34h] [rbp-64h]
  int v51; // [rsp+34h] [rbp-64h]
  int v52; // [rsp+34h] [rbp-64h]
  unsigned int v53; // [rsp+38h] [rbp-60h] BYREF
  __int64 v54; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  __int64 v56; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v54 = 0LL;
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
  v49 = SystemRegionType;
  if ( SystemRegionType == 13 )
  {
    v15 = &unk_140E38380;
  }
  else
  {
    if ( SystemRegionType != 11 )
      goto LABEL_36;
    v15 = &unk_140E37E80;
  }
  v11[7] = v15;
  if ( !byte_140E37654 )
  {
LABEL_36:
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  v16 = a5;
  v57 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
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
                                     % (unsigned int)dword_140E2DD0C
                                     % (unsigned int)dword_140E2DD00[HIWORD(a3) & 3]));
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
  v48 = MiLockWorkingSetShared((__int64)v15, v23, v24, v25);
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
  if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || v49 != (unsigned int)MiGetSystemRegionType(v11[5])
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0
    || (MiGetPfnSlabType(v21),
        PfnSlabType = MiGetPfnSlabType(a2),
        !(unsigned int)MiCheckSameSlabType(a2, PfnSlabType, v21, v27, v28))
    || (v29 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiTryLockPageTableUnordered((__int64)v15, v29)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockWorkingSetShared((__int64)v15, v48);
LABEL_35:
    if ( v21 && (!v16 || *v16 == -1) )
      MiReleaseFreshPage(v21);
    goto LABEL_36;
  }
  if ( (byte_140E2DC09 & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a2, v21) )
  {
    PfnKernelStack = MiGetPfnKernelStack(a2, 1LL);
    v32 = PfnKernelStack;
    if ( ((PfnKernelStack + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      v33 = CurrentThread;
      if ( PfnKernelStack != -16 && (struct _KTHREAD *)PfnKernelStack != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(PfnKernelStack, &v54) )
        {
          v34 = MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000);
          MiCopyKstack(v21, a2, ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          MiUnmapPageInHyperSpaceWorker(v34, 0x11u, 0x80000000);
          v53 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v53);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiSwitchKstackPages(v21, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiClearPfnReuseFields(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v51) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v51) = 0;
          *(_DWORD *)(a2 + 32) = v51;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), v36);
          v56 = v54;
          if ( v54 )
            v37 = v54 & 0xFFFFFFFFFFFFFFFEuLL;
          else
            v37 = 0LL;
          KiReleaseThreadStateLock(v35, v37, &v56, 0LL, 0LL);
          *(_QWORD *)(v32 + 64) = 0LL;
          MiUnlockPageTableInternal((__int64)v15, v29);
          MiUnlockWorkingSetShared((__int64)v15, v48);
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
        MiUnlockPageTableInternal((__int64)v15, v29);
        MiUnlockWorkingSetShared((__int64)v15, v48);
        *v11 = v57;
        v11[1] = v17;
        v11[2] = 0LL;
        *((_DWORD *)v11 + 8) = 0;
        if ( v32 == -16 || (struct _KTHREAD *)v32 == v33 )
        {
          v41 = KeExpandKernelStackAndCalloutInternal(
                  (EXPAND_STACK_CALLOUT *)MiJumpStack,
                  (ULONG_PTR)v11,
                  KeKernelStackSize,
                  1,
                  0LL);
          if ( v41 < 0 )
            *((_DWORD *)v11 + 8) = v41;
        }
        else
        {
          KeGenericCallDpcEx((__int64)MiDoStackCopy, (__int64)v11);
        }
        if ( *((int *)v11 + 8) >= 0 )
        {
          *a6 = 0;
          v47 = MiLockPageInline(a2, v38, v39, v40);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v52) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v52) = 0;
          *(_DWORD *)(a2 + 32) = v52;
          MiUnlockPage(a2, v47);
LABEL_71:
          v16 = a5;
          goto LABEL_25;
        }
        v42 = v11[6];
        if ( v42 )
        {
          v43 = MiLockPageInline(v42, v38, v39, v40);
          MiRemoveLockedPageChargeAndDecRef(v11[6], v44, v45, v46);
          MiUnlockPage(v11[6], v43);
        }
        goto LABEL_73;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal((__int64)v15, v29);
    MiUnlockWorkingSetShared((__int64)v15, v48);
LABEL_73:
    v16 = a5;
    goto LABEL_35;
  }
  HIWORD(v50) = HIWORD(*(_DWORD *)(a2 + 32));
  LOWORD(v50) = 0;
  *(_DWORD *)(a2 + 32) = v50;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal((__int64)v15, v29);
  MiUnlockWorkingSetShared((__int64)v15, v48);
  *a6 = 1;
LABEL_25:
  if ( v16 )
    *v16 = v17;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
