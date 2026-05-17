/*
 * XREFs of LdrpProtectedCopyMemory @ 0x1800B1280
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800AFEE0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryNextListEntry @ 0x1800B0B00 (LdrQueryNextListEntry.c)
 *     LdrpReadMemory @ 0x1800B0B90 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x1800B0C40 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x1800B0FD0 (LdrpGetModuleName.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x1800B1410 (LdrQueryInLoadOrderModuleList32.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
