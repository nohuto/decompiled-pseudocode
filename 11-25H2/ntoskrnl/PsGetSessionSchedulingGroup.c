/*
 * XREFs of PsGetSessionSchedulingGroup @ 0x1406EFF50
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405D8FB8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
