/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x140444734
 * Callers:
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402004E8 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x14020074C (KiMaskSecondaryInterruptInternal.c)
 *     KiConnectSecondaryInterrupt @ 0x140202BFC (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140444EC8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(SpinLock);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock(v3);
}
