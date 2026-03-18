/*
 * XREFs of PnpUnmapActivatingDeviceNodeToThreadV2 @ 0x1405A9454
 * Callers:
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 */

void __fastcall PnpUnmapActivatingDeviceNodeToThreadV2(__int64 a1)
{
  KIRQL v1; // bl
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceActivationTable, Buffer);
  KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v1);
}
