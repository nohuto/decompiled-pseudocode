/*
 * XREFs of Feature_Servicing_Mm_StoreCompaction__private_IsEnabledNoReportingNoInline @ 0x140600A0C
 * Callers:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1405FEE24 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 * Callees:
 *     Feature_Servicing_Mm_StoreCompaction__private_IsEnabledFallback @ 0x1406009F0 (Feature_Servicing_Mm_StoreCompaction__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_StoreCompaction__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Mm_StoreCompaction__private_featureState & 2) != 0 )
    return Feature_Servicing_Mm_StoreCompaction__private_featureState & 1;
  else
    return Feature_Servicing_Mm_StoreCompaction__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_StoreCompaction__private_featureState,
             0);
}
