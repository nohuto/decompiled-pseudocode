/*
 * XREFs of KdCallPowerHandlers @ 0x1405ABEAC
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14026A9B8 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AF304 (PpmEnterCoordinatedIdle.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D42E0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v4; // rbx
  int v5; // esi

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v4 = (__int64 *)KdpPowerListHead;
  v5 = 0;
  while ( v4 != &KdpPowerListHead )
  {
    v5 = guard_dispatch_icall_no_overrides(a1);
    if ( v5 < 0 )
      break;
    v4 = (__int64 *)*v4;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  return (unsigned int)v5;
}
