/*
 * XREFs of PsQuitNextSession @ 0x140A0A5D0
 * Callers:
 *     PspDetachSession @ 0x1403C252C (PspDetachSession.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E2344 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextSession(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x79517350u);
}
