/*
 * XREFs of MiLegacyImageArchitecture @ 0x140488598
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x1409449F8 (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
