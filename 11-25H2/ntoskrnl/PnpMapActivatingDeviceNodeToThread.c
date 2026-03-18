/*
 * XREFs of PnpMapActivatingDeviceNodeToThread @ 0x140A93FB0
 * Callers:
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PnpMapActivatingDeviceNodeToThread(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&PnpDeviceActivationTableLock);
  v2 = RtlInsertElementGenericTableAvl(&PnpDeviceActivationTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseGuardedMutex(&PnpDeviceActivationTableLock);
  return v2;
}
