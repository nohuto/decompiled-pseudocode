/*
 * XREFs of MiLegacyImageArchitecture @ 0x140488E10
 * Callers:
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x1409406F4 (MiVerifyImageHeader.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
