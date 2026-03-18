/*
 * XREFs of MiLockCode @ 0x1403FE950
 * Callers:
 *     MiLockRegistryRecoverySection @ 0x1407D7EF0 (MiLockRegistryRecoverySection.c)
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A398B4 (MiDisablePagingOfDriver.c)
 *     MiLockImageSection @ 0x140A44E7C (MiLockImageSection.c)
 *     MmLockPreChargedPagedPool @ 0x140AB94D0 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiWriteValidPteVolatile @ 0x14037C940 (MiWriteValidPteVolatile.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiReferenceDriverPage @ 0x1403FF148 (MiReferenceDriverPage.c)
 *     MiActivePageTradeable @ 0x1403FF1D0 (MiActivePageTradeable.c)
 *     MiRemoveSystemImagePage @ 0x1403FF714 (MiRemoveSystemImagePage.c)
 *     MiBetterDriverPageNeeded @ 0x14040022C (MiBetterDriverPageNeeded.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiPrefetchDriverPages @ 0x1409F3B5C (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, volatile signed __int64 *a2, unsigned __int64 a3, char a4)
{
  ULONG_PTR *v5; // r15
  unsigned __int64 v7; // rbx
  void *v8; // r14
  int v9; // ecx
  __int64 *ProcessorFlushList; // rbp
  unsigned __int64 v11; // r13
  unsigned __int8 v12; // di
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  char WsleContents; // bl
  __int64 v21; // r10
  __int16 v22; // r11
  int v23; // r15d
  volatile signed __int64 *v24; // r15
  __int64 v25; // rbx
  int v27; // eax
  ULONG_PTR v28; // r15
  __int64 v29; // r12
  int v30; // r15d
  int v31; // ebx
  char v32; // r9
  unsigned __int8 v33; // [rsp+30h] [rbp-88h]
  unsigned int v34; // [rsp+34h] [rbp-84h]
  __int64 DriverPage; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  unsigned __int64 v37; // [rsp+50h] [rbp-68h]
  void *v38; // [rsp+58h] [rbp-60h]
  unsigned __int64 v39; // [rsp+60h] [rbp-58h]
  volatile signed __int64 *v41; // [rsp+C8h] [rbp+10h]

  v41 = a2;
  v5 = (ULONG_PTR *)a2;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = &unk_140E37D80;
  if ( (unsigned int)MiGetSystemRegionType(v7) != 5 )
    v8 = &unk_140E37B00;
  v9 = 0;
  v38 = v8;
  v34 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 2) == 0 )
      v9 = 2;
    v34 = v9;
  }
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v12 = MiLockWorkingSetShared((__int64)v8);
  v33 = v12;
  do
  {
    if ( v11 )
    {
      if ( ((unsigned __int16)v5 & 0xFFF) != 0 )
        goto LABEL_11;
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTable((__int64)v8, v11);
    }
    v11 = (((unsigned __int64)v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)v8, v11, v13, v14);
LABEL_11:
    v15 = *v5;
    v16 = (__int64)((_QWORD)v5 << 25) >> 16;
    v39 = v16;
    if ( (*v5 & 1) != 0 )
    {
      v37 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v37 - 0x220000000000LL;
      if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v17 + 8) > 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        v31 = MiCopyOnWrite(v16, (volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
        if ( v31 >= 0 )
          goto LABEL_94;
        MiUnlockPageTable((__int64)v8, v11);
        MiUnlockWorkingSetShared((__int64)v8, v12);
        MiCopyOnWriteCheckConditions((__int64)v8, v31, 0LL);
LABEL_113:
        v11 = 0LL;
        MiLockWorkingSetShared((__int64)v8);
LABEL_94:
        v25 = DriverPage;
        continue;
      }
      if ( *(__int64 *)(v17 + 40) < 0 && (a4 & 1) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTable((__int64)v8, v11);
        MiUnlockWorkingSetShared((__int64)v8, v12);
        v32 = 0;
LABEL_112:
        MiMakeDriverPagesPrivate(a1, (volatile signed __int64 *)v5, a3, v32);
        goto LABEL_113;
      }
      if ( (v15 & 0x800) == 0 && (v15 & 0x200) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTable((__int64)v8, v11);
        MiUnlockWorkingSetShared((__int64)v8, v12);
        v32 = 1;
        goto LABEL_112;
      }
      v18 = 0LL;
      v36 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
      WsleContents = MiGetWsleContents((__int64)qword_140E2FD48, v16);
      if ( DriverPage != -1 )
      {
        v19 = 48 * DriverPage - 0x220000000000LL;
        if ( v21 == *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)) )
          goto LABEL_27;
        MiReleaseFreshPageAtDpc(v19);
        DriverPage = -1LL;
        v22 = 1;
      }
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
          goto LABEL_27;
      }
      else if ( (unsigned __int16)*(_DWORD *)(v17 + 32) != v22 )
      {
        goto LABEL_27;
      }
      if ( _bittest64((const signed __int64 *)(v17 + 40), 0x35u)
        || !(unsigned int)MiActivePageTradeable(v17, v16, 2LL, v34)
        || (unsigned int)MiGetPfnSlabType(v17) != 9
        || *(_QWORD *)(v36 + 16696) && v37 >= *(_QWORD *)(v36 + 16680) )
      {
LABEL_27:
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
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
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        v13 = DriverPage;
        v8 = v38;
        if ( DriverPage == -1 )
          goto LABEL_30;
        if ( (a4 & 2) != 0 )
        {
          WsleContents = MiGetWsleContents(v19, v16);
          if ( (WsleContents & 0xF) == 9 )
            goto LABEL_64;
          v13 = DriverPage;
          v28 = 1LL;
LABEL_72:
          if ( !_bittest64((const signed __int64 *)(v17 + 40), 0x35u)
            && (unsigned int)MiBetterDriverPageNeeded(v36, v37, v13) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v29 = 48 * v13 - 0x220000000000LL;
            if ( *(__int64 *)(v17 + 40) >= 0
              || (v28 = MiLockProtoPoolPage(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL, 0LL)) != 0 )
            {
              if ( (unsigned int)MiTradeActivePage(v17, v29, v39, 2u, v34) == 1 )
              {
                *(_QWORD *)(v17 + 16) = CLFS_LSN_NULL_EXT;
                MiSetOriginalPtePfnFromFreeList((__int64 *)(v17 + 16));
                MiReleaseFreshPageAtDpc(v17);
                DriverPage = -1LL;
                v17 = v29;
              }
              if ( v28 > 1 )
                MiUnlockProtoPoolPage(v28, 0x11u, v13, v14);
            }
            v30 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v30 & HvlLongSpinCountMask) == 0
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
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
            v8 = v38;
            v16 = v39;
          }
LABEL_30:
          if ( (a4 & 2) != 0 )
          {
LABEL_64:
            v24 = v41;
            if ( (WsleContents & 0xF) != 9 )
              MiRemoveSystemImagePage(v8, v41, v17);
          }
          else
          {
LABEL_31:
            MiReferenceDriverPage(v17);
            v24 = v41;
          }
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 )
            v18 = MiCaptureDirtyBitToPfn(v17);
          if ( (*v24 & 0x800) == 0 || (*v24 & 0x42) != 0 )
          {
            v25 = DriverPage;
          }
          else
          {
            MiWriteValidPteVolatile(v24, 2, 0);
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList(
                (__int64)ProcessorFlushList,
                (__int64)v8,
                *((_DWORD *)ProcessorFlushList + 3),
                0,
                32);
            }
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v16, 1LL, 0);
            v25 = DriverPage;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(v36, v18, 1);
          v12 = v33;
          v5 = (ULONG_PTR *)(v24 + 1);
          v41 = (volatile signed __int64 *)v5;
          continue;
        }
        v28 = 1LL;
        if ( (unsigned __int16)*(_DWORD *)(v17 + 32) == 1 )
          goto LABEL_72;
        goto LABEL_31;
      }
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTable((__int64)v8, v11);
      MiUnlockWorkingSetShared((__int64)v8, v33);
      DriverPage = MiAllocateDriverPage(v36, (*(_DWORD *)(v17 + 16) >> 5) & 0x1F, 0LL);
      v11 = 0LL;
      v25 = DriverPage;
      v12 = MiLockWorkingSetShared((__int64)v8);
      v33 = v12;
    }
    else
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTable((__int64)v8, v11);
      MiUnlockWorkingSetShared((__int64)v8, v12);
      v27 = MmAccessFault(0LL, (__int64)((_QWORD)v5 << 25) >> 16, 0, 0LL);
      if ( v27 < 0 )
        KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)((_QWORD)v5 << 25) >> 16, v15, v27);
      v11 = 0LL;
      MiLockWorkingSetShared((__int64)v8);
      v25 = DriverPage;
    }
  }
  while ( (unsigned __int64)v5 <= a3 );
  if ( v12 != 17 )
  {
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v11 )
      MiUnlockPageTable((__int64)v8, v11);
    MiUnlockWorkingSetShared((__int64)v8, v12);
  }
  if ( v25 != -1 )
    MiReleaseFreshPage(48 * v25 - 0x220000000000LL);
  return 0LL;
}
