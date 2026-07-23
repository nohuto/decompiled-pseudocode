/*
 * XREFs of VfPacketReleaseLock @ 0x140B9D510
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406A50E0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
