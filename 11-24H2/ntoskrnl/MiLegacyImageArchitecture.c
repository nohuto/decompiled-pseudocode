/*
 * XREFs of MiLegacyImageArchitecture @ 0x1404836E8
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x14098E868 (MiVerifyImageHeader.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
