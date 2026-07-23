/*
 * XREFs of LdrFindResourceEx_U @ 0x14077E580
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((_DWORD)DllHandle, (_DWORD)ResourceInfo, Level, Flags, (__int64)ResourceDataEntry);
}
