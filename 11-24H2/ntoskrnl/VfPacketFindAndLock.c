/*
 * XREFs of VfPacketFindAndLock @ 0x140BA6750
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406A40E0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA7084 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
