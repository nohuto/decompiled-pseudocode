/*
 * XREFs of PnpUnmapActivatingDeviceNodeToThread @ 0x1403E4004
 * Callers:
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 */

void __fastcall PnpUnmapActivatingDeviceNodeToThread(__int64 a1)
{
  KIRQL v1; // bl
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
  KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v1);
}
