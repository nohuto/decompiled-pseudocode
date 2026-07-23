/*
 * XREFs of MiLockCode @ 0x140205480
 * Callers:
 *     MiLockRegistryRecoverySection @ 0x1407E8380 (MiLockRegistryRecoverySection.c)
 *     MiLockImageSection @ 0x140A31B38 (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A334E4 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140AB8640 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiRemoveSystemImagePage @ 0x14020070C (MiRemoveSystemImagePage.c)
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiWriteValidPteVolatile @ 0x140203330 (MiWriteValidPteVolatile.c)
 *     MiReferenceDriverPage @ 0x140205D18 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiBetterDriverPageNeeded @ 0x140471FB0 (MiBetterDriverPageNeeded.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiPrefetchDriverPages @ 0x1409E63EC (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  ULONG_PTR v5; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // r14
  int v11; // ecx
  __int64 ProcessorFlushList; // rbp
  ULONG_PTR v13; // r13
  char v14; // di
  __int64 v15; // rdi
  char WsleContents; // al
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r8
  char v22; // bl
  __int64 v23; // rdx
  unsigned int v24; // r15d
  __int64 v25; // r8
  volatile signed __int64 *v26; // r15
  __int64 v27; // rbx
  ULONG_PTR v28; // rbx
  ULONG_PTR v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  __int64 v36; // r12
  int active; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned int v41; // r15d
  int v42; // ebx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rdx
  char v48; // [rsp+30h] [rbp-88h]
  int v49; // [rsp+34h] [rbp-84h]
  __int64 DriverPage; // [rsp+38h] [rbp-80h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  unsigned __int64 v52; // [rsp+50h] [rbp-68h]
  void *v53; // [rsp+58h] [rbp-60h]
  ULONG_PTR v54; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+C8h] [rbp+10h]

  v56 = a2;
  v5 = a2;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v10 = &unk_140E38100;
  if ( (unsigned int)MiGetSystemRegionType(v7, v8, v9) != 5 )
    v10 = &unk_140E37E80;
  v11 = 0;
  v53 = v10;
  v49 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 2) == 0 )
      v11 = 2;
    v49 = v11;
  }
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  ProcessorFlushList = 0LL;
  v13 = 0LL;
  v14 = MiLockWorkingSetShared(v10);
  v48 = v14;
  do
  {
    if ( v13 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_38;
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v10, v13);
    }
    v13 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)v10, v13);
LABEL_38:
    v28 = *(_QWORD *)v5;
    v29 = (__int64)(v5 << 25) >> 16;
    v54 = v29;
    if ( (*(_QWORD *)v5 & 1) != 0 )
    {
      v52 = (v28 >> 12) & 0xFFFFFFFFFFLL;
      v30 = 48 * v52 - 0x220000000000LL;
      if ( (*(_QWORD *)(v30 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v30 + 8) > 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        v42 = MiCopyOnWrite(v29, v5, 0LL);
        if ( v42 >= 0 )
          goto LABEL_97;
        MiUnlockPageTableInternal(v10, v13);
        LOBYTE(v44) = v14;
        MiUnlockWorkingSetShared(v10, v44);
        MiCopyOnWriteCheckConditions(v10, (unsigned int)v42, 0LL);
LABEL_122:
        v13 = 0LL;
        MiLockWorkingSetShared(v10);
LABEL_97:
        v27 = DriverPage;
        continue;
      }
      if ( *(__int64 *)(v30 + 40) < 0 && (a4 & 1) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v10, v13);
        LOBYTE(v45) = v14;
        MiUnlockWorkingSetShared(v10, v45);
        v46 = 0LL;
LABEL_121:
        MiMakeDriverPagesPrivate(a1, v5, a3, v46);
        goto LABEL_122;
      }
      if ( (v28 & 0x800) == 0 && (v28 & 0x200) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v10, v13);
        LOBYTE(v47) = v14;
        MiUnlockWorkingSetShared(v10, v47);
        v46 = 1LL;
        goto LABEL_121;
      }
      v15 = 0LL;
      v51 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
      WsleContents = MiGetWsleContents(qword_140E300C8, v29);
      v21 = DriverPage;
      v22 = WsleContents;
      if ( DriverPage != -1 )
      {
        v17 = 48 * DriverPage - 0x220000000000LL;
        v23 = (*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL;
        if ( v19 == *((_QWORD *)qword_140E300C8 + v23) )
          goto LABEL_23;
        ((void (*)(void))MiReleaseFreshPageAtDpc)();
        DriverPage = -1LL;
        v20 = 1LL;
      }
      v23 = 2LL;
      if ( (a4 & 2) != 0 )
      {
        if ( (v22 & 0xF) == 9 )
          goto LABEL_23;
      }
      else if ( (unsigned __int16)*(_DWORD *)(v30 + 32) != (_WORD)v20 )
      {
        goto LABEL_23;
      }
      if ( _bittest64((const signed __int64 *)(v30 + 40), 0x35u) )
        goto LABEL_23;
      v17 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v20
        || (unsigned __int16)*(_DWORD *)(v30 + 32) != (_WORD)v20 )
      {
        goto LABEL_23;
      }
      if ( (MiFlags & 0x4000) != 0 )
      {
        if ( (unsigned int)MiGetPagePrivilege(v30) )
          goto LABEL_23;
        v23 = 2LL;
      }
      if ( (MiFlags & 0x20000) != 0 )
      {
        if ( (unsigned int)MiGetPagePrivilege(v30) )
          goto LABEL_23;
        v23 = 2LL;
      }
      v17 = (v29 >> 9) & 0x7FFFFFFFF8LL;
      LOBYTE(v17) = (*(_QWORD *)(v17 - 0x98000000000LL) & 0x42) != 0;
      if ( ((unsigned __int8)v17 & ((v49 & 2) == 0)) == 0
        && (unsigned int)MiGetPfnSlabType(v30) == 9
        && (!*(_QWORD *)(v51 + 16696) || v52 < *(_QWORD *)(v51 + 16680)) )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v10, v13);
        LOBYTE(v33) = v48;
        MiUnlockWorkingSetShared(v10, v33);
        DriverPage = MiAllocateDriverPage(v51, (*(_DWORD *)(v30 + 16) >> 5) & 0x1F, 0LL);
        v13 = 0LL;
        v27 = DriverPage;
        v14 = MiLockWorkingSetShared(v10);
        v48 = v14;
        continue;
      }
LABEL_23:
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, v23, v21, v18) )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      v25 = DriverPage;
      v10 = v53;
      if ( DriverPage != -1 )
      {
        if ( (a4 & 2) != 0 )
        {
          v22 = MiGetWsleContents(v17, v29);
          if ( (v22 & 0xF) == 9 )
            goto LABEL_67;
          v25 = DriverPage;
          v34 = 1LL;
        }
        else
        {
          v34 = 1LL;
          if ( (unsigned __int16)*(_DWORD *)(v30 + 32) != 1 )
            goto LABEL_27;
        }
        if ( !_bittest64((const signed __int64 *)(v30 + 40), 0x35u)
          && (unsigned int)MiBetterDriverPageNeeded(v51, v52, v25) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = 48 * v35 - 0x220000000000LL;
          if ( *(__int64 *)(v30 + 40) >= 0
            || (v34 = MiLockProtoPoolPage(*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL, 0LL)) != 0 )
          {
            active = MiTradeActivePage(48 * (int)v52, v36, v54, 2, v49);
            v40 = 1LL;
            if ( active == 1 )
            {
              *(_QWORD *)(v30 + 16) = CLFS_LSN_NULL_EXT;
              MiSetOriginalPtePfnFromFreeList();
              MiReleaseFreshPageAtDpc(v30);
              DriverPage = -1LL;
              v30 = v36;
            }
            if ( v34 > 1 )
            {
              LOBYTE(v23) = 17;
              MiUnlockProtoPoolPage(v34, v23);
            }
          }
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v41 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40, v23, v38, v39) )
              {
                HvlNotifyLongSpinWait(v41);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          v10 = v53;
          v29 = v54;
        }
      }
      if ( (a4 & 2) == 0 )
      {
LABEL_27:
        MiReferenceDriverPage(v30);
        v26 = (volatile signed __int64 *)v56;
LABEL_28:
        if ( (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 )
          v15 = MiCaptureDirtyBitToPfn(v30);
        if ( (*v26 & 0x800) == 0 || (*v26 & 0x42) != 0 )
        {
          v27 = DriverPage;
        }
        else
        {
          MiWriteValidPteVolatile(v26, 2, 0);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(ProcessorFlushList, (_DWORD)v10, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
          }
          MiInsertTbFlushEntry(ProcessorFlushList, v29, 1LL);
          v27 = DriverPage;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v15 )
          MiReleasePageFileInfo(v51, v15, 1LL);
        v14 = v48;
        v5 = (ULONG_PTR)(v26 + 1);
        v56 = v5;
        continue;
      }
LABEL_67:
      v26 = (volatile signed __int64 *)v56;
      if ( (v22 & 0xF) != 9 )
        MiRemoveSystemImagePage((int)v10, v56, v30);
      goto LABEL_28;
    }
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList();
      ProcessorFlushList = 0LL;
    }
    MiUnlockPageTableInternal(v10, v13);
    LOBYTE(v31) = v14;
    MiUnlockWorkingSetShared(v10, v31);
    v32 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16);
    if ( v32 < 0 )
      KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)(v5 << 25) >> 16, v28, v32);
    v13 = 0LL;
    MiLockWorkingSetShared(v10);
    v27 = DriverPage;
  }
  while ( v5 <= a3 );
  if ( v14 != 17 )
  {
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v13 )
      MiUnlockPageTableInternal(v10, v13);
    LOBYTE(v23) = v14;
    MiUnlockWorkingSetShared(v10, v23);
  }
  if ( v27 != -1 )
    MiReleaseFreshPage(48 * v27 - 0x220000000000LL);
  return 0LL;
}
