/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006BDD0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 10, 0);
}
