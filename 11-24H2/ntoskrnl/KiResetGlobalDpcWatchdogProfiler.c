/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1404F9918
 * Callers:
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KeRelaxTimingConstraints @ 0x1405B492C (KeRelaxTimingConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 36520);
  if ( v1 && *(_QWORD *)(a1 + 36528) != v1 )
  {
    result = *(unsigned int *)(a1 + 33716);
    if ( *(_DWORD *)(a1 + 33708) < (int)result )
      *(_QWORD *)(a1 + 36528) = v1;
  }
  return result;
}
