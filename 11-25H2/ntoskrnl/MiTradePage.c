/*
 * XREFs of MiTradePage @ 0x140341930
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiClaimPhysicalRun @ 0x1403416E0 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140220E10 (MiGetBaseResidentPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiColorHasSlists @ 0x14022B2E0 (MiColorHasSlists.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiTrimSharedPage @ 0x14035A2DC (MiTrimSharedPage.c)
 *     MiWaitForPageMoveComplete @ 0x1403931F4 (MiWaitForPageMoveComplete.c)
 *     MiSnapPageMoveInProgress @ 0x140393280 (MiSnapPageMoveInProgress.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiPfnLargeBitSet @ 0x140406750 (MiPfnLargeBitSet.c)
 *     MiAddMdlPageToTradeBlock @ 0x140443080 (MiAddMdlPageToTradeBlock.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, ULONG_PTR a2, _DWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r10d
  unsigned int v15; // r12d
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rbx
  __int64 active; // rax
  unsigned __int8 v20; // r12
  int v21; // eax
  signed __int64 v22; // rcx
  unsigned __int64 v23; // r8
  signed __int64 v24; // rdx
  signed __int64 v25; // rcx
  __int64 v26; // rdx
  int v28; // eax
  int v29; // r10d
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // eax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // eax
  signed __int32 v40[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v41; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  _QWORD *BaseResidentPage; // [rsp+58h] [rbp-70h]
  __int64 v47; // [rsp+60h] [rbp-68h]
  _QWORD v48[12]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int8 v49; // [rsp+D0h] [rbp+8h]
  unsigned int v50; // [rsp+D0h] [rbp+8h]
  int PfnPageSizeIndex; // [rsp+E8h] [rbp+20h]
  unsigned __int64 v54; // [rsp+E8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 0LL;
  v5 = *(_QWORD *)a1;
  v6 = a2;
  v41 = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v42 = v5;
  if ( (v3 & 0x400000) != 0 )
    v8 = *(_DWORD *)(a1 + 28);
  else
    v8 = 0;
  v44 = 0LL;
  v9 = -1LL;
  LODWORD(v45) = 1;
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
            v43 = v11;
            v49 = MiSafeLockPage(v6, a2, (__int64)a3);
            if ( v49 == 17 )
            {
              ++dword_140EF4B88;
              goto LABEL_35;
            }
            if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != v5 )
            {
              if ( (v3 & 0x410000) != 0x410000 )
              {
                v39 = MiPfnLargeBitSet(&MiSystemPartition, v6, v12, v13);
                if ( v39 != 3 )
                  *(_QWORD *)(a1 + 40) = MiPageSizes[v39];
              }
              ++dword_140EF4B90;
              goto LABEL_149;
            }
            v14 = 3;
            v15 = *(_BYTE *)(v10 + 34) & 7;
            PfnPageSizeIndex = 3;
            v16 = 0LL;
            v17 = 0;
            if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 )
            {
              BaseResidentPage = (_QWORD *)MiGetBaseResidentPage(v10);
              v38 = (__int64)BaseResidentPage;
              v15 = *((_BYTE *)BaseResidentPage + 34) & 7;
              PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)BaseResidentPage);
              v17 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((v38 + 0x220000000000LL) >> 4));
              v16 = BaseResidentPage[2];
              if ( BaseResidentPage != (_QWORD *)v10 )
                _InterlockedAnd64(BaseResidentPage + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( v15 == 6 )
              {
                ++dword_140EF4B98;
                v20 = v49;
                *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                goto LABEL_52;
              }
              v14 = PfnPageSizeIndex;
            }
            if ( v15 != 5 )
              break;
            if ( MiIsPageOnBadList(v10) )
            {
              ++dword_140EF4B9C;
              v20 = v49;
              goto LABEL_52;
            }
            if ( *(_QWORD *)(v10 + 8) == -8LL )
            {
              ++dword_140EF4BA0;
              v20 = v49;
              goto LABEL_52;
            }
            if ( v29 == 3 )
              v17 = MI_PAGE_TO_FULL_COLOR(a2);
            if ( MiColorHasSlists(v17) )
            {
              if ( !MiInvalidPteConforms(v16) )
                goto LABEL_100;
              v31 = v30;
              if ( qword_140E2D940 && (v30 & 0x10) == 0 )
                v31 = v30 & ~qword_140E2D940;
              if ( HIDWORD(v31) != 4294967294 )
              {
LABEL_100:
                ++dword_140EF4BA4;
                v20 = v49;
                goto LABEL_52;
              }
              if ( v44 == v10 )
              {
                if ( (_DWORD)v45 == (unsigned __int16)v30 >> 12 )
                {
                  ++dword_140EF4BA8;
                  v20 = v49;
                  goto LABEL_52;
                }
                ++dword_140EF4B6C;
              }
              v44 = v10;
              v45 = (unsigned __int16)v30 >> 12;
              MiUnlockPage(v10, v49);
              v5 = v42;
              ++dword_140EF4B68;
              MiDrainZeroLookasides(v42, v10, *(_QWORD *)(a1 + 16), v17);
              v6 = a2;
            }
            else
            {
              if ( v14 == 3 )
                break;
              if ( (v3 & 0x2000000) != 0 && v14 <= 1 || (v3 & 0x1000000) != 0 && v14 == 2 )
                goto LABEL_149;
              v33 = MI_NODE_FROM_PFN(v10);
              v47 = *(_QWORD *)(v42 + 16) + 57216LL * v33;
              v48[0] = MiSnapPageMoveInProgress(v47, 2LL);
              v48[1] = MiSnapPageMoveInProgress(v34, 1LL);
              MiUnlockPage(v10, v49);
              v35 = 0;
              v36 = v48;
              v50 = 0;
              BaseResidentPage = v48;
              while ( 1 )
              {
                v37 = *v36 ^ MiWaitForPageMoveComplete(v47, 2 - (unsigned int)(v35 != 0));
                v6 = a2;
                v5 = v42;
                if ( (v37 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                  break;
                v35 = v50 + 1;
                v36 = BaseResidentPage + 1;
                v50 = v35;
                ++BaseResidentPage;
                if ( v35 >= 2 )
                {
                  if ( v35 == 2 )
                  {
                    ++dword_140EF4B94;
                    *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
                    goto LABEL_35;
                  }
                  v6 = a2;
                  goto LABEL_4;
                }
              }
            }
          }
          if ( _bittest64((const signed __int64 *)(v10 + 40), 0x35u) )
          {
            ++dword_140EF4B88;
            v20 = v49;
            goto LABEL_52;
          }
          if ( (v3 & 0x410000) != 0x410000 && (unsigned int)MiGetPfnSlabType(v10) != 9 )
          {
            ++dword_140EF4B8C;
            v20 = v49;
            goto LABEL_52;
          }
          if ( (*(_DWORD *)(v10 + 32) & 0x40000000) != 0 && (v3 & 0x10000000) == 0 )
          {
            ++dword_140EF4BC8;
            v20 = v49;
            goto LABEL_52;
          }
          if ( v15 > 1 )
            break;
          if ( v14 == 3 )
          {
            v6 = a2;
            if ( (v3 & 0x400000) != 0 )
            {
              v20 = v49;
LABEL_49:
              ++dword_140EF4B64;
              if ( (v3 & 0x400000) == 0 )
                MiAddMdlPageToTradeBlock(a1, v6);
              v4 = 1LL;
              if ( v20 == 17 )
                goto LABEL_35;
            }
            else
            {
              v20 = v49;
              if ( (unsigned int)MiUnlinkFreeOrZeroedPage(a2) )
                goto LABEL_49;
              ++dword_140EF4BB0;
            }
LABEL_52:
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v20 < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
              __writecr8(v20);
            }
            goto LABEL_35;
          }
          v32 = MiPageSizes[v14];
          v54 = v32;
          if ( (v3 & 0x2000000) != 0 && v32 >= 0x200 || (v3 & 0x1000000) != 0 && v32 == 16 )
            goto LABEL_149;
          v6 = a2;
          if ( (a2 & ~(v32 - 1)) == a2
            && (v3 & 0x400000) == 0
            && *(_QWORD *)(a1 + 16) >= v32
            && v32 + a2 - 1 <= *(_QWORD *)(a1 + 48)
            && (*(_QWORD *)(v10 + 40) & 0x20000000000LL) == 0 )
          {
            MiLargeFreePageToMdl(a2, v14, *(_QWORD *)(a1 + 56), v3, v49);
            v4 = v54;
            dword_140EF4B64 += v54;
            goto LABEL_35;
          }
          if ( (unsigned int)MiDemoteLargeFreePage(a2, v49) )
          {
            v20 = 17;
            goto LABEL_49;
          }
          v5 = v42;
        }
        if ( (HIBYTE(*(_DWORD *)(v10 + 32)) & 0x80u) != 0 )
          break;
        if ( v15 > 4 )
        {
          if ( v15 != 6 )
          {
            ++dword_140EF4BD8;
            v20 = v49;
            goto LABEL_52;
          }
          goto LABEL_18;
        }
        if ( (v3 & 0x4000000) == 0 && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0 )
        {
          ++dword_140EF4BCC;
          v20 = v49;
          goto LABEL_52;
        }
        if ( (v3 & 0x200000) != 0 && MiIsPageOnBadList(v10) )
        {
LABEL_130:
          ++dword_140EF4BD0;
          goto LABEL_149;
        }
        v28 = MiTradeTransitionPage(v10, v49, v8, v3, &v43);
        if ( v28 != 2 )
        {
          if ( v28 != 3 )
            goto LABEL_35;
          v9 = v43;
          if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != v42 )
            goto LABEL_147;
          if ( (v3 & 0x400000) == 0 )
            goto LABEL_32;
          goto LABEL_44;
        }
        v6 = a2;
        v5 = v42;
      }
      if ( v15 == 2 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v10 + 32) )
        {
          ++dword_140EF4BB4;
          v20 = v49;
        }
        else
        {
          if ( (unsigned int)MiReuseStandbyPage(v10, v16, v12, v13) )
          {
            v4 = 1LL;
            MiAddMdlPageToTradeBlock(a1, a2);
          }
          else
          {
            MiReleaseFreshPageLocked(v10);
            ++dword_140EF4BB0;
          }
          v20 = v49;
        }
        goto LABEL_52;
      }
      if ( v15 != 6
        || (*(_DWORD *)(v10 + 32) & 0x100000) != 0
        || (unsigned __int16)*(_DWORD *)(v10 + 32) != 1
        || ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 2
        || (*(_QWORD *)v10 & 1) == 0
        || (*(_DWORD *)(v10 + 32) & 0x8000000) != 0 )
      {
        ++dword_140EF4BC4;
        v20 = v49;
        goto LABEL_52;
      }
LABEL_18:
      if ( (v3 & 0x200000) != 0 && MiIsPageOnBadList(v10) )
        goto LABEL_130;
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 2 )
        break;
      if ( (v3 & 8) != 0 )
      {
LABEL_148:
        ++dword_140EF4BD4;
LABEL_149:
        v20 = v49;
        goto LABEL_52;
      }
      MiUnlockPage(v10, v49);
      v5 = v42;
      if ( (unsigned int)MiSwapStackPage(v42, v10, *(_DWORD *)(a1 + 28), v3, (__int64)&v43, (__int64)&v41) )
      {
        v9 = v43;
        if ( v41 )
          ++dword_140EF4B74;
        else
          ++dword_140EF4B80;
LABEL_29:
        *(_QWORD *)(v10 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList((__int64 *)(v10 + 16));
        if ( (v3 & 0x400000) == 0 )
        {
          _InterlockedOr(v40, 0);
          v22 = *(_QWORD *)(v10 + 24);
          v23 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59;
          v24 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v10 + 24),
                  v23 ^ (v22 ^ v23) & 0xC7FFFFFFFFFFFFFFuLL,
                  v22);
          if ( v22 != v24 )
          {
            do
            {
              v25 = v24;
              v24 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v10 + 24),
                      v23 ^ (v23 ^ v24) & 0xC7FFFFFFFFFFFFFFuLL,
                      v24);
            }
            while ( v25 != v24 );
          }
LABEL_32:
          v26 = *(_QWORD *)(a1 + 56);
          if ( v26 )
          {
            *(_QWORD *)(v26 + 8 * ((unsigned __int64)*(unsigned int *)(v26 + 40) >> 12) + 48) = a2;
            *(_DWORD *)(v26 + 40) += 4096;
          }
          goto LABEL_34;
        }
LABEL_44:
        MiLockAndInsertPageInFreeList(v10);
LABEL_34:
        v4 = 1LL;
        goto LABEL_35;
      }
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 2 )
      {
        ++dword_140EF4BDC;
        goto LABEL_35;
      }
      ++dword_140EF4B84;
      v6 = a2;
    }
    v18 = v42;
    active = MiActivePageClaimCandidate(v42, v10, 1, v3, 1, a3);
    if ( active )
    {
      ++dword_140EF4C5C;
      v20 = v49;
      *(_QWORD *)(a1 + 40) = active;
      goto LABEL_52;
    }
    if ( (v3 & 8) != 0 )
      goto LABEL_148;
    v21 = *(__int64 *)(v10 + 40) < 0
        ? MiTrimSharedPage(v10, v49, v3)
        : MiStealPage(v10, v49, v3, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 28), (unsigned __int64 *)&v43);
    if ( v21 != 2 )
      break;
    v6 = a2;
    v5 = v42;
  }
  if ( v21 )
  {
    v9 = v43;
    if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == v18 )
    {
      ++dword_140EF4B78;
      goto LABEL_29;
    }
LABEL_147:
    ++dword_140EF4B90;
    MiLockAndInsertPageInFreeList(v10);
    goto LABEL_35;
  }
  ++dword_140EF4BE4;
LABEL_35:
  *(_QWORD *)(a1 + 32) = v9;
  return v4;
}
