/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140477C70
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140477D30 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404F53C8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  char v2; // al
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = *(_BYTE *)(a1 + 2288);
  if ( (v2 & 4) != 0 )
  {
    v6 = 255;
    *(_BYTE *)(a1 + 2288) = v2 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 2288) = v2 & 0xFC;
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, &v6);
    if ( v3 != 2 )
    {
LABEL_6:
      v4 = 0;
      goto LABEL_7;
    }
  }
  *(_BYTE *)(a1 + 2288) |= 3u;
  while ( 1 )
  {
    v4 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1LL, v6);
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, &v6);
    if ( v4 < 0 )
      break;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  if ( v3 == 2 )
    v3 = 1;
LABEL_7:
  *(_BYTE *)(a1 + 2288) &= 0xFCu;
  if ( v3 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v3);
  return (unsigned int)v4;
}
