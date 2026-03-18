/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x140375CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140376700 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = (KSPIN_LOCK *)(a2 + 400);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 400));
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0LL, 0LL);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 192), v7, v8, v9);
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      PopFxAddLogEntry(*(_QWORD *)(a2 + 48), 0LL, 17LL);
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2);
  }
  KeReleaseSpinLock(v2, v4);
}
