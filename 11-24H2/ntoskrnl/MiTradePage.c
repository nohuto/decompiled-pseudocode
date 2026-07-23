/*
 * XREFs of MiTradePage @ 0x1402FEF60
 * Callers:
 *     MiClaimPhysicalRun @ 0x1402FED00 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiSnapPageMoveInProgress @ 0x1402647F0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x14026481C (MiWaitForPageMoveComplete.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiColorHasSlists @ 0x14033EEA0 (MiColorHasSlists.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiPfnLargeBitSet @ 0x140405ED0 (MiPfnLargeBitSet.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x14043A090 (MiAddMdlPageToTradeBlock.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  int v8; // edi
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // bp
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 active; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  signed __int64 v23; // rcx
  unsigned __int64 v24; // r8
  signed __int64 v25; // rdx
  signed __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // eax
  int v30; // r10d
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rbx
  unsigned int v40; // ebp
  __int64 v41; // rax
  __int64 BaseResidentPage; // rbx
  int v43; // eax
  signed __int32 v44[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v45; // [rsp+30h] [rbp-88h] BYREF
  __int64 v46; // [rsp+38h] [rbp-80h]
  unsigned __int64 v47; // [rsp+40h] [rbp-78h] BYREF
  __int64 v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-68h]
  __int64 v50; // [rsp+58h] [rbp-60h]
  _QWORD v51[11]; // [rsp+60h] [rbp-58h] BYREF
  int PfnPageSizeIndex; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v53; // [rsp+C0h] [rbp+8h]
  _QWORD *v56; // [rsp+D8h] [rbp+20h]
  int v57; // [rsp+D8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 0LL;
  v5 = *(_QWORD *)a1;
  v6 = a2;
  v45 = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v46 = v5;
  if ( (v3 & 0x400000) != 0 )
    v8 = *(_DWORD *)(a1 + 28);
  else
    v8 = 0;
  v48 = 0LL;
  v9 = -1LL;
  LODWORD(v49) = 1;
  v10 = 48 * a2 - 0x220000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_4:
            v11 = -1LL;
            if ( *(_QWORD *)(a1 + 32) != -1LL )
              v11 = *(_QWORD *)(a1 + 32);
            v47 = v11;
            v12 = MiSafeLockPage(v6);
            if ( v12 == 17 )
            {
              ++dword_140EF5088;
              goto LABEL_45;
            }
            if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != v46 )
            {
              if ( (v3 & 0x410000) != 0x410000 )
              {
                v43 = MiPfnLargeBitSet(&MiSystemPartition, v6);
                if ( v43 != 3 )
                  *(_QWORD *)(a1 + 40) = MiPageSizes[v43];
              }
              ++dword_140EF5090;
              goto LABEL_28;
            }
            v13 = 3;
            v14 = *(_BYTE *)(v10 + 34) & 7;
            PfnPageSizeIndex = 3;
            v15 = 0LL;
            v16 = 0;
            if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 )
            {
              BaseResidentPage = MiGetBaseResidentPage(v10);
              v50 = BaseResidentPage;
              v57 = *(_BYTE *)(BaseResidentPage + 34) & 7;
              PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
              v16 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((BaseResidentPage + 0x220000000000LL) >> 4));
              v15 = *(_QWORD *)(v50 + 16);
              if ( v50 != v10 )
                _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v14 = v57;
              if ( v57 == 6 )
              {
                ++dword_140EF5098;
                *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                goto LABEL_28;
              }
              v13 = PfnPageSizeIndex;
            }
            if ( v14 != 5 )
              break;
            if ( (unsigned int)MiIsPageOnBadList(v10) )
            {
              ++dword_140EF509C;
              goto LABEL_28;
            }
            if ( *(_QWORD *)(v10 + 8) == -8LL )
            {
              ++dword_140EF50A0;
              goto LABEL_28;
            }
            if ( v30 == 3 )
              v16 = MI_PAGE_TO_FULL_COLOR(a2);
            if ( (unsigned int)MiColorHasSlists(v16) )
            {
              if ( !(unsigned int)MiInvalidPteConforms(v15) )
                goto LABEL_98;
              v32 = v31;
              if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
                v32 = v31 & ~qword_140E2DCC0;
              if ( HIDWORD(v32) != 4294967294 )
              {
LABEL_98:
                ++dword_140EF50A4;
                goto LABEL_28;
              }
              if ( v48 == v10 )
              {
                if ( (_DWORD)v49 == (unsigned __int16)v31 >> 12 )
                {
                  ++dword_140EF50A8;
                  goto LABEL_28;
                }
                ++dword_140EF506C;
              }
              v48 = v10;
              v49 = (unsigned __int16)v31 >> 12;
              MiUnlockPage(v10, v12);
              v33 = *(_QWORD *)(a1 + 16);
              ++dword_140EF5068;
              MiDrainZeroLookasides(v46, v10, v33, v16);
              v6 = a2;
            }
            else
            {
              if ( v13 == 3 )
                break;
              if ( (v3 & 0x2000000) != 0 && v13 <= 1 || (v3 & 0x1000000) != 0 && v13 == 2 )
                goto LABEL_28;
              v35 = MI_NODE_FROM_PFN(v10);
              v50 = *(_QWORD *)(v46 + 16) + 57216LL * v35;
              v51[0] = MiSnapPageMoveInProgress(v50, 2);
              v51[1] = MiSnapPageMoveInProgress(v36, 1);
              MiUnlockPage(v10, v12);
              v39 = v51;
              v40 = 0;
              v56 = v51;
              while ( 1 )
              {
                v41 = *v39 ^ MiWaitForPageMoveComplete(v50, 2 - (unsigned int)(v40 != 0), v37, v38);
                v6 = a2;
                if ( (v41 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                  break;
                ++v40;
                v39 = ++v56;
                if ( v40 >= 2 )
                {
                  if ( v40 == 2 )
                  {
                    ++dword_140EF5094;
                    *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                    goto LABEL_45;
                  }
                  v6 = a2;
                  goto LABEL_4;
                }
              }
            }
          }
          if ( _bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
          {
            ++dword_140EF5088;
            goto LABEL_28;
          }
          if ( (v3 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(v10) != 9 )
          {
            ++dword_140EF508C;
            goto LABEL_28;
          }
          if ( (*(_DWORD *)(v10 + 32) & 0x40000000) != 0 && (v3 & 0x10000000) == 0 )
          {
            ++dword_140EF50C8;
            goto LABEL_28;
          }
          if ( v14 > 1 )
            break;
          if ( v13 == 3 )
          {
            v6 = a2;
            if ( (v3 & 0x400000) != 0 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 256) )
            {
LABEL_25:
              ++dword_140EF5064;
              if ( (v3 & 0x400000) == 0 )
                MiAddMdlPageToTradeBlock(a1, v6);
              v4 = 1LL;
              if ( v12 == 17 )
                goto LABEL_45;
            }
            else
            {
              ++dword_140EF50B0;
            }
LABEL_28:
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v12 < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
              __writecr8(v12);
            }
            goto LABEL_45;
          }
          v34 = MiPageSizes[v13];
          v53 = v34;
          if ( (v3 & 0x2000000) != 0 && v34 >= 0x200 || (v3 & 0x1000000) != 0 && v34 == 16 )
            goto LABEL_28;
          v6 = a2;
          if ( (a2 & ~(v34 - 1)) == a2
            && (v3 & 0x400000) == 0
            && *(_QWORD *)(a1 + 16) >= v34
            && v34 + a2 - 1 <= *(_QWORD *)(a1 + 48)
            && (*(_QWORD *)(v10 + 40) & 0x20000000000LL) == 0 )
          {
            MiLargeFreePageToMdl(a2, v13, *(_QWORD *)(a1 + 56), v3, v12);
            v4 = v53;
            dword_140EF5064 += v53;
            goto LABEL_45;
          }
          if ( (unsigned int)MiDemoteLargeFreePage(a2, v12) )
          {
            v12 = 17;
            goto LABEL_25;
          }
        }
        if ( (HIBYTE(*(_DWORD *)(v10 + 32)) & 0x80u) != 0 )
          break;
        if ( v14 > 4 )
        {
          if ( v14 != 6 )
          {
            ++dword_140EF50D8;
            goto LABEL_28;
          }
          goto LABEL_18;
        }
        if ( (v3 & 0x4000000) == 0 && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0 )
        {
          ++dword_140EF50CC;
          goto LABEL_28;
        }
        if ( (v3 & 0x200000) != 0 && (unsigned int)MiIsPageOnBadList(v10) )
        {
LABEL_128:
          ++dword_140EF50D0;
          goto LABEL_28;
        }
        v29 = MiTradeTransitionPage(v10, v12, v8, v3, (__int64)&v47);
        if ( v29 != 2 )
        {
          if ( v29 != 3 )
            goto LABEL_45;
          v9 = v47;
          if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != v46 )
            goto LABEL_144;
          if ( (v3 & 0x400000) == 0 )
            goto LABEL_42;
          goto LABEL_54;
        }
        v6 = a2;
      }
      if ( v14 == 2 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v10 + 32) )
        {
          ++dword_140EF50B4;
        }
        else if ( (unsigned int)MiReuseStandbyPage(v10, v15) )
        {
          v4 = 1LL;
          MiAddMdlPageToTradeBlock(a1, a2);
        }
        else
        {
          MiReleaseFreshPageLocked(v10);
          ++dword_140EF50B0;
        }
        goto LABEL_28;
      }
      if ( v14 != 6
        || (*(_DWORD *)(v10 + 32) & 0x100000) != 0
        || (unsigned __int16)*(_DWORD *)(v10 + 32) != 1
        || ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 2
        || (*(_QWORD *)v10 & 1) == 0
        || (*(_DWORD *)(v10 + 32) & 0x8000000) != 0 )
      {
        ++dword_140EF50C4;
        goto LABEL_28;
      }
LABEL_18:
      if ( (v3 & 0x200000) != 0 && (unsigned int)MiIsPageOnBadList(v10) )
        goto LABEL_128;
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 2 )
        break;
      if ( (v3 & 8) != 0 )
      {
LABEL_145:
        ++dword_140EF50D4;
        goto LABEL_28;
      }
      MiUnlockPage(v10, v12);
      if ( (unsigned int)MiSwapStackPage(v46, v10, *(_DWORD *)(a1 + 28), v3, (__int64)&v47, (__int64)&v45) )
      {
        v9 = v47;
        if ( v45 )
          ++dword_140EF5074;
        else
          ++dword_140EF5080;
LABEL_39:
        *(_QWORD *)(v10 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList(v10 + 16, v20, v21, v22);
        if ( (v3 & 0x400000) == 0 )
        {
          _InterlockedOr(v44, 0);
          v23 = *(_QWORD *)(v10 + 24);
          v24 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59;
          v25 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v10 + 24),
                  v24 ^ (v23 ^ v24) & 0xC7FFFFFFFFFFFFFFuLL,
                  v23);
          if ( v23 != v25 )
          {
            do
            {
              v26 = v25;
              v25 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v10 + 24),
                      v24 ^ (v24 ^ v25) & 0xC7FFFFFFFFFFFFFFuLL,
                      v25);
            }
            while ( v26 != v25 );
          }
LABEL_42:
          v27 = *(_QWORD *)(a1 + 56);
          if ( v27 )
          {
            *(_QWORD *)(v27 + 8 * ((unsigned __int64)*(unsigned int *)(v27 + 40) >> 12) + 48) = a2;
            *(_DWORD *)(v27 + 40) += 4096;
          }
          goto LABEL_44;
        }
LABEL_54:
        MiLockAndInsertPageInFreeList(v10);
LABEL_44:
        v4 = 1LL;
        goto LABEL_45;
      }
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 2 )
      {
        ++dword_140EF50DC;
        goto LABEL_45;
      }
      ++dword_140EF5084;
      v6 = a2;
    }
    v17 = v46;
    active = MiActivePageClaimCandidate(v46, v10, 1, v3, 1, a3);
    if ( active )
    {
      ++dword_140EF515C;
      *(_QWORD *)(a1 + 40) = active;
      goto LABEL_28;
    }
    if ( (v3 & 8) != 0 )
      goto LABEL_145;
    v19 = *(__int64 *)(v10 + 40) < 0
        ? MiTrimSharedPage(v10, v12, v3)
        : MiStealPage(v10, v12, v3, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 28), &v47);
    if ( v19 != 2 )
      break;
    v6 = a2;
  }
  if ( v19 )
  {
    v9 = v47;
    if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == v17 )
    {
      ++dword_140EF5078;
      goto LABEL_39;
    }
LABEL_144:
    ++dword_140EF5090;
    MiLockAndInsertPageInFreeList(v10);
    goto LABEL_45;
  }
  ++dword_140EF50E4;
LABEL_45:
  *(_QWORD *)(a1 + 32) = v9;
  return v4;
}
