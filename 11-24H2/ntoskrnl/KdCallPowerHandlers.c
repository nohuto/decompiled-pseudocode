/*
 * XREFs of KdCallPowerHandlers @ 0x1405AF83C
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1403B6A20 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404B0014 (PpmEnterCoordinatedIdle.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D8D30 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  int v7; // esi

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v6 = (__int64 *)KdpPowerListHead;
  v7 = 0;
  while ( v6 != &KdpPowerListHead )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, v6[3], v4, v5);
    if ( v7 < 0 )
      break;
    v6 = (__int64 *)*v6;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  return (unsigned int)v7;
}
