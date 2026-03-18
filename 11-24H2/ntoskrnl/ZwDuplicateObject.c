/*
 * XREFs of ZwDuplicateObject @ 0x1406A6B90
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140490DE0 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x14063F390 (DifZwDuplicateObjectWrapper.c)
 *     _SysCtxOpenMachine @ 0x140820404 (_SysCtxOpenMachine.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1408F0F70 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x140AB181C (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle, SourceHandle);
}
