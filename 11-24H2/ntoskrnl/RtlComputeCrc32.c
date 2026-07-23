/*
 * XREFs of RtlComputeCrc32 @ 0x140455F70
 * Callers:
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8BBC8 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32 @ 0x140455F88 (crc32.c)
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  return crc32(PartialCrc, Buffer, Length);
}
