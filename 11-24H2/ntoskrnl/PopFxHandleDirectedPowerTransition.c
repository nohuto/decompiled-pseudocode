/*
 * XREFs of PopFxHandleDirectedPowerTransition @ 0x1404515CC
 * Callers:
 *     PopFxDirectedPowerTransitionWorker @ 0x140451590 (PopFxDirectedPowerTransitionWorker.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1404516A0 (PopFxEnableWorkOrderWatchdog.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404517B0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F9C8C (PopFxCompleteDirectedPowerTransition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall PopFxHandleDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

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
  v6 = (unsigned int)PopFxDirectedPowerDownTimeoutMs;
  if ( !v5 )
    v6 = (unsigned int)PopFxDirectedPowerUpTimeoutMs;
  PopFxEnableWorkOrderWatchdog(BugCheckParameter3 + 960, v6);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 192), 0LL, v7, v8);
  v9 = *(_QWORD *)(BugCheckParameter3 + 1008);
  if ( v9 )
    *(_QWORD *)(v9 + 168) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 1200), 0xFFFFFFFF) == 1 )
    return (struct _KTHREAD *)PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  else
    return PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
