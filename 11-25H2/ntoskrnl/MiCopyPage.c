/*
 * XREFs of MiCopyPage @ 0x1402C6FA0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPteMappingSet @ 0x140211850 (MiGetPteMappingSet.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x1402C79B0 (MiReturnPteMappingSet.c)
 *     MiTranslateCacheAttribute @ 0x1402C7A1C (MiTranslateCacheAttribute.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     VslCopyProtectedPage @ 0x14048C174 (VslCopyProtectedPage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int16 a3)
{
  __int16 v3; // r14
  char v4; // bl
  ULONG_PTR v5; // r15
  unsigned __int64 v6; // rsi
  int v7; // edi
  char v8; // dl
  int PagePrivilege; // eax
  unsigned __int64 v10; // rcx
  int v11; // r15d
  ULONG_PTR v12; // r12
  ULONG_PTR v13; // r13
  char result; // al
  unsigned int v15; // edi
  __int64 PteFromCopyList; // rbx
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // [rsp+30h] [rbp-49h]
  int v26[3]; // [rsp+34h] [rbp-45h] BYREF
  ULONG_PTR v27; // [rsp+40h] [rbp-39h]
  __int128 v28; // [rsp+50h] [rbp-29h] BYREF
  __int128 v29; // [rsp+60h] [rbp-19h] BYREF
  __int128 v30; // [rsp+70h] [rbp-9h] BYREF
  __int64 v31; // [rsp+80h] [rbp+7h]
  char v34; // [rsp+F0h] [rbp+77h]
  unsigned int v35; // [rsp+F8h] [rbp+7Fh]

  v3 = a3;
  *(_QWORD *)&v28 = 0LL;
  v4 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v5 = 48 * a2 - 0x220000000000LL;
  v27 = v5;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = -1073741823;
  if ( (a3 & 4) != 0 )
  {
    v35 = 4;
    v3 = a3 | 0x100;
  }
  else
  {
    v20 = 0;
    if ( (a3 & 0x100) != 0 )
      v20 = 64;
    v35 = v20;
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
  PagePrivilege = MiGetPagePrivilege(v5, v8, (unsigned __int64 *)&v29);
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
    v11 = v3 & 2;
  }
  else
  {
    v11 = v3 & 2;
    if ( (v3 & 2) == 0 )
    {
      v4 = 4;
LABEL_14:
      v12 = a1;
      goto LABEL_15;
    }
  }
  if ( (v4 & 2) == 0 )
    goto LABEL_14;
  v25 = 0;
  *((_QWORD *)&v28 + 1) = 0LL;
  v34 = 17;
  if ( _bittest64(&MiFlags, 0x11u) )
    MiFlushEntireTbDueToAttributeChange();
  v21 = 0LL;
  if ( (MiFlags & 0x4000) != 0 )
  {
    if ( v11 )
    {
      v28 = v29;
    }
    else
    {
      v10 = (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16;
      *(_QWORD *)&v28 = v10;
      if ( v10 < 0xFFFF800000000000uLL )
      {
        v4 |= 8u;
        *((_QWORD *)&v28 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( (v3 & 4) == 0 )
        {
          if ( (v3 & 0x100) != 0 )
          {
            v26[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v26);
              while ( *(__int64 *)(v6 + 24) < 0 );
            }
          }
          else
          {
            v34 = MiLockPageInline(v6);
          }
        }
        MiMarkPfnVerified(v6, 4LL);
        MiAbortCombineScan(v6);
        if ( (v3 & 4) == 0 )
        {
          LOBYTE(v24) = v34;
          MiUnlockPage(v6, v24);
          v34 = 17;
        }
      }
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( (v3 & 4) == 0 )
      {
        v25 = 1;
        if ( (v3 & 0x100) != 0 )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
            {
              LODWORD(v21) = v21 + 1;
              if ( ((unsigned int)v21 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
              {
                HvlNotifyLongSpinWait((unsigned int)v21);
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
          v34 = MiLockPageInline(v6);
        }
      }
      v21 = (((*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_QWORD *)(v6 + 8) & 0xFFFLL)) | 1;
    }
  }
  v12 = a1;
  v22 = VslCopyProtectedPage(a2, (unsigned int)&v29, a1, (unsigned int)&v28, v21, v11 != 0);
  v7 = v22;
  if ( v22 < 0 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v22);
  if ( v25 )
  {
    LOBYTE(v23) = v34;
    MiUnlockPage(v6, v23);
  }
  if ( (MiFlags & 0x20000) != 0 && !v11 && (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
  {
    v7 = KeSetPagePrivilege(a1, 0LL, &v28, 4LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
  }
LABEL_15:
  v13 = v27;
  result = (*(_QWORD *)(v27 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( v11 )
      result = MiClearPfnImageVerified(v27, v35);
    if ( (v4 & 4) == 0 )
    {
      result = (*(_QWORD *)(v6 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v6, v35);
    }
  }
  if ( v7 < 0 )
  {
    v15 = (unsigned __int8)BYTE2(*(_DWORD *)(v13 + 32)) >> 6;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6 != v15 )
      MiChangePageAttribute(v6, v15);
    if ( (v3 & 1) != 0 )
      v4 = 1;
    MiGetPteMappingSet(v4 & 1, 2LL, (__int64)&v30);
    PteFromCopyList = MiGetPteFromCopyList(&v30, v12, a2);
    v18 = MiTranslateCacheAttribute(v15, 0LL, v17, PteFromCopyList << 25 >> 16);
    KeCopyPage(v19, v19 + 4096, v18);
    *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(PteFromCopyList + 8) = CLFS_LSN_NULL_EXT;
    return MiReturnPteMappingSet(&v30);
  }
  return result;
}
