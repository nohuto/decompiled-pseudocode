/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x140496320
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140358878 (PopFxDeliverDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx

  v2 = (KSPIN_LOCK *)(a2 + 400);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 400));
  _m_prefetchw((const void *)(a2 + 32));
  v6 = *(_DWORD *)(a2 + 32);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0, 0);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 192), v8);
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      PopFxAddLogEntry(*(_QWORD *)(a2 + 48), 0, 17, 0LL);
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2, 0LL, v5);
  }
  KeReleaseSpinLock(v2, v4);
}
