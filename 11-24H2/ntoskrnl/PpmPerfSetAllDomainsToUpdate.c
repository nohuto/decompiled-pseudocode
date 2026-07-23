/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14044C454
 * Callers:
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x14074DEA4 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 1213) = 1;
  return result;
}
