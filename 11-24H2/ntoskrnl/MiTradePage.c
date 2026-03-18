/*
 * XREFs of MiTradePage @ 0x14022B650
 * Callers:
 *     MiClaimPhysicalRun @ 0x14022B3F0 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiColorHasSlists @ 0x1402F6D90 (MiColorHasSlists.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiSnapPageMoveInProgress @ 0x1403D598C (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D59B8 (MiWaitForPageMoveComplete.c)
 *     MiPfnLargeBitSet @ 0x14040DC80 (MiPfnLargeBitSet.c)
 *     MiLargeFreePageToMdl @ 0x14041F370 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x14042F57C (MiDemoteLargeFreePage.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 *     MiAddMdlPageToTradeBlock @ 0x1404445F0 (MiAddMdlPageToTradeBlock.c)
 *     MiLockAndInsertPageInFreeList @ 0x1404653B4 (MiLockAndInsertPageInFreeList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int8 v11; // bp
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 active; // rax
  int v18; // eax
  __int64 v19; // r9
  signed __int64 v20; // rcx
  unsigned __int64 v21; // r8
  signed __int64 v22; // rdx
  signed __int64 v23; // rcx
  __int64 v24; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r10d
  int v30; // eax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  unsigned int v38; // ebp
  __int64 v39; // rax
  __int64 BaseResidentPage; // rbx
  int v41; // eax
  signed __int32 v42[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-78h] BYREF
  __int64 v46; // [rsp+48h] [rbp-70h]
  __int64 v47; // [rsp+50h] [rbp-68h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  _QWORD v49[11]; // [rsp+60h] [rbp-58h] BYREF
  int PfnPageSizeIndex; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v51; // [rsp+C0h] [rbp+8h]
  unsigned int v54; // [rsp+D8h] [rbp+20h]
  _QWORD *v55; // [rsp+D8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 0LL;
  v5 = *(_QWORD *)a1;
  v6 = a2;
  v43 = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v44 = v5;
  v46 = 0LL;
  v8 = -1LL;
  LODWORD(v47) = 1;
  v9 = 48 * a2 - 0x220000000000LL;
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
LABEL_2:
            v10 = -1LL;
            if ( *(_QWORD *)(a1 + 32) != -1LL )
              v10 = *(_QWORD *)(a1 + 32);
            v45 = v10;
            v11 = MiSafeLockPage(v6, a2, a3);
            if ( v11 == 17 )
            {
              ++dword_140EF4E68;
              goto LABEL_43;
            }
            if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v44 )
            {
              if ( (v3 & 0x410000) != 0x410000 )
              {
                v41 = MiPfnLargeBitSet(&MiSystemPartition, v6);
                if ( v41 != 3 )
                  *(_QWORD *)(a1 + 40) = MiPageSizes[v41];
              }
              ++dword_140EF4E70;
              goto LABEL_26;
            }
            v12 = 3;
            v13 = *(_BYTE *)(v9 + 34) & 7;
            PfnPageSizeIndex = 3;
            v14 = 0LL;
            v54 = v13;
            v15 = 0;
            if ( (*(_QWORD *)(v9 + 40) & 0x10000000000LL) != 0 )
            {
              BaseResidentPage = MiGetBaseResidentPage(v9, 0LL);
              v48 = BaseResidentPage;
              v54 = *(_BYTE *)(BaseResidentPage + 34) & 7;
              PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
              v15 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((BaseResidentPage + 0x220000000000LL) >> 4));
              v14 = *(_QWORD *)(v48 + 16);
              if ( v48 != v9 )
                _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v13 = v54;
              if ( v54 == 6 )
              {
                ++dword_140EF4E78;
                *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                goto LABEL_26;
              }
              v12 = PfnPageSizeIndex;
            }
            if ( v13 != 5 )
              break;
            if ( (unsigned int)MiIsPageOnBadList(v9, v14) )
            {
              ++dword_140EF4E7C;
              goto LABEL_26;
            }
            if ( *(_QWORD *)(v9 + 8) == -8LL )
            {
              ++dword_140EF4E80;
              goto LABEL_26;
            }
            if ( v29 == 3 )
            {
              v30 = MI_PAGE_TO_FULL_COLOR(a2);
              v27 = *(_QWORD *)(v9 + 16);
              v15 = v30;
              v28 = v54;
            }
            if ( (unsigned int)MiColorHasSlists(v15, v27, v28) )
            {
              if ( !(unsigned int)MiInvalidPteConforms(v14) )
                goto LABEL_96;
              v32 = v31;
              if ( qword_140E2DB80 && (v31 & 0x10) == 0 )
                v32 = v31 & ~qword_140E2DB80;
              if ( HIDWORD(v32) != 4294967294 )
              {
LABEL_96:
                ++dword_140EF4E84;
                goto LABEL_26;
              }
              if ( v46 == v9 )
              {
                if ( (_DWORD)v47 == (unsigned __int16)v31 >> 12 )
                {
                  ++dword_140EF4E88;
                  goto LABEL_26;
                }
                ++dword_140EF4E4C;
              }
              v46 = v9;
              v47 = (unsigned __int16)v31 >> 12;
              MiUnlockPage(v9, v11);
              v33 = *(_QWORD *)(a1 + 16);
              ++dword_140EF4E48;
              MiDrainZeroLookasides(v44, v9, v33, v15);
              v6 = a2;
            }
            else
            {
              if ( v12 == 3 )
                break;
              if ( (v3 & 0x2000000) != 0 && v12 <= 1 || (v3 & 0x1000000) != 0 && v12 == 2 )
                goto LABEL_26;
              v35 = MI_NODE_FROM_PFN(v9);
              v48 = *(_QWORD *)(v44 + 16) + 57216LL * v35;
              v49[0] = MiSnapPageMoveInProgress(v48, 2LL);
              v49[1] = MiSnapPageMoveInProgress(v36, 1LL);
              MiUnlockPage(v9, v11);
              v37 = v49;
              v38 = 0;
              v55 = v49;
              while ( 1 )
              {
                v39 = *v37 ^ MiWaitForPageMoveComplete(v48, 2 - (unsigned int)(v38 != 0));
                v6 = a2;
                if ( (v39 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                  break;
                ++v38;
                v37 = ++v55;
                if ( v38 >= 2 )
                {
                  if ( v38 == 2 )
                  {
                    ++dword_140EF4E74;
                    *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                    goto LABEL_43;
                  }
                  v6 = a2;
                  goto LABEL_2;
                }
              }
            }
          }
          if ( _bittest64((const signed __int64 *)(v9 + 40), 0x35u) )
          {
            ++dword_140EF4E68;
            goto LABEL_26;
          }
          if ( (v3 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(v9) != 9 )
          {
            ++dword_140EF4E6C;
            goto LABEL_26;
          }
          if ( (*(_DWORD *)(v9 + 32) & 0x40000000) != 0 && (v3 & 0x10000000) == 0 )
          {
            ++dword_140EF4EA8;
            goto LABEL_26;
          }
          if ( v13 > 1 )
            break;
          if ( v12 == 3 )
          {
            v6 = a2;
            if ( (v3 & 0x400000) != 0 || (unsigned int)MiUnlinkFreeOrZeroedPage(a2, 0LL, 256LL) )
            {
LABEL_23:
              ++dword_140EF4E44;
              if ( (v3 & 0x400000) == 0 )
                MiAddMdlPageToTradeBlock(a1, v6);
              v4 = 1LL;
              if ( v11 == 17 )
                goto LABEL_43;
            }
            else
            {
              ++dword_140EF4E90;
            }
LABEL_26:
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v11 < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
              __writecr8(v11);
            }
            goto LABEL_43;
          }
          v34 = MiPageSizes[v12];
          v51 = v34;
          if ( (v3 & 0x2000000) != 0 && v34 >= 0x200 || (v3 & 0x1000000) != 0 && v34 == 16 )
            goto LABEL_26;
          v6 = a2;
          if ( (a2 & ~(v34 - 1)) == a2
            && (v3 & 0x400000) == 0
            && *(_QWORD *)(a1 + 16) >= v34
            && v34 + a2 - 1 <= *(_QWORD *)(a1 + 48)
            && (*(_QWORD *)(v9 + 40) & 0x20000000000LL) == 0 )
          {
            MiLargeFreePageToMdl(a2, v12, *(_QWORD *)(a1 + 56), v3, v11);
            v4 = v51;
            dword_140EF4E44 += v51;
            goto LABEL_43;
          }
          if ( (unsigned int)MiDemoteLargeFreePage(a2, v11) )
          {
            v11 = 17;
            goto LABEL_23;
          }
        }
        if ( (HIBYTE(*(_DWORD *)(v9 + 32)) & 0x80u) != 0 )
          break;
        if ( v13 > 4 )
        {
          if ( v13 != 6 )
          {
            ++dword_140EF4EB8;
            goto LABEL_26;
          }
          goto LABEL_16;
        }
        if ( (v3 & 0x4000000) == 0 && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v9 + 8) > 0 )
        {
          ++dword_140EF4EAC;
          goto LABEL_26;
        }
        if ( (v3 & 0x200000) != 0 && (unsigned int)MiIsPageOnBadList(v9, v14) )
        {
LABEL_125:
          ++dword_140EF4EB0;
          goto LABEL_26;
        }
        v26 = MiTradeTransitionPage(v9, (__int64)&v45);
        if ( v26 != 2 )
        {
          if ( v26 != 3 )
            goto LABEL_43;
          v8 = v45;
          if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v44 )
            goto LABEL_141;
          if ( (v3 & 0x400000) == 0 )
            goto LABEL_40;
          goto LABEL_52;
        }
        v6 = a2;
      }
      if ( v13 == 2 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v9 + 32) )
        {
          ++dword_140EF4E94;
        }
        else if ( (unsigned int)MiReuseStandbyPage(v9) )
        {
          v4 = 1LL;
          MiAddMdlPageToTradeBlock(a1, a2);
        }
        else
        {
          MiReleaseFreshPageLocked(v9);
          ++dword_140EF4E90;
        }
        goto LABEL_26;
      }
      if ( v13 != 6
        || (*(_DWORD *)(v9 + 32) & 0x100000) != 0
        || (unsigned __int16)*(_DWORD *)(v9 + 32) != 1
        || ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2
        || (*(_QWORD *)v9 & 1) == 0
        || (*(_DWORD *)(v9 + 32) & 0x8000000) != 0 )
      {
        ++dword_140EF4EA4;
        goto LABEL_26;
      }
LABEL_16:
      if ( (v3 & 0x200000) != 0 && (unsigned int)MiIsPageOnBadList(v9, v14) )
        goto LABEL_125;
      if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) != 2 )
        break;
      if ( (v3 & 8) != 0 )
      {
LABEL_142:
        ++dword_140EF4EB4;
        goto LABEL_26;
      }
      MiUnlockPage(v9, v11);
      if ( (unsigned int)MiSwapStackPage(v44, v9, *(_DWORD *)(a1 + 28), v3, (__int64)&v45, (__int64)&v43) )
      {
        v8 = v45;
        if ( v43 )
          ++dword_140EF4E54;
        else
          ++dword_140EF4E60;
LABEL_37:
        *(_QWORD *)(v9 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList(v9 + 16, a2, a3, v19);
        if ( (v3 & 0x400000) == 0 )
        {
          _InterlockedOr(v42, 0);
          v20 = *(_QWORD *)(v9 + 24);
          v21 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59;
          v22 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v9 + 24),
                  v21 ^ (v20 ^ v21) & 0xC7FFFFFFFFFFFFFFuLL,
                  v20);
          if ( v20 != v22 )
          {
            do
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v9 + 24),
                      v21 ^ (v21 ^ v22) & 0xC7FFFFFFFFFFFFFFuLL,
                      v22);
            }
            while ( v23 != v22 );
          }
LABEL_40:
          v24 = *(_QWORD *)(a1 + 56);
          if ( v24 )
          {
            *(_QWORD *)(v24 + 8 * ((unsigned __int64)*(unsigned int *)(v24 + 40) >> 12) + 48) = a2;
            *(_DWORD *)(v24 + 40) += 4096;
          }
          goto LABEL_42;
        }
LABEL_52:
        MiLockAndInsertPageInFreeList(v9);
LABEL_42:
        v4 = 1LL;
        goto LABEL_43;
      }
      if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
      {
        ++dword_140EF4EBC;
        goto LABEL_43;
      }
      ++dword_140EF4E64;
      v6 = a2;
    }
    v16 = v44;
    active = MiActivePageClaimCandidate(v44, v9, 1, v3, 1, a3);
    if ( active )
    {
      ++dword_140EF4F3C;
      *(_QWORD *)(a1 + 40) = active;
      goto LABEL_26;
    }
    if ( (v3 & 8) != 0 )
      goto LABEL_142;
    v18 = *(__int64 *)(v9 + 40) < 0
        ? MiTrimSharedPage(v9, v11, v3)
        : MiStealPage(v9, v11, v3, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 28), (unsigned __int64 *)&v45);
    if ( v18 != 2 )
      break;
    v6 = a2;
  }
  if ( v18 )
  {
    v8 = v45;
    if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == v16 )
    {
      ++dword_140EF4E58;
      goto LABEL_37;
    }
LABEL_141:
    ++dword_140EF4E70;
    MiLockAndInsertPageInFreeList(v9);
    goto LABEL_43;
  }
  ++dword_140EF4EC4;
LABEL_43:
  *(_QWORD *)(a1 + 32) = v8;
  return v4;
}
