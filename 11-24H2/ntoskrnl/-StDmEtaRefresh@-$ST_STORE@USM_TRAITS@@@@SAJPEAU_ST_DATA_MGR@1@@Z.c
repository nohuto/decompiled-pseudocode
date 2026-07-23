/*
 * XREFs of ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404C66EC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140609A7C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x14060A560 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 *     StEtaCheckForRefresh @ 0x14060B400 (StEtaCheckForRefresh.c)
 *     StEtaStartRefresh @ 0x14060B670 (StEtaStartRefresh.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaRefresh(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // esi
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r14d
  unsigned int i; // edi
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v1 = 0xFFFF;
  v11 = 0;
  v13 = 0;
  if ( *(_DWORD *)(a1 + 784) <= 0xFFFFu )
    v1 = *(_DWORD *)(a1 + 784);
  v3 = 0;
LABEL_4:
  if ( v3 < 0xA && (v4 = *(_QWORD *)(a1 + 1384), (unsigned int)StEtaCheckForRefresh(v4, &v13, &v12, &v11)) )
  {
    v5 = v11;
    if ( v12 )
      v5 = v12 + ((v11 - v12) >> 1);
    v6 = v1;
    if ( v5 < v1 )
      v6 = v5;
    if ( (unsigned int)StEtaStartRefresh(v4, v13, v6) )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x20 )
        {
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1384) + 48LL), 0xFFFFFFFE);
          ++v3;
          goto LABEL_4;
        }
        v8 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1);
        if ( v8 == -1 )
          break;
        v9 = ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v8, v6);
        if ( v9 < 0 )
          goto LABEL_18;
      }
      v9 = -1073741448;
LABEL_18:
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1384) + 48LL), 0xFFFFFFFE);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v9;
}
