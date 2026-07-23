/*
 * XREFs of LdrpProtectedCopyMemory @ 0x18007DB20
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryNextListEntry @ 0x18007D3A0 (LdrQueryNextListEntry.c)
 *     LdrpReadMemory @ 0x18007D430 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18007D4E0 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18007DCB0 (LdrQueryInLoadOrderModuleList32.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
