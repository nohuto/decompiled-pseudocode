/*
 * XREFs of LdrFindResourceDirectory_U @ 0x14076F3E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U((_DWORD)DllHandle, (_DWORD)ResourceInfo, Level, 2, (__int64)ResourceDirectory);
}
