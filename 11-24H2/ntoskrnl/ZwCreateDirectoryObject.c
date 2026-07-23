/*
 * XREFs of ZwCreateDirectoryObject @ 0x1406A8930
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x14063BA00 (DifZwCreateDirectoryObjectWrapper.c)
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x14082B8D0 (ObpGetSilosRootDirectory.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     ExInitializeNls @ 0x140ABC9FC (ExInitializeNls.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C378D0 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
