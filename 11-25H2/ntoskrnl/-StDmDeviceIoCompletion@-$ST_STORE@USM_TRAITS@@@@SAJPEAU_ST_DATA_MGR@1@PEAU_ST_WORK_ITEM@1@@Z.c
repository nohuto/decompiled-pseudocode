/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B0744
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020B100 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405FF3C4 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1406003FC (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14020A338 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     ?StStagingRegionCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@@Z @ 0x1403969AC (-StStagingRegionCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140397EE4 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwEnabled @ 0x14039E900 (SmEtwEnabled.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1404B0A18 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F31EC (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1404F3288 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x1404F8C7C (-StDeviceIoIsFailed@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405FF240 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     StEtaIoComplete @ 0x140600EA4 (StEtaIoComplete.c)
 *     SmEtwLogRegionOp @ 0x140601350 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 j; // r14
  int v8; // ebp
  _DWORD *v9; // rax
  __int64 v10; // r8
  int v11; // r12d
  ULONGLONG *v12; // rax
  __int64 v13; // rcx
  char v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  unsigned int IsCurrentRegion; // eax
  int v18; // r9d
  unsigned int v19; // r10d
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbp
  _DWORD *v24; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v26; // r8
  __int64 i; // rcx
  unsigned __int64 v28; // rax
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+10h]

  v3 = (__int64 *)(a2 + 8);
  v5 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812));
  v6 = *(_QWORD *)(a1 + 1416);
  v31 = v6;
  LODWORD(v30) = 0;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v20 = *(_DWORD *)(a2 + 28);
    if ( (v20 & 8) != 0 )
      StEtaIoComplete(*(_QWORD *)(a1 + 1384), v20 >> 5, 0LL, v3);
    v21 = *((_DWORD *)v3 + 5);
    LODWORD(v22) = 0;
    if ( (v21 & 4) == 0 )
      v22 = *v3;
    if ( (v21 & 1) != 0 )
    {
      v23 = v3[1];
      if ( v23 )
        v8 = *(_DWORD *)(v23 + 4);
      else
        v8 = *(_DWORD *)v3;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1LL, (unsigned int)v8);
    }
    else
    {
      v8 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v22);
      v24 = *(_DWORD **)(a1 + 2200);
      if ( v24 )
      {
        if ( v8 >= 0 )
          ++*v24;
        if ( (*((_DWORD *)v3 + 5) & 4) == 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v26 = *(_QWORD *)(a1 + 2200);
          v30 = *(_QWORD *)(v3[1] + 4);
          i = *(_QWORD *)(v26 + 1328);
          v28 = PerformanceCounter.QuadPart - v30;
          if ( *(_QWORD *)i < v28 || i != *(_QWORD *)(v26 + 1344) && *(_QWORD *)(i - 16) >= v28 )
          {
            for ( i = *(_QWORD *)(v26 + 1344); *(_QWORD *)i < v28; i += 16LL )
              ;
            *(_QWORD *)(v26 + 1328) = i;
          }
          ++*(_DWORD *)(i + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(a1, a2);
  }
  else
  {
    for ( j = a1 + 1488; *(_DWORD *)j != (_DWORD)v5; j += 24LL )
      ;
    StEtaIoComplete(*(_QWORD *)(a1 + 1384), *(unsigned int *)(a1 + 784), 1LL, v3);
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v3, &v30) )
    {
      v8 = v30;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1LL, (unsigned int)v30);
    }
    else
    {
      v9 = *(_DWORD **)(a1 + 2200);
      v8 = 0;
      if ( v9 )
        ++*v9;
    }
    v10 = *(unsigned __int16 *)(v6 + 2 * v5);
    if ( (v10 & 0x8000u) == 0LL )
    {
      if ( (*((_DWORD *)v3 + 5) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 2276);
        v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)v5, v10, 0LL);
    }
    else
    {
      *(_WORD *)(v6 + 2 * v5) = v10 & 0x7FFF;
      v11 = 1;
      v12 = SmEtwEnabled(0);
      if ( v12 )
      {
        SmEtwLogRegionOp((_DWORD)v12, 4, a1, v5, v8, v14, *(_BYTE *)(*(_QWORD *)(a1 + 1432) + v5));
        v15 = 0;
      }
      if ( (*((_DWORD *)v3 + 5) & 1) != 0 )
      {
        v16 = v31;
        ++*(_DWORD *)(a1 + 2272);
        if ( (*(_WORD *)(v16 + 2 * v5) & 0x1FFF) != 0 )
          v11 = v15;
      }
    }
    *(_OWORD *)v3 = 0LL;
    v3[2] = 0LL;
    if ( v11 )
    {
      ST_STORE<SM_TRAITS>::StStagingRegionCleanup(v13, j);
      *(_OWORD *)j = 0LL;
      *(_QWORD *)(j + 16) = 0LL;
      *(_DWORD *)j = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v5);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, v19, v18);
    }
  }
  return (unsigned int)v8;
}
