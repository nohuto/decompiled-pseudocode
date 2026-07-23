/*
 * XREFs of PsGetSessionSchedulingGroup @ 0x1406F9978
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405E247C (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
