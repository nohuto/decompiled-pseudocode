/*
 * XREFs of PnpMapActivatingDeviceNodeToThreadV2 @ 0x1405A93E8
 * Callers:
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PnpMapActivatingDeviceNodeToThreadV2(__int64 a1, __int64 a2)
{
  KIRQL v2; // di
  unsigned int v3; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  v2 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
  v3 = RtlInsertElementGenericTableAvl(&PnpDeviceActivationTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v2);
  return v3;
}
