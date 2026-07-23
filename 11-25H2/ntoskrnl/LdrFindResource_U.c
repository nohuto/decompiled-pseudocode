/*
 * XREFs of LdrFindResource_U @ 0x14076F440
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C0942C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((_DWORD)DllHandle, (_DWORD)ResourceInfo, Level, 0, (__int64)ResourceDataEntry);
}
