/*
 * XREFs of MmEnumerateSystemImagesShared @ 0x14036D414
 * Callers:
 *     ExpQueryModuleInformationEx @ 0x1407A5CDC (ExpQueryModuleInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140A80410 (ExpQueryModuleInformation.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImagesShared(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 2LL);
}
