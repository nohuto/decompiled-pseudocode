/*
 * XREFs of PnpMapActivatingDeviceNodeToThread @ 0x1403E3DB4
 * Callers:
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PnpMapActivatingDeviceNodeToThread(__int64 a1, __int64 a2)
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
