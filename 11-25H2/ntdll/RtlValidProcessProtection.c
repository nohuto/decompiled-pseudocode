/*
 * XREFs of RtlValidProcessProtection @ 0x180139700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level > 0x51u )
  {
    if ( ProcessProtection.Level == 82
      || ProcessProtection.Level == 97
      || ProcessProtection.Level == 98
      || ProcessProtection.Level == 114 )
    {
      return 1;
    }
    return ProcessProtection.Level == 129;
  }
  else
  {
    if ( ProcessProtection.Level == 81
      || !ProcessProtection.Level
      || ProcessProtection.Level == 8
      || ProcessProtection.Level == 18
      || ProcessProtection.Level == 33
      || ProcessProtection.Level == 49 )
    {
      return 1;
    }
    return ProcessProtection.Level == 65;
  }
}
