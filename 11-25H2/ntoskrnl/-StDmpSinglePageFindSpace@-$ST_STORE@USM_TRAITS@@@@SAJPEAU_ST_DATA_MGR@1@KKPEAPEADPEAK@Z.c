/*
 * XREFs of ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140397A00
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14034B5FC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140397B10 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140397E44 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140397EE4 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14039E628 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        int *a5)
{
  int *v8; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 result; // rax
  int v12; // eax
  __int64 Compact; // rax
  __int64 v14; // rax

  v8 = (int *)(a1 + 16 * (a2 + 102LL));
  if ( *v8 != -1 && (unsigned int)(a3 + v8[1]) <= *(_DWORD *)(a1 + 816) )
    goto LABEL_3;
  v12 = *(_DWORD *)(a1 + 776);
  if ( (_BYTE)v12 )
    goto LABEL_11;
  if ( (v12 & 0x100000) == 0
    || *v8 == -1
    || (int)ST_STORE<SM_TRAITS>::StDmCombineRegion(a1) < 0
    || (int)ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, v8) < 0 )
  {
    if ( (int)ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, 0xFFFFFFFFLL) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
LABEL_11:
    while ( 1 )
    {
      Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, a2);
      if ( !Compact )
        return 3221225599LL;
      v14 = (Compact - *(_QWORD *)(a1 + 1416)) >> 1;
      if ( (_DWORD)v14 == -1 )
        return 3221225599LL;
      result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, (unsigned int)v14);
      if ( (int)result >= 0 )
        goto LABEL_3;
      if ( (_DWORD)result != -1073741267 )
        return result;
    }
  }
  else
  {
LABEL_3:
    v9 = v8[1];
    v10 = *v8;
    *a4 = *((_QWORD *)v8 + 1) + (unsigned int)(16 * v9);
    *a5 = v9 | (v10 << *(_DWORD *)(a1 + 812));
    return 0LL;
  }
}
