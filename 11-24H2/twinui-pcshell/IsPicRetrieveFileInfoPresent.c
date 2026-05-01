/*
 * XREFs of IsPicRetrieveFileInfoPresent @ 0x1802D8328
 * Callers:
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1805768E4 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802DA1C9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPicRetrieveFileInfoPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808C8838 == 1 )
    return 1;
  if ( dword_1808C8838 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808C8838 = 2 - (v1 != 0);
  return result;
}
