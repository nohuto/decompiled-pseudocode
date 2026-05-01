/*
 * XREFs of IsPicRetrieveFileInfoPresent @ 0x1801CC480
 * Callers:
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180627C28 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801CE030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPicRetrieveFileInfoPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18098CDF4 == 1 )
    return 1;
  if ( dword_18098CDF4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_18098CDF4 = 2 - (v1 != 0);
  return result;
}
