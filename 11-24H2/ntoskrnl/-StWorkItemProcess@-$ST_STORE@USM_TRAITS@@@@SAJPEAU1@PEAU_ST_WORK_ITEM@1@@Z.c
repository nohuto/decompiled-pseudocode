/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140405C68 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140230000 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7AB0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140377BF0 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmHpChunkHeapProtect @ 0x140379518 (SmHpChunkHeapProtect.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140381820 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140477C70 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140477D30 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404A5B08 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1B48 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1CA4 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404C66EC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F66C8 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1404F76EC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // r14
  int v7; // ebx
  int v8; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  int v17; // r10d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int Stats; // ebx
  __int64 v21; // rax
  PVOID v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  int v29; // eax
  char v30; // bl
  __int64 v31; // r8
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  __int128 v41; // [rsp+30h] [rbp-68h] BYREF
  __int64 v42; // [rsp+40h] [rbp-58h]
  unsigned int v43; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+10h] BYREF
  int v45; // [rsp+B0h] [rbp+18h]
  __int64 v46; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v5 = -1;
  v6 = a2;
  if ( (a2 & 1) != 0 )
  {
    v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFFEuLL) & 7;
    v8 = 0;
    v43 = 0;
    v9 = 0LL;
  }
  else
  {
    v7 = *(_DWORD *)a2 & 7;
    v43 = 0;
    v8 = 0;
    v9 = 0LL;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 6536);
  }
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StDmPageRemove(a1 + 80, v3);
      goto LABEL_23;
    }
    switch ( v7 )
    {
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a1 + 992, v3);
        goto LABEL_23;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v3);
        goto LABEL_23;
      case 4:
        if ( (*(_DWORD *)(v3 + 8) & 7) != 0 )
        {
          if ( (*(_DWORD *)(v3 + 8) & 7u) - 4 > 1 )
            goto LABEL_82;
          Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v3);
          v5 = 0;
        }
        else
        {
          ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
          Stats = 0;
        }
        goto LABEL_23;
      case 5:
        v29 = *(_DWORD *)(v3 + 8) & 7;
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
          }
          else if ( v29 == 3 )
          {
            v34 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0LL, 0LL);
            if ( v34 )
            {
              ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v34);
              Stats = 0;
              goto LABEL_23;
            }
          }
          else
          {
            do
            {
              v43 = 0;
              if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 1LL, &v43) != 2 )
                break;
              v30 = *(_BYTE *)(a1 + 2368);
              v31 = v43;
              *(_BYTE *)(a1 + 2368) = v30 | 3;
              v32 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1 + 80, 0LL, v31);
              *(_BYTE *)(a1 + 2368) ^= (v30 ^ *(_BYTE *)(a1 + 2368)) & 3;
            }
            while ( v32 >= 0 );
          }
          Stats = 0;
          goto LABEL_23;
        }
        ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
        Stats = 0;
        goto LABEL_23;
      case 6:
        v9 = v6;
        v5 = 259;
        if ( *(_DWORD *)(v3 + 8) == 1 )
          v9 = 0LL;
        if ( !SmKmStoreReference(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 7576LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6832LL)) )
        {
          Stats = -1073741431;
          goto LABEL_23;
        }
        v36 = *(_DWORD *)(v3 + 8);
        v8 = 1;
        Stats = 0;
        switch ( v36 )
        {
          case 1:
            v37 = *(_DWORD *)(v3 + 16);
            if ( v37 != 6 )
            {
              a3 = 0x140000000uLL;
              switch ( v37 )
              {
                case 0:
                case 1:
                  v38 = 80LL;
                  if ( v37 )
                    v38 = 2416LL;
                  Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(a1 + v38);
                  break;
                case 2:
                  Stats = ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1 + 80, 0LL, a1 + 944);
                  break;
                case 3:
                  ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
                  break;
                case 4:
                  SmHpChunkHeapProtect(a1 + 272, 0LL, 0LL);
                  break;
                case 5:
                  ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(a1 + 80);
                  break;
                default:
                  goto LABEL_23;
              }
              goto LABEL_23;
            }
            break;
          case 2:
            Stats = ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
            goto LABEL_23;
          case 3:
            Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v3);
            v9 = 0LL;
            goto LABEL_23;
          case 4:
            v39 = 2000LL;
            v40 = 200LL;
            if ( (*(_WORD *)(v3 + 14) & 1) == 0 )
            {
              v39 = 30000LL;
              v40 = 2000LL;
            }
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2376), 2LL, v40, v39);
            v9 = 0LL;
            goto LABEL_23;
          case 5:
            _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
            v9 = 0LL;
            goto LABEL_23;
          case 6:
            _InterlockedAnd16((volatile signed __int16 *)(v3 + 12), 0xFFFEu);
            v9 = 0LL;
            if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 6800) - MEMORY[0xFFFFF780000003B0] >= 0x989680uLL
              && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL, 0LL) == 2 )
            {
              ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
              *(_QWORD *)(a1 + 6800) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
            }
            goto LABEL_23;
        }
