/*
 * XREFs of MiCopyPage @ 0x1402254C0
 * Callers:
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPteMappingSet @ 0x14020CA90 (MiGetPteMappingSet.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x140225EF0 (MiReturnPteMappingSet.c)
 *     MiTranslateCacheAttribute @ 0x140225F5C (MiTranslateCacheAttribute.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x14036C260 (KeSetPagePrivilege.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     VslCopyProtectedPage @ 0x14048BE78 (VslCopyProtectedPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
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
  int v12; // r15d
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r13
  char result; // al
  unsigned int v16; // edi
  __int64 PteFromCopyList; // rbx
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // [rsp+30h] [rbp-49h]
  int v27[3]; // [rsp+34h] [rbp-45h] BYREF
  ULONG_PTR v28; // [rsp+40h] [rbp-39h]
  __int128 v29; // [rsp+50h] [rbp-29h] BYREF
  __int128 v30; // [rsp+60h] [rbp-19h] BYREF
  __int128 v31; // [rsp+70h] [rbp-9h] BYREF
  __int64 v32; // [rsp+80h] [rbp+7h]
  char v35; // [rsp+F0h] [rbp+77h]
  unsigned int v36; // [rsp+F8h] [rbp+7Fh]

  v3 = a3;
  *(_QWORD *)&v29 = 0LL;
  v4 = 0;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v5 = 48 * a2 - 0x220000000000LL;
  v28 = v5;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = -1073741823;
  if ( (a3 & 4) != 0 )
  {
    v36 = 4;
    v3 = a3 | 0x100;
  }
  else
  {
    v21 = 0;
    if ( (a3 & 0x100) != 0 )
      v21 = 64;
    v36 = v21;
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
  PagePrivilege = MiGetPagePrivilege(v5, v8, (unsigned __int64 *)&v30);
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
    v12 = v3 & 2;
  }
  else
  {
    v12 = v3 & 2;
    if ( (v3 & 2) == 0 )
    {
      v4 = 4;
LABEL_14:
      v13 = a1;
      goto LABEL_15;
    }
  }
  if ( (v4 & 2) == 0 )
    goto LABEL_14;
  v26 = 0;
  *((_QWORD *)&v29 + 1) = 0LL;
  v35 = 17;
  if ( _bittest64(&MiFlags, 0x11u) )
    MiFlushEntireTbDueToAttributeChange(v10, PagePrivilege, v11, 0xFFFFF68000000000uLL);
  v22 = 0LL;
  if ( (MiFlags & 0x4000) != 0 )
  {
    if ( v12 )
    {
      v29 = v30;
    }
    else
    {
      v10 = (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16;
      *(_QWORD *)&v29 = v10;
      if ( v10 < 0xFFFF800000000000uLL )
      {
        v4 |= 8u;
        *((_QWORD *)&v29 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( (v3 & 4) == 0 )
        {
          if ( (v3 & 0x100) != 0 )
          {
            v27[0] = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v27);
              while ( *(__int64 *)(v6 + 24) < 0 );
            }
          }
          else
          {
            v35 = MiLockPageInline(v6);
          }
        }
        MiMarkPfnVerified(v6, 4LL);
        MiAbortCombineScan(v6);
        if ( (v3 & 4) == 0 )
        {
          LOBYTE(v25) = v35;
          MiUnlockPage(v6, v25);
          v35 = 17;
        }
      }
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( (v3 & 4) == 0 )
      {
        v26 = 1;
        if ( (v3 & 0x100) != 0 )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
            {
              LODWORD(v22) = v22 + 1;
              if ( ((unsigned int)v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
              {
                HvlNotifyLongSpinWait((unsigned int)v22);
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
          v35 = MiLockPageInline(v6);
        }
      }
      v22 = (((*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_QWORD *)(v6 + 8) & 0xFFFLL)) | 1;
    }
  }
  v13 = a1;
  v23 = VslCopyProtectedPage(a2, (unsigned int)&v30, a1, (unsigned int)&v29, v22, v12 != 0);
  v7 = v23;
  if ( v23 < 0 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v23);
  if ( v26 )
  {
    LOBYTE(v24) = v35;
    MiUnlockPage(v6, v24);
  }
  if ( (MiFlags & 0x20000) != 0 && !v12 && (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
  {
    v7 = KeSetPagePrivilege(a1, 0LL, &v29, 4LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
  }
LABEL_15:
  v14 = v28;
  result = (*(_QWORD *)(v28 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( v12 )
      result = MiClearPfnImageVerified(v28, v36);
    if ( (v4 & 4) == 0 )
    {
      result = (*(_QWORD *)(v6 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v6, v36);
    }
  }
  if ( v7 < 0 )
  {
    v16 = (unsigned __int8)BYTE2(*(_DWORD *)(v14 + 32)) >> 6;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6 != v16 )
      MiChangePageAttribute(v6, v16);
    if ( (v3 & 1) != 0 )
      v4 = 1;
    MiGetPteMappingSet(v4 & 1, 2LL, (__int64)&v31);
    PteFromCopyList = MiGetPteFromCopyList(&v31, v13, a2);
    v19 = MiTranslateCacheAttribute(v16, 0LL, v18, PteFromCopyList << 25 >> 16);
    KeCopyPage(v20, v20 + 4096, v19);
    *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(PteFromCopyList + 8) = CLFS_LSN_NULL_EXT;
    return MiReturnPteMappingSet(&v31);
  }
  return result;
}
