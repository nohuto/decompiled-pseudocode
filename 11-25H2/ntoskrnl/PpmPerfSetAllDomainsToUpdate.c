/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14048810C
 * Callers:
 *     PpmCheckStart @ 0x140203674 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x140743AA4 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
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
