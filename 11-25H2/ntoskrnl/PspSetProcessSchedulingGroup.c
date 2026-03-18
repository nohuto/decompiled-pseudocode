/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x1408D8E2C
 * Callers:
 *     PspSetCpuRateControlJobPostCallback @ 0x1408D7D40 (PspSetCpuRateControlJobPostCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D8B68 (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1403A9B08 (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 500) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 500) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
