/*
 * XREFs of PsGetSessionSchedulingGroupByProcess @ 0x140A57A48
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x1405E4E1C (PsQueryCpuQuotaInformation.c)
 *     PspEstablishDfssHierarchy @ 0x1407777D0 (PspEstablishDfssHierarchy.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
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
