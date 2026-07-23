/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140477C70 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1402F6CB0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x140447E00 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KKK@Z @ 0x1404F5648 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rbp
  unsigned int Emptiest; // eax
  unsigned int v10; // r13d
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // r8d
  int v16; // r9d
  unsigned int i; // r12d
  _WORD *v18; // r13
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  unsigned int v24; // [rsp+34h] [rbp-174h]
  _OWORD v25[2]; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int16 *v26[32]; // [rsp+60h] [rbp-148h] BYREF

  memset_0(v26, 0, sizeof(v26));
  v6 = 0LL;
  v7 = (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1);
  memset(v25, 0, sizeof(v25));
  LODWORD(v8) = -1;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(a1, v26, 32LL, v7, a3);
  v10 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v26, Emptiest, v25);
  v11 = (__int64)(*(_QWORD *)&v25[0] - *(_QWORD *)(a1 + 1416)) >> 1;
  v24 = v10;
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v11) )
    return (unsigned int)-1073740024;
  v13 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v11, 0, 32);
  v14 = v13;
  if ( !v13 )
    return (unsigned int)-1073741739;
  if ( v13 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v12 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v13, v11, v13, v11, a2);
    if ( v12 < 0 )
      goto LABEL_27;
    for ( i = 1; i < v10; ++i )
    {
      v18 = (_WORD *)*((_QWORD *)v25 + i);
      v8 = ((__int64)v18 - *(_QWORD *)(a1 + 1416)) >> 1;
      if ( _bittest((const signed __int32 *)(a1 + 776), 0x11u)
        && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v8) )
      {
        goto LABEL_21;
      }
      v19 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v8, 0, 32);
      v6 = v19;
      if ( !v19 )
      {
        v12 = -1073741739;
        goto LABEL_26;
      }
      if ( v19 == -1 )
      {
LABEL_21:
        v12 = -1073740024;
        goto LABEL_25;
      }
      if ( _bittest((const signed __int32 *)(a1 + 776), 0x11u)
        && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v11) )
      {
        v12 = -1073740024;
        goto LABEL_26;
      }
      v12 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v6, v8, v14, v11, a2);
      if ( (*v18 & 0x1FFF) != 0 )
      {
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v11, v20, v21);
        v14 = v6;
        LODWORD(v11) = v8;
        v6 = 0LL;
      }
      else
      {
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v20, v21);
        v6 = 0LL;
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v8);
      }
      if ( v12 < 0 )
        goto LABEL_26;
      v10 = v24;
    }
    v12 = 0;
LABEL_25:
    v6 = 0LL;
LABEL_26:
    if ( v14 )
LABEL_27:
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v11, v15, v16);
    if ( v6 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v15, v16);
  }
  return (unsigned int)v12;
}