LABEL_82:
        Stats = -1073741811;
        goto LABEL_23;
      case 7:
        v33 = 2416;
        if ( (*(_DWORD *)(v3 + 28) & 2) == 0 )
          v33 = 80;
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1 + v33);
        Stats = 259;
        goto LABEL_23;
      default:
        Stats = -1073741822;
        goto LABEL_23;
    }
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = a1 + 80;
  v12 = 1;
  v13 = *(_QWORD *)(v3 + 24);
  v14 = (*(_BYTE *)(v10 + 10) & 5) == 0;
  v41 = *(_OWORD *)(v3 + 8);
  v46 = 1LL;
  v42 = v13;
  if ( v14 )
  {
    v23 = MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u);
    v12 = v46;
    v11 = a1 + 80;
    a3 = (unsigned __int64)v23;
  }
  else
  {
    a3 = *(_QWORD *)(v10 + 24);
  }
  v15 = v41;
  if ( a3 )
  {
    if ( (((unsigned int)v41 >> 30) & 1) != 0 )
      v16 = v12;
    else
      v16 = *(_DWORD *)(v10 + 40) >> 12;
    v17 = 0;
    if ( (((unsigned int)v41 >> 30) & 1) != 0 )
      v17 = *(_DWORD *)(v10 + 40);
    v14 = (*(_BYTE *)(v11 + 2290) & 1) == 0;
    v45 = v17;
    if ( v14 )
    {
      *((_QWORD *)&v41 + 1) = a3;
      while ( 1 )
      {
        v18 = (v15 & 0x40000000) != 0 ? (unsigned int)(v17 + *(_DWORD *)(a1 + 904) + 15) >> 4 : v12;
        v44 = v18;
        do
        {
          v19 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1 + 80, &v41, v3, &v44);
          Stats = v19;
        }
        while ( v19 == -1073741267 );
        v8 = v43;
        if ( v19 )
          break;
        LODWORD(v41) = v41 & 0xC0000007 | ((v41 & 0xFFFFFFF8) + 8) & 0x3FFFFFF8;
        v15 = v41;
        if ( (((unsigned int)v41 >> 3) & 0x7FFFFFF) >= v16 )
          goto LABEL_19;
        LODWORD(v42) = v42 + 1;
        *((_QWORD *)&v41 + 1) += 4096LL;
        v17 = v45;
        v12 = v46;
      }
      v15 = v41;
      if ( v19 == -1073741818 )
      {
        v15 = v41 & 0xC0000007;
        goto LABEL_22;
      }
LABEL_19:
      a3 = (v15 >> 3) & 0x7FFFFFF;
      if ( ((v15 >> 3) & 0x7FFFFFF) != 0 )
      {
        v21 = *(_QWORD *)(a1 + 2280);
        if ( v21 )
        {
          v24 = v21 + 24;
          v25 = *(_QWORD *)(v21 + 24);
          v26 = *(_QWORD *)(v24 + 16);
          if ( MEMORY[0xFFFFF78000000008] >= v26 )
          {
            if ( MEMORY[0xFFFFF78000000008] - v26 >= 0x23C34600 )
            {
              v27 = (MEMORY[0xFFFFF78000000008] - v26 + 599999999) / 0x23C34600;
              v28 = v26 + 600000000LL * (unsigned int)v27;
            }
            else
            {
              LODWORD(v27) = v46;
              v28 = v26 + 600000000;
            }
            *(_QWORD *)(v24 + 16) = v28;
            *(_DWORD *)(v24 + 8) += v27;
            v25 = v24 + 4 * (5LL * (*(_DWORD *)(v24 + 8) & 0x3F) + 6);
            *(_OWORD *)v25 = 0LL;
            *(_DWORD *)(v25 + 16) = 0;
            *(_QWORD *)v24 = v25;
          }
          *(_DWORD *)v25 += a3;
          v15 = v41;
        }
        Stats = 0;
      }
    }
    else
    {
      v15 = (8 * v16) | v41 & 0xC0000007;
      Stats = 0;
    }
  }
  else
  {
    Stats = -1073741670;
  }
LABEL_22:
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(v3 + 8) & 0xC0000007 | v15 & 0x3FFFFFF8;
LABEL_23:
  if ( *(_QWORD *)(a1 + 6808) )
  {
    v35 = *(_DWORD *)(a1 + 6816);
    if ( (v35 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 2370) |= 1u;
      *(_DWORD *)(a1 + 6816) = v35 | 2;
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
    }
  }
  if ( Stats == -1073741818 )
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
  if ( v9 )
    ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v9, a3);
  if ( v8 )
    SmKmStoreDereference(
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 7576LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6832LL),
      a3);
  if ( v5 != -1 )
    return v5;
  return Stats;
}
