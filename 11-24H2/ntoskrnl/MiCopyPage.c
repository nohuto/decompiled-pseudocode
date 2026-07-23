/*
 * XREFs of MiCopyPage @ 0x140252870
 * Callers:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x1402532A0 (MiReturnPteMappingSet.c)
 *     MiTranslateCacheAttribute @ 0x14025330C (MiTranslateCacheAttribute.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiGetPteMappingSet @ 0x140335DF0 (MiGetPteMappingSet.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     VslCopyProtectedPage @ 0x140486C48 (VslCopyProtectedPage.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int16 a3)
{
  __int16 v3; // r14
  char v4; // bl
  ULONG_PTR v5; // r15
  unsigned __int64 v6; // rsi
  int v7; // edi
  char v8; // dl
  unsigned int PagePrivilege; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // r15d
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // r13
  char result; // al
  unsigned int v18; // edi
  __int64 PteFromCopyList; // rbx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  int v27; // [rsp+30h] [rbp-49h]
  int v28[3]; // [rsp+34h] [rbp-45h] BYREF
  ULONG_PTR v29; // [rsp+40h] [rbp-39h]
  __int128 v30; // [rsp+50h] [rbp-29h] BYREF
  __int128 v31; // [rsp+60h] [rbp-19h] BYREF
  __int128 v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33; // [rsp+80h] [rbp+7h]
  char v36; // [rsp+F0h] [rbp+77h]
  unsigned int v37; // [rsp+F8h] [rbp+7Fh]

  v3 = a3;
  *(_QWORD *)&v30 = 0LL;
  v4 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v5 = 48 * a2 - 0x220000000000LL;
  v29 = v5;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = -1073741823;
  if ( (a3 & 4) != 0 )
  {
    v37 = 4;
    v3 = a3 | 0x100;
  }
  else
  {
    v23 = 0;
    if ( (a3 & 0x100) != 0 )
      v23 = 64;
    v37 = v23;
  }
  if ( (v3 & 4) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (v3 & 0x100) != 0 )
      v8 = 2;
  }
  PagePrivilege = MiGetPagePrivilege(v5, v8, (unsigned __int64 *)&v31);
  v12 = 0xFFFFF68000000000uLL;
  v13 = PagePrivilege;
  if ( PagePrivilege )
  {
    if ( (v3 & 0x12) != 0
      || (MiFlags & 0x8000) != 0
      && (LOBYTE(v10) = (PagePrivilege & 1) != 0, ((unsigned __int8)v10 & ((v3 & 8) == 0)) != 0)
      && *(__int64 *)(v5 + 40) >= 0 )
    {
      v4 = 2;
    }
    else if ( !_bittest64(&MiFlags, 0x11u)
           || (v4 = 2, LOBYTE(v10) = (PagePrivilege & 2) != 0, ((unsigned __int8)v10 & ((v3 & 8) == 0)) == 0) )
    {
      v4 = 4;
    }
    v14 = v3 & 2;
  }
  else
  {
    v14 = v3 & 2;
    if ( (v3 & 2) == 0 )
    {
      v4 = 4;
LABEL_14:
      v15 = a1;
      goto LABEL_15;
    }
  }
  if ( (v4 & 2) == 0 )
    goto LABEL_14;
  v27 = 0;
  *((_QWORD *)&v30 + 1) = 0LL;
  v36 = 17;
  if ( _bittest64(&MiFlags, 0x11u) )
  {
    MiFlushEntireTbDueToAttributeChange(v10, PagePrivilege, v11, 0xFFFFF68000000000uLL);
    v12 = 0xFFFFF68000000000uLL;
  }
  v24 = 0LL;
  if ( (MiFlags & 0x4000) != 0 )
  {
    if ( v14 )
    {
      v30 = v31;
    }
    else
    {
      v10 = (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16;
      *(_QWORD *)&v30 = v10;
      if ( v10 < 0xFFFF800000000000uLL )
      {
        v4 |= 8u;
        *((_QWORD *)&v30 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( (v3 & 4) == 0 )
        {
          if ( (v3 & 0x100) != 0 )
          {
            v28[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v28);
              while ( *(__int64 *)(v6 + 24) < 0 );
            }
          }
          else
          {
            v36 = MiLockPageInline(v6);
          }
        }
        MiMarkPfnVerified(v6, 4LL);
        MiAbortCombineScan(v6);
        if ( (v3 & 4) == 0 )
        {
          LOBYTE(v13) = v36;
          MiUnlockPage(v6, v13);
          v36 = 17;
        }
      }
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( (v3 & 4) == 0 )
      {
        v27 = 1;
        if ( (v3 & 0x100) != 0 )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
            {
              LODWORD(v24) = v24 + 1;
              if ( ((unsigned int)v24 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v13, v11, v12) )
              {
                HvlNotifyLongSpinWait((unsigned int)v24);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
        }
        else
        {
          v36 = MiLockPageInline(v6);
        }
      }
      v24 = (((*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_QWORD *)(v6 + 8) & 0xFFFLL)) | 1;
    }
  }
  v15 = a1;
  v25 = VslCopyProtectedPage(a2, (unsigned int)&v31, a1, (unsigned int)&v30, v24, v14 != 0);
  v7 = v25;
  if ( v25 < 0 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v25);
  if ( v27 )
  {
    LOBYTE(v26) = v36;
    MiUnlockPage(v6, v26);
  }
  if ( (MiFlags & 0x20000) != 0 && !v14 && (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
  {
    v7 = KeSetPagePrivilege(a1, 0LL, &v30, 4LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
  }
LABEL_15:
  v16 = v29;
  result = (*(_QWORD *)(v29 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( v14 )
      result = MiClearPfnImageVerified(v29, v37);
    if ( (v4 & 4) == 0 )
    {
      result = (*(_QWORD *)(v6 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v6, v37);
    }
  }
  if ( v7 < 0 )
  {
    v18 = (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6 != v18 )
      MiChangePageAttribute(v6, v18);
    if ( (v3 & 1) != 0 )
      v4 = 1;
    MiGetPteMappingSet(v4 & 1, 2LL, &v32, v12);
    PteFromCopyList = MiGetPteFromCopyList(&v32, v15, a2);
    v21 = MiTranslateCacheAttribute(v18, 0LL, v20, PteFromCopyList << 25 >> 16);
    KeCopyPage(v22, v22 + 4096, v21);
    *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(PteFromCopyList + 8) = CLFS_LSN_NULL_EXT;
    return MiReturnPteMappingSet(&v32);
  }
  return result;
}
