/*
 * XREFs of LdrpProtectedCopyMemory @ 0x18006AC40
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryNextListEntry @ 0x18006A4C0 (LdrQueryNextListEntry.c)
 *     LdrpReadMemory @ 0x18006A550 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006A600 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0 (LdrQueryInLoadOrderModuleList32.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
