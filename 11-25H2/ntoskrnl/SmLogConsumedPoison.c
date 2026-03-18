/*
 * XREFs of SmLogConsumedPoison @ 0x1404BC5DC
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1405FFD50 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     MmStoreLogConsumedPoison @ 0x1404BC600 (MmStoreLogConsumedPoison.c)
 */

__int64 __fastcall SmLogConsumedPoison(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a3 )
    _InterlockedIncrement(&dword_140E285C0);
  return MmStoreLogConsumedPoison();
}
