/*
 * XREFs of MmEnumerateSystemImagesShared @ 0x1404B09EC
 * Callers:
 *     ExpQueryModuleInformationEx @ 0x1407B54FC (ExpQueryModuleInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140A7F698 (ExpQueryModuleInformation.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImagesShared(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 2u);
}
