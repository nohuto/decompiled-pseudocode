/*
 * XREFs of DisablePerformanceMonitoringCounters @ 0x14003B204
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x140046278 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

void __fastcall DisablePerformanceMonitoringCounters(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 368);
  if ( v1 )
  {
    if ( v1[1] )
    {
      ((void (*)(void))HalPrivateDispatchTable[74])();
      v1[1] = 0LL;
    }
    ExFreePoolWithTag(v1, (ULONG)1919119952);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
