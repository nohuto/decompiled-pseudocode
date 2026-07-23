/*
 * XREFs of ZwDuplicateObject @ 0x1406A7B30
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14048B420 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x14063D950 (DifZwDuplicateObjectWrapper.c)
 *     _SysCtxOpenMachine @ 0x140820B44 (_SysCtxOpenMachine.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140862770 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC78C (SmKmFileInfoDuplicate.c)
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
  return KiServiceInternal(SourceProcessHandle);
}
