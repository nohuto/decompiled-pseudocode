/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x1801CB33C
 * Callers:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1800A3298 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801CE030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18098CD24 == 1 )
    return 1;
  if ( dword_18098CD24 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18098CD24 = 2 - (v1 != 0);
  return result;
}
