/*
 * XREFs of MmEnumerateSystemImagesShared @ 0x1402C8988
 * Callers:
 *     ExpQueryModuleInformationEx @ 0x1407B50AC (ExpQueryModuleInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140A84B58 (ExpQueryModuleInformation.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImagesShared(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 2LL);
}
