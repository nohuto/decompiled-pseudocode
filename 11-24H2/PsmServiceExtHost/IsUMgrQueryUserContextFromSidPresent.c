/*
 * XREFs of IsUMgrQueryUserContextFromSidPresent @ 0x180072908
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025DD0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180073026 (ApiSetQueryApiSetPresence_0.c)
 */

char IsUMgrQueryUserContextFromSidPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E9080 == 1 )
    return 1;
  if ( dword_1800E9080 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E9080 = 2 - (v1 != 0);
  return result;
}
