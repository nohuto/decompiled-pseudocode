/*
 * XREFs of SmWaitForSyncIo @ 0x14060F468
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14060B4BC (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060C47C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall SmWaitForSyncIo(__int64 a1)
{
  return KeWaitForSingleObject((PVOID)(a1 + 6984), WrExecutive, 0, 0, 0LL);
}
