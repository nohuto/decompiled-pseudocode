/*
 * XREFs of VfPacketFindAndLock @ 0x140BA8750
 * Callers:
 *     ViSetIoBuildRequestFlag @ 0x1406A50E0 (ViSetIoBuildRequestFlag.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPacketFindAndLock(__int64 a1)
{
  return VfIrpDatabaseEntryFindAndLock(a1);
}
