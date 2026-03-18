/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x14046E6B8
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1403B7390 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1403B9038 (KiDisconnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14046E528 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x14046E5F4 (KiMaskSecondaryInterruptInternal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  KSPIN_LOCK *v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SpinLock) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SpinLock, 12LL);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock(v3);
}
