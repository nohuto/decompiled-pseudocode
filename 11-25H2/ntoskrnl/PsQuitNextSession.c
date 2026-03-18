/*
 * XREFs of PsQuitNextSession @ 0x140A070D0
 * Callers:
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     PsQueryCpuQuotaInformation @ 0x1405D8E80 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextSession(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x79517350u);
}
