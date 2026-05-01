/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x1802D71F8
 * Callers:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E9174 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1802DA1C9 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1808C8764 == 1 )
    return 1;
  if ( dword_1808C8764 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1808C8764 = 2 - (v1 != 0);
  return result;
}
