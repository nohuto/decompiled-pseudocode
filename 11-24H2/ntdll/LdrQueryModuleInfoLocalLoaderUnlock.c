/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x1800B2410
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800AFEE0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800B0720 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 0xAu, 0);
}
