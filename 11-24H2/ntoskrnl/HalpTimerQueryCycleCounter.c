/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x14053B600
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x1405471A0 (HalpFindTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = *(_QWORD *)(result + 192);
    InternalData = HalpTimerGetInternalData(result);
    return guard_dispatch_icall_no_overrides(InternalData, v4, v5, v6);
  }
  return result;
}
