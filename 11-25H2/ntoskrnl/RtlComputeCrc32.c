/*
 * XREFs of RtlComputeCrc32 @ 0x14048AC80
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8A560 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32 @ 0x1404F120C (crc32.c)
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  return crc32(PartialCrc, Buffer, Length);
}
