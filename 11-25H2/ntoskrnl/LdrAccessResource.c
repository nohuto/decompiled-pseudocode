/*
 * XREFs of LdrAccessResource @ 0x14076F100
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C0942C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(DllHandle);
}
