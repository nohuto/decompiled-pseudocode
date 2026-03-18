/*
 * XREFs of RtlComputeCrc32 @ 0x14048AC80
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8A560 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32 @ 0x1404F120C (crc32.c)
 */

__int64 __fastcall RtlComputeCrc32(__int64 a1, __int64 a2, __int64 a3)
{
  return crc32(a1, a2, a3);
}
