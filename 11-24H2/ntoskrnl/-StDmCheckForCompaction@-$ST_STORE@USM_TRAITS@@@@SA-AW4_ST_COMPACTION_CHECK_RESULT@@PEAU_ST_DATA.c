/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140477C70 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x140406250 (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // ebp
  unsigned int v5; // ebx
  int v6; // edx
  unsigned int v7; // edi
  _BYTE *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r12d
  int v13; // ebp
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  int v16; // ebp
  __int64 v17; // rax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+34h] [rbp-54h]
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h]
  _DWORD *v26; // [rsp+A0h] [rbp+18h]
  int v27; // [rsp+A8h] [rbp+20h] BYREF

  v26 = a3;
  v25 = a2;
  v4 = *(_BYTE *)(a1 + 2288) & 3;
  v23 = v4;
  v5 = 2;
  if ( (a2 & 3) == 0 && v4 == 2 )
    return 0LL;
  v6 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    v9 = *(_DWORD *)(a1 + 856);
    if ( v4 == 3 )
    {
      v10 = v9 - 256;
      v7 = v9 >> 2;
      if ( v7 >= v10 )
        v7 = v10;
    }
    else
    {
      v11 = 3 * (v9 >> 2);
      v7 = v9 - 128;
      if ( v11 < v7 )
        v7 = v11;
    }
    v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
    if ( v7 < 2 )
      v7 = 2;
  }
  else
  {
    v7 = 3;
    v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
  }
  v22 = 0;
  v12 = 0;
  v24 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 8;
  if ( v6 )
    v15 = 1;
  do
  {
    v27 = 0;
    ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(a1, v14, &v24, &v22, &v27);
    if ( v27 )
    {
      v12 += v27;
      v13 |= 1 << v14;
    }
    ++v14;
  }
  while ( v14 < v15 );
  v27 = v13;
  v16 = v23;
  if ( v26 )
    *v26 = v27;
  v17 = *(_QWORD *)(a1 + 800);
  if ( (v25 & 2) == 0 )
  {
    if ( *(_QWORD *)(v17 + 7416) || v24 < v7 )
      return 0LL;
    if ( (v25 & 1) != 0 )
    {
      v19 = 0;
    }
    else if ( v16 == 1
           || (v19 = 0,
               (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6924LL) >> 8)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 7440LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6920LL)) )
    {
      v19 = 1;
    }
    v20 = v22 >> v8[2 * v19];
    if ( v16 == 3 )
      v20 -= v22 >> v8[2 * v19 + 1];
    if ( v12 <= v20 )
    {
      if ( v16 != 1 && v19 )
        return v12 > v22 >> *v8;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 776) )
        return v5;
      v21 = *(_QWORD *)(a1 + 800);
      if ( *(_BYTE *)(v21 + 6838) || !(*(_DWORD *)(v21 + 6924) + *(_DWORD *)(v21 + 7440) + *(_DWORD *)(v21 + 6920)) )
        return v5;
      if ( !v16 || v16 == 3 )
        return 1;
    }
    return 0;
  }
  if ( !*(_BYTE *)(v17 + 6838) && v24 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
    return v5;
  return 0LL;
}
