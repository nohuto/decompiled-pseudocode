/*
 * XREFs of RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A2A448
 * Callers:
 *     PspProcessDynamicEHContinuationTargets @ 0x140765328 (PspProcessDynamicEHContinuationTargets.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140778318 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A2A35C (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicEHContinuationTargetsTreeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
