/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x1800B25B0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800AFEE0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800B0720 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrQueryModuleInfoLocalLoaderLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpAcquireLoaderLock(a1, a2, a3, a4);
}
