/*
 * XREFs of ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140377BF0 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14060A93C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1402F7328 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140380DD0 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned int *v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int16 v9; // dx
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // edx

  v3 = a3;
  v5 = (unsigned int *)(a1 + 16 * (a2 + 102LL));
  v6 = *v5;
  if ( a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
LABEL_3:
    *v5 = -1;
    if ( (_DWORD)v6 != -1 && (_DWORD)v3 != (_DWORD)v6 )
    {
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
      v9 = *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v6);
      if ( (v9 & 0x1FFF) != 0 )
      {
        v13 = v9 & 0x1FFF;
        if ( v13 < (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1 && v13 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v6 >> 3)) &= ~(1 << (v6 & 7));
          ++*(_DWORD *)(a1 + 1472);
        }
      }
      else
      {
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v6);
      }
    }
    if ( (_DWORD)v3 != -1 )
    {
      if ( v8 && v8 < (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1 )
      {
        --*(_DWORD *)(a1 + 1472);
        *(_BYTE *)(*(_QWORD *)(a1 + 1464) + (v3 >> 3)) |= 1 << (v3 & 7);
      }
      if ( !*(_BYTE *)(a1 + 776) )
        ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 2296), 3LL, 5000LL, 4294967294LL);
    }
    *v5 = v3;
    result = 0LL;
    v5[1] = v8;
    *((_QWORD *)v5 + 1) = v7;
    return result;
  }
  v11 = *(_QWORD *)(a1 + 1416);
  v12 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, a3, a2, 0LL);
  v7 = v12;
  if ( !v12 )
    return 3221225514LL;
  if ( v12 == -1 )
    return 3221226029LL;
  v8 = *(_WORD *)(v11 + 2 * v3) & 0x1FFF;
  if ( (*(_WORD *)(v11 + 2 * v3) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v12, v3, v12, v3, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
