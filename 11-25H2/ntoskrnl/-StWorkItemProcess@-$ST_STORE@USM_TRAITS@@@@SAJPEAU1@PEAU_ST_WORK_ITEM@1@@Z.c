/*
 * XREFs of ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14040602C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020B100 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14034B490 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14034B5FC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmHpChunkHeapProtect @ 0x140396B3C (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1403979A4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14039D230 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14039E970 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14039F3C0 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmKmStoreReference @ 0x140435200 (SmKmStoreReference.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14047BBA8 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14047BC68 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404959DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140495CA8 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404AA060 (-StAddRemoveRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B0744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B7AAC (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B7C08 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404CD708 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F65E8 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1404F7544 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FE778 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1405FEE24 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StWorkItemProcess(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14
  int v8; // ebx
  int v9; // r12d
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // r11d
  __int64 v14; // xmm0_8
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  int v18; // r10d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int Stats; // ebx
  __int64 v22; // rax
  PVOID v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  int v30; // eax
  char v31; // bl
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  __int128 v42; // [rsp+30h] [rbp-68h] BYREF
  __int64 v43; // [rsp+40h] [rbp-58h]
  unsigned int v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+10h] BYREF
  int v46; // [rsp+B0h] [rbp+18h]
  __int64 v47; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v6 = -1;
  v7 = a2;
  if ( (a2 & 1) != 0 )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v8 = *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFFEuLL) & 7;
    v9 = 0;
    v44 = 0;
    v10 = 0LL;
  }
  else
  {
    v8 = *(_DWORD *)a2 & 7;
    v44 = 0;
    v9 = 0;
    v10 = 0LL;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(a1 + 6536);
  }
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      Stats = ST_STORE<SM_TRAITS>::StDmPageRemove(a1 + 80, v4);
      goto LABEL_23;
    }
    switch ( v8 )
    {
      case 2:
        Stats = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, (_QWORD *)(a1 + 992), v4, a4);
        goto LABEL_23;
      case 3:
        Stats = ST_STORE<SM_TRAITS>::StGetStats(a1, v4);
        goto LABEL_23;
      case 4:
        if ( (*(_DWORD *)(v4 + 8) & 7) != 0 )
        {
          if ( (*(_DWORD *)(v4 + 8) & 7u) - 4 > 1 )
            goto LABEL_66;
          Stats = ST_STORE<SM_TRAITS>::StAddRemoveRegions(a1, v4);
          v6 = 0;
        }
        else
        {
          ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
          Stats = 0;
        }
        goto LABEL_23;
      case 5:
        v30 = *(_DWORD *)(v4 + 8) & 7;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1 + 80);
          }
          else if ( v30 == 3 )
          {
            v40 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 0LL, 0LL);
            if ( v40 )
            {
              ST_STORE<SM_TRAITS>::StQueueCompaction(a1 + 80, v40);
              Stats = 0;
              goto LABEL_23;
            }
          }
          else
          {
            do
            {
              v44 = 0;
              if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 1LL, &v44) != 2 )
                break;
              v31 = *(_BYTE *)(a1 + 2368);
              v32 = v44;
              *(_BYTE *)(a1 + 2368) = v31 | 3;
              v33 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1 + 80, 0LL, v32);
              *(_BYTE *)(a1 + 2368) ^= (v31 ^ *(_BYTE *)(a1 + 2368)) & 3;
            }
            while ( v33 >= 0 );
          }
          Stats = 0;
          goto LABEL_23;
        }
        ST_STORE<SM_TRAITS>::StDmEtaRefresh(a1 + 80);
        Stats = 0;
        goto LABEL_23;
      case 6:
        v10 = v7;
        v6 = 259;
        if ( *(_DWORD *)(v4 + 8) == 1 )
          v10 = 0LL;
        if ( !SmKmStoreReference(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 7576LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6832LL)) )
        {
          Stats = -1073741431;
          goto LABEL_23;
        }
        v34 = *(_DWORD *)(v4 + 8);
        v9 = 1;
        Stats = 0;
        switch ( v34 )
        {
          case 1:
            v35 = *(_DWORD *)(v4 + 16);
            if ( v35 != 6 )
            {
              a3 = 0x140000000uLL;
              switch ( v35 )
              {
                case 0:
                case 1:
                  v36 = 80LL;
                  if ( v35 )
                    v36 = 2416LL;
                  Stats = ST_STORE<SM_TRAITS>::StCompactionWorker(a1 + v36);
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
            Stats = ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(a1, v4);
            v10 = 0LL;
            goto LABEL_23;
          case 4:
            v37 = 2000LL;
            v38 = 200LL;
            if ( (*(_WORD *)(v4 + 14) & 1) == 0 )
            {
              v37 = 30000LL;
              v38 = 2000LL;
            }
            ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2376), 2LL, v38, v37);
            v10 = 0LL;
            goto LABEL_23;
          case 5:
            _InterlockedAnd16((volatile signed __int16 *)(v4 + 12), 0xFFFEu);
            v10 = 0LL;
            goto LABEL_23;
          case 6:
            _InterlockedAnd16((volatile signed __int16 *)(v4 + 12), 0xFFFEu);
            v10 = 0LL;
            if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 6800) - MEMORY[0xFFFFF780000003B0] >= 0x989680uLL
              && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1 + 80, 2LL, 0LL) == 2 )
            {
              ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(a1 + 80);
              *(_QWORD *)(a1 + 6800) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
            }
            goto LABEL_23;
        }
LABEL_66:
        Stats = -1073741811;
        goto LABEL_23;
      case 7:
        v39 = 2416;
        if ( (*(_DWORD *)(v4 + 28) & 2) == 0 )
          v39 = 80;
        ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1 + v39);
        Stats = 259;
        goto LABEL_23;
      default:
        Stats = -1073741822;
        goto LABEL_23;
    }
  }
  v11 = *(_QWORD *)(v4 + 16);
  v12 = a1 + 80;
  v13 = 1;
  v14 = *(_QWORD *)(v4 + 24);
  v15 = (*(_BYTE *)(v11 + 10) & 5) == 0;
  v42 = *(_OWORD *)(v4 + 8);
  v47 = 1LL;
  v43 = v14;
  if ( v15 )
  {
    v24 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v13 = v47;
    v12 = a1 + 80;
    a3 = (unsigned __int64)v24;
  }
  else
  {
    a3 = *(_QWORD *)(v11 + 24);
  }
  v16 = v42;
  if ( a3 )
  {
    if ( (((unsigned int)v42 >> 30) & 1) != 0 )
      v17 = v13;
    else
      v17 = *(_DWORD *)(v11 + 40) >> 12;
    v18 = 0;
    if ( (((unsigned int)v42 >> 30) & 1) != 0 )
      v18 = *(_DWORD *)(v11 + 40);
    v15 = (*(_BYTE *)(v12 + 2290) & 1) == 0;
    v46 = v18;
    if ( v15 )
    {
      *((_QWORD *)&v42 + 1) = a3;
      while ( 1 )
      {
        v19 = (v16 & 0x40000000) != 0 ? (unsigned int)(v18 + *(_DWORD *)(a1 + 904) + 15) >> 4 : v13;
        v45 = v19;
        do
        {
          v20 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1 + 80, &v42, v4, &v45);
          Stats = v20;
        }
        while ( v20 == -1073741267 );
        v9 = v44;
        if ( v20 )
          break;
        LODWORD(v42) = v42 & 0xC0000007 | ((v42 & 0xFFFFFFF8) + 8) & 0x3FFFFFF8;
        v16 = v42;
        if ( (((unsigned int)v42 >> 3) & 0x7FFFFFF) >= v17 )
          goto LABEL_19;
        LODWORD(v43) = v43 + 1;
        *((_QWORD *)&v42 + 1) += 4096LL;
        v18 = v46;
        v13 = v47;
      }
      v16 = v42;
      if ( v20 == -1073741818 )
      {
        v16 = v42 & 0xC0000007;
        goto LABEL_22;
      }
LABEL_19:
      a3 = (v16 >> 3) & 0x7FFFFFF;
      if ( ((v16 >> 3) & 0x7FFFFFF) != 0 )
      {
        v22 = *(_QWORD *)(a1 + 2280);
        if ( v22 )
        {
          v25 = v22 + 24;
          v26 = *(_QWORD *)(v22 + 24);
          v27 = *(_QWORD *)(v25 + 16);
          if ( MEMORY[0xFFFFF78000000008] >= v27 )
          {
            if ( MEMORY[0xFFFFF78000000008] - v27 >= 0x23C34600 )
            {
              v28 = (MEMORY[0xFFFFF78000000008] - v27 + 599999999) / 0x23C34600;
              v29 = v27 + 600000000LL * (unsigned int)v28;
            }
            else
            {
              LODWORD(v28) = v47;
              v29 = v27 + 600000000;
            }
            *(_QWORD *)(v25 + 16) = v29;
            *(_DWORD *)(v25 + 8) += v28;
            v26 = v25 + 4 * (5LL * (*(_DWORD *)(v25 + 8) & 0x3F) + 6);
            *(_OWORD *)v26 = 0LL;
            *(_DWORD *)(v26 + 16) = 0;
            *(_QWORD *)v25 = v26;
          }
          *(_DWORD *)v26 += a3;
          v16 = v42;
        }
        Stats = 0;
      }
    }
    else
    {
      v16 = (8 * v17) | v42 & 0xC0000007;
      Stats = 0;
    }
  }
  else
  {
    Stats = -1073741670;
  }
LABEL_22:
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(v4 + 8) & 0xC0000007 | v16 & 0x3FFFFFF8;
LABEL_23:
  if ( *(_QWORD *)(a1 + 6808) )
  {
    v41 = *(_DWORD *)(a1 + 6816);
    if ( (v41 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 2370) |= 1u;
      *(_DWORD *)(a1 + 6816) = v41 | 2;
      ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
    }
  }
  if ( Stats == -1073741818 )
    ST_STORE<SM_TRAITS>::StEmptyStore(a1, 0LL);
  if ( v10 )
    ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v10, a3);
  if ( v9 )
    SmKmStoreDereference(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 7576LL), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6832LL));
  if ( v6 != -1 )
    return v6;
  return Stats;
}
