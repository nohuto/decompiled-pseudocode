/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x18006BF70
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
