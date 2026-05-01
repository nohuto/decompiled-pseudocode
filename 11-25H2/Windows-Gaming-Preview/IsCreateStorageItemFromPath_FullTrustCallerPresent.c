/*
 * XREFs of IsCreateStorageItemFromPath_FullTrustCallerPresent @ 0x180003148
 * Callers:
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013844 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180003410 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateStorageItemFromPath_FullTrustCallerPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180059BD0 == 1 )
    return 1;
  if ( dword_180059BD0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_180059BD0 = 2 - (v1 != 0);
  return result;
}
