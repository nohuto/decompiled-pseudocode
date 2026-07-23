/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x140374A2C
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1402B3644 (KiConnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402B4D5C (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402B5288 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140374188 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
