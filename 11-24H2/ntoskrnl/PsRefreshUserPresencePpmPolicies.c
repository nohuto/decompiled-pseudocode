/*
 * XREFs of PsRefreshUserPresencePpmPolicies @ 0x1405E53C0
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 */

char __fastcall PsRefreshUserPresencePpmPolicies(char a1, char a2)
{
  char result; // al

  result = 0;
  if ( !PspDisableWindowInFocusUserIdleQos )
  {
    if ( a1 || a2 )
      result = 1;
    if ( PspDisableWindowInFocusUserIdleQosByPolicy != result )
    {
      PspDisableWindowInFocusUserIdleQosByPolicy = result;
      return PsEnumProcesses(PspRefreshProcessUserPresencePpmPolicyCallback, 0LL);
    }
  }
  return result;
}
