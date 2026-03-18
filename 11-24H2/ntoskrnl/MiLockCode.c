/*
 * XREFs of MiLockCode @ 0x14023D6F0
 * Callers:
 *     MiLockRegistryRecoverySection @ 0x1407E7DB0 (MiLockRegistryRecoverySection.c)
 *     MiLockImageSection @ 0x140A3C358 (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A3DA08 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A3DBD4 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140ABD5D0 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x140232800 (MiWriteValidPteVolatile.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReferenceDriverPage @ 0x14023DF88 (MiReferenceDriverPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiBetterDriverPageNeeded @ 0x140475F10 (MiBetterDriverPageNeeded.c)
 *     MiRemoveSystemImagePage @ 0x1404803C4 (MiRemoveSystemImagePage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiPrefetchDriverPages @ 0x1409ED0BC (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  ULONG_PTR v5; // r15
  unsigned __int64 v7; // rbx
  void *v8; // r14
  int v9; // ecx
  __int64 ProcessorFlushList; // rbp
  __int64 v11; // r13
  char v12; // di
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  char WsleContents; // bl
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  unsigned int v19; // r15d
  __int64 v20; // r8
  volatile signed __int64 *v21; // r15
  __int64 v22; // rbx
  ULONG_PTR v23; // rbx
  ULONG_PTR v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  __int64 v30; // r12
  int active; // eax
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rdx
  char v64; // [rsp+30h] [rbp-88h]
  int v65; // [rsp+34h] [rbp-84h]
  __int64 DriverPage; // [rsp+38h] [rbp-80h]
  __int64 v67; // [rsp+48h] [rbp-70h]
  unsigned __int64 v68; // [rsp+50h] [rbp-68h]
  void *v69; // [rsp+58h] [rbp-60h]
  ULONG_PTR v70; // [rsp+60h] [rbp-58h]
  volatile signed __int64 *v72; // [rsp+C8h] [rbp+10h]

  v72 = (volatile signed __int64 *)a2;
  v5 = a2;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = &unk_140E37FC0;
  if ( (unsigned int)MiGetSystemRegionType(v7) != 5 )
    v8 = &unk_140E37D40;
  v9 = 0;
  v69 = v8;
  v65 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 2) == 0 )
      v9 = 2;
    v65 = v9;
  }
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v12 = MiLockWorkingSetShared(v8);
  v64 = v12;
  do
  {
    if ( v11 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_38;
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList, 0xFFFFDE0000000000uLL);
        MiReleaseProcessorFlushList(v40, v39, v41);
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal(v8, v11);
    }
    v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable(v8, v11);
LABEL_38:
    v23 = *(_QWORD *)v5;
    v24 = (__int64)(v5 << 25) >> 16;
    v70 = v24;
    if ( (*(_QWORD *)v5 & 1) != 0 )
    {
      v68 = (v23 >> 12) & 0xFFFFFFFFFFLL;
      v25 = 48 * v68 - 0x220000000000LL;
      if ( (*(_QWORD *)(v25 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v25 + 8) > 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, 0xFFFFDE0000000000uLL);
          MiReleaseProcessorFlushList(v43, v42, v44);
          ProcessorFlushList = 0LL;
        }
        v37 = MiCopyOnWrite(v24, v5, 0LL);
        if ( v37 >= 0 )
          goto LABEL_97;
        MiUnlockPageTableInternal(v8, v11);
        LOBYTE(v45) = v12;
        MiUnlockWorkingSetShared(v8, v45);
        MiCopyOnWriteCheckConditions(v8, (unsigned int)v37, 0LL);
LABEL_122:
        v11 = 0LL;
        MiLockWorkingSetShared(v8);
LABEL_97:
        v22 = DriverPage;
        continue;
      }
      if ( *(__int64 *)(v25 + 40) < 0 && (a4 & 1) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, 0xFFFFDE0000000000uLL);
          MiReleaseProcessorFlushList(v59, v58, v60);
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v8, v11);
        LOBYTE(v61) = v12;
        MiUnlockWorkingSetShared(v8, v61);
        v62 = 0LL;
LABEL_121:
        MiMakeDriverPagesPrivate(a1, v5, a3, v62);
        goto LABEL_122;
      }
      if ( (v23 & 0x800) == 0 && (v23 & 0x200) != 0 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, 0xFFFFDE0000000000uLL);
          MiReleaseProcessorFlushList(v47, v46, v48);
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v8, v11);
        LOBYTE(v63) = v12;
        MiUnlockWorkingSetShared(v8, v63);
        v62 = 1LL;
        goto LABEL_121;
      }
      v13 = 0LL;
      v67 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL));
      WsleContents = MiGetWsleContents(qword_140E2FF88, v24);
      if ( DriverPage != -1 )
      {
        v14 = 48 * DriverPage - 0x220000000000LL;
        v18 = (*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL;
        if ( v16 == *((_QWORD *)qword_140E2FF88 + v18) )
          goto LABEL_23;
        MiReleaseFreshPageAtDpc(v14);
        DriverPage = -1LL;
        v17 = 1LL;
      }
      v18 = 2LL;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
          goto LABEL_23;
      }
      else if ( (unsigned __int16)*(_DWORD *)(v25 + 32) != (_WORD)v17 )
      {
        goto LABEL_23;
      }
      if ( _bittest64((const signed __int64 *)(v25 + 40), 0x35u) )
        goto LABEL_23;
      v14 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v17
        || (unsigned __int16)*(_DWORD *)(v25 + 32) != (_WORD)v17 )
      {
        goto LABEL_23;
      }
      if ( (MiFlags & 0x4000) != 0 )
      {
        if ( (unsigned int)MiGetPagePrivilege(v25, 2, 0LL) )
          goto LABEL_23;
        v18 = 2LL;
      }
      if ( (MiFlags & 0x20000) != 0 )
      {
        if ( (unsigned int)MiGetPagePrivilege(v25, 2, 0LL) )
          goto LABEL_23;
        v18 = 2LL;
      }
      v14 = (v24 >> 9) & 0x7FFFFFFFF8LL;
      LOBYTE(v14) = (*(_QWORD *)(v14 - 0x98000000000LL) & 0x42) != 0;
      if ( ((unsigned __int8)v14 & ((v65 & 2) == 0)) == 0
        && (unsigned int)MiGetPfnSlabType(v25) == 9
        && (!*(_QWORD *)(v67 + 16696) || v68 < *(_QWORD *)(v67 + 16680)) )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, v18);
          MiReleaseProcessorFlushList(v50, v49, v51);
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(v8, v11);
        LOBYTE(v28) = v64;
        MiUnlockWorkingSetShared(v8, v28);
        DriverPage = MiAllocateDriverPage(v67, (*(_DWORD *)(v25 + 16) >> 5) & 0x1F, 0LL);
        v11 = 0LL;
        v22 = DriverPage;
        v12 = MiLockWorkingSetShared(v8);
        v64 = v12;
        continue;
      }
LABEL_23:
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v19);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      v20 = DriverPage;
      v8 = v69;
      if ( DriverPage != -1 )
      {
        if ( (a4 & 2) != 0 )
        {
          WsleContents = MiGetWsleContents(v14, v24);
          if ( (WsleContents & 0xF) == 9 )
            goto LABEL_67;
          v20 = DriverPage;
          v29 = 1LL;
        }
        else
        {
          v29 = 1LL;
          if ( (unsigned __int16)*(_DWORD *)(v25 + 32) != 1 )
            goto LABEL_27;
        }
        if ( !_bittest64((const signed __int64 *)(v25 + 40), 0x35u)
          && (unsigned int)MiBetterDriverPageNeeded(v67, v68, v20) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v30 = 48 * v20 - 0x220000000000LL;
          if ( *(__int64 *)(v25 + 40) >= 0
            || (v29 = MiLockProtoPoolPage(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL, 0LL)) != 0 )
          {
            active = MiTradeActivePage(48 * (int)v68, v30, v70, 2, v65);
            v33 = 1LL;
            if ( active == 1 )
            {
              *(_QWORD *)(v25 + 16) = CLFS_LSN_NULL_EXT;
              MiSetOriginalPtePfnFromFreeList(v25 + 16, v18, v20, v32);
              MiReleaseFreshPageAtDpc(v25);
              DriverPage = -1LL;
              v25 = v30;
            }
            if ( v29 > 1 )
            {
              LOBYTE(v18) = 17;
              MiUnlockProtoPoolPage(v29, v18);
            }
          }
          v34 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v34 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
              {
                HvlNotifyLongSpinWait(v34);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          v8 = v69;
          v24 = v70;
        }
      }
      if ( (a4 & 2) == 0 )
      {
LABEL_27:
        MiReferenceDriverPage(v25);
        v21 = v72;
LABEL_28:
        if ( (*(_DWORD *)(v25 + 16) & 0x400LL) == 0 )
          v13 = MiCaptureDirtyBitToPfn(v25);
        if ( (*v21 & 0x800) == 0 || (*v21 & 0x42) != 0 )
        {
          v22 = DriverPage;
        }
        else
        {
          MiWriteValidPteVolatile(v21, 2, 0);
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList(v36, v35);
            MiInitializeTbFlushList(ProcessorFlushList, (__int64)v8, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
          }
          MiInsertTbFlushEntry(ProcessorFlushList, v24, 1LL);
          v22 = DriverPage;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v13 )
          MiReleasePageFileInfo(v67, v13, 1LL);
        v12 = v64;
        v5 = (ULONG_PTR)(v21 + 1);
        v72 = (volatile signed __int64 *)v5;
        continue;
      }
LABEL_67:
      v21 = v72;
      if ( (WsleContents & 0xF) != 9 )
        MiRemoveSystemImagePage(v8, v72, v25);
      goto LABEL_28;
    }
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList, 0xFFFFDE0000000000uLL);
      MiReleaseProcessorFlushList(v53, v52, v54);
      ProcessorFlushList = 0LL;
    }
    MiUnlockPageTableInternal(v8, v11);
    LOBYTE(v26) = v12;
    MiUnlockWorkingSetShared(v8, v26);
    v27 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16, 0, 0LL);
    if ( v27 < 0 )
      KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)(v5 << 25) >> 16, v23, v27);
    v11 = 0LL;
    MiLockWorkingSetShared(v8);
    v22 = DriverPage;
  }
  while ( v5 <= a3 );
  if ( v12 != 17 )
  {
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList, v18);
      MiReleaseProcessorFlushList(v56, v55, v57);
    }
    if ( v11 )
      MiUnlockPageTableInternal(v8, v11);
    LOBYTE(v18) = v12;
    MiUnlockWorkingSetShared(v8, v18);
  }
  if ( v22 != -1 )
    MiReleaseFreshPage(48 * v22 - 0x220000000000LL, v18, v20);
  return 0LL;
}
