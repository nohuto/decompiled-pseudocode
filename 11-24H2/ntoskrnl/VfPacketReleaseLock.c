/*
 * XREFs of VfPacketReleaseLock @ 0x140B9B510
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406A40E0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfPacketReleaseLock(__int64 a1)
{
  return VfIrpDatabaseEntryReleaseLock(a1);
}
