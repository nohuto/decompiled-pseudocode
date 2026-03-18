/*
 * XREFs of PsQuitNextSession @ 0x140A0B390
 * Callers:
 *     PspDetachSession @ 0x140348AEC (PspDetachSession.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E4E1C (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextSession(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x79517350u);
}
