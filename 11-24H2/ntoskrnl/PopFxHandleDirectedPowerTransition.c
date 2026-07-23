/*
 * XREFs of PopFxHandleDirectedPowerTransition @ 0x1404B3CDC
 * Callers:
 *     PopFxDirectedPowerTransitionWorker @ 0x1404B3CA0 (PopFxDirectedPowerTransitionWorker.c)
 * Callees:
 *     PopFxEnableWorkOrderWatchdog @ 0x1402BCE1C (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404B3DB0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall PopFxHandleDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v4 != v2 );
  v5 = v2 & 0x1000;
  LOBYTE(v3) = v5 != 0;
  PopDiagTraceFxDeviceDirectedTransition(*(_QWORD *)(BugCheckParameter3 + 48), v3);
  v6 = PopFxDirectedPowerDownTimeoutMs;
  if ( !v5 )
    v6 = PopFxDirectedPowerUpTimeoutMs;
  PopFxEnableWorkOrderWatchdog(BugCheckParameter3 + 960, v6);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 192), 0LL);
  v7 = *(_QWORD *)(BugCheckParameter3 + 1008);
  if ( v7 )
    *(_QWORD *)(v7 + 168) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 1200), 0xFFFFFFFF) == 1 )
    return (struct _KTHREAD *)PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  else
    return PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
