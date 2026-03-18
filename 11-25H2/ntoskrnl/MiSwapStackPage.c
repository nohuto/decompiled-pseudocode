/*
 * XREFs of MiSwapStackPage @ 0x1403DBBA8
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1403DC23C (MiCanStealKernelStack.c)
 *     MiTryLockPageTableUnordered @ 0x1403DC2F0 (MiTryLockPageTableUnordered.c)
 *     MiCheckSameSlabType @ 0x1403DC910 (MiCheckSameSlabType.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiGetPfnKernelStack @ 0x14044AEF8 (MiGetPfnKernelStack.c)
 *     KeTryToFreezeThreadStack @ 0x1404AA4CC (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x1406696F8 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140669B04 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v22; // ebx
  int PfnSlabType; // eax
  int v24; // r9d
  int v25; // r11d
  unsigned __int64 v26; // r12
  __int64 PfnKernelStack; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // r15
  struct _KTHREAD *v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int8 v40; // bl
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  unsigned __int8 v44; // al
  unsigned __int8 v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h]
  int v47; // [rsp+34h] [rbp-64h]
  int v48; // [rsp+34h] [rbp-64h]
  int v49; // [rsp+34h] [rbp-64h]
  int v50; // [rsp+38h] [rbp-60h] BYREF
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  __int64 v53; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v51 = 0LL;
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
  v46 = SystemRegionType;
  if ( SystemRegionType == 13 )
  {
    v15 = &unk_140E38000;
  }
  else
  {
    if ( SystemRegionType != 11 )
      goto LABEL_36;
    v15 = &unk_140E37B00;
  }
  v11[7] = v15;
  if ( !byte_140E372D4 )
  {
LABEL_36:
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  v16 = a5;
  v54 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
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
                                     % (unsigned int)dword_140E2D98C
                                     % (unsigned int)dword_140E2D980[HIWORD(a3) & 3]));
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
  v45 = MiLockWorkingSetShared((__int64)v15);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || v46 != (unsigned int)MiGetSystemRegionType(v11[5])
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0
    || (MiGetPfnSlabType(v21),
        PfnSlabType = MiGetPfnSlabType(a2),
        !(unsigned int)MiCheckSameSlabType(a2, PfnSlabType, v21, v24, v25))
    || (v26 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiTryLockPageTableUnordered(v15, v26)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockWorkingSetShared((__int64)v15, v45);
LABEL_35:
    if ( v21 && (!v16 || *v16 == -1) )
      MiReleaseFreshPage(v21);
    goto LABEL_36;
  }
  if ( (byte_140E2D889 & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a2, v21) )
  {
    PfnKernelStack = MiGetPfnKernelStack(a2, 1LL);
    v31 = PfnKernelStack;
    if ( ((PfnKernelStack + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      v32 = CurrentThread;
      if ( PfnKernelStack != -16 && (struct _KTHREAD *)PfnKernelStack != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(PfnKernelStack, &v51) )
        {
          v33 = MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000);
          MiCopyKstack(v21, a2, ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          LOBYTE(v34) = 17;
          MiUnmapPageInHyperSpaceWorker(v33, v34, 0x80000000LL);
          v50 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v50);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiSwitchKstackPages(v21, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiClearPfnReuseFields(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v48) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v48) = 0;
          *(_DWORD *)(a2 + 32) = v48;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), v36);
          v53 = v51;
          if ( v51 )
            v37 = v51 & 0xFFFFFFFFFFFFFFFEuLL;
          else
            v37 = 0LL;
          KiReleaseThreadStateLock(v35, v37, &v53, 0LL, 0LL);
          *(_QWORD *)(v31 + 64) = 0LL;
          MiUnlockPageTable((__int64)v15, v26);
          MiUnlockWorkingSetShared((__int64)v15, v45);
          *a6 = 1;
          goto LABEL_71;
        }
        goto LABEL_62;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0, v29, v30) )
      {
        v11[6] = a2;
LABEL_62:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTable((__int64)v15, v26);
        MiUnlockWorkingSetShared((__int64)v15, v45);
        *v11 = v54;
        v11[1] = v17;
        v11[2] = 0LL;
        *((_DWORD *)v11 + 8) = 0;
        if ( v31 == -16 || (struct _KTHREAD *)v31 == v32 )
        {
          v38 = KeExpandKernelStackAndCalloutInternal(
                  (EXPAND_STACK_CALLOUT *)MiJumpStack,
                  (ULONG_PTR)v11,
                  KeKernelStackSize,
                  1,
                  0LL);
          if ( v38 < 0 )
            *((_DWORD *)v11 + 8) = v38;
        }
        else
        {
          KeGenericCallDpcEx(MiDoStackCopy, v11);
        }
        if ( *((int *)v11 + 8) >= 0 )
        {
          *a6 = 0;
          v44 = MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          HIWORD(v49) = HIWORD(*(_DWORD *)(a2 + 32));
          LOWORD(v49) = 0;
          *(_DWORD *)(a2 + 32) = v49;
          MiUnlockPage(a2, v44);
LABEL_71:
          v16 = a5;
          goto LABEL_25;
        }
        v39 = v11[6];
        if ( v39 )
        {
          v40 = MiLockPageInline(v39);
          MiRemoveLockedPageChargeAndDecRef(v11[6], v41, v42, v43);
          MiUnlockPage(v11[6], v40);
        }
        goto LABEL_73;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTable((__int64)v15, v26);
    MiUnlockWorkingSetShared((__int64)v15, v45);
LABEL_73:
    v16 = a5;
    goto LABEL_35;
  }
  HIWORD(v47) = HIWORD(*(_DWORD *)(a2 + 32));
  LOWORD(v47) = 0;
  *(_DWORD *)(a2 + 32) = v47;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTable((__int64)v15, v26);
  MiUnlockWorkingSetShared((__int64)v15, v45);
  *a6 = 1;
LABEL_25:
  if ( v16 )
    *v16 = v17;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
