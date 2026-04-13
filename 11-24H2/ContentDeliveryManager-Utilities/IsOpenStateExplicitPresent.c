/*
 * XREFs of IsOpenStateExplicitPresent @ 0x180023C78
 * Callers:
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800B2950 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180023E9A (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenStateExplicitPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18017AD4C == 1 )
    return 1;
  if ( dword_18017AD4C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_18017AD4C = 2 - (v1 != 0);
  return result;
}
