/*
 * XREFs of LdrAccessResource @ 0x14077E280
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C1C50C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1409BA4DC (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(DllHandle);
}
