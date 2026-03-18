/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x140358878
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140496320 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x1405CC860 (PopFxDeviceWork.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    LOBYTE(a3) = 1;
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, a3);
    if ( *(_QWORD *)(BugCheckParameter2 + 136) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 192), v4);
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2);
}
