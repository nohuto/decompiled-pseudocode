/*
 * XREFs of RtlComputeCrc32 @ 0x140460AE0
 * Callers:
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8F530 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32 @ 0x140460AF8 (crc32.c)
 */

__int64 __fastcall RtlComputeCrc32(__int64 a1, __int64 a2, __int64 a3)
{
  return crc32(a1, a2, a3);
}
