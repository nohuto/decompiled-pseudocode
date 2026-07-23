/*
 * XREFs of KdCallPowerHandlers @ 0x1405AC7AC
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AA8A4 (PpmEnterCoordinatedIdle.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D61D0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
    v5 = guard_dispatch_icall_no_overrides(a1, v4[3]);
    if ( v5 < 0 )
      break;
    v4 = (__int64 *)*v4;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  return (unsigned int)v5;
}
