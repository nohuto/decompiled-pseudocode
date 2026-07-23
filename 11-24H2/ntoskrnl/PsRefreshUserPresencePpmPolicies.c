/*
 * XREFs of PsRefreshUserPresencePpmPolicies @ 0x1405E28F8
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
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
