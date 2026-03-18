/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1405FEE24
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140398600 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14039D230 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14047BBA8 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404959DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x1404069A0 (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 *     Feature_Servicing_Mm_StoreCompaction__private_IsEnabledNoReportingNoInline @ 0x140600A0C (Feature_Servicing_Mm_StoreCompaction__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, int a2, int *a3)
{
  char v3; // r15
  __int64 v5; // rcx
  int v6; // r15d
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // edi
  _BYTE *v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  int v16; // eax
  unsigned int v17; // r15d
  int v18; // ebx
  __int64 v19; // rax
  BOOL v21; // eax
  _BOOL8 v22; // r9
  _BYTE *v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  int v27; // [rsp+34h] [rbp-1Ch] BYREF
  int v28; // [rsp+38h] [rbp-18h]
  _BYTE *v29; // [rsp+40h] [rbp-10h]
  unsigned int v30; // [rsp+90h] [rbp+40h] BYREF
  int v31; // [rsp+98h] [rbp+48h]
  int *v32; // [rsp+A0h] [rbp+50h]
  unsigned int v33; // [rsp+A8h] [rbp+58h] BYREF

  v32 = a3;
  v31 = a2;
  v3 = *(_BYTE *)(a1 + 2288);
  v5 = 3LL;
  v6 = v3 & 3;
  v28 = v6;
  v7 = 2;
  if ( (a2 & 3) == 0 && v6 == 2 )
    return 0LL;
  v8 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    v11 = *(_DWORD *)(a1 + 856);
    if ( v6 == 3 )
    {
      v12 = v11 - 256;
      v9 = v11 >> 2;
      if ( v9 >= v12 )
        v9 = v12;
    }
    else
    {
      v5 = 3 * (v11 >> 2);
      v9 = v11 - 128;
      if ( (unsigned int)v5 < v9 )
        v9 = v5;
    }
    v10 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
    if ( v9 < 2 )
      v9 = 2;
  }
  else
  {
    v9 = 3;
    v10 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
  }
  v29 = v10;
  v13 = (unsigned int)-v8;
  v26 = 0;
  v30 = 0;
  v33 = 0;
  v14 = (_DWORD)v13 != 0 ? 1 : 8;
  v15 = 0;
  if ( (unsigned int)Feature_Servicing_Mm_StoreCompaction__private_IsEnabledNoReportingNoInline(v5, v13) )
  {
    v17 = v30;
    v18 = 0;
    do
    {
      v27 = 0;
      ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(a1, v15, &v33, &v26, &v27);
      if ( v27 )
      {
        v17 += v27;
        v30 = v17;
        v18 |= 1 << v15;
      }
      ++v15;
      v16 = v18;
    }
    while ( v15 < v14 );
    v6 = v28;
    v7 = 2;
  }
  else
  {
    do
      ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(a1, v15++, &v33, &v26, &v30);
    while ( v15 < v14 );
    v16 = 255;
  }
  if ( v32 )
    *v32 = v16;
  v19 = *(_QWORD *)(a1 + 800);
  if ( (v31 & 2) == 0 )
  {
    if ( *(_QWORD *)(v19 + 7416) || v33 < v9 )
      return 0LL;
    v21 = (v31 & 1) == 0
       && (v6 == 1
        || (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6924LL) >> 8)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 7440LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6920LL));
    v22 = v21;
    v23 = v29;
    v24 = v26 >> v29[2 * v22];
    if ( v6 == 3 )
    {
      v24 -= v26 >> v29[2 * v22 + 1];
      v23 = v29;
    }
    if ( v30 <= v24 )
    {
      if ( v6 != 1 && v22 )
        return v30 > v26 >> *v23;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 776) )
        return v7;
      v25 = *(_QWORD *)(a1 + 800);
      if ( *(_BYTE *)(v25 + 6838) || !(*(_DWORD *)(v25 + 6924) + *(_DWORD *)(v25 + 7440) + *(_DWORD *)(v25 + 6920)) )
        return v7;
      if ( !v6 || v6 == 3 )
        return 1;
    }
    return 0;
  }
  if ( !*(_BYTE *)(v19 + 6838) && v33 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
    return v7;
  return 0LL;
}
