/*
 * XREFs of LdrFindResource_U @ 0x14077E5C0
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C1C50C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((_DWORD)DllHandle, (_DWORD)ResourceInfo, Level, 0, (__int64)ResourceDataEntry);
}
