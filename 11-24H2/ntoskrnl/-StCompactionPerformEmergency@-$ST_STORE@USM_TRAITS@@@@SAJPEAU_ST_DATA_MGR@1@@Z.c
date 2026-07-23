/*
 * XREFs of ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmStoreDecommitVirtualMemory @ 0x1402F62C8 (MmStoreDecommitVirtualMemory.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402F6CB0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformEmergency(__int64 a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // r14d
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // rcx
  _WORD *v8; // r15
  _WORD *v9; // r12
  _WORD *v10; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned int v12; // r11d
  __int64 v13; // rbp
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h]
  _WORD *v26; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 784);
  v2 = 0;
  v24 = v1;
  v3 = 0;
  ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 0LL, 0LL);
  v5 = 0;
  v23 = (unsigned int)(v1 - 4096) >> 4;
  v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v7 = *(_QWORD *)(a1 + 1416);
  v25 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v8 = (_WORD *)(v7 + 2LL * *(unsigned int *)(a1 + 1480));
  v26 = v8;
  v9 = (_WORD *)(v7 + 2LL * *(unsigned int *)(a1 + 856));
  while ( 2 )
  {
    v10 = v8;
    if ( v8 >= v9 )
      goto LABEL_26;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 7440LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6920LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6924LL) )
      {
        if ( (v5 & 3) == 0 )
        {
          if ( v5 )
          {
            UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
            if ( UnbiasedInterruptTime - v6 >= (-(__int64)(v12 < 0x40) & 0x4C4B40uLL) + 5000000 )
              break;
          }
        }
      }
      if ( (*v10 & 0x1FFF) == 0 || (*v10 & 0x1FFFu) > v23 )
        goto LABEL_24;
      v13 = ((__int64)v10 - *(_QWORD *)(a1 + 1416)) >> 1;
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v13) )
      {
        v15 = v14 >> 13;
        if ( *(_BYTE *)(a1 + 776) )
          v15 = 0;
        if ( (_DWORD)v13 == *(_DWORD *)(a1 + 16 * (v15 + 102LL)) )
          goto LABEL_23;
        ++v5;
        if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, 0LL, v13, 0LL, v13, 0) >= 0 )
          goto LABEL_21;
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 2LL, 0LL) != 2 )
          break;
        v17 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v13, 0, 1);
        if ( v17 )
        {
          if ( v17 != -1 )
          {
            if ( (int)ST_STORE<SM_TRAITS>::StCompactRegions(a1, v17, v13, v17, v13, 0) < 0 )
              NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v13, v18, v19);
LABEL_21:
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 7024LL) + 8LL * (unsigned int)v13);
            if ( v21 >= 0 )
            {
              v20 = (16 * (*v10 & 0x1FFF) + 4095) & 0xFFFFF000;
              MmStoreDecommitVirtualMemory(
                (unsigned int)v20 + (v21 & 0x7FFFFFFFFFFF0000LL),
                (unsigned int)(v24 - v20),
                v20,
                v16);
            }
            goto LABEL_23;
          }
        }
      }
      v3 = 1;
LABEL_23:
      v6 = v25;
LABEL_24:
      ++v10;
    }
    while ( v10 < v9 );
    v8 = v26;
    v6 = v25;
LABEL_26:
    if ( v10 == v9 )
    {
      if ( v8 != *(_WORD **)(a1 + 1416) )
      {
        v9 = v8;
        v26 = *(_WORD **)(a1 + 1416);
        v8 = v26;
        continue;
      }
    }
    else
    {
      v2 = ((__int64)v10 - *(_QWORD *)(a1 + 1416)) >> 1;
    }
    break;
  }
  *(_DWORD *)(a1 + 1480) = v2;
  return v3 != 0 ? 0xC000022D : 0;
}
