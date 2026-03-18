/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140397EE4
 * Callers:
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1403979A4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140397A00 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B0744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1406002FC (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140208384 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14020A790 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14020A978 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140398600 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x14039E970 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rsi
  unsigned int *v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ebp
  __int16 v10; // dx
  __int64 result; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // edx

  v4 = a3;
  v6 = (unsigned int *)(a1 + 16 * (a2 + 102LL));
  v7 = *v6;
  if ( a3 == -1 )
  {
    v8 = 0LL;
    v9 = -1;
LABEL_3:
    *v6 = -1;
    if ( (_DWORD)v7 != -1 && (_DWORD)v4 != (_DWORD)v7 )
    {
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v7, a3, a4);
      v10 = *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v7);
      if ( (v10 & 0x1FFF) != 0 )
      {
        v14 = v10 & 0x1FFF;
        if ( v14 < (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1 && v14 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v7 >> 3)) &= ~(1 << (v7 & 7));
          ++*(_DWORD *)(a1 + 1472);
        }
      }
      else
      {
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v7);
      }
    }
    if ( (_DWORD)v4 != -1 )
    {
      if ( v9 && v9 < (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1 )
      {
        --*(_DWORD *)(a1 + 1472);
        *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v4 >> 3)) |= 1 << (v4 & 7);
      }
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2296), 3LL, 5000LL, 4294967294LL);
    }
    *v6 = v4;
    result = 0LL;
    v6[1] = v9;
    *((_QWORD *)v6 + 1) = v8;
    return result;
  }
  v12 = *(_QWORD *)(a1 + 1416);
  v13 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0);
  v8 = v13;
  if ( !v13 )
    return 3221225514LL;
  if ( v13 == -1 )
    return 3221226029LL;
  v9 = *(_WORD *)(v12 + 2 * v4) & 0x1FFF;
  if ( (*(_WORD *)(v12 + 2 * v4) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v13, v4, v13, v4, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
