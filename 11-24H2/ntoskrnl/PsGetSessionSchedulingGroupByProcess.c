/*
 * XREFs of PsGetSessionSchedulingGroupByProcess @ 0x140A4F1F0
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x1405E2344 (PsQueryCpuQuotaInformation.c)
 *     PspEstablishDfssHierarchy @ 0x140777990 (PspEstablishDfssHierarchy.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroupByProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 32) + 32LL);
}
